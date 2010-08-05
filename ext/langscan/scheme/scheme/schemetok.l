/*
 * schemetok.l - a lex rule for Scheme.
 * 
 * Copyright (C) 2005 Kenichi Ishibashi <bashi at dream.ie.ariake-nct.ac.jp>
 *     All rights reserved.
 *     This is free software with ABSOLUTELY NO WARRANTY.
 * 
 * You can redistribute it and/or modify it under the terms of 
 * the GNU General Public License version 2.
 */

%option reentrant
%option prefix="langscan_scheme_lex_"
%option noyywrap
%option nodefault

space           [ \t]+
newline         \r\n|\r|\n
escseq          \\({newline}|.)
sp_initial      !|\$|%|&|\*|\/|:|\<|=|\>|\?|\^|_|~
initial         [0-9A-Za-z]|{sp_initial}
sp_subseq       \+|\-|\.|@
subseq          {initial}|[0-9]|{sp_subseq}
peculiar_id     \+|\-|\.\.\.
ident           {initial}{subseq}*|{peculiar_id}
boolean         #t|#f
radix           (#[bB]|#[oO]|#[dD])
exactness       (#i|#e)
suffix          ([eEsSfFdDlL][-+]?[0-9]+)
uinteger10      [0-9]+#*
uinteger16      [0-9a-fA-F]+#*
decimal         (\.?{uinteger10}|[0-9]+\.[0-9]*#*|[0-9]+#+\.#*){suffix}?
ureal10         {uinteger10}|{uinteger10}\/{uinteger10}|{decimal}
ureal16         {uinteger16}|{uinteger16}\/{uinteger16}
complex10       ([-+]?{ureal10}[-+]{ureal10}i|[-+]?{ureal10}[-+]i|[-+]?{ureal10}@{ureal10}|[-+]?{ureal10}i?)
complex16       ([-+]?{ureal16}[-+]{ureal16}i|[-+]?{ureal16}[-+]i|[-+]?{ureal16}@{ureal16}|[-+]?{ureal16}i?)
prefix          {radix}{exactness}|{exactness}{radix}
character       #\\.|#\\newline|#\\space
str_elem        [^\"]|\\\"|\\\\
reg_elem        [^/]|\\\/

%{

#include "scheme.h"

#define YY_EXTRA_TYPE langscan_scheme_lex_extra_t *

#if YY_NULL != 0
#error "YY_NULL is not 0."
#endif

#define YY_DECL langscan_scheme_token_t langscan_scheme_lex_lex(yyscan_t yyscanner)

#define YY_INPUT(buf,result,max_size) \
  if (!yyextra->eof) { \
    result = yyextra->user_read(&(yyextra->user_data), (buf), (max_size)); \
    if (result == 0) \
      yyextra->eof = 1; \
  }

#define UPD update_pos(yyextra, yytext, yyleng)
static void update_pos(langscan_scheme_lex_extra_t *, char *, int);

#define report(token) \
  do { \
    yyextra->text = yytext; \
    yyextra->leng = yyleng; \
    return langscan_scheme_##token; \
  } while (0)


%}

%%

{space}                              { UPD; report(space); }
{newline}                            { UPD; report(space); }
;.*                                  { UPD; report(comment); }
[,@`\']([,@`\']|{space})*            { UPD; report(quote_chars); }
\"{str_elem}*\"                      { UPD; report(string); }
\#\/{reg_elem}*\/                    { UPD; report(string); }
{exactness}?{complex10}              { UPD; report(number); }
{radix}{exactness}?{complex10}       { UPD; report(number); }
{exactness}?{radix}{complex10}       { UPD; report(number); }
{exactness}?\#x{complex16}           { UPD; report(number); }
\#x{exactness}?{complex16}           { UPD; report(number); }
(\#x|\#d|\#b|\#o)?[-+]i              { UPD; report(number); }
{ident}                              { UPD; report(ident); }
{boolean}                            { UPD; report(ident); }
{character}                          { UPD; report(punct); }
\#\(                                 { UPD; report(punct); }
.                                    { UPD; report(punct); }

%%

static void update_pos(
  langscan_scheme_lex_extra_t *extra,
  char *text,
  int leng)
{
  int i, j;
  extra->beg_byteno = extra->end_byteno;
  extra->beg_lineno = extra->end_lineno;
  extra->beg_columnno = extra->end_columnno;
  j = 0;
  for (i = 0; i < leng; i++) {
    if (text[i] == '\n') {
      extra->end_lineno++;
      j = i + 1;
      extra->end_columnno = 0;
    }
  }
  extra->end_columnno += leng - j;
  extra->end_byteno += leng;
}

langscan_scheme_tokenizer_t *langscan_scheme_make_tokenizer(
  size_t (*user_read)(void **user_data_p, char *buf, size_t maxlen),
  void *user_data)
{
  langscan_scheme_tokenizer_t *tokenizer;
  langscan_scheme_lex_extra_t *extra;
  tokenizer = (langscan_scheme_tokenizer_t *)malloc(sizeof(langscan_scheme_tokenizer_t));
  if (tokenizer == NULL)
    return NULL;
  extra = (langscan_scheme_lex_extra_t *)malloc(sizeof(langscan_scheme_lex_extra_t));
  if (extra == NULL)
    return NULL;
  extra->user_read = user_read;
  extra->user_data = user_data;
  extra->beg_lineno = 1;
  extra->beg_columnno = 0;
  extra->beg_byteno = 0;
  extra->end_lineno = 1;
  extra->end_columnno = 0;
  extra->end_byteno = 0;
  extra->eof = 0;
  tokenizer->extra = extra;
  langscan_scheme_lex_lex_init(&tokenizer->scanner);
  langscan_scheme_lex_set_extra(extra, tokenizer->scanner);
  return tokenizer;
}

langscan_scheme_token_t langscan_scheme_get_token(langscan_scheme_tokenizer_t *tokenizer) 
{
  return langscan_scheme_lex_lex(tokenizer->scanner);
}

void langscan_scheme_free_tokenizer(langscan_scheme_tokenizer_t *tokenizer) 
{
  langscan_scheme_lex_extra_t *extra = langscan_scheme_lex_get_extra(tokenizer->scanner);
  free((void *)extra);
  langscan_scheme_lex_lex_destroy(tokenizer->scanner);
  free((void *)tokenizer);
}

user_read_t langscan_scheme_tokenizer_get_user_read(langscan_scheme_tokenizer_t *tokenizer)
{
  return tokenizer->extra->user_read;
}

void *langscan_scheme_tokenizer_get_user_data(langscan_scheme_tokenizer_t *tokenizer)
{
  return tokenizer->extra->user_data;
}

const char *langscan_scheme_token_name(langscan_scheme_token_t token)
{
  static char *token_names[] = {
    "*eof*",
#define LANGSCAN_SCHEME_TOKEN(name) #name,
    LANGSCAN_SCHEME_TOKEN_LIST
#undef LANGSCAN_SCHEME_TOKEN
  };

  return token_names[token];
}
