/*
 * java.l - a lex rule for Java
 * 
 * Copyright (C) 2005 Keisuke Nishida <knishida@open-cobol.org>
 *     All rights reserved.
 *     This is free software with ABSOLUTELY NO WARRANTY.
 * 
 * You can redistribute it and/or modify it under the terms of 
 * the GNU General Public License version 2.
 */

%option reentrant
%option prefix="langscan_java_lex_"
%option noyywrap
%option nodefault
%s CLASSDEF


slash           \/
star            \*
nonstar         [^\*]
nonslashstar    [^\/\*]
commentcontent  {star}+{nonslashstar}{nonstar}*
comment         {slash}{star}{nonstar}*{commentcontent}*{star}+{slash}
whitespace      [ \t\f\r\n]|{comment}

id              [A-Za-z_][0-9A-Za-z_]*
%{

#include "java.h"

#define YY_EXTRA_TYPE langscan_java_lex_extra_t *

#if YY_NULL != 0
#error "YY_NULL is not 0."
#endif

#define YY_DECL langscan_java_token_t langscan_java_lex_lex(yyscan_t yyscanner)

#define YY_INPUT(buf,result,max_size) \
  if (!yyextra->eof) { \
    result = yyextra->user_read(&(yyextra->user_data), (buf), (max_size)); \
    if (result == 0) \
      yyextra->eof = 1; \
  }

#define UPD update_pos(yyextra, yytext, yyleng)
static void update_pos(langscan_java_lex_extra_t *, char *, int);

#define report(token) \
  do { \
    yyextra->text = yytext; \
    yyextra->leng = yyleng; \
    return langscan_java_##token; \
  } while (0)

%}

%%

class/{whitespace}+{id} { UPD; BEGIN(CLASSDEF); report(ident); }
<CLASSDEF>{id}          { UPD; BEGIN(INITIAL); report(classdef); }

[ \t\f\r]+              { UPD; report(space); }
\n                      { UPD; report(space); }
"//".*			{ UPD; report(comment); }
{comment}		{ UPD; report(comment); }
\"([^\\\"]|\\.)*\"	{ UPD; report(string); }
{id}                    { UPD; report(ident); }
.			{ UPD; report(punct); }

%%

static void update_pos(
  langscan_java_lex_extra_t *extra,
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

langscan_java_tokenizer_t *langscan_java_make_tokenizer(
  size_t (*user_read)(void **user_data_p, char *buf, size_t maxlen),
  void *user_data)
{
  langscan_java_tokenizer_t *tokenizer;
  langscan_java_lex_extra_t *extra;
  tokenizer = (langscan_java_tokenizer_t *)malloc(sizeof(langscan_java_tokenizer_t));
  if (tokenizer == NULL)
    return NULL;
  extra = (langscan_java_lex_extra_t *)malloc(sizeof(langscan_java_lex_extra_t));
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
  langscan_java_lex_lex_init(&tokenizer->scanner);
  langscan_java_lex_set_extra(extra, tokenizer->scanner);
  return tokenizer;
}

langscan_java_token_t langscan_java_get_token(langscan_java_tokenizer_t *tokenizer) 
{
  return langscan_java_lex_lex(tokenizer->scanner);
}

void langscan_java_free_tokenizer(langscan_java_tokenizer_t *tokenizer) 
{
  langscan_java_lex_extra_t *extra = langscan_java_lex_get_extra(tokenizer->scanner);
  free((void *)extra);
  langscan_java_lex_lex_destroy(tokenizer->scanner);
  free((void *)tokenizer);
}

user_read_t langscan_java_tokenizer_get_user_read(langscan_java_tokenizer_t *tokenizer)
{
  return tokenizer->extra->user_read;
}

void *langscan_java_tokenizer_get_user_data(langscan_java_tokenizer_t *tokenizer)
{
  return tokenizer->extra->user_data;
}

const char *langscan_java_token_name(langscan_java_token_t token)
{
  static char *token_names[] = {
    "*eof*",
#define LANGSCAN_JAVA_TOKEN(name) #name,
    LANGSCAN_JAVA_TOKEN_LIST
#undef LANGSCAN_JAVA_TOKEN
  };

  return token_names[token];
}
