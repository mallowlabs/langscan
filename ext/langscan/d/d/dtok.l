/*
 * dtok.l - a lex rule for D
 * 
 * Copyright (C) 2005 Shinichiro Hamaji <hamaji@nii.ac.jp>
 *     All rights reserved.
 *     This is free software with ABSOLUTELY NO WARRANTY.
 * 
 * You can redistribute it and/or modify it under the terms of 
 * the GNU General Public License version 2.
 */

%option reentrant
%option prefix="langscan_d_lex_"
%option noyywrap
%option nodefault
%s CLASSHEAD
%s CLASSHEAD_TRAILER
%x D_COMMENT

escchar [a-z'"?\\0]
escoct  [0-7]|[0-7][0-7]|[0-3][0-7][0-7]
eschex  [0-9a-fA-F][0-9a-fA-F]
escname &[a-zA-Z]+;
esccont ({escchar}|{escoct}|x{eschex}|u{eschex}{eschex}|U{eschex}{eschex}{eschex}{eschex}|{escname})
escseq  \\{esccont}

intsuf  [lLuU]*
integer ((0[bB][01]+{intsuf})|(0[0-7]*{intsuf})|([1-9][0-9]*{intsuf})|(0[xX][0-9A-Fa-f]+{intsuf}))

hex      [0-9a-fA-F_]
decfloat ([0-9_]+\.[0-9_]*|[0-9_]*\.[0-9_]+)([eE][+\-]?[0-9_]+)?
hexfloat 0x({hex}+\.{hex}*|{hex}*\.{hex}+)([pP][+\-]?{hex}+)?
floating ({decfloat}|{hexfloat})[fFlL]?[iI]?

slash           \/
star            \*
nonstar         [^\*]
nonslashstar    [^\/\*]
commentcontent  {star}+{nonslashstar}{nonstar}*
kandr_comment   {slash}{star}{nonstar}*{commentcontent}*{star}+{slash}
c99_comment     {slash}{slash}[^\n]*

comment         {kandr_comment}|{c99_comment}

id              ~?[A-Za-z_][0-9A-Za-z_]*
whtespace       [ \t\n]|{comment}|{c99_comment}

%{

#include "d.h"

#define YY_EXTRA_TYPE langscan_d_lex_extra_t *

#if YY_NULL != 0
#error "YY_NULL is not 0."
#endif

#define YY_DECL langscan_d_token_t langscan_d_lex_lex(yyscan_t yyscanner)

#define YY_INPUT(buf,result,max_size) \
  if (!yyextra->eof) { \
    result = yyextra->user_read(&(yyextra->user_data), (buf), (max_size)); \
    if (result == 0) \
      yyextra->eof = 1; \
  }

#define UPD update_pos(yyextra, yytext, yyleng)
static void update_pos(langscan_d_lex_extra_t *, char *, int);

#define report(token) \
  do { \
    yyextra->text = yytext; \
    yyextra->leng = yyleng; \
    return langscan_d_##token; \
  } while (0)

#define matched_is(str) (yyleng == sizeof(str)-1 && strncmp(str, yytext, sizeof(str)-1) == 0)

static int ident_length(unsigned char *ptr, int max);

static char *d_comment;

%}

%%

#[^\n]+  { UPD; report(preproc); }
"/+" {
  int a, b;
  int level = 1;
  int i = 2;
  int buf_len = 256;
  int next_skip = 0;

  free(d_comment);
  d_comment = (char *)malloc(buf_len);

  d_comment[0] = '/';
  d_comment[1] = '+';

  yyextra->beg_byteno = yyextra->end_byteno;
  yyextra->beg_lineno = yyextra->end_lineno;
  yyextra->beg_columnno = yyextra->end_columnno;

  yyextra->end_byteno += 3;
  yyextra->end_columnno += 3;

  a = input(yyscanner);
  d_comment[i++] = a;
  while (a != EOF && level) {
    b = input(yyscanner);
    if (i > buf_len-2) {
      char *tmp;
      buf_len *= 2;
      tmp = (char *)malloc(buf_len);
      strcpy(tmp, d_comment);
      free(d_comment);
      d_comment = tmp;
    }
    d_comment[i++] = b;
    if (next_skip) {
      next_skip = 0;
    }
    else {
      if (a == '+' && b == '/') {
        level--;
        next_skip = 1;
      }
      else if (a == '/' && b == '+') {
        level++;
        next_skip = 1;
      }
    }
    yyextra->end_byteno++;
    if (b == '\n' || a == '\r') {
      yyextra->end_lineno++;
    }
    if (b == '\n' || b == '\r') {
      yyextra->end_columnno = 0;
    }
    else {
      yyextra->end_columnno++;
    }
    a = b;
  }
  if (a == EOF) {
    /* EOF in comment */
  }

  d_comment[i++] = '\0';
  yyextra->text = d_comment;
  yyextra->leng = yyextra->end_byteno - yyextra->beg_byteno;
  return langscan_d_comment;
}

<CLASSHEAD>{id}{whtespace}*[:;\{]       { yyless(ident_length(yytext, yyleng)); UPD; BEGIN(CLASSHEAD_TRAILER); report(classdef); }
<CLASSHEAD,CLASSHEAD_TRAILER>{id} { UPD; report(classref); }
<CLASSHEAD,CLASSHEAD_TRAILER>\{   { UPD; BEGIN(INITIAL); report(punct); }

class/{whtespace}[^\{;]*\{   { UPD; BEGIN(CLASSHEAD); report(ident); }
struct/{whtespace}[^\{;]*\{   { UPD; BEGIN(CLASSHEAD); report(ident); }
interface/{whtespace}[^\{;]*\{   { UPD; BEGIN(CLASSHEAD); report(ident); }
union/{whtespace}[^\{;]*\{   { UPD; BEGIN(CLASSHEAD); report(ident); }
enum/{whtespace}[^\{;]*\{   { UPD; BEGIN(CLASSHEAD); report(ident); }

[ \t\f\r]+              { UPD; report(space); }
\n                      { UPD; report(space); }
{comment}               { UPD; report(comment); }
{escseq}                     { UPD; report(string); }
[rx]?\"([^\\\"]|{escseq})*\"[cwd]? { UPD; report(string); }
`[^`]*`[cwd]?                { UPD; report(string); }
'([^\\\']|{escseq})'         { UPD; report(character); }
{integer}(_+{integer})*_*    { UPD; report(integer); }
{floating}       { UPD; report(floating); }
{id}  { UPD; report(ident); }
>>>|>>>=|~=|\+\+|--|<<|>>|<=|>=|==|!=|&&|\|\||\*=|\/=|%=|\+=|-=|<<=|>>=|&=|^=|\|=|->|.      { UPD; report(punct); }

%%

static void update_pos(
  langscan_d_lex_extra_t *extra,
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

static int ident_length(unsigned char *ptr, int max)
{
  int len = 0;
  while (0 < max &&
         (('0' <= *ptr && *ptr <= '9') ||
          ('A' <= *ptr && *ptr <= 'Z') ||
          ('a' <= *ptr && *ptr <= 'z') ||
          *ptr == '_')) {
    ptr++;
    len++;
    max--;
  }
  return len;
}

langscan_d_tokenizer_t *langscan_d_make_tokenizer(
  size_t (*user_read)(void **user_data_p, char *buf, size_t maxlen),
  void *user_data)
{
  langscan_d_tokenizer_t *tokenizer;
  langscan_d_lex_extra_t *extra;
  tokenizer = (langscan_d_tokenizer_t *)malloc(sizeof(langscan_d_tokenizer_t));
  if (tokenizer == NULL)
    return NULL;
  extra = (langscan_d_lex_extra_t *)malloc(sizeof(langscan_d_lex_extra_t));
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
  langscan_d_lex_lex_init(&tokenizer->scanner);
  langscan_d_lex_set_extra(extra, tokenizer->scanner);

  d_comment = NULL;

  return tokenizer;
}

langscan_d_token_t langscan_d_get_token(langscan_d_tokenizer_t *tokenizer) 
{
  return langscan_d_lex_lex(tokenizer->scanner);
}

void langscan_d_free_tokenizer(langscan_d_tokenizer_t *tokenizer) 
{
  langscan_d_lex_extra_t *extra = langscan_d_lex_get_extra(tokenizer->scanner);
  free((void *)extra);
  langscan_d_lex_lex_destroy(tokenizer->scanner);
  free((void *)tokenizer);

  free(d_comment);
  d_comment = NULL;
}

user_read_t langscan_d_tokenizer_get_user_read(langscan_d_tokenizer_t *tokenizer)
{
  return tokenizer->extra->user_read;
}

void *langscan_d_tokenizer_get_user_data(langscan_d_tokenizer_t *tokenizer)
{
  return tokenizer->extra->user_data;
}

const char *langscan_d_token_name(langscan_d_token_t token)
{
  static char *token_names[] = {
    "*eof*",
#define LANGSCAN_D_TOKEN(name) #name,
    LANGSCAN_D_TOKEN_LIST
#undef LANGSCAN_D_TOKEN
  };

  return token_names[token];
}
