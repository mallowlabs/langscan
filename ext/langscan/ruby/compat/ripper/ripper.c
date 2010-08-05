/* A Bison parser, made by GNU Bison 1.875d.  */

/* Skeleton parser for Yacc-like parsing with Bison,
   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004 Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 59 Temple Place - Suite 330,
   Boston, MA 02111-1307, USA.  */

/* As a special exception, when this file is copied by Bison into a
   Bison output file, you may use that output file without restriction.
   This special exception was added by the Free Software Foundation
   in version 1.24 of Bison.  */

/* Written by Richard Stallman by simplifying the original so called
   ``semantic'' parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     kCLASS = 258,
     kMODULE = 259,
     kDEF = 260,
     kUNDEF = 261,
     kBEGIN = 262,
     kRESCUE = 263,
     kENSURE = 264,
     kEND = 265,
     kIF = 266,
     kUNLESS = 267,
     kTHEN = 268,
     kELSIF = 269,
     kELSE = 270,
     kCASE = 271,
     kWHEN = 272,
     kWHILE = 273,
     kUNTIL = 274,
     kFOR = 275,
     kBREAK = 276,
     kNEXT = 277,
     kREDO = 278,
     kRETRY = 279,
     kIN = 280,
     kDO = 281,
     kDO_COND = 282,
     kDO_BLOCK = 283,
     kDO_LAMBDA = 284,
     kRETURN = 285,
     kYIELD = 286,
     kSUPER = 287,
     kSELF = 288,
     kNIL = 289,
     kTRUE = 290,
     kFALSE = 291,
     kAND = 292,
     kOR = 293,
     kNOT = 294,
     kIF_MOD = 295,
     kUNLESS_MOD = 296,
     kWHILE_MOD = 297,
     kUNTIL_MOD = 298,
     kRESCUE_MOD = 299,
     kALIAS = 300,
     kDEFINED = 301,
     klBEGIN = 302,
     klEND = 303,
     k__LINE__ = 304,
     k__FILE__ = 305,
     tIDENTIFIER = 306,
     tFID = 307,
     tGVAR = 308,
     tIVAR = 309,
     tCONSTANT = 310,
     tCVAR = 311,
     tLABEL = 312,
     tINTEGER = 313,
     tFLOAT = 314,
     tSTRING_CONTENT = 315,
     tNTH_REF = 316,
     tBACK_REF = 317,
     tREGEXP_END = 318,
     tUPLUS = 319,
     tUMINUS = 320,
     tPOW = 321,
     tCMP = 322,
     tEQ = 323,
     tEQQ = 324,
     tNEQ = 325,
     tGEQ = 326,
     tLEQ = 327,
     tANDOP = 328,
     tOROP = 329,
     tMATCH = 330,
     tNMATCH = 331,
     tDOT2 = 332,
     tDOT3 = 333,
     tAREF = 334,
     tASET = 335,
     tLSHFT = 336,
     tRSHFT = 337,
     tCOLON2 = 338,
     tCOLON3 = 339,
     tOP_ASGN = 340,
     tASSOC = 341,
     tLPAREN = 342,
     tLPAREN_ARG = 343,
     tRPAREN = 344,
     tLBRACK = 345,
     tLBRACE = 346,
     tLBRACE_ARG = 347,
     tSTAR = 348,
     tAMPER = 349,
     tLAMBDA = 350,
     tLAMBDA_ARG = 351,
     tSYMBEG = 352,
     tSTRING_BEG = 353,
     tXSTRING_BEG = 354,
     tREGEXP_BEG = 355,
     tWORDS_BEG = 356,
     tQWORDS_BEG = 357,
     tSTRING_DBEG = 358,
     tSTRING_DVAR = 359,
     tSTRING_END = 360,
     tLAMBEG = 361,
     tLOWEST = 362,
     tUMINUS_NUM = 363,
     tLAST_TOKEN = 364
   };
#endif
#define kCLASS 258
#define kMODULE 259
#define kDEF 260
#define kUNDEF 261
#define kBEGIN 262
#define kRESCUE 263
#define kENSURE 264
#define kEND 265
#define kIF 266
#define kUNLESS 267
#define kTHEN 268
#define kELSIF 269
#define kELSE 270
#define kCASE 271
#define kWHEN 272
#define kWHILE 273
#define kUNTIL 274
#define kFOR 275
#define kBREAK 276
#define kNEXT 277
#define kREDO 278
#define kRETRY 279
#define kIN 280
#define kDO 281
#define kDO_COND 282
#define kDO_BLOCK 283
#define kDO_LAMBDA 284
#define kRETURN 285
#define kYIELD 286
#define kSUPER 287
#define kSELF 288
#define kNIL 289
#define kTRUE 290
#define kFALSE 291
#define kAND 292
#define kOR 293
#define kNOT 294
#define kIF_MOD 295
#define kUNLESS_MOD 296
#define kWHILE_MOD 297
#define kUNTIL_MOD 298
#define kRESCUE_MOD 299
#define kALIAS 300
#define kDEFINED 301
#define klBEGIN 302
#define klEND 303
#define k__LINE__ 304
#define k__FILE__ 305
#define tIDENTIFIER 306
#define tFID 307
#define tGVAR 308
#define tIVAR 309
#define tCONSTANT 310
#define tCVAR 311
#define tLABEL 312
#define tINTEGER 313
#define tFLOAT 314
#define tSTRING_CONTENT 315
#define tNTH_REF 316
#define tBACK_REF 317
#define tREGEXP_END 318
#define tUPLUS 319
#define tUMINUS 320
#define tPOW 321
#define tCMP 322
#define tEQ 323
#define tEQQ 324
#define tNEQ 325
#define tGEQ 326
#define tLEQ 327
#define tANDOP 328
#define tOROP 329
#define tMATCH 330
#define tNMATCH 331
#define tDOT2 332
#define tDOT3 333
#define tAREF 334
#define tASET 335
#define tLSHFT 336
#define tRSHFT 337
#define tCOLON2 338
#define tCOLON3 339
#define tOP_ASGN 340
#define tASSOC 341
#define tLPAREN 342
#define tLPAREN_ARG 343
#define tRPAREN 344
#define tLBRACK 345
#define tLBRACE 346
#define tLBRACE_ARG 347
#define tSTAR 348
#define tAMPER 349
#define tLAMBDA 350
#define tLAMBDA_ARG 351
#define tSYMBEG 352
#define tSTRING_BEG 353
#define tXSTRING_BEG 354
#define tREGEXP_BEG 355
#define tWORDS_BEG 356
#define tQWORDS_BEG 357
#define tSTRING_DBEG 358
#define tSTRING_DVAR 359
#define tSTRING_END 360
#define tLAMBEG 361
#define tLOWEST 362
#define tUMINUS_NUM 363
#define tLAST_TOKEN 364




/* Copy the first part of user declarations.  */
#line 13 "ripper.y"


#define YYDEBUG 1

#include "ruby.h"
#include "env.h"
#include "intern.h"
#include "node.h"
#include "st.h"
#include <stdio.h>
#include <errno.h>
#include <ctype.h>

#define ID_SCOPE_SHIFT 3
#define ID_SCOPE_MASK 0x07
#define ID_LOCAL    0x01
#define ID_INSTANCE 0x02
#define ID_GLOBAL   0x03
#define ID_ATTRSET  0x04
#define ID_CONST    0x05
#define ID_CLASS    0x06
#define ID_JUNK     0x07
#define ID_INTERNAL ID_JUNK

#define is_notop_id(id) ((id)>tLAST_TOKEN)
#define is_local_id(id) (is_notop_id(id)&&((id)&ID_SCOPE_MASK)==ID_LOCAL)
#define is_global_id(id) (is_notop_id(id)&&((id)&ID_SCOPE_MASK)==ID_GLOBAL)
#define is_instance_id(id) (is_notop_id(id)&&((id)&ID_SCOPE_MASK)==ID_INSTANCE)
#define is_attrset_id(id) (is_notop_id(id)&&((id)&ID_SCOPE_MASK)==ID_ATTRSET)
#define is_const_id(id) (is_notop_id(id)&&((id)&ID_SCOPE_MASK)==ID_CONST)
#define is_class_id(id) (is_notop_id(id)&&((id)&ID_SCOPE_MASK)==ID_CLASS)
#define is_junk_id(id) (is_notop_id(id)&&((id)&ID_SCOPE_MASK)==ID_JUNK)

#define is_asgn_or_id(id) ((is_notop_id(id)) && \
	(((id)&ID_SCOPE_MASK) == ID_GLOBAL || \
	 ((id)&ID_SCOPE_MASK) == ID_INSTANCE || \
	 ((id)&ID_SCOPE_MASK) == ID_CLASS))

#ifndef RIPPER
char *ruby_sourcefile;		/* current source file */
int   ruby_sourceline;		/* current line no. */
#endif

enum lex_state_e {
    EXPR_BEG,			/* ignore newline, +/- is a sign. */
    EXPR_END,			/* newline significant, +/- is a operator. */
    EXPR_END2,			/* newline significant, +/- is a operator. */
    EXPR_ARG,			/* newline significant, +/- is a operator. */
    EXPR_CMDARG,		/* newline significant, +/- is a operator. */
    EXPR_ENDARG,		/* newline significant, +/- is a operator. */
    EXPR_MID,			/* newline significant, +/- is a operator. */
    EXPR_FNAME,			/* ignore newline, no reserved words. */
    EXPR_DOT,			/* right after `.' or `::', no reserved words. */
    EXPR_CLASS,			/* immediate after `class', no here document. */
    EXPR_VALUE,			/* alike EXPR_BEG but label is disallowed. */
};

# ifdef HAVE_LONG_LONG
typedef unsigned LONG_LONG stack_type;
# else
typedef unsigned long stack_type;
# endif

# define BITSTACK_PUSH(stack, n)	(stack = (stack<<1)|((n)&1))
# define BITSTACK_POP(stack)	(stack = stack >> 1)
# define BITSTACK_LEXPOP(stack)	(stack = (stack >> 1) | (stack & 1))
# define BITSTACK_SET_P(stack)	(stack&1)

#define COND_PUSH(n)	BITSTACK_PUSH(cond_stack, n)
#define COND_POP()	BITSTACK_POP(cond_stack)
#define COND_LEXPOP()	BITSTACK_LEXPOP(cond_stack)
#define COND_P()	BITSTACK_SET_P(cond_stack)

#define CMDARG_PUSH(n)	BITSTACK_PUSH(cmdarg_stack, n)
#define CMDARG_POP()	BITSTACK_POP(cmdarg_stack)
#define CMDARG_LEXPOP()	BITSTACK_LEXPOP(cmdarg_stack)
#define CMDARG_P()	BITSTACK_SET_P(cmdarg_stack)

/* must sync with real YYSTYPE */
union tmpyystype {
    VALUE val;
    NODE *node;
    unsigned long id;
    int num;
    struct RVarmap *vars;
};

struct local_vars {
    ID *tbl;
    int nofree;
    int cnt;
    int dlev;
    int dname_size;
    ID *dnames;
    struct RVarmap* dyna_vars;
    struct local_vars *prev;
};

/*
    Structure of Lexer Buffer:

 lex_pbeg      tokp         lex_p        lex_pend
    |           |              |            |
    |-----------+--------------+------------|
                |<------------>|
                     token
*/
struct parser_params {
    union tmpyystype *parser_yylval;   /* YYSTYPE not defined yet */
    VALUE eofp;

    NODE *parser_lex_strterm;
    enum lex_state_e parser_lex_state;
    stack_type parser_cond_stack;
    stack_type parser_cmdarg_stack;
    int parser_class_nest;
    int parser_paren_nest;
    int parser_lpar_beg;
    int parser_in_single;
    int parser_in_def;
    int parser_compile_for_eval;
    VALUE parser_cur_mid;
    int parser_in_defined;
    char *parser_tokenbuf;
    int parser_tokidx;
    int parser_toksiz;
    VALUE parser_lex_input;
    VALUE parser_lex_lastline;
    char *parser_lex_pbeg;
    char *parser_lex_p;
    char *parser_lex_pend;
    int parser_heredoc_end;
    int parser_command_start;
    int parser_lex_gets_ptr;
    VALUE (*parser_lex_gets) _((struct parser_params*,VALUE));
    struct local_vars *parser_lvtbl;
    int parser_ruby__end__seen;
#ifndef RIPPER
    /* Ruby core only */
    NODE *parser_eval_tree_begin;
    NODE *parser_eval_tree;
    VALUE debug_lines;
#else
    /* Ripper only */
    int parser_ruby_sourceline;
    VALUE parser_ruby_sourcefile;
    char *tokp;
    VALUE delayed;
    int delayed_line;
    int delayed_col;

    VALUE value;
    VALUE result;
    VALUE parsing_thread;
    int toplevel_p;
#endif
    int line_count;
    int has_shebang;
};

static int parser_yyerror _((struct parser_params*, const char*));
#define yyerror(msg) parser_yyerror(parser, msg)

#define YYPARSE_PARAM parser_v
#define YYLEX_PARAM parser_v
#define parser ((struct parser_params*)parser_v)

#define ruby_eval_tree		(parser->parser_eval_tree)
#define ruby_eval_tree_begin	(parser->parser_eval_tree_begin)
#define lex_strterm		(parser->parser_lex_strterm)
#define lex_state		(parser->parser_lex_state)
#define cond_stack		(parser->parser_cond_stack)
#define cmdarg_stack		(parser->parser_cmdarg_stack)
#define class_nest		(parser->parser_class_nest)
#define paren_nest		(parser->parser_paren_nest)
#define lpar_beg		(parser->parser_lpar_beg)
#define in_single		(parser->parser_in_single)
#define in_def			(parser->parser_in_def)
#define compile_for_eval	(parser->parser_compile_for_eval)
#define cur_mid			(parser->parser_cur_mid)
#define in_defined		(parser->parser_in_defined)
#define tokenbuf		(parser->parser_tokenbuf)
#define tokidx			(parser->parser_tokidx)
#define toksiz			(parser->parser_toksiz)
#define lex_input		(parser->parser_lex_input)
#define lex_lastline		(parser->parser_lex_lastline)
#define lex_pbeg		(parser->parser_lex_pbeg)
#define lex_p			(parser->parser_lex_p)
#define lex_pend		(parser->parser_lex_pend)
#define heredoc_end		(parser->parser_heredoc_end)
#define command_start		(parser->parser_command_start)
#define lex_gets_ptr		(parser->parser_lex_gets_ptr)
#define lex_gets		(parser->parser_lex_gets)
#define lvtbl			(parser->parser_lvtbl)
#define ruby__end__seen		(parser->parser_ruby__end__seen)
#ifdef RIPPER
#define ruby_sourceline		(parser->parser_ruby_sourceline)
#define ruby_sourcefile		(parser->parser_ruby_sourcefile)
#else
#define ruby_debug_lines	(parser->debug_lines)
#endif

static int yylex _((void*, void*));

#ifndef RIPPER
#define yyparse parser_yyparse
#define yydebug ruby_yydebug

static NODE *cond_gen _((struct parser_params*,NODE*));
#define cond(node) cond_gen(parser, node)
static NODE *logop_gen _((struct parser_params*,enum node_type,NODE*,NODE*));
#define logop(type,node1,node2) logop_gen(parser, type, node1, node2)

static int cond_negative _((NODE**));

static NODE *newline_node _((NODE*));
static void fixpos  _((NODE*,NODE*));

static int value_expr_gen _((struct parser_params*,NODE*));
static void void_expr_gen _((struct parser_params*,NODE*));
static NODE *remove_begin _((NODE*));
#define value_expr(node) value_expr_gen(parser, (node) = remove_begin(node))
#define void_expr(node) void_expr_gen(parser, (node) = remove_begin(node))
static void void_stmts_gen _((struct parser_params*,NODE*));
#define void_stmts(node) void_stmts_gen(parser, node)
static void reduce_nodes _((NODE**));
static void block_dup_check _((NODE*));

static NODE *block_append _((NODE*,NODE*));
static NODE *list_append _((NODE*,NODE*));
static NODE *list_concat _((NODE*,NODE*));
static NODE *arg_concat _((NODE*,NODE*));
static NODE *literal_concat _((NODE*,NODE*));
static NODE *new_evstr _((NODE*));
static NODE *evstr2dstr _((NODE*));

static NODE *call_op_gen _((struct parser_params*,NODE*,ID,int,NODE*));
#define call_op(recv,id,narg,arg1) call_op_gen(parser, recv,id,narg,arg1)

static NODE *new_args_gen _((struct parser_params*,VALUE,NODE*,NODE*,NODE*));
#define new_args(f,o,r,b) new_args_gen(parser, f,o,r,b)
static void shadowing_lvar_gen _((struct parser_params*,ID));
#define shadowing_lvar(name) shadowing_lvar_gen(parser, name)

static NODE *negate_lit _((NODE*));
static NODE *ret_args _((NODE*));
static NODE *arg_blk_pass _((NODE*,NODE*));
static NODE *new_call _((NODE*,ID,NODE*));
static NODE *new_fcall_gen _((struct parser_params*,ID,NODE*));
#define new_fcall(id,args) new_fcall_gen(parser, id, args)
static NODE *new_super  _((NODE*));
static NODE *new_yield  _((NODE*));

static NODE *gettable_gen _((struct parser_params*,ID));
#define gettable(id) gettable_gen(parser,id)
static NODE *assignable_gen _((struct parser_params*,ID,NODE*));
#define assignable(id,node) assignable_gen(parser, id, node)
static NODE *new_bv_gen _((struct parser_params*,ID,NODE*));
#define new_bv(id,node) new_bv_gen(parser, id, node)
static NODE *aryset_gen _((struct parser_params*,NODE*,NODE*));
#define aryset(node1,node2) aryset_gen(parser, node1, node2)
static NODE *attrset_gen _((struct parser_params*,NODE*,ID));
#define attrset(node,id) attrset_gen(parser, node, id)

static void rb_backref_error _((NODE*));
static NODE *node_assign_gen _((struct parser_params*,NODE*,NODE*));
#define node_assign(node1, node2) node_assign_gen(parser, node1, node2)

static NODE *match_op_gen _((struct parser_params*,NODE*,NODE*));
#define match_op(node1,node2) match_op_gen(parser, node1, node2)

static void local_push_gen _((struct parser_params*,int));
#define local_push(top) local_push_gen(parser,top)
static void local_pop_gen _((struct parser_params*));
#define local_pop() local_pop_gen(parser)
static int  local_append_gen _((struct parser_params*, ID));
#define local_append(id) local_append_gen(parser, id)
static int  local_cnt_gen _((struct parser_params*, ID));
#define local_cnt(id) local_cnt_gen(parser, id)
static int  local_id_gen _((struct parser_params*, ID));
#define local_id(id) local_id_gen(parser, id)
static ID  *local_tbl_gen _((struct parser_params*));
#define local_tbl() local_tbl_gen(parser)
static ID   internal_id _((void));

static struct RVarmap *dyna_push_gen _((struct parser_params*));
#define dyna_push() dyna_push_gen(parser)
static void dyna_pop_gen _((struct parser_params*, struct RVarmap*));
#define dyna_pop(vars) dyna_pop_gen(parser, vars)
static int dyna_in_block_gen _((struct parser_params*));
#define dyna_in_block() dyna_in_block_gen(parser)
static NODE *dyna_init_gen _((struct parser_params*, NODE*, struct RVarmap *));
#define dyna_init(node, pre) dyna_init_gen(parser, node, pre)
static void dyna_var_gen _((struct parser_params*,ID));
#define dyna_var(id) dyna_var_gen(parser, id)
static void dyna_check_gen _((struct parser_params*,ID));
#define dyna_check(id) dyna_check_gen(parser, id)

static void top_local_init_gen _((struct parser_params*));
#define top_local_init() top_local_init_gen(parser)
static void top_local_setup_gen _((struct parser_params*));
#define top_local_setup() top_local_setup_gen(parser)
#else
#define remove_begin(node) (node)
#endif /* !RIPPER */
static int lvar_defined_gen _((struct parser_params*, ID));
#define lvar_defined(id) lvar_defined_gen(parser, id)

#define RE_OPTION_ONCE (1<<16)

#define NODE_STRTERM NODE_ZARRAY	/* nothing to gc */
#define NODE_HEREDOC NODE_ARRAY 	/* 1, 3 to gc */
#define SIGN_EXTEND(x,n) (((1<<(n)-1)^((x)&~(~0<<(n))))-(1<<(n)-1))
#define nd_func u1.id
#if SIZEOF_SHORT == 2
#define nd_term(node) ((signed short)(node)->u2.id)
#else
#define nd_term(node) SIGN_EXTEND((node)->u2.id, CHAR_BIT*2)
#endif
#define nd_paren(node) (char)((node)->u2.id >> CHAR_BIT*2)
#define nd_nest u3.cnt

/****** Ripper *******/

#ifdef RIPPER
#define RIPPER_VERSION "0.1.0"

#include "eventids1.c"
#include "eventids2.c"
static ID ripper_id_gets;

static VALUE ripper_dispatch0 _((struct parser_params*,ID));
static VALUE ripper_dispatch1 _((struct parser_params*,ID,VALUE));
static VALUE ripper_dispatch2 _((struct parser_params*,ID,VALUE,VALUE));
static VALUE ripper_dispatch3 _((struct parser_params*,ID,VALUE,VALUE,VALUE));
static VALUE ripper_dispatch4 _((struct parser_params*,ID,VALUE,VALUE,VALUE,VALUE));
static VALUE ripper_dispatch5 _((struct parser_params*,ID,VALUE,VALUE,VALUE,VALUE,VALUE));

#define dispatch0(n)            ripper_dispatch0(parser, TOKEN_PASTE(ripper_id_, n))
#define dispatch1(n,a)          ripper_dispatch1(parser, TOKEN_PASTE(ripper_id_, n), a)
#define dispatch2(n,a,b)        ripper_dispatch2(parser, TOKEN_PASTE(ripper_id_, n), a, b)
#define dispatch3(n,a,b,c)      ripper_dispatch3(parser, TOKEN_PASTE(ripper_id_, n), a, b, c)
#define dispatch4(n,a,b,c,d)    ripper_dispatch4(parser, TOKEN_PASTE(ripper_id_, n), a, b, c, d)
#define dispatch5(n,a,b,c,d,e)  ripper_dispatch5(parser, TOKEN_PASTE(ripper_id_, n), a, b, c, d, e)

#define yyparse ripper_yyparse
#define yydebug ripper_yydebug

static VALUE ripper_intern _((const char*));
static VALUE ripper_id2sym _((ID));

#define arg_new() dispatch0(arglist_new)
#define arg_add(l,a) dispatch2(arglist_add, l, a)
#define arg_prepend(l,a) dispatch2(arglist_prepend, l, a)
#define arg_add_star(l,a) dispatch2(arglist_add_star, l, a)
#define arg_add_block(l,b) dispatch2(arglist_add_block, l, b)
#define arg_add_optblock(l,b) ((b)==Qundef? l : dispatch2(arglist_add_block, l, b))
#define bare_assoc(v) dispatch1(bare_assoc_hash, v)
#define arg_add_assocs(l,b) arg_add(l, bare_assoc(b))

#define args2mrhs(a) dispatch1(mrhs_new_from_arglist, a)
#define mrhs_new() dispatch0(mrhs_new)
#define mrhs_add(l,a) dispatch2(mrhs_add, l, a)
#define mrhs_add_star(l,a) dispatch2(mrhs_add_star, l, a)

#define mlhs_new() dispatch0(mlhs_new)
#define mlhs_add(l,a) dispatch2(mlhs_add, l, a)
#define mlhs_add_star(l,a) dispatch2(mlhs_add_star, l, a)

#define blockvar_new(p) dispatch1(blockvar_new, p)
#define blockvar_add_star(l,a) dispatch2(blockvar_add_star, l, a)
#define blockvar_add_block(l,a) dispatch2(blockvar_add_block, l, a)

#define method_optarg(m,a) ((a)==Qundef ? m : dispatch2(method_add_arg,m,a))
#define method_arg(m,a) dispatch2(method_add_arg,m,a)
#define escape_Qundef(x) ((x)==Qundef ? Qnil : (x))

#define FIXME 0

#endif /* RIPPER */

#ifndef RIPPER
# define ifndef_ripper(x) x
#else
# define ifndef_ripper(x)
#endif

#ifndef RIPPER
# define rb_warn0(fmt)    rb_warn(fmt)
# define rb_warnI(fmt,a)  rb_warn(fmt,a)
# define rb_warnS(fmt,a)  rb_warn(fmt,a)
# define rb_warning0(fmt) rb_warning(fmt)
# define rb_warningS(fmt,a) rb_warning(fmt,a)
#else
# define rb_warn0(fmt)    ripper_warn0(parser, fmt)
# define rb_warnI(fmt,a)  ripper_warnI(parser, fmt, a)
# define rb_warnS(fmt,a)  ripper_warnS(parser, fmt, a)
# define rb_warning0(fmt) ripper_warning0(parser, fmt)
# define rb_warningS(fmt,a) ripper_warningS(parser, fmt, a)
static void ripper_warn0 _((struct parser_params*, const char*));
static void ripper_warnI _((struct parser_params*, const char*, int));
static void ripper_warnS _((struct parser_params*, const char*, const char*));
static void ripper_warning0 _((struct parser_params*, const char*));
static void ripper_warningS _((struct parser_params*, const char*, const char*));
#endif

#ifdef RIPPER
static void ripper_compile_error _((struct parser_params*, const char *fmt, ...));
# define rb_compile_error ripper_compile_error
# define compile_error ripper_compile_error
# define PARSER_ARG parser,
#else
# define compile_error rb_compile_error
# define PARSER_ARG
#endif

#define NEW_BLOCK_PARAM(b, v) NEW_NODE(NODE_BLOCK_PASS, 0, b, v)

/* Older versions of Yacc set YYMAXDEPTH to a very low value by default (150,
   for instance).  This is too low for Ruby to parse some files, such as
   date/format.rb, therefore bump the value up to at least Bison's default. */
#ifdef OLD_YACC
#ifndef YYMAXDEPTH
#define YYMAXDEPTH 10000
#endif
#endif



/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

#if ! defined (YYSTYPE) && ! defined (YYSTYPE_IS_DECLARED)
#line 444 "ripper.y"
typedef union YYSTYPE {
    VALUE val;
    NODE *node;
    ID id;
    int num;
    struct RVarmap *vars;
} YYSTYPE;
/* Line 191 of yacc.c.  */
#line 731 "ripper.c"
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 214 of yacc.c.  */
#line 743 "ripper.c"

#if ! defined (yyoverflow) || YYERROR_VERBOSE

# ifndef YYFREE
#  define YYFREE free
# endif
# ifndef YYMALLOC
#  define YYMALLOC malloc
# endif

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   define YYSTACK_ALLOC alloca
#  endif
# else
#  if defined (alloca) || defined (_ALLOCA_H)
#   define YYSTACK_ALLOC alloca
#  else
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning. */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
# else
#  if defined (__STDC__) || defined (__cplusplus)
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   define YYSIZE_T size_t
#  endif
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
# endif
#endif /* ! defined (yyoverflow) || YYERROR_VERBOSE */


#if (! defined (yyoverflow) \
     && (! defined (__cplusplus) \
	 || (defined (YYSTYPE_IS_TRIVIAL) && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  short int yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (short int) + sizeof (YYSTYPE))			\
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined (__GNUC__) && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  register YYSIZE_T yyi;		\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (0)
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (0)

#endif

#if defined (__STDC__) || defined (__cplusplus)
   typedef signed char yysigned_char;
#else
   typedef short int yysigned_char;
#endif

/* YYFINAL -- State number of the termination state. */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   10723

/* YYNTOKENS -- Number of terminals. */
#define YYNTOKENS  137
/* YYNNTS -- Number of nonterminals. */
#define YYNNTS  157
/* YYNRULES -- Number of rules. */
#define YYNRULES  536
/* YYNRULES -- Number of states. */
#define YYNSTATES  953

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   364

#define YYTRANSLATE(YYX) 						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const unsigned char yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     136,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,   135,   122,     2,     2,     2,   120,   115,     2,
     132,   133,   118,   116,   130,   117,   129,   119,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   110,   134,
     112,   108,   111,   109,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   127,     2,   128,   114,     2,   131,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   125,   113,   126,   123,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   121,   124
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const unsigned short int yyprhs[] =
{
       0,     0,     3,     4,     7,    12,    15,    17,    19,    23,
      26,    27,    32,    36,    40,    44,    47,    51,    55,    59,
      63,    67,    68,    74,    79,    83,    87,    91,    98,   104,
     110,   116,   120,   124,   128,   132,   134,   136,   140,   144,
     147,   150,   152,   154,   156,   158,   161,   164,   167,   169,
     174,   179,   180,   181,   188,   191,   195,   200,   206,   211,
     217,   220,   223,   225,   229,   231,   235,   237,   240,   244,
     247,   250,   252,   254,   258,   261,   265,   267,   272,   276,
     280,   284,   288,   291,   293,   295,   300,   304,   308,   312,
     316,   319,   321,   323,   325,   328,   330,   334,   336,   338,
     340,   342,   344,   346,   348,   350,   352,   354,   355,   360,
     362,   364,   366,   368,   370,   372,   374,   376,   378,   380,
     382,   384,   386,   388,   390,   392,   394,   396,   398,   400,
     402,   404,   406,   408,   410,   412,   414,   416,   418,   420,
     422,   424,   426,   428,   430,   432,   434,   436,   438,   440,
     442,   444,   446,   448,   450,   452,   454,   456,   458,   460,
     462,   464,   466,   468,   470,   472,   474,   476,   478,   480,
     482,   484,   486,   488,   490,   492,   494,   498,   504,   508,
     515,   521,   527,   533,   539,   544,   548,   552,   556,   560,
     564,   568,   572,   576,   580,   585,   590,   593,   596,   600,
     604,   608,   612,   616,   620,   624,   628,   632,   636,   640,
     644,   648,   651,   654,   658,   662,   666,   670,   671,   676,
     682,   684,   686,   688,   691,   694,   700,   703,   707,   711,
     715,   719,   725,   727,   729,   731,   734,   740,   743,   749,
     754,   762,   766,   768,   773,   777,   783,   791,   794,   800,
     805,   812,   820,   830,   834,   836,   837,   840,   842,   843,
     847,   848,   853,   856,   859,   861,   863,   867,   871,   876,
     879,   881,   883,   885,   887,   889,   891,   893,   895,   897,
     898,   903,   904,   909,   913,   917,   920,   924,   928,   930,
     935,   939,   941,   942,   949,   952,   954,   957,   960,   967,
     974,   975,   976,   984,   985,   986,   994,  1000,  1007,  1012,
    1018,  1019,  1020,  1030,  1031,  1038,  1039,  1040,  1049,  1050,
    1056,  1057,  1064,  1065,  1066,  1076,  1078,  1080,  1082,  1084,
    1086,  1088,  1090,  1092,  1095,  1097,  1099,  1101,  1103,  1109,
    1111,  1114,  1116,  1118,  1120,  1124,  1126,  1129,  1134,  1142,
    1149,  1154,  1158,  1164,  1169,  1172,  1174,  1177,  1179,  1181,
    1185,  1187,  1192,  1194,  1197,  1199,  1203,  1205,  1206,  1207,
    1208,  1214,  1219,  1222,  1226,  1230,  1231,  1232,  1239,  1242,
    1247,  1252,  1255,  1260,  1265,  1269,  1272,  1274,  1279,  1284,
    1285,  1286,  1293,  1294,  1295,  1302,  1305,  1311,  1313,  1318,
    1321,  1323,  1325,  1332,  1334,  1336,  1338,  1340,  1343,  1345,
    1348,  1350,  1352,  1354,  1356,  1358,  1360,  1363,  1367,  1371,
    1375,  1379,  1383,  1384,  1388,  1390,  1393,  1397,  1401,  1402,
    1406,  1407,  1410,  1411,  1414,  1416,  1417,  1421,  1422,  1427,
    1429,  1431,  1433,  1435,  1438,  1440,  1442,  1444,  1446,  1450,
    1452,  1454,  1457,  1460,  1462,  1464,  1466,  1468,  1470,  1472,
    1474,  1476,  1478,  1480,  1482,  1484,  1486,  1488,  1490,  1492,
    1493,  1498,  1501,  1505,  1508,  1515,  1520,  1525,  1528,  1533,
    1536,  1539,  1541,  1542,  1544,  1546,  1548,  1550,  1552,  1554,
    1558,  1562,  1564,  1568,  1570,  1572,  1575,  1577,  1579,  1581,
    1584,  1587,  1589,  1591,  1592,  1597,  1599,  1602,  1605,  1607,
    1611,  1615,  1618,  1620,  1622,  1624,  1626,  1628,  1630,  1632,
    1634,  1636,  1638,  1640,  1642,  1643,  1645,  1646,  1648,  1651,
    1652,  1654,  1656,  1658,  1660,  1662,  1665
};

/* YYRHS -- A `-1'-separated list of the rules' RHS. */
static const short int yyrhs[] =
{
     138,     0,    -1,    -1,   139,   141,    -1,   141,   236,   208,
     239,    -1,   142,   287,    -1,   293,    -1,   143,    -1,   142,
     292,   143,    -1,     1,   143,    -1,    -1,    45,   165,   144,
     165,    -1,    45,    53,    53,    -1,    45,    53,    62,    -1,
      45,    53,    61,    -1,     6,   166,    -1,   143,    40,   147,
      -1,   143,    41,   147,    -1,   143,    42,   147,    -1,   143,
      43,   147,    -1,   143,    44,   143,    -1,    -1,    47,   145,
     125,   141,   126,    -1,    48,   125,   141,   126,    -1,   160,
     108,   148,    -1,   154,   108,   148,    -1,   263,    85,   148,
      -1,   204,   127,   173,   128,    85,   148,    -1,   204,   129,
      51,    85,   148,    -1,   204,   129,    55,    85,   148,    -1,
     204,    83,    51,    85,   148,    -1,   264,    85,   148,    -1,
     160,   108,   186,    -1,   154,   108,   172,    -1,   154,   108,
     186,    -1,   146,    -1,   148,    -1,   146,    37,   146,    -1,
     146,    38,   146,    -1,    39,   146,    -1,   122,   148,    -1,
     170,    -1,   146,    -1,   153,    -1,   149,    -1,    30,   176,
      -1,    21,   176,    -1,    22,   176,    -1,   226,    -1,   226,
     129,   284,   178,    -1,   226,    83,   284,   178,    -1,    -1,
      -1,    92,   151,   212,   152,   141,   126,    -1,   283,   178,
      -1,   283,   178,   150,    -1,   204,   129,   284,   178,    -1,
     204,   129,   284,   178,   150,    -1,   204,    83,   284,   178,
      -1,   204,    83,   284,   178,   150,    -1,    32,   178,    -1,
      31,   178,    -1,   156,    -1,    87,   155,   289,    -1,   156,
      -1,    87,   155,   289,    -1,   158,    -1,   158,   157,    -1,
     158,    93,   159,    -1,   158,    93,    -1,    93,   159,    -1,
      93,    -1,   159,    -1,    87,   155,   289,    -1,   157,   130,
      -1,   158,   157,   130,    -1,   261,    -1,   204,   127,   173,
     128,    -1,   204,   129,    51,    -1,   204,    83,    51,    -1,
     204,   129,    55,    -1,   204,    83,    55,    -1,    84,    55,
      -1,   264,    -1,   261,    -1,   204,   127,   173,   128,    -1,
     204,   129,    51,    -1,   204,    83,    51,    -1,   204,   129,
      55,    -1,   204,    83,    55,    -1,    84,    55,    -1,   264,
      -1,    51,    -1,    55,    -1,    84,   161,    -1,   161,    -1,
     204,    83,   161,    -1,    51,    -1,    55,    -1,    52,    -1,
     168,    -1,   169,    -1,   163,    -1,   257,    -1,   164,    -1,
     259,    -1,   165,    -1,    -1,   166,   130,   167,   165,    -1,
     113,    -1,   114,    -1,   115,    -1,    67,    -1,    68,    -1,
      69,    -1,    75,    -1,   111,    -1,    71,    -1,   112,    -1,
      72,    -1,    81,    -1,    82,    -1,   116,    -1,   117,    -1,
     118,    -1,    93,    -1,   119,    -1,   120,    -1,    66,    -1,
     123,    -1,    64,    -1,    65,    -1,    79,    -1,    80,    -1,
     131,    -1,    49,    -1,    50,    -1,    47,    -1,    48,    -1,
      45,    -1,    37,    -1,     7,    -1,    21,    -1,    16,    -1,
       3,    -1,     5,    -1,    46,    -1,    26,    -1,    15,    -1,
      14,    -1,    10,    -1,     9,    -1,    36,    -1,    20,    -1,
      25,    -1,     4,    -1,    22,    -1,    34,    -1,    39,    -1,
      38,    -1,    23,    -1,     8,    -1,    24,    -1,    30,    -1,
      33,    -1,    32,    -1,    13,    -1,    35,    -1,     6,    -1,
      17,    -1,    31,    -1,    40,    -1,    41,    -1,    42,    -1,
      43,    -1,    44,    -1,   160,   108,   170,    -1,   160,   108,
     170,    44,   170,    -1,   263,    85,   170,    -1,   204,   127,
     173,   128,    85,   170,    -1,   204,   129,    51,    85,   170,
      -1,   204,   129,    55,    85,   170,    -1,   204,    83,    51,
      85,   170,    -1,   204,    83,    55,    85,   170,    -1,    84,
      55,    85,   170,    -1,   264,    85,   170,    -1,   170,    77,
     170,    -1,   170,    78,   170,    -1,   170,   116,   170,    -1,
     170,   117,   170,    -1,   170,   118,   170,    -1,   170,   119,
     170,    -1,   170,   120,   170,    -1,   170,    66,   170,    -1,
     121,    58,    66,   170,    -1,   121,    59,    66,   170,    -1,
      64,   170,    -1,    65,   170,    -1,   170,   113,   170,    -1,
     170,   114,   170,    -1,   170,   115,   170,    -1,   170,    67,
     170,    -1,   170,   111,   170,    -1,   170,    71,   170,    -1,
     170,   112,   170,    -1,   170,    72,   170,    -1,   170,    68,
     170,    -1,   170,    69,   170,    -1,   170,    70,   170,    -1,
     170,    75,   170,    -1,   170,    76,   170,    -1,   122,   170,
      -1,   123,   170,    -1,   170,    81,   170,    -1,   170,    82,
     170,    -1,   170,    73,   170,    -1,   170,    74,   170,    -1,
      -1,    46,   288,   171,   170,    -1,   170,   109,   170,   110,
     170,    -1,   187,    -1,   170,    -1,   293,    -1,   153,   288,
      -1,   185,   290,    -1,   185,   130,    93,   170,   288,    -1,
     281,   290,    -1,    93,   170,   288,    -1,   132,   293,   133,
      -1,   132,   176,   289,    -1,   132,   226,   289,    -1,   132,
     185,   130,   226,   289,    -1,   293,    -1,   174,    -1,   153,
      -1,   185,   184,    -1,   185,   130,    93,   172,   184,    -1,
     281,   184,    -1,   281,   130,    93,   172,   184,    -1,   185,
     130,   281,   184,    -1,   185,   130,   281,   130,    93,   170,
     184,    -1,    93,   172,   184,    -1,   183,    -1,   172,   130,
     185,   184,    -1,   172,   130,   183,    -1,   172,   130,    93,
     172,   184,    -1,   172,   130,   185,   130,    93,   172,   184,
      -1,   281,   184,    -1,   281,   130,    93,   172,   184,    -1,
     172,   130,   281,   184,    -1,   172,   130,   185,   130,   281,
     184,    -1,   172,   130,   281,   130,    93,   172,   184,    -1,
     172,   130,   185,   130,   281,   130,    93,   172,   184,    -1,
      93,   172,   184,    -1,   183,    -1,    -1,   179,   180,    -1,
     176,    -1,    -1,    88,   181,   289,    -1,    -1,    88,   177,
     182,   289,    -1,    94,   172,    -1,   130,   183,    -1,   293,
      -1,   172,    -1,   185,   130,   172,    -1,   185,   130,   172,
      -1,   185,   130,    93,   172,    -1,    93,   172,    -1,   240,
      -1,   241,    -1,   244,    -1,   245,    -1,   246,    -1,   249,
      -1,   262,    -1,   264,    -1,    52,    -1,    -1,     7,   188,
     140,    10,    -1,    -1,    88,   146,   189,   289,    -1,    87,
     141,   133,    -1,   204,    83,    55,    -1,    84,    55,    -1,
      90,   173,   128,    -1,    91,   280,   126,    -1,    30,    -1,
      31,   132,   176,   289,    -1,    31,   132,   289,    -1,    31,
      -1,    -1,    46,   288,   132,   190,   146,   289,    -1,   283,
     228,    -1,   227,    -1,   227,   228,    -1,    95,   217,    -1,
      11,   147,   205,   141,   207,    10,    -1,    12,   147,   205,
     141,   208,    10,    -1,    -1,    -1,    18,   191,   147,   206,
     192,   141,    10,    -1,    -1,    -1,    19,   193,   147,   206,
     194,   141,    10,    -1,    16,   147,   287,   233,    10,    -1,
      16,   147,   287,    15,   141,    10,    -1,    16,   287,   233,
      10,    -1,    16,   287,    15,   141,    10,    -1,    -1,    -1,
      20,   209,    25,   195,   147,   206,   196,   141,    10,    -1,
      -1,     3,   162,   265,   197,   140,    10,    -1,    -1,    -1,
       3,    81,   146,   198,   291,   199,   140,    10,    -1,    -1,
       4,   162,   200,   140,    10,    -1,    -1,     5,   163,   201,
     267,   140,    10,    -1,    -1,    -1,     5,   278,   286,   202,
     163,   203,   267,   140,    10,    -1,    21,    -1,    22,    -1,
      23,    -1,    24,    -1,   187,    -1,   291,    -1,   110,    -1,
      13,    -1,   291,    13,    -1,   291,    -1,   110,    -1,    27,
      -1,   208,    -1,    14,   147,   205,   141,   207,    -1,   293,
      -1,    15,   141,    -1,   160,    -1,   154,    -1,   157,    -1,
     210,   130,   157,    -1,   210,    -1,   210,   130,    -1,   210,
     130,    94,   160,    -1,   210,   130,    93,   160,   130,    94,
     160,    -1,   210,   130,    93,   130,    94,   160,    -1,   210,
     130,    93,   160,    -1,   210,   130,    93,    -1,    93,   160,
     130,    94,   160,    -1,    93,   130,    94,   160,    -1,    93,
     160,    -1,    93,    -1,    94,   160,    -1,   293,    -1,   213,
      -1,   113,   214,   113,    -1,    74,    -1,   113,   211,   214,
     113,    -1,   293,    -1,   134,   215,    -1,   216,    -1,   215,
     130,   216,    -1,    51,    -1,    -1,    -1,    -1,   218,   219,
     221,   220,   222,    -1,   132,   268,   214,   289,    -1,   268,
     214,    -1,   106,   141,   126,    -1,    29,   141,    10,    -1,
      -1,    -1,    28,   224,   212,   225,   141,    10,    -1,   153,
     223,    -1,   226,   129,   284,   175,    -1,   226,    83,   284,
     175,    -1,   283,   174,    -1,   204,   129,   284,   175,    -1,
     204,    83,   284,   174,    -1,   204,    83,   285,    -1,    32,
     174,    -1,    32,    -1,    87,   141,   133,   174,    -1,   204,
     127,   173,   128,    -1,    -1,    -1,   125,   229,   212,   230,
     141,   126,    -1,    -1,    -1,    26,   231,   212,   232,   141,
      10,    -1,    96,   217,    -1,    17,   234,   205,   141,   235,
      -1,   185,    -1,   185,   130,    93,   172,    -1,    93,   172,
      -1,   208,    -1,   233,    -1,     8,   237,   238,   205,   141,
     236,    -1,   293,    -1,   172,    -1,   186,    -1,   293,    -1,
      86,   160,    -1,   293,    -1,     9,   141,    -1,   293,    -1,
     260,    -1,   257,    -1,   259,    -1,   242,    -1,   243,    -1,
     242,   243,    -1,    98,   251,   105,    -1,    99,   252,   105,
      -1,   100,   252,    63,    -1,   101,   135,   105,    -1,   101,
     247,   105,    -1,    -1,   247,   248,   135,    -1,   253,    -1,
     248,   253,    -1,   102,   135,   105,    -1,   102,   250,   105,
      -1,    -1,   250,    60,   135,    -1,    -1,   251,   253,    -1,
      -1,   252,   253,    -1,    60,    -1,    -1,   104,   254,   256,
      -1,    -1,   103,   255,   141,   126,    -1,    53,    -1,    54,
      -1,    56,    -1,   264,    -1,    97,   258,    -1,   163,    -1,
      54,    -1,    53,    -1,    56,    -1,    97,   252,   105,    -1,
      58,    -1,    59,    -1,   121,    58,    -1,   121,    59,    -1,
      51,    -1,    54,    -1,    53,    -1,    55,    -1,    56,    -1,
      34,    -1,    33,    -1,    35,    -1,    36,    -1,    50,    -1,
      49,    -1,   261,    -1,   261,    -1,    61,    -1,    62,    -1,
     291,    -1,    -1,   112,   266,   147,   291,    -1,     1,   291,
      -1,   132,   268,   289,    -1,   268,   291,    -1,   270,   130,
     272,   130,   274,   277,    -1,   270,   130,   272,   277,    -1,
     270,   130,   274,   277,    -1,   270,   277,    -1,   272,   130,
     274,   277,    -1,   272,   277,    -1,   274,   277,    -1,   276,
      -1,    -1,    55,    -1,    54,    -1,    53,    -1,    56,    -1,
      51,    -1,   269,    -1,   270,   130,   269,    -1,    51,   108,
     172,    -1,   271,    -1,   272,   130,   271,    -1,   118,    -1,
      93,    -1,   273,    51,    -1,   273,    -1,   115,    -1,    94,
      -1,   275,    51,    -1,   130,   276,    -1,   293,    -1,   262,
      -1,    -1,   132,   279,   146,   289,    -1,   293,    -1,   281,
     290,    -1,   185,   290,    -1,   282,    -1,   281,   130,   282,
      -1,   172,    86,   172,    -1,    57,   172,    -1,    51,    -1,
      55,    -1,    52,    -1,    51,    -1,    55,    -1,    52,    -1,
     168,    -1,    51,    -1,    52,    -1,   168,    -1,   129,    -1,
      83,    -1,    -1,   292,    -1,    -1,   136,    -1,   288,   133,
      -1,    -1,   136,    -1,   130,    -1,   134,    -1,   136,    -1,
     291,    -1,   292,   134,    -1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short int yyrline[] =
{
       0,   596,   596,   596,   633,   666,   677,   685,   693,   701,
     707,   707,   715,   723,   734,   744,   752,   765,   778,   794,
     810,   819,   818,   842,   857,   865,   875,   904,   928,   945,
     962,   979,   989,   997,  1006,  1015,  1018,  1019,  1027,  1035,
    1043,  1051,  1054,  1065,  1066,  1067,  1075,  1083,  1093,  1094,
    1103,  1115,  1122,  1114,  1138,  1147,  1162,  1171,  1186,  1195,
    1210,  1219,  1230,  1231,  1241,  1242,  1252,  1260,  1268,  1276,
    1284,  1292,  1302,  1303,  1313,  1321,  1331,  1339,  1347,  1355,
    1363,  1371,  1383,  1393,  1405,  1413,  1421,  1429,  1437,  1445,
    1458,  1471,  1482,  1490,  1493,  1501,  1509,  1519,  1520,  1521,
    1522,  1532,  1544,  1545,  1548,  1556,  1559,  1567,  1567,  1577,
    1578,  1579,  1580,  1581,  1582,  1583,  1584,  1585,  1586,  1587,
    1588,  1589,  1590,  1591,  1592,  1593,  1594,  1595,  1596,  1597,
    1598,  1599,  1600,  1601,  1602,  1605,  1605,  1605,  1605,  1606,
    1606,  1606,  1606,  1606,  1606,  1606,  1607,  1607,  1607,  1607,
    1607,  1607,  1607,  1608,  1608,  1608,  1608,  1608,  1608,  1609,
    1609,  1609,  1609,  1609,  1609,  1609,  1610,  1610,  1610,  1610,
    1610,  1611,  1611,  1611,  1611,  1611,  1614,  1622,  1630,  1659,
    1683,  1700,  1717,  1734,  1745,  1756,  1767,  1784,  1801,  1809,
    1817,  1825,  1833,  1841,  1849,  1858,  1867,  1880,  1888,  1896,
    1904,  1912,  1920,  1928,  1936,  1944,  1952,  1960,  1968,  1976,
    1984,  1992,  2000,  2008,  2016,  2024,  2032,  2040,  2040,  2050,
    2059,  2065,  2076,  2077,  2087,  2091,  2100,  2108,  2119,  2127,
    2135,  2145,  2157,  2158,  2161,  2171,  2179,  2188,  2198,  2208,
    2217,  2228,  2236,  2245,  2253,  2261,  2271,  2281,  2290,  2300,
    2310,  2320,  2331,  2342,  2350,  2353,  2353,  2365,  2366,  2366,
    2375,  2375,  2386,  2396,  2400,  2403,  2411,  2421,  2429,  2437,
    2447,  2448,  2449,  2450,  2451,  2452,  2453,  2454,  2455,  2464,
    2463,  2488,  2488,  2498,  2507,  2515,  2523,  2536,  2544,  2552,
    2560,  2568,  2576,  2576,  2586,  2597,  2598,  2609,  2613,  2630,
    2647,  2647,  2647,  2661,  2661,  2661,  2675,  2686,  2694,  2702,
    2710,  2710,  2710,  2722,  2721,  2749,  2758,  2748,  2788,  2787,
    2815,  2814,  2845,  2846,  2845,  2872,  2880,  2888,  2896,  2906,
    2917,  2922,  2927,  2928,  2935,  2940,  2945,  2948,  2949,  2962,
    2963,  2973,  2974,  2977,  2985,  2995,  3009,  3017,  3025,  3034,
    3043,  3051,  3059,  3068,  3077,  3085,  3093,  3103,  3110,  3113,
    3121,  3129,  3140,  3141,  3151,  3159,  3169,  3179,  3185,  3190,
    3179,  3206,  3214,  3224,  3228,  3235,  3242,  3234,  3262,  3273,
    3282,  3293,  3302,  3312,  3322,  3330,  3338,  3346,  3358,  3373,
    3380,  3372,  3399,  3406,  3398,  3424,  3437,  3448,  3449,  3457,
    3467,  3468,  3471,  3490,  3493,  3501,  3502,  3505,  3509,  3512,
    3520,  3523,  3524,  3532,  3535,  3552,  3553,  3563,  3573,  3600,
    3637,  3645,  3652,  3659,  3669,  3677,  3687,  3695,  3702,  3709,
    3720,  3727,  3738,  3745,  3755,  3757,  3756,  3773,  3772,  3794,
    3802,  3810,  3818,  3821,  3833,  3834,  3835,  3836,  3839,  3870,
    3871,  3872,  3880,  3890,  3891,  3892,  3893,  3894,  3895,  3896,
    3897,  3898,  3899,  3900,  3903,  3913,  3923,  3924,  3927,  3936,
    3935,  3943,  3955,  3965,  3971,  3979,  3987,  3995,  4003,  4011,
    4019,  4027,  4036,  4045,  4053,  4061,  4069,  4077,  4096,  4105,
    4120,  4136,  4145,  4155,  4156,  4159,  4173,  4188,  4189,  4192,
    4213,  4217,  4220,  4234,  4234,  4263,  4264,  4268,  4281,  4288,
    4298,  4306,  4316,  4317,  4318,  4321,  4322,  4323,  4324,  4327,
    4328,  4329,  4332,  4337,  4344,  4345,  4348,  4349,  4352,  4355,
    4356,  4357,  4360,  4361,  4364,  4365,  4369
};
#endif

#if YYDEBUG || YYERROR_VERBOSE
/* YYTNME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals. */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "kCLASS", "kMODULE", "kDEF", "kUNDEF",
  "kBEGIN", "kRESCUE", "kENSURE", "kEND", "kIF", "kUNLESS", "kTHEN",
  "kELSIF", "kELSE", "kCASE", "kWHEN", "kWHILE", "kUNTIL", "kFOR",
  "kBREAK", "kNEXT", "kREDO", "kRETRY", "kIN", "kDO", "kDO_COND",
  "kDO_BLOCK", "kDO_LAMBDA", "kRETURN", "kYIELD", "kSUPER", "kSELF",
  "kNIL", "kTRUE", "kFALSE", "kAND", "kOR", "kNOT", "kIF_MOD",
  "kUNLESS_MOD", "kWHILE_MOD", "kUNTIL_MOD", "kRESCUE_MOD", "kALIAS",
  "kDEFINED", "klBEGIN", "klEND", "k__LINE__", "k__FILE__", "tIDENTIFIER",
  "tFID", "tGVAR", "tIVAR", "tCONSTANT", "tCVAR", "tLABEL", "tINTEGER",
  "tFLOAT", "tSTRING_CONTENT", "tNTH_REF", "tBACK_REF", "tREGEXP_END",
  "tUPLUS", "tUMINUS", "tPOW", "tCMP", "tEQ", "tEQQ", "tNEQ", "tGEQ",
  "tLEQ", "tANDOP", "tOROP", "tMATCH", "tNMATCH", "tDOT2", "tDOT3",
  "tAREF", "tASET", "tLSHFT", "tRSHFT", "tCOLON2", "tCOLON3", "tOP_ASGN",
  "tASSOC", "tLPAREN", "tLPAREN_ARG", "tRPAREN", "tLBRACK", "tLBRACE",
  "tLBRACE_ARG", "tSTAR", "tAMPER", "tLAMBDA", "tLAMBDA_ARG", "tSYMBEG",
  "tSTRING_BEG", "tXSTRING_BEG", "tREGEXP_BEG", "tWORDS_BEG",
  "tQWORDS_BEG", "tSTRING_DBEG", "tSTRING_DVAR", "tSTRING_END", "tLAMBEG",
  "tLOWEST", "'='", "'?'", "':'", "'>'", "'<'", "'|'", "'^'", "'&'", "'+'",
  "'-'", "'*'", "'/'", "'%'", "tUMINUS_NUM", "'!'", "'~'", "tLAST_TOKEN",
  "'{'", "'}'", "'['", "']'", "'.'", "','", "'`'", "'('", "')'", "';'",
  "' '", "'\\n'", "$accept", "program", "@1", "bodystmt", "compstmt",
  "stmts", "stmt", "@2", "@3", "expr", "expr_value", "command_call",
  "block_command", "cmd_brace_block", "@4", "@5", "command", "mlhs",
  "mlhs_entry", "mlhs_basic", "mlhs_item", "mlhs_head", "mlhs_node", "lhs",
  "cname", "cpath", "fname", "fsym", "fitem", "undef_list", "@6", "op",
  "reswords", "arg", "@7", "arg_value", "aref_args", "paren_args",
  "opt_paren_args", "call_args", "call_args2", "command_args", "@8",
  "open_args", "@9", "@10", "block_arg", "opt_block_arg", "args", "mrhs",
  "primary", "@11", "@12", "@13", "@14", "@15", "@16", "@17", "@18", "@19",
  "@20", "@21", "@22", "@23", "@24", "@25", "@26", "primary_value", "then",
  "do", "if_tail", "opt_else", "for_var", "block_param0", "block_param",
  "opt_block_param", "block_param_def", "opt_bv_decl", "bv_decls",
  "bv_decl", "lambda", "@27", "@28", "@29", "f_larglist", "lambda_body",
  "do_block", "@30", "@31", "block_call", "method_call", "brace_block",
  "@32", "@33", "@34", "@35", "case_body", "when_args", "cases",
  "opt_rescue", "exc_list", "exc_var", "opt_ensure", "literal", "strings",
  "string", "string1", "xstring", "regexp", "words", "word_list", "word",
  "qwords", "qword_list", "string_contents", "xstring_contents",
  "string_content", "@36", "@37", "string_dvar", "symbol", "sym", "dsym",
  "numeric", "variable", "var_ref", "var_lhs", "backref", "superclass",
  "@38", "f_arglist", "f_args", "f_norm_arg", "f_arg", "f_opt", "f_optarg",
  "restarg_mark", "f_rest_arg", "blkarg_mark", "f_block_arg",
  "opt_f_block_arg", "singleton", "@39", "assoc_list", "assocs", "assoc",
  "operation", "operation2", "operation3", "dot_or_colon", "opt_terms",
  "opt_nl", "rparen", "trailer", "term", "terms", "none", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const unsigned short int yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,    61,    63,
      58,    62,    60,   124,    94,    38,    43,    45,    42,    47,
      37,   363,    33,   126,   364,   123,   125,    91,    93,    46,
      44,    96,    40,    41,    59,    32,    10
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned short int yyr1[] =
{
       0,   137,   139,   138,   140,   141,   142,   142,   142,   142,
     144,   143,   143,   143,   143,   143,   143,   143,   143,   143,
     143,   145,   143,   143,   143,   143,   143,   143,   143,   143,
     143,   143,   143,   143,   143,   143,   146,   146,   146,   146,
     146,   146,   147,   148,   148,   148,   148,   148,   149,   149,
     149,   151,   152,   150,   153,   153,   153,   153,   153,   153,
     153,   153,   154,   154,   155,   155,   156,   156,   156,   156,
     156,   156,   157,   157,   158,   158,   159,   159,   159,   159,
     159,   159,   159,   159,   160,   160,   160,   160,   160,   160,
     160,   160,   161,   161,   162,   162,   162,   163,   163,   163,
     163,   163,   164,   164,   165,   165,   166,   167,   166,   168,
     168,   168,   168,   168,   168,   168,   168,   168,   168,   168,
     168,   168,   168,   168,   168,   168,   168,   168,   168,   168,
     168,   168,   168,   168,   168,   169,   169,   169,   169,   169,
     169,   169,   169,   169,   169,   169,   169,   169,   169,   169,
     169,   169,   169,   169,   169,   169,   169,   169,   169,   169,
     169,   169,   169,   169,   169,   169,   169,   169,   169,   169,
     169,   169,   169,   169,   169,   169,   170,   170,   170,   170,
     170,   170,   170,   170,   170,   170,   170,   170,   170,   170,
     170,   170,   170,   170,   170,   170,   170,   170,   170,   170,
     170,   170,   170,   170,   170,   170,   170,   170,   170,   170,
     170,   170,   170,   170,   170,   170,   170,   171,   170,   170,
     170,   172,   173,   173,   173,   173,   173,   173,   174,   174,
     174,   174,   175,   175,   176,   176,   176,   176,   176,   176,
     176,   176,   176,   177,   177,   177,   177,   177,   177,   177,
     177,   177,   177,   177,   177,   179,   178,   180,   181,   180,
     182,   180,   183,   184,   184,   185,   185,   186,   186,   186,
     187,   187,   187,   187,   187,   187,   187,   187,   187,   188,
     187,   189,   187,   187,   187,   187,   187,   187,   187,   187,
     187,   187,   190,   187,   187,   187,   187,   187,   187,   187,
     191,   192,   187,   193,   194,   187,   187,   187,   187,   187,
     195,   196,   187,   197,   187,   198,   199,   187,   200,   187,
     201,   187,   202,   203,   187,   187,   187,   187,   187,   204,
     205,   205,   205,   205,   206,   206,   206,   207,   207,   208,
     208,   209,   209,   210,   210,   211,   211,   211,   211,   211,
     211,   211,   211,   211,   211,   211,   211,   212,   212,   213,
     213,   213,   214,   214,   215,   215,   216,   218,   219,   220,
     217,   221,   221,   222,   222,   224,   225,   223,   226,   226,
     226,   227,   227,   227,   227,   227,   227,   227,   227,   229,
     230,   228,   231,   232,   228,   228,   233,   234,   234,   234,
     235,   235,   236,   236,   237,   237,   237,   238,   238,   239,
     239,   240,   240,   240,   241,   242,   242,   243,   244,   245,
     246,   246,   247,   247,   248,   248,   249,   249,   250,   250,
     251,   251,   252,   252,   253,   254,   253,   255,   253,   256,
     256,   256,   256,   257,   258,   258,   258,   258,   259,   260,
     260,   260,   260,   261,   261,   261,   261,   261,   261,   261,
     261,   261,   261,   261,   262,   263,   264,   264,   265,   266,
     265,   265,   267,   267,   268,   268,   268,   268,   268,   268,
     268,   268,   268,   269,   269,   269,   269,   269,   270,   270,
     271,   272,   272,   273,   273,   274,   274,   275,   275,   276,
     277,   277,   278,   279,   278,   280,   280,   280,   281,   281,
     282,   282,   283,   283,   283,   284,   284,   284,   284,   285,
     285,   285,   286,   286,   287,   287,   288,   288,   289,   290,
     290,   290,   291,   291,   292,   292,   293
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const unsigned char yyr2[] =
{
       0,     2,     0,     2,     4,     2,     1,     1,     3,     2,
       0,     4,     3,     3,     3,     2,     3,     3,     3,     3,
       3,     0,     5,     4,     3,     3,     3,     6,     5,     5,
       5,     3,     3,     3,     3,     1,     1,     3,     3,     2,
       2,     1,     1,     1,     1,     2,     2,     2,     1,     4,
       4,     0,     0,     6,     2,     3,     4,     5,     4,     5,
       2,     2,     1,     3,     1,     3,     1,     2,     3,     2,
       2,     1,     1,     3,     2,     3,     1,     4,     3,     3,
       3,     3,     2,     1,     1,     4,     3,     3,     3,     3,
       2,     1,     1,     1,     2,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     0,     4,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     5,     3,     6,
       5,     5,     5,     5,     4,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     4,     4,     2,     2,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     2,     2,     3,     3,     3,     3,     0,     4,     5,
       1,     1,     1,     2,     2,     5,     2,     3,     3,     3,
       3,     5,     1,     1,     1,     2,     5,     2,     5,     4,
       7,     3,     1,     4,     3,     5,     7,     2,     5,     4,
       6,     7,     9,     3,     1,     0,     2,     1,     0,     3,
       0,     4,     2,     2,     1,     1,     3,     3,     4,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     0,
       4,     0,     4,     3,     3,     2,     3,     3,     1,     4,
       3,     1,     0,     6,     2,     1,     2,     2,     6,     6,
       0,     0,     7,     0,     0,     7,     5,     6,     4,     5,
       0,     0,     9,     0,     6,     0,     0,     8,     0,     5,
       0,     6,     0,     0,     9,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     1,     1,     1,     1,     5,     1,
       2,     1,     1,     1,     3,     1,     2,     4,     7,     6,
       4,     3,     5,     4,     2,     1,     2,     1,     1,     3,
       1,     4,     1,     2,     1,     3,     1,     0,     0,     0,
       5,     4,     2,     3,     3,     0,     0,     6,     2,     4,
       4,     2,     4,     4,     3,     2,     1,     4,     4,     0,
       0,     6,     0,     0,     6,     2,     5,     1,     4,     2,
       1,     1,     6,     1,     1,     1,     1,     2,     1,     2,
       1,     1,     1,     1,     1,     1,     2,     3,     3,     3,
       3,     3,     0,     3,     1,     2,     3,     3,     0,     3,
       0,     2,     0,     2,     1,     0,     3,     0,     4,     1,
       1,     1,     1,     2,     1,     1,     1,     1,     3,     1,
       1,     2,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     0,
       4,     2,     3,     2,     6,     4,     4,     2,     4,     2,
       2,     1,     0,     1,     1,     1,     1,     1,     1,     3,
       3,     1,     3,     1,     1,     2,     1,     1,     1,     2,
       2,     1,     1,     0,     4,     1,     2,     2,     1,     3,
       3,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     1,     0,     1,     2,     0,
       1,     1,     1,     1,     1,     2,     0
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const unsigned short int yydefact[] =
{
       2,     0,     0,     1,     0,     0,     0,     0,     0,   279,
       0,     0,   524,   300,   303,     0,   325,   326,   327,   328,
     288,   291,   386,   459,   458,   460,   461,     0,     0,   526,
      21,     0,   463,   462,   453,   514,   455,   454,   456,   457,
     449,   450,   466,   467,     0,     0,     0,     0,     0,   536,
     536,    71,   367,   432,   430,   432,   432,   422,   428,     0,
       0,     0,     3,   524,     7,    35,    36,    44,    43,     0,
      62,     0,    66,    72,     0,    41,   220,     0,    48,   295,
     270,   271,   414,   415,   272,   273,   274,   275,   412,   413,
     411,   464,   276,     0,   277,   255,     6,     9,   325,   326,
     288,   291,   386,   526,    92,    93,     0,     0,     0,     0,
      95,     0,   329,     0,   464,   277,     0,   318,   144,   155,
     145,   168,   141,   161,   151,   150,   166,   149,   148,   143,
     169,   153,   142,   156,   160,   162,   154,   147,   163,   170,
     165,   164,   157,   167,   152,   140,   159,   158,   171,   172,
     173,   174,   175,   139,   146,   137,   138,   135,   136,    97,
      99,    98,   130,   131,   128,   112,   113,   114,   117,   119,
     115,   132,   133,   120,   121,   125,   116,   118,   109,   110,
     111,   122,   123,   124,   126,   127,   129,   134,   503,   320,
     100,   101,   502,     0,   164,   157,   167,   152,   135,   136,
      97,    98,   102,   104,   106,    15,   103,   105,     0,     0,
      42,     0,     0,     0,   464,     0,   277,     0,   532,   533,
     524,     0,   534,   525,     0,     0,     0,   342,   341,     0,
       0,   464,   277,     0,     0,     0,     0,   234,   221,   265,
      46,   242,   536,   536,   508,    47,    45,   526,    61,     0,
     536,   385,    60,    39,     0,    10,   527,   217,     0,     0,
     196,     0,   197,   285,     0,     0,   526,    64,   281,     0,
     526,     0,   529,   529,   222,   529,     0,   529,   505,     0,
      70,     0,    76,    83,   297,   368,   446,   445,   447,   444,
       0,   443,     0,     0,     0,     0,     0,     0,     0,   451,
     452,    40,   211,   212,     5,   525,     0,     0,     0,     0,
       0,     0,     0,   375,   378,     0,    74,     0,    69,    67,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   536,     0,
       0,     0,   392,   367,   389,   296,   416,     0,     0,   381,
      54,   294,     0,   315,    92,    93,    94,   451,   452,     0,
     469,   313,   468,     0,   536,     0,     0,     0,   482,   523,
     522,   322,   107,     0,   536,   285,   332,   331,     0,   330,
       0,     0,   536,     0,     0,     0,     0,     0,     0,     0,
       0,   535,     0,     0,   285,     0,   536,     0,   310,   511,
     536,   262,     0,     0,   235,   264,     0,   237,   526,     0,
     290,   258,   257,   256,   234,   526,   536,   526,     0,    12,
      14,    13,     0,   292,     0,     0,     0,     0,     0,     0,
     526,   283,    63,   526,   526,   223,   286,   531,   530,   224,
     531,   226,   531,   507,   287,   506,    82,     0,   536,     0,
     482,   434,   437,   435,   448,   433,   417,   431,   418,   419,
     420,   421,     0,   424,   426,     0,   427,     0,     0,     8,
      16,    17,    18,    19,    20,    37,    38,   536,     0,    25,
      33,     0,    34,   526,    68,    75,    24,   176,   265,    32,
     193,   201,   206,   207,   208,   203,   205,   215,   216,   209,
     210,   186,   187,   213,   214,     0,   202,   204,   198,   199,
     200,   188,   189,   190,   191,   192,   515,   520,   516,   521,
     255,   384,     0,   515,   517,   516,   518,   536,   515,   516,
     255,   255,   536,   395,   536,    26,   178,    31,   185,    51,
      55,     0,   471,     0,     0,    92,    93,    96,     0,     0,
     536,     0,   526,   487,   485,   484,   483,   486,   494,   498,
     497,   493,   482,     0,     0,   488,   536,   491,   536,   496,
     536,     0,   481,     0,     0,   280,   536,   536,   403,   536,
     333,   176,   519,   284,     0,   515,   516,   536,     0,     0,
       0,     0,   397,     0,   308,   336,   335,   301,   334,   304,
     519,   284,     0,   515,   516,     0,     0,   241,   510,     0,
     266,   263,   536,     0,     0,   509,   289,   528,     0,    41,
       0,   260,   526,   254,   536,   229,     0,     0,     0,   230,
     228,    11,     0,   218,     0,    23,   184,    65,   387,   282,
     227,     0,   266,    79,    81,     0,    78,    80,   482,   369,
     536,     0,     0,   423,   425,   429,   194,   195,   360,   536,
     376,   358,   357,   269,     0,    73,     0,     0,     0,     0,
     383,    58,   388,     0,     0,   233,   382,    56,   232,   380,
      50,   379,    49,   393,   390,   536,   316,     0,     0,   388,
     319,   504,     0,   526,     0,   473,     0,   477,   501,     0,
     479,   495,     0,   480,   499,   323,   108,   404,   405,   536,
     406,     0,   536,   339,     0,     0,   337,     0,   388,     0,
       0,     0,     0,   306,   309,   399,     0,     0,     0,     0,
     388,     0,   536,     0,   239,   536,   536,     0,   526,   259,
       0,   247,     0,   526,   536,   536,   526,    22,   526,    77,
     536,     0,     0,   372,   362,     0,   439,   440,   441,   436,
     442,   355,     0,   343,   345,   536,     0,     0,     0,   267,
     177,   219,    30,   182,   183,    59,     0,    28,   180,    29,
     181,    57,     0,     0,    52,     0,   470,   314,   490,   472,
     321,   489,   536,   536,   500,     0,   492,   536,   482,     0,
       0,   408,   340,     0,     4,   410,     0,   298,     0,   299,
     307,     0,   536,     0,     0,   311,   236,     0,   238,   253,
       0,   244,   536,   536,   261,     0,   231,   293,   225,   526,
       0,     0,   370,   366,   363,   364,   438,     0,     0,   354,
       0,    84,    91,   356,   346,     0,   359,     0,   268,    27,
     179,     0,     0,     0,     0,     0,   475,   476,   478,     0,
     407,     0,   409,     0,   398,   400,   401,   396,   302,   305,
       0,   536,   536,     0,   243,     0,   249,   536,   371,     0,
       0,     0,    90,     0,     0,     0,   536,     0,   351,     0,
     344,   361,   377,   394,   391,     0,   317,   536,     0,   536,
     536,     0,   240,   245,     0,   536,     0,   248,   374,   373,
     365,   353,     0,    87,    89,     0,   515,   516,     0,   350,
     347,    53,   474,   324,   402,   338,   312,   536,     0,   250,
     536,   352,    85,     0,     0,   246,     0,   251,   349,     0,
     536,   348,   252
};

/* YYDEFGOTO[NTERM-NUM]. */
static const short int yydefgoto[] =
{
      -1,     1,     2,   383,   384,    63,    64,   432,   258,    65,
     211,    66,    67,   550,   695,   863,    68,    69,   266,    70,
      71,    72,    73,   212,   110,   111,   202,   203,   204,   205,
     584,   536,   191,    75,   434,   239,   271,   685,   686,   240,
     631,   248,   249,   423,   632,   748,   621,   414,   272,   492,
      76,   208,   443,   642,   224,   738,   225,   739,   615,   880,
     554,   551,   795,   376,   378,   583,   808,   261,   388,   607,
     725,   726,   230,   774,   775,   670,   671,   763,   844,   845,
     284,   285,   460,   761,   659,   842,   314,   487,   777,    78,
      79,   361,   544,   793,   542,   792,   400,   603,   877,   587,
     719,   810,   814,    80,    81,    82,    83,    84,    85,    86,
     296,   472,    87,   298,   292,   290,   465,   662,   661,   769,
      88,   291,    89,    90,   214,    92,   215,   216,   371,   553,
     573,   574,   575,   576,   577,   578,   579,   580,   581,   582,
     707,   193,   377,   276,   273,   244,   116,   558,   531,   381,
     221,   419,   420,   449,   389,   223,    96
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -656
static const short int yypact[] =
{
    -656,   105,  2830,  -656,  6404,  9100,  9412,  4589,  5946,  -656,
    7916,  7916,  4251,  -656,  -656,  9204,  6620,  6620,  -656,  -656,
    6620,  5201,  5323,  -656,  -656,  -656,  -656,  7916,  5817,    75,
    -656,    -8,  -656,  -656,  4711,  2371,  -656,  -656,  4834,  -656,
    -656,  -656,  -656,  -656,  8780,  8780,   118,  3685,  7916,  7808,
    8024,  9516,  -656,  5688,  -656,  -656,  -656,     5,    98,   290,
    8888,  8780,  -656,   130,   687,   316,  -656,  -656,   179,   151,
    -656,   150,  9308,  -656,   182, 10548,    48,   172,    32,    72,
    -656,  -656,   196,  -656,  -656,  -656,  -656,  -656,  -656,  -656,
    -656,   187,  -656,   243,   413,    56,  -656,   687,  -656,  -656,
    -656,   189,   226,    75,   429,   440,  7916,    65,  3793,   452,
    -656,    68,  -656,   193,  -656,  -656,    56,  -656,  -656,  -656,
    -656,  -656,  -656,  -656,  -656,  -656,  -656,  -656,  -656,  -656,
    -656,  -656,  -656,  -656,  -656,  -656,  -656,  -656,  -656,  -656,
    -656,   115,   142,   198,   240,  -656,  -656,  -656,  -656,  -656,
    -656,  -656,  -656,  -656,  -656,  -656,  -656,   268,   283,   288,
    -656,   352,  -656,  -656,  -656,  -656,  -656,  -656,  -656,  -656,
    -656,  -656,  -656,  -656,  -656,  -656,  -656,  -656,  -656,  -656,
    -656,  -656,  -656,  -656,  -656,  -656,  -656,  -656,  -656,  -656,
    -656,  -656,  -656,   385,  -656,  -656,  -656,  -656,  -656,  -656,
    -656,  -656,  -656,  -656,  -656,   255,  -656,  -656,  3067,   350,
     316,    95,   335,   236,    49,   386,    86,    95,  -656,  -656,
     130,   175,  -656,   342,  7916,  7916,   428,  -656,  -656,   294,
     469,    82,    88,  8780,  8780,  8780,  8780,  -656, 10548,   414,
    -656,  -656,   383,   388,  -656,  -656,  -656,  4143,  -656,  6728,
    6620,  -656,  -656,  -656,   230,  -656,  -656,   396,   390,  3901,
    -656,   295,   467,   496,  3685,   408,    75,   451,   316,  8780,
      75,   419,    46,    63,  -656,   298,   427,    63,  -656,   505,
    -656,   317,   343,   355,  -656,  -656,  -656,  -656,  -656,  -656,
     398,  -656,   479,   497,   445,   457,   514,   471,    36,   512,
     520,  -656,  -656,  -656,  -656,  4359,  7916,  7916,  7916,  7916,
    6404,  7916,  7916,  -656,  -656,  8132,  -656,  3685,  9516,   463,
    8132,  8780,  8780,  8780,  8780,  8780,  8780,  8780,  8780,  8780,
    8780,  8780,  8780,  8780,  8780,  8780,  8780,  8780,  8780,  8780,
    8780,  8780,  8780,  8780,  8780,  8780,  8780,  2235,  7808,  9678,
    9748,  9748,  -656,  -656,  -656,  -656,  -656,  8888,  8888,  -656,
     502,  -656,   396,   316,  -656,   380,  -656,  -656,  -656,   130,
    -656,  -656,  -656,  9818,  7808,  9748,  3067,  7916,   873,  -656,
    -656,  -656,  -656,   585,   595,   124,  -656,  -656,  3201,   598,
    8780,  9888,  7808,  9958,  8780,  8780,  3469,   401,  4035,  8240,
     618,  -656,   103,   103,   111, 10028,  7808, 10098,  -656,  -656,
     499,  -656,  8780,  6836,  -656,  -656,  6944,  -656,    75,   498,
    -656,  6512,  -656,  -656,   179,    75,   507,    26,   516,  -656,
    -656,  -656,  5946,  -656,  8780,  3901,   509,  9888,  9958,  8780,
      75,   226,   508,    75,  4464,  -656,  -656,  8348,  -656,  -656,
    8024,  -656,  8780,  -656,  -656,  -656,   380, 10168,  7808, 10238,
     995,  -656,  -656,  -656,  -656,  -656,  -656,  -656,  -656,  -656,
    -656,  -656,    61,  -656,  -656,   510,  -656,  8780,  8780,   687,
    -656,  -656,  -656,  -656,  -656,  -656,  -656,    45,  8780,  -656,
     517,   518,  -656,    75,  -656,  -656,  -656,  2694,  -656,  -656,
     467,  1067,  1067,  1067,  1067,   705,   705,  1724,  2353,  1067,
    1067, 10603, 10603,   504,   504, 10531,   705,   705,   575,   575,
     370,    66,    66,   467,   467,   467,  2933,  5445,  2565,  5567,
     226,  -656,   511,   506,  -656,   522,  -656,  5323,  -656,  -656,
    1594,  1594,    45,  -656,    45,  -656, 10548,  -656, 10548,  -656,
    -656,   130,  -656,  7916,  3067,   448,   205,  -656,   226,   523,
     226,   622,    91,   553,  -656,  -656,  -656,  -656,  -656,  -656,
    -656,  -656,  1008,  3067,   130,  -656,   532,  -656,   533,   613,
     540,   623,  -656,  6075,  5946,  -656,  8456,   660,  -656,   515,
    -656,  1126,  4957,  5079,   549,   178,   260,   660,  4035,   668,
     670,  8780,   554,    95,  -656,  -656,  -656,  -656,  -656,  -656,
      85,   108,   555,   112,   113,  7916,   594,  -656,  -656,  8780,
     414,  -656,   566,  8780,   414,  -656,  -656,  -656,  8780, 10444,
     170,  -656,    75,  -656,   569,  -656,  7052,  9748,  9748,  -656,
    -656,  -656,  7916, 10548,   574,  -656, 10548,   271,  -656,  -656,
    -656,  8780,  -656,   448,   205,   573,   589,   627,  1008,  -656,
     572,  3901,   651,  -656,  -656,  -656,   467,   467,  -656,  4467,
    -656,  -656,  -656,  -656,  8564,  -656,  8780,  8780,  8888,  8780,
    -656,   502,   525,  8888,  8888,  -656,  -656,   502,  -656,  -656,
    -656,  -656,  -656,  -656,  -656,    45,  -656,   130,   699,  -656,
    -656,  -656,  8780,    75,   710,  -656,  1008,  -656,  -656,   218,
    -656,  -656,    30,  -656,  -656,  -656,  -656,   517,  -656,   629,
    -656,  3577,   715,  -656,  7916,   723,  -656,  8780,   299,  8780,
    8780,   728,   729,  -656,  -656,  -656,  8672,  3335,  4035,  4035,
     119,   103,   499,  7160,  -656,   499,   499,  7268,    75,  -656,
    7376,  -656,   179,    26,   226,   226,    91,  -656,  4464,   439,
     572,    64,   674,  -656,  -656,   615,  -656,  -656,  -656,  -656,
    -656,  6196,  9620,  -656,   614,   572,   632,  4035,  8780,   616,
   10548, 10548,  -656, 10548, 10548,  -656,  8888,  -656, 10548,  -656,
   10548,  -656,  4035,  3901,  -656,  3067,  -656,  -656,  -656,  -656,
    -656,  -656,   617,   540,  -656,   553,  -656,   540,   873,  9620,
      95,  -656,  -656,  4035,  -656,  -656,    95,  -656,  8780,  -656,
    -656,  8780,   480,   739,   740,  -656,  -656,  8780,  -656,  -656,
    8780,  -656,   630,   631,  -656,  8780,  -656,  -656,  -656,    75,
    4035,  3901,  -656,  -656,   633,  -656,  -656,   702,   672,   634,
     397,   343,   355,  -656,  8996,   649,  -656,   757,  -656,  -656,
   10548,   762,   648,  3901,   766,   218,  -656,  -656,  -656,  3067,
    -656,  3067,  -656,  3201,  -656,  -656,  -656,  -656,  -656,  -656,
    4035, 10466,   499,  7484,  -656,  7592,  -656,   499,  -656,   768,
     653,   674,   380,  9620,   686, 10308,  7808, 10378,  6300,  9620,
    -656,  -656,  -656,  -656,  -656,   655,  -656,   540,   772,   595,
     515,   775,  -656,  -656,  8780,   658,  8780,  -656,  -656,  -656,
    -656,  -656,  9620,   448,   205,   661,    90,   257,   701,   666,
    -656,  -656,  -656,  -656,  -656,  -656,  -656,   499,  7700,  -656,
     499,  -656,   439,  9620,   703,  -656,  8780,  -656,  -656,  9620,
     499,  -656,  -656
};

/* YYPGOTO[NTERM-NUM].  */
static const short int yypgoto[] =
{
    -656,  -656,  -656,  -365,   291,  -656,    37,  -656,  -656,   949,
      53,   -18,  -656,  -515,  -656,  -656,    35,   783,  -163,   -30,
     -71,  -656,   -29,   438,   -75,   793,     9,  -656,   -21,  -656,
    -656,    59,  -656,  1080,  -656,  1909,  -311,    58,  -481,    94,
    -656,    -3,  -656,  -656,  -656,  -656,     4,   276,    11,  -272,
      84,  -656,  -656,  -656,  -656,  -656,  -656,  -656,  -656,  -656,
    -656,  -656,  -656,  -656,  -656,  -656,  -656,    -2,  -211,  -377,
    -110,  -547,  -656,  -656,  -656,  -459,  -656,  -597,  -656,   -90,
     449,  -656,  -656,  -656,  -656,  -656,  -656,  -656,  -656,  -221,
    -656,   724,  -656,  -656,  -656,  -656,  -385,  -656,  -656,  -105,
    -656,  -656,  -656,  -656,  -656,  -656,   730,  -656,  -656,  -656,
    -656,  -656,  -656,  -656,  -656,   534,  -253,  -656,  -656,  -656,
      25,  -656,    28,  -656,    71,   808,  1336,   144,  -656,  -656,
       8,  -430,   121,  -656,  -655,   122,  -656,  -635,  -656,  -615,
    -478,  -656,  -656,  -656,    18,  -393,  1877,  -224,  -656,  -656,
     -19,   -24,   -45,   200,    76,   767,  1200
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -537
static const short int yytable[] =
{
      77,   319,    77,   113,   113,   257,   396,   255,   213,   213,
     213,   561,   599,   229,   213,   213,   189,   267,   213,   252,
     241,   241,   280,   625,   241,   213,   609,   242,   242,   427,
     660,   242,   366,   206,   243,   243,   207,   532,   243,   467,
     722,    97,   301,   473,   304,    77,   213,   213,   499,   281,
     731,   237,   237,   206,   806,   237,   207,   625,   213,   689,
     691,   275,   289,   559,   217,   220,   190,   190,   277,   369,
     281,   803,   776,    91,   807,    91,   114,   114,   114,   362,
     251,   594,   352,   693,   270,   694,   231,   190,   222,   112,
     112,   804,   360,   840,   804,   612,   475,   804,   352,   112,
     710,   440,   713,   -86,   213,     3,    77,   -84,   386,   637,
     -87,   245,   190,   -91,   246,   350,   364,   259,    91,   668,
     365,   461,   282,   530,   569,   537,   540,   541,   311,   312,
     605,  -329,   321,   -89,  -465,   112,   -90,   -86,   -88,   222,
     295,   476,   703,   282,   -85,   570,    94,   655,    94,   115,
     115,   560,   353,   359,   493,   638,   112,   -84,   669,   232,
     251,   351,   256,   839,   462,   463,   785,   530,   353,   537,
     841,   395,   791,   263,   359,  -329,   447,  -329,   855,    91,
     370,   354,   448,   560,   344,   345,   346,   372,   250,   698,
     398,    94,   399,   450,   -91,   283,   663,   354,  -459,   448,
     -86,   397,   218,   -86,   219,   387,    77,   313,   704,   439,
     806,   256,   -76,   606,   560,   -79,   283,  -515,   -83,   664,
     -86,   442,   213,   213,   -86,  -458,   -86,   256,   760,   218,
     907,   219,   -90,   297,   267,   560,   794,   218,   -81,   219,
    -516,   -82,   -78,   -80,  -459,   213,   445,   213,   213,   -77,
     804,   241,    94,   241,   241,   347,   412,    77,   242,   315,
     242,   426,    77,   729,   218,   243,   219,   243,   243,   805,
     -88,  -458,  -465,   689,   691,   875,   373,   402,   403,    91,
     316,  -460,   237,   429,   237,   424,   -86,   267,  -284,   494,
     320,   430,   431,    62,    54,   -84,   222,   489,   557,   348,
     747,   349,   496,    77,   213,   213,   213,   213,    77,   213,
     213,   568,   569,   213,   718,    77,   281,   -76,   213,   391,
     374,   247,   375,  -461,   866,   867,   491,  -460,   357,   868,
      91,   491,  -284,   570,  -284,    91,   571,  -516,   265,   545,
     547,   418,   479,   422,   425,   730,   213,   484,   299,   300,
     625,  -463,    94,   311,   312,   213,   213,   625,   250,   480,
     481,   482,   483,   392,   825,   393,  -462,   -88,   -88,  -461,
     -88,  -453,   213,   626,    77,   213,    91,   405,   437,   -63,
     635,    91,   639,   270,   818,   382,    77,   -88,    91,   282,
     213,   -88,   737,   -88,    77,   647,    77,  -463,   649,   265,
     457,   -73,   112,    94,   213,   385,   529,   -85,    94,   270,
     602,   641,  -462,   754,   755,   753,   598,  -453,   399,   213,
     650,   406,   392,   407,   438,   633,  -464,   270,   452,   932,
     864,   622,   529,    77,   448,  -456,   321,   876,  -277,   634,
      74,   270,    74,   390,   458,   552,   459,    91,   675,    94,
     529,   334,   335,   228,    94,  -512,   213,   206,   461,    91,
     207,    94,   283,  -285,   529,  -388,  -513,    91,   379,    91,
    -464,   394,  -464,   451,  -519,   453,   401,   455,   608,   608,
     895,  -456,  -277,   404,  -277,    74,   342,   343,   344,   345,
     346,   190,   625,   270,   408,   721,   529,   399,   358,   648,
     412,   462,   463,   464,   908,   461,    91,  -285,   469,  -285,
     367,   368,  -453,   413,   380,   435,   529,   701,   416,   417,
      94,   -91,  -388,  -456,   896,  -512,   897,   681,   433,   724,
     721,  -519,    94,   321,   687,  -388,  -513,   690,   692,   461,
      94,   441,    94,   -83,  -519,   625,    74,   446,   462,   463,
     436,   213,    77,   454,  -512,   265,  -453,   461,  -453,   -62,
     456,  -512,   470,   716,  -388,  -513,  -388,  -456,  -388,  -456,
     321,    77,  -513,  -519,   461,  -519,   474,  -519,   477,    94,
    -515,   439,   462,   463,   466,   925,   478,   749,   680,   293,
     294,   683,   715,   495,   549,   585,    77,   491,   773,   871,
     462,   463,   468,   586,   -90,   873,   697,   684,   265,   206,
     786,   590,   207,   213,   -86,  -515,   680,   462,   463,   471,
     342,   343,   344,   345,   346,    91,   -82,   696,   604,   616,
     -88,   627,   700,   -85,   213,   645,   -78,   636,   -73,   682,
     213,   321,   190,   190,    91,   665,    74,  -265,   674,   640,
     705,   699,   -80,  -516,   622,   -77,   334,   335,   799,    77,
     782,   702,   706,   709,   711,   787,   789,   281,   741,    91,
     712,   752,  -515,   560,   714,   721,   213,   728,   733,   589,
     734,   213,   213,   740,   736,  -515,   617,   597,   235,   600,
     341,   342,   343,   344,   345,   346,   743,    74,    94,   750,
     757,   759,    74,   834,   766,   767,   762,   768,   836,   797,
    -516,   837,    42,    43,  -515,   809,  -515,    94,  -515,    77,
     800,  -515,   213,  -516,   813,   843,   644,   306,   307,   308,
     309,   310,    91,   817,   838,    77,    77,    77,   819,   820,
     282,   846,    94,    74,   854,   856,  -266,   865,    74,   878,
     879,   831,  -516,   112,  -516,    74,  -516,   892,   832,  -516,
     883,   885,   901,   891,   894,   833,   893,   902,   859,   850,
     850,   321,   903,   796,   904,    77,   906,   816,   918,   919,
     922,   931,   933,   900,   213,   936,   334,   335,   938,   942,
      77,    77,    91,    77,   888,   943,   944,   949,   227,   117,
     935,   920,   543,   355,   934,    94,   770,   850,    91,    91,
      91,    77,   356,   283,    74,   192,   869,   608,   339,   340,
     341,   342,   343,   344,   345,   346,    74,   801,   802,     0,
     305,     0,     0,     0,    74,     0,    74,     0,    77,    77,
       0,     0,   851,   851,     0,     0,     0,     0,    91,     0,
       0,     0,   281,     0,     0,   112,   112,     0,     0,     0,
       0,    77,     0,    91,    91,    94,    91,    77,     0,    77,
       0,    77,     0,    74,     0,     0,     0,     0,    77,     0,
     851,    94,    94,    94,    91,     0,     0,     0,     0,   732,
       0,   850,     0,   112,   213,     0,   850,   850,   744,     0,
       0,   915,     0,     0,     0,     0,     0,     0,     0,     0,
     751,    91,    91,     0,     0,   852,   852,     0,     0,     0,
     850,    94,     0,     0,   563,   282,   564,   565,   566,   567,
       0,   270,     0,     0,    91,     0,    94,    94,   112,    94,
      91,   850,    91,     0,    91,     0,     0,   850,     0,     0,
       0,    91,   765,   852,   529,     0,     0,    94,     0,   210,
     210,   210,     0,     0,   851,     0,   568,   569,     0,   851,
     851,     0,     0,     0,     0,     0,   253,   112,     0,     0,
       0,     0,   112,   112,    94,    94,     0,     0,   570,     0,
       0,   571,    74,   851,     0,     0,     0,   268,   283,     0,
       0,     0,     0,     0,     0,   572,   112,    94,     0,     0,
       0,    74,   812,    94,   851,    94,     0,    94,   826,     0,
     851,   828,   829,     0,    94,     0,     0,   112,   822,   823,
     824,     0,     0,   112,     0,     0,    74,   852,     0,     0,
       0,     0,   852,   852,     0,     0,   563,     0,   564,   565,
     566,   567,     0,     0,     0,   363,     0,     0,     0,   563,
       0,   564,   565,   566,   567,     0,   852,     0,   857,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   861,   862,     0,     0,   852,   568,   569,
       0,     0,     0,   852,     0,     0,   238,   238,     0,    74,
     238,   568,   569,     0,   872,     0,     0,     0,   884,   886,
     570,     0,     0,   571,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   570,   260,   262,   571,   658,     0,   238,
     238,   889,   890,   321,  -537,  -537,  -537,  -537,   326,   327,
     302,   303,  -537,  -537,     0,     0,     0,     0,   334,   335,
       0,     0,     0,     0,   905,     0,     0,   912,   913,    74,
       0,     0,   909,   917,   910,     0,     0,     0,     0,     0,
     676,   911,     0,   210,   210,    74,    74,    74,   337,   338,
     339,   340,   341,   342,   343,   344,   345,   346,     0,     0,
       0,   939,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,   333,     0,     0,   334,   335,   849,
     853,     0,     0,   945,     0,    74,   947,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   952,     0,     0,     0,
      74,    74,     0,    74,     0,   336,     0,   337,   338,   339,
     340,   341,   342,   343,   344,   345,   346,   870,     0,   274,
     278,    74,     0,     0,     0,   210,   210,   210,   210,     0,
     485,   486,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    74,    74,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    74,     0,     0,     0,     0,     0,    74,     0,    74,
       0,    74,     0,   238,   238,   238,   302,     0,    74,     0,
       0,     0,     0,     0,     0,     0,   562,   238,     0,   238,
     238,   921,     0,     0,     0,     0,   929,   930,    93,     0,
      93,     0,     0,     0,     0,     0,     0,     0,     0,   444,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     941,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     268,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   948,     0,    93,     0,     0,     0,   951,     0,     0,
       0,     0,     0,     0,     0,   238,     0,     0,     0,     0,
     497,   500,   501,   502,   503,   504,   505,   506,   507,   508,
     509,   510,   511,   512,   513,   514,   515,   516,   517,   518,
     519,   520,   521,   522,   523,   524,   525,     0,   238,     0,
       0,     0,     0,     0,     0,     0,     0,   546,   548,     0,
       0,     0,   415,   415,    93,     0,     0,     0,     0,     0,
     428,     0,     0,     0,   238,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     591,     0,   238,     0,   546,   548,     0,     0,     0,   238,
       0,     0,     0,     0,     0,     0,   238,     0,     0,     0,
       0,     0,   238,   238,     0,     0,   238,     0,     0,     0,
       0,   629,   210,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   643,     0,     0,     0,     0,   646,
       0,     0,     0,     0,     0,     0,     0,   238,     0,     0,
     238,     0,   238,     0,     0,     0,     0,     0,   238,     0,
       0,     0,     0,     0,    93,     0,     0,     0,   274,     0,
       0,     0,     0,     0,     0,     0,     0,   666,   667,     0,
       0,     0,     0,     0,   210,     0,     0,     0,   238,     0,
       0,     0,     0,     0,   274,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   588,     0,     0,     0,     0,     0,
       0,   756,   274,     0,  -536,    93,     0,     0,     0,     0,
      93,     0,  -536,  -536,  -536,     0,   274,  -536,  -536,  -536,
     415,  -536,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  -536,     0,     0,     0,     0,   415,     0,     0,     0,
       0,  -536,  -536,     0,  -536,  -536,  -536,  -536,  -536,     0,
       0,    93,     0,     0,     0,     0,    93,     0,     0,     0,
       0,     0,     0,    93,     0,     0,     0,     0,   274,     0,
       0,     0,     0,     0,     0,     0,   238,     0,     0,     0,
       0,     0,     0,   210,     0,     0,     0,  -536,     0,     0,
       0,   238,     0,     0,     0,     0,     0,   672,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   238,
       0,     0,     0,   238,  -536,     0,     0,     0,   238,     0,
       0,     0,    93,     0,     0,     0,   238,     0,     0,     0,
    -536,     0,     0,  -536,    93,     0,   250,  -536,  -536,     0,
    -536,   758,    93,     0,    93,     0,     0,   688,     0,     0,
     688,   688,   672,     0,   672,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   238,     0,   780,   781,   783,   784,
     688,     0,     0,   788,   790,     0,     0,     0,     0,     0,
       0,    93,     0,     0,     0,     0,   708,     0,   708,     0,
     708,     0,   238,     0,     0,     0,   720,   723,     0,   723,
     321,   322,   323,   324,   325,   326,   327,   723,     0,   330,
     331,     0,     0,     0,     0,   334,   335,   783,     0,   788,
     790,     0,     0,     0,     0,     0,   238,     0,     0,     0,
       0,     0,   415,   238,     0,     0,     0,   238,     0,     0,
     238,     0,     0,     0,   415,   337,   338,   339,   340,   341,
     342,   343,   344,   345,   346,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   238,     0,
     764,     0,     0,     0,     0,     0,   860,     0,     0,   764,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    95,
       0,    95,     0,     0,     0,     0,     0,    95,    95,    95,
      93,     0,     0,    95,    95,   672,     0,    95,   860,     0,
       0,   238,     0,     0,    95,     0,     0,   881,     0,    93,
     238,     0,     0,     0,     0,   238,     0,     0,     0,   811,
       0,     0,   815,     0,    95,    95,    95,     0,     0,     0,
       0,     0,     0,     0,    93,     0,     0,    95,     0,     0,
       0,     0,   415,     0,     0,   415,   415,     0,     0,     0,
       0,     0,     0,     0,   688,   688,     0,     0,     0,     0,
     764,     0,     0,   238,     0,   238,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   764,   238,     0,     0,     0,
       0,     0,     0,    95,     0,    95,     0,     0,     0,     0,
       0,     0,     0,     0,   238,     0,   238,    93,     0,     0,
       0,     0,   708,   708,     0,     0,     0,   708,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   238,     0,
       0,     0,   723,     0,     0,     0,   238,     0,     0,     0,
       0,     0,   415,   415,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    93,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    93,    93,    93,     0,     0,     0,     0,
       0,   415,   415,     0,     0,    95,     0,   415,     0,     0,
       0,     0,     0,     0,     0,     0,   274,     0,     0,     0,
       0,    95,    95,     0,     0,     0,     0,   708,     0,   588,
     723,     0,     0,    93,     0,   415,     0,     0,     0,     0,
       0,     0,     0,     0,    95,     0,    95,    95,    93,    93,
       0,    93,     0,     0,     0,     0,    95,   415,     0,     0,
     415,    95,   409,   410,   411,     0,     0,     0,     0,    93,
     415,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    93,    93,     0,     0,
       0,     0,    95,    95,    95,    95,    95,    95,    95,    95,
       0,     0,    95,     0,    95,     0,     0,    95,     0,    93,
       0,     0,     0,     0,     0,    93,     0,    93,     0,    93,
       0,     0,     0,     0,     0,     0,    93,     0,     0,     0,
       0,     0,     0,     0,   490,    95,     0,     0,     0,   498,
       0,     0,     0,     0,    95,    95,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    95,     0,    95,    95,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    95,     0,     0,     0,    95,
       0,     0,     0,    95,     0,    95,     0,     0,     0,     0,
       0,     0,     0,    95,     0,     0,   526,   527,     0,     0,
     528,     0,     0,     0,     0,     0,     0,     0,    95,   162,
     163,   164,   165,   166,   167,     0,   168,   169,   498,     0,
     170,     0,    95,     0,   171,   172,   173,   174,     0,     0,
       0,   618,   620,     0,     0,   624,     0,     0,   175,     0,
     630,     0,     0,     0,     0,    95,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   652,     0,   186,   624,
       0,   652,     0,     0,     0,     0,   187,     0,     0,     0,
       0,  -278,     0,     0,     0,     0,     0,     0,     0,  -278,
    -278,  -278,     0,     0,  -278,  -278,  -278,     0,  -278,     0,
       0,     0,     0,     0,     0,     0,     0,   673,  -278,  -278,
    -278,     0,     0,     0,     0,     0,     0,     0,  -278,  -278,
       0,  -278,  -278,  -278,  -278,  -278,     0,     0,     0,   321,
     322,   323,   324,   325,   326,   327,   328,     0,   330,   331,
      95,    95,     0,     0,   334,   335,     0,  -278,  -278,  -278,
    -278,  -278,  -278,  -278,  -278,  -278,  -278,  -278,  -278,  -278,
      95,     0,  -278,  -278,  -278,     0,     0,  -278,     0,     0,
       0,     0,     0,  -278,   337,   338,   339,   340,   341,   342,
     343,   344,   345,   346,     0,    95,     0,  -278,     0,     0,
    -278,  -278,  -278,  -278,  -278,  -278,  -278,  -278,  -278,  -278,
    -278,  -278,    95,     0,     0,   717,     0,  -278,  -278,  -278,
    -278,  -278,     0,     0,  -278,  -278,     0,  -278,     0,     0,
     735,     0,     0,    95,     0,     0,     0,     0,     0,    95,
       0,     0,     0,     0,     0,     0,     0,     0,   742,     0,
       0,     0,   745,     0,     0,     0,     0,   746,    95,     0,
       0,     0,     0,     0,     0,   620,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    95,     0,     0,     0,     0,
      95,    95,     0,     0,     0,  -284,     0,     0,     0,     0,
       0,     0,     0,  -284,  -284,  -284,     0,     0,     0,  -284,
    -284,     0,  -284,   779,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    95,     0,
       0,    95,  -284,  -284,     0,  -284,  -284,  -284,  -284,  -284,
       0,   798,     0,     0,    95,    95,    95,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  -284,  -284,  -284,  -284,  -284,  -284,  -284,  -284,  -284,
    -284,  -284,  -284,  -284,     0,   652,  -284,  -284,  -284,     0,
     679,     0,   624,     0,    95,     0,     0,     0,     0,   624,
       0,     0,     0,    95,     0,     0,     0,     0,     0,    95,
      95,     0,    95,   -89,  -284,     0,  -284,  -284,  -284,  -284,
    -284,  -284,  -284,  -284,  -284,  -284,     0,   858,     0,     0,
      95,  -284,  -284,     0,  -284,   -81,     0,     0,  -284,  -284,
       0,  -284,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    95,    95,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     874,     0,     0,     0,     0,     0,     0,     0,   676,   882,
      95,     0,     0,     0,   887,     0,    95,     0,    95,     0,
      95,     0,     0,     0,     0,     0,     0,    95,     0,     0,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   332,   333,    95,     0,   334,   335,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   620,     0,   624,     0,     0,     0,     0,     0,
       0,     0,     0,   336,     0,   337,   338,   339,   340,   341,
     342,   343,   344,   345,   346,     0,     0,     0,     0,     0,
       0,     0,     0,   937,  -221,   940,     0,     0,     0,     0,
    -536,     4,     0,     5,     6,     7,     8,     9,     0,     0,
       0,    10,    11,     0,     0,     0,    12,   624,    13,    14,
      15,    16,    17,    18,    19,   950,     0,     0,     0,     0,
      20,    21,    22,    23,    24,    25,    26,     0,     0,    27,
       0,     0,     0,     0,     0,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,     0,    40,    41,
       0,    42,    43,     0,    44,    45,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    46,     0,     0,    47,    48,     0,
      49,    50,     0,    51,     0,    52,     0,    53,    54,    55,
      56,    57,    58,  -519,     0,     0,     0,     0,     0,     0,
       0,  -519,  -519,  -519,     0,     0,     0,  -519,  -519,     0,
    -519,    59,    60,    61,     0,     0,     0,     0,     0,  -519,
       0,     0,     0,     0,  -536,     0,  -536,     0,     0,     0,
    -519,  -519,     0,  -519,  -519,  -519,  -519,  -519,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  -519,
    -519,  -519,  -519,  -519,  -519,  -519,  -519,  -519,  -519,  -519,
    -519,  -519,     0,     0,  -519,  -519,  -519,     0,   678,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  -519,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -87,  -519,     0,  -519,  -519,  -519,  -519,  -519,  -519,
    -519,  -519,  -519,  -519,     0,     0,     0,     0,  -519,  -519,
    -519,     0,  -519,   -79,     0,     0,  -519,  -519,     4,  -519,
       5,     6,     7,     8,     9,  -536,  -536,  -536,    10,    11,
       0,     0,  -536,    12,     0,    13,    14,    15,    16,    17,
      18,    19,     0,     0,     0,     0,     0,    20,    21,    22,
      23,    24,    25,    26,     0,     0,    27,     0,     0,     0,
       0,     0,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,     0,    40,    41,     0,    42,    43,
       0,    44,    45,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    46,     0,     0,    47,    48,     0,    49,    50,     0,
      51,     0,    52,     0,    53,    54,    55,    56,    57,    58,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    59,    60,
      61,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  -536,     4,  -536,     5,     6,     7,     8,     9,     0,
       0,  -536,    10,    11,     0,  -536,  -536,    12,     0,    13,
      14,    15,    16,    17,    18,    19,     0,     0,     0,     0,
       0,    20,    21,    22,    23,    24,    25,    26,     0,     0,
      27,     0,     0,     0,     0,     0,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,     0,    40,
      41,     0,    42,    43,     0,    44,    45,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    46,     0,     0,    47,    48,
       0,    49,    50,     0,    51,     0,    52,     0,    53,    54,
      55,    56,    57,    58,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    59,    60,    61,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -536,     4,  -536,     5,     6,
       7,     8,     9,     0,     0,  -536,    10,    11,     0,     0,
    -536,    12,  -536,    13,    14,    15,    16,    17,    18,    19,
       0,     0,     0,     0,     0,    20,    21,    22,    23,    24,
      25,    26,     0,     0,    27,     0,     0,     0,     0,     0,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,     0,    40,    41,     0,    42,    43,     0,    44,
      45,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    46,
       0,     0,    47,    48,     0,    49,    50,     0,    51,     0,
      52,     0,    53,    54,    55,    56,    57,    58,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    59,    60,    61,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  -536,
       4,  -536,     5,     6,     7,     8,     9,     0,     0,  -536,
      10,    11,     0,     0,  -536,    12,     0,    13,    14,    15,
      16,    17,    18,    19,     0,     0,     0,     0,     0,    20,
      21,    22,    23,    24,    25,    26,     0,     0,    27,     0,
       0,     0,     0,     0,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,     0,    40,    41,     0,
      42,    43,     0,    44,    45,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    46,     0,     0,    47,    48,     0,    49,
      50,     0,    51,     0,    52,     0,    53,    54,    55,    56,
      57,    58,     0,     0,     0,     0,     0,     0,     4,     0,
       5,     6,     7,     8,     9,     0,  -536,  -536,    10,    11,
      59,    60,    61,    12,     0,    13,    14,    15,    16,    17,
      18,    19,     0,  -536,     0,  -536,     0,    20,    21,    22,
      23,    24,    25,    26,     0,     0,    27,     0,     0,     0,
       0,     0,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,     0,    40,    41,     0,    42,    43,
       0,    44,    45,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    46,     0,     0,    47,    48,     0,    49,    50,     0,
      51,     0,    52,     0,    53,    54,    55,    56,    57,    58,
       0,     0,     0,     0,     0,     0,     4,     0,     5,     6,
       7,     8,     9,     0,     0,     0,    10,    11,    59,    60,
      61,    12,     0,    13,    14,    15,    16,    17,    18,    19,
       0,  -536,     0,  -536,     0,    20,    21,    22,    23,    24,
      25,    26,     0,     0,    27,     0,     0,     0,     0,     0,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,     0,    40,    41,     0,    42,    43,     0,    44,
      45,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    46,
       0,     0,   264,    48,     0,    49,    50,     0,    51,     0,
      52,     0,    53,    54,    55,    56,    57,    58,     0,     0,
       0,     0,     0,     0,     4,     0,     5,     6,     7,     8,
       9,     0,     0,     0,    10,    11,    59,    60,    61,    12,
       0,    13,    14,    15,    16,    17,    18,    19,  -536,  -536,
       0,  -536,     0,    20,    21,    22,    23,    24,    25,    26,
       0,     0,    27,     0,     0,     0,     0,     0,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
       0,    40,    41,     0,    42,    43,     0,    44,    45,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    46,     0,     0,
      47,    48,     0,    49,    50,     0,    51,     0,    52,     0,
      53,    54,    55,    56,    57,    58,     0,     0,     0,     0,
       0,     0,     4,     0,     5,     6,     7,     8,     9,     0,
       0,     0,    10,    11,    59,    60,    61,    12,     0,    13,
      14,    15,    16,    17,    18,    19,  -536,  -536,     0,  -536,
       0,    20,    21,    22,    23,    24,    25,    26,     0,     0,
      27,     0,     0,     0,     0,     0,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,     0,    40,
      41,     0,    42,    43,     0,    44,    45,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    46,     0,     0,    47,    48,
       0,    49,    50,     0,    51,     0,    52,     0,    53,    54,
      55,    56,    57,    58,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    59,    60,    61,     0,     0,  -536,     0,     0,
       0,     0,     0,     0,     0,  -536,     4,  -536,     5,     6,
       7,     8,     9,     0,     0,  -536,    10,    11,     0,     0,
       0,    12,     0,    13,    14,    15,    16,    17,    18,    19,
       0,     0,     0,     0,     0,    20,    21,    22,    23,    24,
      25,    26,     0,     0,    27,     0,     0,     0,     0,     0,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,     0,    40,    41,     0,    42,    43,     0,    44,
      45,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    46,
       0,     0,    47,    48,     0,    49,    50,     0,    51,     0,
      52,     0,    53,    54,    55,    56,    57,    58,     0,     0,
       0,     0,     0,     0,     0,     0,     5,     6,     7,     0,
       9,     0,     0,     0,    10,    11,    59,    60,    61,    12,
       0,    13,    14,    15,    98,    99,    18,    19,     0,  -536,
       0,  -536,     0,   100,    21,    22,    23,    24,    25,    26,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    29,
       0,     0,    32,    33,    34,    35,    36,    37,    38,    39,
     233,    40,    41,     0,    42,    43,     0,    44,    45,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   209,     0,     0,
     108,    48,     0,    49,    50,     0,   234,   235,    52,     0,
      53,    54,    55,    56,    57,    58,     0,     0,     0,     0,
       0,     0,     0,     0,     5,     6,     7,     0,     9,     0,
       0,     0,    10,    11,    59,   236,    61,    12,     0,    13,
      14,    15,    16,    17,    18,    19,     0,     0,     0,   256,
       0,    20,    21,    22,    23,    24,    25,    26,     0,     0,
      27,     0,     0,     0,     0,     0,     0,    29,     0,     0,
      32,    33,    34,    35,    36,    37,    38,    39,     0,    40,
      41,     0,    42,    43,     0,    44,    45,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   209,     0,     0,   108,    48,
       0,    49,    50,     0,     0,     0,    52,     0,    53,    54,
      55,    56,    57,    58,     0,     0,     0,     0,     0,     0,
       0,     0,     5,     6,     7,     8,     9,     0,     0,     0,
      10,    11,    59,    60,    61,    12,     0,    13,    14,    15,
      16,    17,    18,    19,     0,   218,     0,   219,     0,    20,
      21,    22,    23,    24,    25,    26,     0,     0,    27,     0,
       0,     0,     0,     0,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,     0,    40,    41,     0,
      42,    43,     0,    44,    45,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    46,     0,     0,    47,    48,     0,    49,
      50,     0,    51,     0,    52,     0,    53,    54,    55,    56,
      57,    58,     0,     0,     0,     0,     0,     0,     0,     0,
       5,     6,     7,     0,     9,     0,     0,     0,    10,    11,
      59,    60,    61,    12,     0,    13,    14,    15,    98,    99,
      18,    19,     0,   401,     0,     0,     0,   100,   101,   102,
      23,    24,    25,    26,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   103,     0,     0,    32,    33,    34,    35,
      36,    37,    38,    39,     0,    40,    41,     0,    42,    43,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   332,   333,     0,     0,   334,   335,     0,     0,     0,
       0,   279,     0,     0,   317,    48,     0,    49,    50,     0,
     771,   772,    52,     0,    53,    54,    55,    56,    57,    58,
       0,     0,     0,   336,     0,   337,   338,   339,   340,   341,
     342,   343,   344,   345,   346,     0,     0,     0,   109,     0,
       0,     0,   118,   119,   120,   121,   122,   123,   124,   125,
     256,   762,   126,   127,   128,   129,   130,     0,     0,   131,
     132,   133,   134,   135,   136,   137,     0,     0,     0,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,    36,    37,   161,    39,     0,     0,     0,     0,
       0,     0,     0,   162,   163,   164,   165,   166,   167,     0,
     168,   169,     0,     0,   170,     0,     0,     0,   171,   172,
     173,   174,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   175,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
       0,     0,   186,     0,  -512,  -512,  -512,     0,  -512,     0,
     187,   188,  -512,  -512,     0,     0,     0,  -512,     0,  -512,
    -512,  -512,  -512,  -512,  -512,  -512,     0,  -512,     0,     0,
       0,  -512,  -512,  -512,  -512,  -512,  -512,  -512,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  -512,     0,     0,
    -512,  -512,  -512,  -512,  -512,  -512,  -512,  -512,  -512,  -512,
    -512,     0,  -512,  -512,     0,  -512,  -512,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -512,     0,     0,  -512,  -512,
       0,  -512,  -512,     0,  -512,  -512,  -512,  -512,  -512,  -512,
    -512,  -512,  -512,  -512,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -512,  -512,  -512,     0,  -512,  -513,  -513,  -513,
       0,  -513,     0,  -512,     0,  -513,  -513,     0,     0,     0,
    -513,     0,  -513,  -513,  -513,  -513,  -513,  -513,  -513,     0,
    -513,     0,     0,     0,  -513,  -513,  -513,  -513,  -513,  -513,
    -513,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -513,     0,     0,  -513,  -513,  -513,  -513,  -513,  -513,  -513,
    -513,  -513,  -513,  -513,     0,  -513,  -513,     0,  -513,  -513,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  -513,     0,
       0,  -513,  -513,     0,  -513,  -513,     0,  -513,  -513,  -513,
    -513,  -513,  -513,  -513,  -513,  -513,  -513,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -513,  -513,  -513,     0,  -513,
    -515,  -515,  -515,     0,  -515,     0,  -513,     0,  -515,  -515,
       0,     0,     0,  -515,     0,  -515,  -515,  -515,  -515,  -515,
    -515,  -515,     0,     0,     0,     0,     0,  -515,  -515,  -515,
    -515,  -515,  -515,  -515,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  -515,     0,     0,  -515,  -515,  -515,  -515,
    -515,  -515,  -515,  -515,  -515,  -515,  -515,     0,  -515,  -515,
       0,  -515,  -515,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  -515,   727,     0,  -515,  -515,     0,  -515,  -515,     0,
    -515,  -515,  -515,     0,  -515,  -515,  -515,  -515,  -515,  -515,
       0,     0,     0,     0,     0,   -87,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  -515,  -515,
    -515,     0,  -516,  -516,  -516,     0,  -516,     0,     0,  -515,
    -516,  -516,     0,     0,     0,  -516,     0,  -516,  -516,  -516,
    -516,  -516,  -516,  -516,     0,     0,     0,     0,     0,  -516,
    -516,  -516,  -516,  -516,  -516,  -516,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -516,     0,     0,  -516,  -516,
    -516,  -516,  -516,  -516,  -516,  -516,  -516,  -516,  -516,     0,
    -516,  -516,     0,  -516,  -516,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  -516,   679,     0,  -516,  -516,     0,  -516,
    -516,     0,  -516,  -516,  -516,     0,  -516,  -516,  -516,  -516,
    -516,  -516,     0,     0,     0,     0,     0,   -89,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -516,  -516,  -516,     0,  -255,  -255,  -255,     0,  -255,     0,
       0,  -516,  -255,  -255,     0,     0,     0,  -255,     0,  -255,
    -255,  -255,  -255,  -255,  -255,  -255,     0,     0,     0,     0,
       0,  -255,  -255,  -255,  -255,  -255,  -255,  -255,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  -255,     0,     0,
    -255,  -255,  -255,  -255,  -255,  -255,  -255,  -255,  -255,  -255,
    -255,     0,  -255,  -255,     0,  -255,  -255,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -255,     0,     0,  -255,  -255,
       0,  -255,  -255,     0,  -255,  -255,  -255,     0,  -255,  -255,
    -255,  -255,  -255,  -255,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -255,  -255,  -255,     0,  -255,  -255,  -255,     0,
    -255,     0,     0,   247,  -255,  -255,     0,     0,     0,  -255,
       0,  -255,  -255,  -255,  -255,  -255,  -255,  -255,     0,     0,
       0,     0,     0,  -255,  -255,  -255,  -255,  -255,  -255,  -255,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  -255,
       0,     0,  -255,  -255,  -255,  -255,  -255,  -255,  -255,  -255,
    -255,  -255,  -255,     0,  -255,  -255,     0,  -255,  -255,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  -255,     0,     0,
    -255,  -255,     0,  -255,  -255,     0,  -255,  -255,  -255,     0,
    -255,  -255,  -255,  -255,  -255,  -255,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  -255,  -255,  -255,     0,  -517,  -517,
    -517,     0,  -517,     0,     0,   250,  -517,  -517,     0,     0,
       0,  -517,     0,  -517,  -517,  -517,  -517,  -517,  -517,  -517,
       0,     0,     0,     0,     0,  -517,  -517,  -517,  -517,  -517,
    -517,  -517,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  -517,     0,     0,  -517,  -517,  -517,  -517,  -517,  -517,
    -517,  -517,  -517,  -517,  -517,     0,  -517,  -517,     0,  -517,
    -517,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  -517,
       0,     0,  -517,  -517,     0,  -517,  -517,     0,  -517,  -517,
    -517,     0,  -517,  -517,  -517,  -517,  -517,  -517,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  -517,  -517,  -517,     0,
    -518,  -518,  -518,     0,  -518,     0,     0,  -517,  -518,  -518,
       0,     0,     0,  -518,     0,  -518,  -518,  -518,  -518,  -518,
    -518,  -518,     0,     0,     0,     0,     0,  -518,  -518,  -518,
    -518,  -518,  -518,  -518,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  -518,     0,     0,  -518,  -518,  -518,  -518,
    -518,  -518,  -518,  -518,  -518,  -518,  -518,     0,  -518,  -518,
       0,  -518,  -518,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  -518,     0,     0,  -518,  -518,     0,  -518,  -518,     0,
    -518,  -518,  -518,     0,  -518,  -518,  -518,  -518,  -518,  -518,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  -518,  -518,
    -518,   118,   119,   120,   121,   122,   123,   124,   125,  -518,
       0,   126,   127,   128,   129,   130,     0,     0,   131,   132,
     133,   134,   135,   136,   137,     0,     0,     0,   138,   139,
     140,   194,   195,   196,   197,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   198,   199,   200,
     160,   286,   287,   201,   288,     0,     0,     0,     0,     0,
       0,     0,   162,   163,   164,   165,   166,   167,     0,   168,
     169,     0,     0,   170,     0,     0,     0,   171,   172,   173,
     174,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   175,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,     0,
       0,   186,     0,     0,     0,     0,     0,     0,     0,   187,
     118,   119,   120,   121,   122,   123,   124,   125,     0,     0,
     126,   127,   128,   129,   130,     0,     0,   131,   132,   133,
     134,   135,   136,   137,     0,     0,     0,   138,   139,   140,
     194,   195,   196,   197,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   198,   199,   200,   160,
     254,     0,   201,     0,     0,     0,     0,     0,     0,     0,
       0,   162,   163,   164,   165,   166,   167,     0,   168,   169,
       0,     0,   170,     0,     0,     0,   171,   172,   173,   174,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     175,     0,     0,     0,    53,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,     0,     0,
     186,     0,     0,     0,     0,     0,     0,     0,   187,   118,
     119,   120,   121,   122,   123,   124,   125,     0,     0,   126,
     127,   128,   129,   130,     0,     0,   131,   132,   133,   134,
     135,   136,   137,     0,     0,     0,   138,   139,   140,   194,
     195,   196,   197,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   198,   199,   200,   160,     0,
       0,   201,     0,     0,     0,     0,     0,     0,     0,     0,
     162,   163,   164,   165,   166,   167,     0,   168,   169,     0,
       0,   170,     0,     0,     0,   171,   172,   173,   174,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   175,
       0,     0,     0,    53,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,     0,     0,   186,
       0,     0,     0,     0,     0,     0,     0,   187,   118,   119,
     120,   121,   122,   123,   124,   125,     0,     0,   126,   127,
     128,   129,   130,     0,     0,   131,   132,   133,   134,   135,
     136,   137,     0,     0,     0,   138,   139,   140,   194,   195,
     196,   197,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   198,   199,   200,   160,     0,     0,
     201,     0,     0,     0,     0,     0,     0,     0,     0,   162,
     163,   164,   165,   166,   167,     0,   168,   169,     0,     0,
     170,     0,     0,     0,   171,   172,   173,   174,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   175,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,     0,     0,   186,     5,
       6,     7,     0,     9,     0,     0,   187,    10,    11,     0,
       0,     0,    12,     0,    13,    14,    15,    98,    99,    18,
      19,     0,     0,     0,     0,     0,   100,   101,   102,    23,
      24,    25,    26,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   103,     0,     0,    32,    33,    34,    35,    36,
      37,    38,    39,     0,    40,    41,     0,    42,    43,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     847,     0,     0,   108,    48,     0,    49,    50,     0,     0,
       0,    52,     0,    53,    54,    55,    56,    57,    58,     0,
       0,     0,     0,     5,     6,     7,     0,     9,     0,     0,
       0,    10,    11,     0,     0,     0,    12,   109,    13,    14,
      15,    98,    99,    18,    19,     0,   848,     0,     0,     0,
     100,   101,   102,    23,    24,    25,    26,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   103,     0,     0,    32,
      33,    34,    35,    36,    37,    38,    39,     0,    40,    41,
       0,    42,    43,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   847,     0,     0,   108,    48,     0,
      49,    50,     0,     0,     0,    52,     0,    53,    54,    55,
      56,    57,    58,     0,     0,     0,     0,     5,     6,     7,
       8,     9,     0,     0,     0,    10,    11,     0,     0,     0,
      12,   109,    13,    14,    15,    16,    17,    18,    19,     0,
     928,     0,     0,     0,    20,    21,    22,    23,    24,    25,
      26,     0,     0,    27,     0,     0,     0,     0,     0,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,     0,    40,    41,     0,    42,    43,     0,    44,    45,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    46,     0,
       0,    47,    48,     0,    49,    50,     0,    51,     0,    52,
       0,    53,    54,    55,    56,    57,    58,     0,     0,     0,
       0,     0,     0,     0,     0,     5,     6,     7,     0,     9,
       0,     0,     0,    10,    11,    59,    60,    61,    12,     0,
      13,    14,    15,    16,    17,    18,    19,     0,     0,     0,
       0,     0,    20,    21,    22,    23,    24,    25,    26,     0,
       0,    27,     0,     0,     0,     0,     0,     0,    29,     0,
       0,    32,    33,    34,    35,    36,    37,    38,    39,   233,
      40,    41,     0,    42,    43,     0,    44,    45,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   209,     0,     0,   108,
      48,     0,    49,    50,     0,   628,   235,    52,     0,    53,
      54,    55,    56,    57,    58,     0,     0,     0,     0,     0,
       0,     0,     0,     5,     6,     7,     0,     9,     0,     0,
       0,    10,    11,    59,    60,    61,    12,     0,    13,    14,
      15,    98,    99,    18,    19,     0,     0,     0,     0,     0,
     100,    21,    22,    23,    24,    25,    26,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    29,     0,     0,    32,
      33,    34,    35,    36,    37,    38,    39,   233,    40,    41,
       0,    42,    43,     0,    44,    45,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   209,     0,     0,   108,    48,     0,
      49,    50,     0,   234,   235,    52,     0,    53,    54,    55,
      56,    57,    58,     0,     0,     0,     0,     0,     0,     0,
       0,     5,     6,     7,     0,     9,     0,     0,     0,    10,
      11,    59,   236,    61,    12,     0,    13,    14,    15,    98,
      99,    18,    19,     0,     0,     0,     0,     0,   100,    21,
      22,    23,    24,    25,    26,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    29,     0,     0,    32,    33,    34,
      35,    36,    37,    38,    39,   233,    40,    41,     0,    42,
      43,     0,    44,    45,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   209,     0,     0,   108,   421,     0,    49,    50,
       0,   234,   235,    52,     0,    53,    54,    55,    56,    57,
      58,     0,     0,     0,     0,     0,     0,     0,     0,     5,
       6,     7,     0,     9,     0,     0,     0,    10,    11,    59,
     236,    61,    12,     0,    13,    14,    15,    98,    99,    18,
      19,     0,     0,     0,     0,     0,   100,   101,   102,    23,
      24,    25,    26,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    29,     0,     0,    32,    33,    34,    35,    36,
      37,    38,    39,   233,    40,    41,     0,    42,    43,     0,
      44,    45,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     209,     0,     0,   108,    48,     0,    49,    50,     0,   619,
     235,    52,     0,    53,    54,    55,    56,    57,    58,     0,
       0,     0,     0,     0,     0,     0,     0,     5,     6,     7,
       0,     9,     0,     0,     0,    10,    11,    59,   236,    61,
      12,     0,    13,    14,    15,    98,    99,    18,    19,     0,
       0,     0,     0,     0,   100,   101,   102,    23,    24,    25,
      26,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      29,     0,     0,    32,    33,    34,    35,    36,    37,    38,
      39,   233,    40,    41,     0,    42,    43,     0,    44,    45,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   209,     0,
       0,   108,    48,     0,    49,    50,     0,   623,   235,    52,
       0,    53,    54,    55,    56,    57,    58,     0,     0,     0,
       0,     0,     0,     0,     0,     5,     6,     7,     0,     9,
       0,     0,     0,    10,    11,    59,   236,    61,    12,     0,
      13,    14,    15,    98,    99,    18,    19,     0,     0,     0,
       0,     0,   100,    21,    22,    23,    24,    25,    26,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    29,     0,
       0,    32,    33,    34,    35,    36,    37,    38,    39,   233,
      40,    41,     0,    42,    43,     0,    44,    45,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   209,     0,     0,   108,
      48,     0,    49,    50,     0,   619,   235,    52,     0,    53,
      54,    55,    56,    57,    58,     0,     0,     0,     0,     0,
       0,     0,     0,     5,     6,     7,     0,     9,     0,     0,
       0,    10,    11,    59,   236,    61,    12,     0,    13,    14,
      15,    98,    99,    18,    19,     0,     0,     0,     0,     0,
     100,   101,   102,    23,    24,    25,    26,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    29,     0,     0,    32,
      33,    34,    35,    36,    37,    38,    39,   233,    40,    41,
       0,    42,    43,     0,    44,    45,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   209,     0,     0,   108,    48,     0,
      49,    50,     0,   827,   235,    52,     0,    53,    54,    55,
      56,    57,    58,     0,     0,     0,     0,     0,     0,     0,
       0,     5,     6,     7,     0,     9,     0,     0,     0,    10,
      11,    59,   236,    61,    12,     0,    13,    14,    15,    98,
      99,    18,    19,     0,     0,     0,     0,     0,   100,   101,
     102,    23,    24,    25,    26,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    29,     0,     0,    32,    33,    34,
      35,    36,    37,    38,    39,   233,    40,    41,     0,    42,
      43,     0,    44,    45,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   209,     0,     0,   108,    48,     0,    49,    50,
       0,   830,   235,    52,     0,    53,    54,    55,    56,    57,
      58,     0,     0,     0,     0,     0,     0,     0,     0,     5,
       6,     7,     0,     9,     0,     0,     0,    10,    11,    59,
     236,    61,    12,     0,    13,    14,    15,    98,    99,    18,
      19,     0,     0,     0,     0,     0,   100,   101,   102,    23,
      24,    25,    26,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    29,     0,     0,    32,    33,    34,    35,    36,
      37,    38,    39,   233,    40,    41,     0,    42,    43,     0,
      44,    45,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     209,     0,     0,   108,    48,     0,    49,    50,     0,   835,
     235,    52,     0,    53,    54,    55,    56,    57,    58,     0,
       0,     0,     0,     0,     0,     0,     0,     5,     6,     7,
       0,     9,     0,     0,     0,    10,    11,    59,   236,    61,
      12,     0,    13,    14,    15,    98,    99,    18,    19,     0,
       0,     0,     0,     0,   100,   101,   102,    23,    24,    25,
      26,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      29,     0,     0,    32,    33,    34,    35,    36,    37,    38,
      39,   233,    40,    41,     0,    42,    43,     0,    44,    45,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   209,     0,
       0,   108,    48,     0,    49,    50,     0,   914,   235,    52,
       0,    53,    54,    55,    56,    57,    58,     0,     0,     0,
       0,     0,     0,     0,     0,     5,     6,     7,     0,     9,
       0,     0,     0,    10,    11,    59,   236,    61,    12,     0,
      13,    14,    15,    98,    99,    18,    19,     0,     0,     0,
       0,     0,   100,   101,   102,    23,    24,    25,    26,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    29,     0,
       0,    32,    33,    34,    35,    36,    37,    38,    39,   233,
      40,    41,     0,    42,    43,     0,    44,    45,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   209,     0,     0,   108,
      48,     0,    49,    50,     0,   916,   235,    52,     0,    53,
      54,    55,    56,    57,    58,     0,     0,     0,     0,     0,
       0,     0,     0,     5,     6,     7,     0,     9,     0,     0,
       0,    10,    11,    59,   236,    61,    12,     0,    13,    14,
      15,    98,    99,    18,    19,     0,     0,     0,     0,     0,
     100,   101,   102,    23,    24,    25,    26,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    29,     0,     0,    32,
      33,    34,    35,    36,    37,    38,    39,   233,    40,    41,
       0,    42,    43,     0,    44,    45,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   209,     0,     0,   108,    48,     0,
      49,    50,     0,   946,   235,    52,     0,    53,    54,    55,
      56,    57,    58,     0,     0,     0,     0,     0,     0,     0,
       0,     5,     6,     7,     0,     9,     0,     0,     0,    10,
      11,    59,   236,    61,    12,     0,    13,    14,    15,    98,
      99,    18,    19,     0,     0,     0,     0,     0,   100,    21,
      22,    23,    24,    25,    26,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    29,     0,     0,    32,    33,    34,
      35,    36,    37,    38,    39,   233,    40,    41,     0,    42,
      43,     0,    44,    45,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   209,     0,     0,   108,    48,     0,    49,    50,
       0,   269,     0,    52,     0,    53,    54,    55,    56,    57,
      58,     0,     0,     0,     0,     0,     0,     0,     0,     5,
       6,     7,     0,     9,     0,     0,     0,    10,    11,    59,
     236,    61,    12,     0,    13,    14,    15,    16,    17,    18,
      19,     0,     0,     0,     0,     0,    20,    21,    22,    23,
      24,    25,    26,     0,     0,    27,     0,     0,     0,     0,
       0,     0,    29,     0,     0,    32,    33,    34,    35,    36,
      37,    38,    39,     0,    40,    41,     0,    42,    43,     0,
      44,    45,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     209,     0,     0,   108,    48,     0,    49,    50,     0,     0,
       0,    52,     0,    53,    54,    55,    56,    57,    58,     0,
       0,     0,     0,     0,     0,     0,     0,     5,     6,     7,
       0,     9,     0,     0,     0,    10,    11,    59,    60,    61,
      12,     0,    13,    14,    15,    98,    99,    18,    19,     0,
       0,     0,     0,     0,   100,   101,   102,    23,    24,    25,
      26,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      29,     0,     0,    32,    33,    34,    35,    36,    37,    38,
      39,   233,    40,    41,     0,    42,    43,     0,    44,    45,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   209,     0,
       0,   108,    48,     0,    49,    50,     0,     0,     0,    52,
       0,    53,    54,    55,    56,    57,    58,     0,     0,     0,
       0,     0,     0,     0,     0,     5,     6,     7,     0,     9,
       0,     0,     0,    10,    11,    59,   236,    61,    12,     0,
      13,    14,    15,    16,    17,    18,    19,     0,     0,     0,
       0,     0,    20,    21,    22,    23,    24,    25,    26,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    29,     0,
       0,    32,    33,    34,    35,    36,    37,    38,    39,     0,
      40,    41,     0,    42,    43,     0,    44,    45,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   209,     0,     0,   108,
      48,     0,    49,    50,     0,   488,     0,    52,     0,    53,
      54,    55,    56,    57,    58,     0,     0,     0,     0,     0,
       0,     0,     0,     5,     6,     7,     0,     9,     0,     0,
       0,    10,    11,    59,   236,    61,    12,     0,    13,    14,
      15,    98,    99,    18,    19,     0,     0,     0,     0,     0,
     100,   101,   102,    23,    24,    25,    26,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    29,     0,     0,    32,
      33,    34,    35,    36,    37,    38,    39,     0,    40,    41,
       0,    42,    43,     0,    44,    45,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   209,     0,     0,   108,    48,     0,
      49,    50,     0,   601,     0,    52,     0,    53,    54,    55,
      56,    57,    58,     0,     0,     0,     0,     0,     0,     0,
       0,     5,     6,     7,     0,     9,     0,     0,     0,    10,
      11,    59,   236,    61,    12,     0,    13,    14,    15,    98,
      99,    18,    19,     0,     0,     0,     0,     0,   100,   101,
     102,    23,    24,    25,    26,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    29,     0,     0,    32,    33,    34,
      35,    36,    37,    38,    39,     0,    40,    41,     0,    42,
      43,     0,    44,    45,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   209,     0,     0,   108,    48,     0,    49,    50,
       0,   651,     0,    52,     0,    53,    54,    55,    56,    57,
      58,     0,     0,     0,     0,     0,     0,     0,     0,     5,
       6,     7,     0,     9,     0,     0,     0,    10,    11,    59,
     236,    61,    12,     0,    13,    14,    15,    98,    99,    18,
      19,     0,     0,     0,     0,     0,   100,   101,   102,    23,
      24,    25,    26,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    29,     0,     0,    32,    33,    34,    35,    36,
      37,    38,    39,     0,    40,    41,     0,    42,    43,     0,
      44,    45,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     209,     0,     0,   108,    48,     0,    49,    50,     0,   488,
       0,    52,     0,    53,    54,    55,    56,    57,    58,     0,
       0,     0,     0,     0,     0,     0,     0,     5,     6,     7,
       0,     9,     0,     0,     0,    10,    11,    59,   236,    61,
      12,     0,    13,    14,    15,    98,    99,    18,    19,     0,
       0,     0,     0,     0,   100,   101,   102,    23,    24,    25,
      26,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      29,     0,     0,    32,    33,    34,    35,    36,    37,    38,
      39,     0,    40,    41,     0,    42,    43,     0,    44,    45,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   209,     0,
       0,   108,    48,     0,    49,    50,     0,   778,     0,    52,
       0,    53,    54,    55,    56,    57,    58,     0,     0,     0,
       0,     0,     0,     0,     0,     5,     6,     7,     0,     9,
       0,     0,     0,    10,    11,    59,   236,    61,    12,     0,
      13,    14,    15,    98,    99,    18,    19,     0,     0,     0,
       0,     0,   100,   101,   102,    23,    24,    25,    26,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    29,     0,
       0,    32,    33,    34,    35,    36,    37,    38,    39,     0,
      40,    41,     0,    42,    43,     0,    44,    45,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   209,     0,     0,   108,
      48,     0,    49,    50,     0,   821,     0,    52,     0,    53,
      54,    55,    56,    57,    58,     0,     0,     0,     0,     0,
       0,     0,     0,     5,     6,     7,     0,     9,     0,     0,
       0,    10,    11,    59,   236,    61,    12,     0,    13,    14,
      15,    98,    99,    18,    19,     0,     0,     0,     0,     0,
     100,   101,   102,    23,    24,    25,    26,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    29,     0,     0,    32,
      33,    34,    35,    36,    37,    38,    39,     0,    40,    41,
       0,    42,    43,     0,    44,    45,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   209,     0,     0,   108,    48,     0,
      49,    50,     0,     0,     0,    52,     0,    53,    54,    55,
      56,    57,    58,     0,     0,     0,     0,     0,     0,     0,
       0,     5,     6,     7,     0,     9,     0,     0,     0,    10,
      11,    59,   236,    61,    12,     0,    13,    14,    15,    16,
      17,    18,    19,     0,     0,     0,     0,     0,    20,    21,
      22,    23,    24,    25,    26,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    29,     0,     0,    32,    33,    34,
      35,    36,    37,    38,    39,     0,    40,    41,     0,    42,
      43,     0,    44,    45,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   209,     0,     0,   108,    48,     0,    49,    50,
       0,     0,     0,    52,     0,    53,    54,    55,    56,    57,
      58,     0,     0,     0,     0,     0,     0,     0,     0,     5,
       6,     7,     0,     9,     0,     0,     0,    10,    11,    59,
     236,    61,    12,     0,    13,    14,    15,    98,    99,    18,
      19,     0,     0,     0,     0,     0,   100,   101,   102,    23,
      24,    25,    26,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   103,     0,     0,    32,    33,    34,    35,    36,
      37,    38,    39,     0,    40,    41,     0,    42,    43,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     279,     0,     0,   317,    48,     0,    49,    50,     0,   898,
     899,    52,     0,    53,    54,    55,    56,    57,    58,     0,
       0,     0,     0,     5,     6,     7,     0,     9,     0,     0,
       0,    10,    11,     0,     0,     0,    12,   109,    13,    14,
      15,    98,    99,    18,    19,     0,     0,     0,     0,     0,
     100,   101,   102,    23,    24,    25,    26,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   103,     0,     0,    32,
      33,   104,    35,    36,    37,   105,    39,     0,    40,    41,
       0,    42,    43,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   106,     0,     0,   107,     0,     0,   108,    48,     0,
      49,    50,     0,     0,     0,    52,     0,    53,    54,    55,
      56,    57,    58,     0,     0,     0,     0,     5,     6,     7,
       0,     9,     0,     0,     0,    10,    11,     0,     0,     0,
      12,   109,    13,    14,    15,    98,    99,    18,    19,     0,
       0,     0,     0,     0,   100,   101,   102,    23,    24,    25,
      26,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     103,     0,     0,    32,    33,    34,    35,    36,    37,    38,
      39,     0,    40,    41,     0,    42,    43,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   226,     0,
       0,    47,    48,     0,    49,    50,     0,    51,     0,    52,
       0,    53,    54,    55,    56,    57,    58,     0,     0,     0,
       0,     5,     6,     7,     0,     9,     0,     0,     0,    10,
      11,     0,     0,     0,    12,   109,    13,    14,    15,    98,
      99,    18,    19,     0,     0,     0,     0,     0,   100,   101,
     102,    23,    24,    25,    26,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   103,     0,     0,    32,    33,    34,
      35,    36,    37,    38,    39,     0,    40,    41,     0,    42,
      43,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   279,     0,     0,   317,    48,     0,    49,    50,
       0,   318,     0,    52,     0,    53,    54,    55,    56,    57,
      58,     0,     0,     0,     0,     5,     6,     7,     0,     9,
       0,     0,     0,    10,    11,     0,     0,     0,    12,   109,
      13,    14,    15,    98,    99,    18,    19,     0,     0,     0,
       0,     0,   100,   101,   102,    23,    24,    25,    26,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   103,     0,
       0,    32,    33,   104,    35,    36,    37,   105,    39,     0,
      40,    41,     0,    42,    43,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   107,     0,     0,   108,
      48,     0,    49,    50,     0,     0,     0,    52,     0,    53,
      54,    55,    56,    57,    58,     0,     0,     0,     0,     5,
       6,     7,     0,     9,     0,     0,     0,    10,    11,     0,
       0,     0,    12,   109,    13,    14,    15,    98,    99,    18,
      19,     0,     0,     0,     0,     0,   100,   101,   102,    23,
      24,    25,    26,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   103,     0,     0,    32,    33,    34,    35,    36,
      37,    38,    39,     0,    40,    41,     0,    42,    43,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     279,     0,     0,   108,    48,     0,    49,    50,     0,     0,
       0,    52,     0,    53,    54,    55,    56,    57,    58,     0,
       0,     0,     0,     5,     6,     7,     0,     9,     0,     0,
       0,    10,    11,     0,     0,     0,    12,   109,    13,    14,
      15,    98,    99,    18,    19,     0,     0,     0,     0,     0,
     100,   101,   102,    23,    24,    25,    26,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   103,     0,     0,    32,
      33,    34,    35,    36,    37,    38,    39,     0,    40,    41,
       0,    42,    43,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   847,     0,     0,   108,    48,     0,
      49,    50,     0,     0,     0,    52,     0,    53,    54,    55,
      56,    57,    58,     0,     0,     0,     0,     0,     0,   533,
     534,     0,     0,   535,     0,     0,     0,     0,     0,     0,
       0,   109,   162,   163,   164,   165,   166,   167,     0,   168,
     169,     0,     0,   170,     0,     0,     0,   171,   172,   173,
     174,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   175,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   538,
     534,   186,     0,   539,     0,     0,     0,     0,     0,   187,
       0,     0,   162,   163,   164,   165,   166,   167,     0,   168,
     169,     0,     0,   170,     0,     0,     0,   171,   172,   173,
     174,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   175,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   555,
     527,   186,     0,   556,     0,     0,     0,     0,     0,   187,
       0,     0,   162,   163,   164,   165,   166,   167,     0,   168,
     169,     0,     0,   170,     0,     0,     0,   171,   172,   173,
     174,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   175,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   592,
     527,   186,     0,   593,     0,     0,     0,     0,     0,   187,
       0,     0,   162,   163,   164,   165,   166,   167,     0,   168,
     169,     0,     0,   170,     0,     0,     0,   171,   172,   173,
     174,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   175,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   595,
     534,   186,     0,   596,     0,     0,     0,     0,     0,   187,
       0,     0,   162,   163,   164,   165,   166,   167,     0,   168,
     169,     0,     0,   170,     0,     0,     0,   171,   172,   173,
     174,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   175,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   610,
     527,   186,     0,   611,     0,     0,     0,     0,     0,   187,
       0,     0,   162,   163,   164,   165,   166,   167,     0,   168,
     169,     0,     0,   170,     0,     0,     0,   171,   172,   173,
     174,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   175,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   613,
     534,   186,     0,   614,     0,     0,     0,     0,     0,   187,
       0,     0,   162,   163,   164,   165,   166,   167,     0,   168,
     169,     0,     0,   170,     0,     0,     0,   171,   172,   173,
     174,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   175,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   653,
     527,   186,     0,   654,     0,     0,     0,     0,     0,   187,
       0,     0,   162,   163,   164,   165,   166,   167,     0,   168,
     169,     0,     0,   170,     0,     0,     0,   171,   172,   173,
     174,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   175,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   656,
     534,   186,     0,   657,     0,     0,     0,     0,     0,   187,
       0,     0,   162,   163,   164,   165,   166,   167,     0,   168,
     169,     0,     0,   170,     0,     0,     0,   171,   172,   173,
     174,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   175,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   923,
     527,   186,     0,   924,     0,     0,     0,     0,     0,   187,
       0,     0,   162,   163,   164,   165,   166,   167,     0,   168,
     169,     0,     0,   170,     0,     0,     0,   171,   172,   173,
     174,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   175,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   926,
     534,   186,     0,   927,     0,     0,     0,     0,     0,   187,
       0,     0,   162,   163,   164,   165,   166,   167,     0,   168,
     169,     0,     0,   170,     0,     0,     0,   171,   172,   173,
     174,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   175,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,     0,
       0,   186,     0,     0,     0,     0,     0,     0,     0,   187,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   332,   333,     0,     0,   334,   335,     0,     0,     0,
    -221,     0,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,   333,     0,     0,   334,   335,     0,
       0,     0,     0,   336,     0,   337,   338,   339,   340,   341,
     342,   343,   344,   345,   346,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  -221,   336,     0,   337,   338,   339,
     340,   341,   342,   343,   344,   345,   346,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   616,   321,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,   332,   333,
       0,     0,   334,   335,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   330,   331,   332,   333,     0,     0,   334,
     335,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     336,   677,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,     0,     0,     0,     0,     0,   336,     0,   337,
     338,   339,   340,   341,   342,   343,   344,   345,   346,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
    -537,  -537,     0,     0,   334,   335,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   337,   338,   339,   340,   341,   342,
     343,   344,   345,   346
};

static const short int yycheck[] =
{
       2,    72,     4,     5,     6,    29,   217,    28,    10,    11,
      12,   376,   397,    15,    16,    17,     7,    47,    20,    22,
      16,    17,    51,   416,    20,    27,   403,    16,    17,   250,
     460,    20,   107,     8,    16,    17,     8,   348,    20,   292,
     587,     4,    60,   296,    63,    47,    48,    49,   320,    51,
     597,    16,    17,    28,   709,    20,    28,   450,    60,   540,
     541,    50,    53,   374,    11,    12,     7,     8,    50,     1,
      72,   706,   669,     2,   709,     4,     5,     6,     7,   103,
      22,   392,    26,   542,    49,   544,    15,    28,    12,     5,
       6,   706,    95,    29,   709,   406,    60,   712,    26,    15,
     578,   264,   580,    13,   106,     0,   108,    25,    13,    83,
      25,    17,    53,    25,    20,    83,    51,   125,    47,    74,
      55,    60,    51,   347,    94,   349,   350,   351,    37,    38,
      27,    83,    66,    25,    85,    51,    25,    25,    25,    63,
     135,   105,   572,    72,    25,   115,     2,   458,     4,     5,
       6,   375,    96,    95,   317,   129,    72,   108,   113,    15,
     102,   129,   136,   760,   103,   104,   681,   391,    96,   393,
     106,    85,   687,    55,   116,   127,   130,   129,   775,   108,
     112,   125,   136,   407,   118,   119,   120,   111,   132,   554,
      15,    47,    17,   130,   108,    51,   135,   125,    83,   136,
     110,   220,   134,   113,   136,   110,   208,    28,   573,    85,
     865,   136,   130,   110,   438,   130,    72,   132,   130,   472,
     130,   266,   224,   225,   134,    83,   136,   136,   658,   134,
     865,   136,   108,   135,   264,   459,   695,   134,   130,   136,
     132,   130,   130,   130,   129,   247,   270,   249,   250,   130,
     865,   247,   108,   249,   250,    83,    86,   259,   247,   108,
     249,   250,   264,    85,   134,   247,   136,   249,   250,    51,
      13,   129,    85,   754,   755,   822,    83,   224,   225,   208,
     130,    83,   247,    53,   249,   250,   108,   317,    83,   318,
     108,    61,    62,     2,    98,   108,   220,   315,   373,   127,
     130,   129,   320,   305,   306,   307,   308,   309,   310,   311,
     312,    93,    94,   315,   586,   317,   318,   130,   320,    83,
     127,   132,   129,    83,   802,   803,   315,   129,    85,   807,
     259,   320,   127,   115,   129,   264,   118,   132,    47,   357,
     358,   247,   305,   249,   250,    85,   348,   310,    58,    59,
     743,    83,   208,    37,    38,   357,   358,   750,   132,   306,
     307,   308,   309,   127,   741,   129,    83,   110,   108,   129,
     113,    83,   374,   418,   376,   377,   305,    83,    83,   108,
     425,   310,   427,   348,    85,   130,   388,   130,   317,   318,
     392,   134,   603,   136,   396,   440,   398,   129,   443,   108,
      83,   130,   318,   259,   406,    55,   347,   108,   264,   374,
     399,   432,   129,   637,   638,   636,    15,   129,    17,   421,
     444,   127,   127,   129,   129,   421,    83,   392,   130,   907,
     795,   413,   373,   435,   136,    83,    66,   822,    83,   421,
       2,   406,     4,   108,   127,   369,   129,   376,   493,   305,
     391,    81,    82,    15,   310,    26,   458,   432,    60,   388,
     432,   317,   318,    83,   405,    26,    26,   396,    83,   398,
     127,    85,   129,   273,    26,   275,   134,   277,   402,   403,
      83,   129,   127,    55,   129,    47,   116,   117,   118,   119,
     120,   432,   885,   458,    25,    15,   437,    17,    85,   441,
      86,   103,   104,   105,   869,    60,   435,   127,    63,   129,
      58,    59,    83,   130,   129,   125,   457,   562,   130,   243,
     376,   108,    83,    83,   127,    96,   129,   530,   132,    14,
      15,    83,   388,    66,   537,    96,    96,   540,   541,    60,
     396,   133,   398,   130,    96,   938,   108,   128,   103,   104,
     259,   553,   554,   126,   125,   264,   127,    60,   129,   108,
      55,   132,   105,   584,   125,   125,   127,   127,   129,   129,
      66,   573,   132,   125,    60,   127,   105,   129,    66,   435,
     132,    85,   103,   104,   105,   896,    66,   632,   530,    55,
      56,    85,   583,   130,    92,    10,   598,   586,   669,   810,
     103,   104,   105,     8,   108,   816,   553,    85,   317,   584,
      85,    13,   584,   615,   108,    26,   558,   103,   104,   105,
     116,   117,   118,   119,   120,   554,   130,   551,    10,   130,
     108,   133,    10,   108,   636,   126,   130,   130,   130,   128,
     642,    66,   583,   584,   573,   135,   208,   130,   130,   133,
     574,   128,   130,    26,   636,   130,    81,    82,   703,   661,
     678,   108,   130,   130,    51,   683,   684,   669,   615,   598,
     130,   636,    83,   897,    51,    15,   678,   128,    10,   388,
      10,   683,   684,   128,   130,    96,   410,   396,    94,   398,
     115,   116,   117,   118,   119,   120,   130,   259,   554,   130,
     126,   128,   264,   748,    53,    54,   134,    56,   753,    10,
      83,   756,    61,    62,   125,    86,   127,   573,   129,   721,
      10,   132,   724,    96,     9,    51,   435,    40,    41,    42,
      43,    44,   661,    10,   758,   737,   738,   739,    10,    10,
     669,   126,   598,   305,   130,   113,   130,   130,   310,    10,
      10,   747,   125,   669,   127,   317,   129,    55,   747,   132,
     130,   130,   113,   130,   130,   747,    94,    10,   786,   771,
     772,    66,    10,   697,   126,   777,    10,   724,    10,   126,
      94,   126,    10,   854,   786,    10,    81,    82,   130,   128,
     792,   793,   721,   795,   839,    94,   130,    94,    15,     6,
     910,   891,   353,    79,   909,   661,   662,   809,   737,   738,
     739,   813,    82,   669,   376,     7,   808,   741,   113,   114,
     115,   116,   117,   118,   119,   120,   388,   706,   706,    -1,
      63,    -1,    -1,    -1,   396,    -1,   398,    -1,   840,   841,
      -1,    -1,   771,   772,    -1,    -1,    -1,    -1,   777,    -1,
      -1,    -1,   854,    -1,    -1,   771,   772,    -1,    -1,    -1,
      -1,   863,    -1,   792,   793,   721,   795,   869,    -1,   871,
      -1,   873,    -1,   435,    -1,    -1,    -1,    -1,   880,    -1,
     809,   737,   738,   739,   813,    -1,    -1,    -1,    -1,   598,
      -1,   893,    -1,   809,   896,    -1,   898,   899,   622,    -1,
      -1,   883,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     634,   840,   841,    -1,    -1,   771,   772,    -1,    -1,    -1,
     922,   777,    -1,    -1,    51,   854,    53,    54,    55,    56,
      -1,   896,    -1,    -1,   863,    -1,   792,   793,   854,   795,
     869,   943,   871,    -1,   873,    -1,    -1,   949,    -1,    -1,
      -1,   880,   661,   809,   895,    -1,    -1,   813,    -1,    10,
      11,    12,    -1,    -1,   893,    -1,    93,    94,    -1,   898,
     899,    -1,    -1,    -1,    -1,    -1,    27,   893,    -1,    -1,
      -1,    -1,   898,   899,   840,   841,    -1,    -1,   115,    -1,
      -1,   118,   554,   922,    -1,    -1,    -1,    48,   854,    -1,
      -1,    -1,    -1,    -1,    -1,   132,   922,   863,    -1,    -1,
      -1,   573,   721,   869,   943,   871,    -1,   873,   742,    -1,
     949,   745,   746,    -1,   880,    -1,    -1,   943,   737,   738,
     739,    -1,    -1,   949,    -1,    -1,   598,   893,    -1,    -1,
      -1,    -1,   898,   899,    -1,    -1,    51,    -1,    53,    54,
      55,    56,    -1,    -1,    -1,   106,    -1,    -1,    -1,    51,
      -1,    53,    54,    55,    56,    -1,   922,    -1,   777,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   792,   793,    -1,    -1,   943,    93,    94,
      -1,    -1,    -1,   949,    -1,    -1,    16,    17,    -1,   661,
      20,    93,    94,    -1,   813,    -1,    -1,    -1,   832,   833,
     115,    -1,    -1,   118,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   115,    44,    45,   118,   132,    -1,    49,
      50,   840,   841,    66,    67,    68,    69,    70,    71,    72,
      60,    61,    75,    76,    -1,    -1,    -1,    -1,    81,    82,
      -1,    -1,    -1,    -1,   863,    -1,    -1,   881,   882,   721,
      -1,    -1,   871,   887,   873,    -1,    -1,    -1,    -1,    -1,
      44,   880,    -1,   224,   225,   737,   738,   739,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,    -1,    -1,
      -1,   915,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    -1,    -1,    81,    82,   771,
     772,    -1,    -1,   937,    -1,   777,   940,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   950,    -1,    -1,    -1,
     792,   793,    -1,   795,    -1,   109,    -1,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   809,    -1,    49,
      50,   813,    -1,    -1,    -1,   306,   307,   308,   309,    -1,
     311,   312,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   840,   841,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   863,    -1,    -1,    -1,    -1,    -1,   869,    -1,   871,
      -1,   873,    -1,   233,   234,   235,   236,    -1,   880,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   377,   247,    -1,   249,
     250,   893,    -1,    -1,    -1,    -1,   898,   899,     2,    -1,
       4,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   269,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     922,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     421,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   943,    -1,    47,    -1,    -1,    -1,   949,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   315,    -1,    -1,    -1,    -1,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   332,   333,   334,   335,   336,   337,   338,   339,
     340,   341,   342,   343,   344,   345,   346,    -1,   348,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   357,   358,    -1,
      -1,    -1,   242,   243,   108,    -1,    -1,    -1,    -1,    -1,
     250,    -1,    -1,    -1,   374,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     390,    -1,   392,    -1,   394,   395,    -1,    -1,    -1,   399,
      -1,    -1,    -1,    -1,    -1,    -1,   406,    -1,    -1,    -1,
      -1,    -1,   412,   413,    -1,    -1,   416,    -1,    -1,    -1,
      -1,   421,   553,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   434,    -1,    -1,    -1,    -1,   439,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   447,    -1,    -1,
     450,    -1,   452,    -1,    -1,    -1,    -1,    -1,   458,    -1,
      -1,    -1,    -1,    -1,   208,    -1,    -1,    -1,   348,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   477,   478,    -1,
      -1,    -1,    -1,    -1,   615,    -1,    -1,    -1,   488,    -1,
      -1,    -1,    -1,    -1,   374,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   384,    -1,    -1,    -1,    -1,    -1,
      -1,   642,   392,    -1,     0,   259,    -1,    -1,    -1,    -1,
     264,    -1,     8,     9,    10,    -1,   406,    13,    14,    15,
     410,    17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    27,    -1,    -1,    -1,    -1,   426,    -1,    -1,    -1,
      -1,    37,    38,    -1,    40,    41,    42,    43,    44,    -1,
      -1,   305,    -1,    -1,    -1,    -1,   310,    -1,    -1,    -1,
      -1,    -1,    -1,   317,    -1,    -1,    -1,    -1,   458,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   586,    -1,    -1,    -1,
      -1,    -1,    -1,   724,    -1,    -1,    -1,    83,    -1,    -1,
      -1,   601,    -1,    -1,    -1,    -1,    -1,   487,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   619,
      -1,    -1,    -1,   623,   110,    -1,    -1,    -1,   628,    -1,
      -1,    -1,   376,    -1,    -1,    -1,   636,    -1,    -1,    -1,
     126,    -1,    -1,   129,   388,    -1,   132,   133,   134,    -1,
     136,   651,   396,    -1,   398,    -1,    -1,   537,    -1,    -1,
     540,   541,   542,    -1,   544,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   674,    -1,   676,   677,   678,   679,
     560,    -1,    -1,   683,   684,    -1,    -1,    -1,    -1,    -1,
      -1,   435,    -1,    -1,    -1,    -1,   576,    -1,   578,    -1,
     580,    -1,   702,    -1,    -1,    -1,   586,   587,    -1,   589,
      66,    67,    68,    69,    70,    71,    72,   597,    -1,    75,
      76,    -1,    -1,    -1,    -1,    81,    82,   727,    -1,   729,
     730,    -1,    -1,    -1,    -1,    -1,   736,    -1,    -1,    -1,
      -1,    -1,   622,   743,    -1,    -1,    -1,   747,    -1,    -1,
     750,    -1,    -1,    -1,   634,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   778,    -1,
     660,    -1,    -1,    -1,    -1,    -1,   786,    -1,    -1,   669,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     2,
      -1,     4,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,
     554,    -1,    -1,    16,    17,   695,    -1,    20,   818,    -1,
      -1,   821,    -1,    -1,    27,    -1,    -1,   827,    -1,   573,
     830,    -1,    -1,    -1,    -1,   835,    -1,    -1,    -1,   719,
      -1,    -1,   722,    -1,    47,    48,    49,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   598,    -1,    -1,    60,    -1,    -1,
      -1,    -1,   742,    -1,    -1,   745,   746,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   754,   755,    -1,    -1,    -1,    -1,
     760,    -1,    -1,   883,    -1,   885,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   775,   896,    -1,    -1,    -1,
      -1,    -1,    -1,   106,    -1,   108,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   914,    -1,   916,   661,    -1,    -1,
      -1,    -1,   802,   803,    -1,    -1,    -1,   807,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   938,    -1,
      -1,    -1,   822,    -1,    -1,    -1,   946,    -1,    -1,    -1,
      -1,    -1,   832,   833,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   721,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   737,   738,   739,    -1,    -1,    -1,    -1,
      -1,   881,   882,    -1,    -1,   208,    -1,   887,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   896,    -1,    -1,    -1,
      -1,   224,   225,    -1,    -1,    -1,    -1,   907,    -1,   909,
     910,    -1,    -1,   777,    -1,   915,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   247,    -1,   249,   250,   792,   793,
      -1,   795,    -1,    -1,    -1,    -1,   259,   937,    -1,    -1,
     940,   264,   233,   234,   235,    -1,    -1,    -1,    -1,   813,
     950,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   840,   841,    -1,    -1,
      -1,    -1,   305,   306,   307,   308,   309,   310,   311,   312,
      -1,    -1,   315,    -1,   317,    -1,    -1,   320,    -1,   863,
      -1,    -1,    -1,    -1,    -1,   869,    -1,   871,    -1,   873,
      -1,    -1,    -1,    -1,    -1,    -1,   880,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   315,   348,    -1,    -1,    -1,   320,
      -1,    -1,    -1,    -1,   357,   358,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   374,    -1,   376,   377,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   388,    -1,    -1,    -1,   392,
      -1,    -1,    -1,   396,    -1,   398,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   406,    -1,    -1,    51,    52,    -1,    -1,
      55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   421,    64,
      65,    66,    67,    68,    69,    -1,    71,    72,   399,    -1,
      75,    -1,   435,    -1,    79,    80,    81,    82,    -1,    -1,
      -1,   412,   413,    -1,    -1,   416,    -1,    -1,    93,    -1,
     421,    -1,    -1,    -1,    -1,   458,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   447,    -1,   123,   450,
      -1,   452,    -1,    -1,    -1,    -1,   131,    -1,    -1,    -1,
      -1,     0,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     8,
       9,    10,    -1,    -1,    13,    14,    15,    -1,    17,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   488,    27,    28,
      29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,    38,
      -1,    40,    41,    42,    43,    44,    -1,    -1,    -1,    66,
      67,    68,    69,    70,    71,    72,    73,    -1,    75,    76,
     553,   554,    -1,    -1,    81,    82,    -1,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
     573,    -1,    81,    82,    83,    -1,    -1,    86,    -1,    -1,
      -1,    -1,    -1,    92,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,    -1,   598,    -1,   106,    -1,    -1,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   615,    -1,    -1,   586,    -1,   126,   127,   128,
     129,   130,    -1,    -1,   133,   134,    -1,   136,    -1,    -1,
     601,    -1,    -1,   636,    -1,    -1,    -1,    -1,    -1,   642,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   619,    -1,
      -1,    -1,   623,    -1,    -1,    -1,    -1,   628,   661,    -1,
      -1,    -1,    -1,    -1,    -1,   636,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   678,    -1,    -1,    -1,    -1,
     683,   684,    -1,    -1,    -1,     0,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     8,     9,    10,    -1,    -1,    -1,    14,
      15,    -1,    17,   674,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   721,    -1,
      -1,   724,    37,    38,    -1,    40,    41,    42,    43,    44,
      -1,   702,    -1,    -1,   737,   738,   739,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    -1,   736,    81,    82,    83,    -1,
      85,    -1,   743,    -1,   777,    -1,    -1,    -1,    -1,   750,
      -1,    -1,    -1,   786,    -1,    -1,    -1,    -1,    -1,   792,
     793,    -1,   795,   108,   109,    -1,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,    -1,   778,    -1,    -1,
     813,   126,   127,    -1,   129,   130,    -1,    -1,   133,   134,
      -1,   136,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   840,   841,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     821,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,   830,
     863,    -1,    -1,    -1,   835,    -1,   869,    -1,   871,    -1,
     873,    -1,    -1,    -1,    -1,    -1,    -1,   880,    -1,    -1,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,   896,    -1,    81,    82,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   883,    -1,   885,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   109,    -1,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   914,   130,   916,    -1,    -1,    -1,    -1,
       0,     1,    -1,     3,     4,     5,     6,     7,    -1,    -1,
      -1,    11,    12,    -1,    -1,    -1,    16,   938,    18,    19,
      20,    21,    22,    23,    24,   946,    -1,    -1,    -1,    -1,
      30,    31,    32,    33,    34,    35,    36,    -1,    -1,    39,
      -1,    -1,    -1,    -1,    -1,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    -1,    58,    59,
      -1,    61,    62,    -1,    64,    65,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    84,    -1,    -1,    87,    88,    -1,
      90,    91,    -1,    93,    -1,    95,    -1,    97,    98,    99,
     100,   101,   102,     0,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     8,     9,    10,    -1,    -1,    -1,    14,    15,    -1,
      17,   121,   122,   123,    -1,    -1,    -1,    -1,    -1,    26,
      -1,    -1,    -1,    -1,   134,    -1,   136,    -1,    -1,    -1,
      37,    38,    -1,    40,    41,    42,    43,    44,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    -1,    -1,    81,    82,    83,    -1,    85,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   108,   109,    -1,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,    -1,    -1,    -1,    -1,   125,   126,
     127,    -1,   129,   130,    -1,    -1,   133,   134,     1,   136,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      -1,    -1,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,
      33,    34,    35,    36,    -1,    -1,    39,    -1,    -1,    -1,
      -1,    -1,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    -1,    58,    59,    -1,    61,    62,
      -1,    64,    65,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    84,    -1,    -1,    87,    88,    -1,    90,    91,    -1,
      93,    -1,    95,    -1,    97,    98,    99,   100,   101,   102,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   121,   122,
     123,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   134,     1,   136,     3,     4,     5,     6,     7,    -1,
      -1,    10,    11,    12,    -1,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    -1,    -1,    -1,    -1,
      -1,    30,    31,    32,    33,    34,    35,    36,    -1,    -1,
      39,    -1,    -1,    -1,    -1,    -1,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    -1,    58,
      59,    -1,    61,    62,    -1,    64,    65,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    84,    -1,    -1,    87,    88,
      -1,    90,    91,    -1,    93,    -1,    95,    -1,    97,    98,
      99,   100,   101,   102,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   121,   122,   123,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   134,     1,   136,     3,     4,
       5,     6,     7,    -1,    -1,    10,    11,    12,    -1,    -1,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,    34,
      35,    36,    -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    -1,    58,    59,    -1,    61,    62,    -1,    64,
      65,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    84,
      -1,    -1,    87,    88,    -1,    90,    91,    -1,    93,    -1,
      95,    -1,    97,    98,    99,   100,   101,   102,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   121,   122,   123,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   134,
       1,   136,     3,     4,     5,     6,     7,    -1,    -1,    10,
      11,    12,    -1,    -1,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    -1,    -1,    -1,    -1,    -1,    30,
      31,    32,    33,    34,    35,    36,    -1,    -1,    39,    -1,
      -1,    -1,    -1,    -1,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    -1,    58,    59,    -1,
      61,    62,    -1,    64,    65,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    84,    -1,    -1,    87,    88,    -1,    90,
      91,    -1,    93,    -1,    95,    -1,    97,    98,    99,   100,
     101,   102,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,
       3,     4,     5,     6,     7,    -1,     9,    10,    11,    12,
     121,   122,   123,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    -1,   134,    -1,   136,    -1,    30,    31,    32,
      33,    34,    35,    36,    -1,    -1,    39,    -1,    -1,    -1,
      -1,    -1,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    -1,    58,    59,    -1,    61,    62,
      -1,    64,    65,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    84,    -1,    -1,    87,    88,    -1,    90,    91,    -1,
      93,    -1,    95,    -1,    97,    98,    99,   100,   101,   102,
      -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,     3,     4,
       5,     6,     7,    -1,    -1,    -1,    11,    12,   121,   122,
     123,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      -1,   134,    -1,   136,    -1,    30,    31,    32,    33,    34,
      35,    36,    -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    -1,    58,    59,    -1,    61,    62,    -1,    64,
      65,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    84,
      -1,    -1,    87,    88,    -1,    90,    91,    -1,    93,    -1,
      95,    -1,    97,    98,    99,   100,   101,   102,    -1,    -1,
      -1,    -1,    -1,    -1,     1,    -1,     3,     4,     5,     6,
       7,    -1,    -1,    -1,    11,    12,   121,   122,   123,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,   133,   134,
      -1,   136,    -1,    30,    31,    32,    33,    34,    35,    36,
      -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      -1,    58,    59,    -1,    61,    62,    -1,    64,    65,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    84,    -1,    -1,
      87,    88,    -1,    90,    91,    -1,    93,    -1,    95,    -1,
      97,    98,    99,   100,   101,   102,    -1,    -1,    -1,    -1,
      -1,    -1,     1,    -1,     3,     4,     5,     6,     7,    -1,
      -1,    -1,    11,    12,   121,   122,   123,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,   133,   134,    -1,   136,
      -1,    30,    31,    32,    33,    34,    35,    36,    -1,    -1,
      39,    -1,    -1,    -1,    -1,    -1,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    -1,    58,
      59,    -1,    61,    62,    -1,    64,    65,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    84,    -1,    -1,    87,    88,
      -1,    90,    91,    -1,    93,    -1,    95,    -1,    97,    98,
      99,   100,   101,   102,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   121,   122,   123,    -1,    -1,   126,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   134,     1,   136,     3,     4,
       5,     6,     7,    -1,    -1,    10,    11,    12,    -1,    -1,
      -1,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,    34,
      35,    36,    -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    -1,    58,    59,    -1,    61,    62,    -1,    64,
      65,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    84,
      -1,    -1,    87,    88,    -1,    90,    91,    -1,    93,    -1,
      95,    -1,    97,    98,    99,   100,   101,   102,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,    -1,
       7,    -1,    -1,    -1,    11,    12,   121,   122,   123,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    -1,   134,
      -1,   136,    -1,    30,    31,    32,    33,    34,    35,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,
      -1,    -1,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    -1,    61,    62,    -1,    64,    65,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    84,    -1,    -1,
      87,    88,    -1,    90,    91,    -1,    93,    94,    95,    -1,
      97,    98,    99,   100,   101,   102,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,    -1,     7,    -1,
      -1,    -1,    11,    12,   121,   122,   123,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    -1,    -1,    -1,   136,
      -1,    30,    31,    32,    33,    34,    35,    36,    -1,    -1,
      39,    -1,    -1,    -1,    -1,    -1,    -1,    46,    -1,    -1,
      49,    50,    51,    52,    53,    54,    55,    56,    -1,    58,
      59,    -1,    61,    62,    -1,    64,    65,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    84,    -1,    -1,    87,    88,
      -1,    90,    91,    -1,    -1,    -1,    95,    -1,    97,    98,
      99,   100,   101,   102,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,     7,    -1,    -1,    -1,
      11,    12,   121,   122,   123,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    -1,   134,    -1,   136,    -1,    30,
      31,    32,    33,    34,    35,    36,    -1,    -1,    39,    -1,
      -1,    -1,    -1,    -1,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    -1,    58,    59,    -1,
      61,    62,    -1,    64,    65,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    84,    -1,    -1,    87,    88,    -1,    90,
      91,    -1,    93,    -1,    95,    -1,    97,    98,    99,   100,
     101,   102,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,    -1,     7,    -1,    -1,    -1,    11,    12,
     121,   122,   123,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    -1,   134,    -1,    -1,    -1,    30,    31,    32,
      33,    34,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    46,    -1,    -1,    49,    50,    51,    52,
      53,    54,    55,    56,    -1,    58,    59,    -1,    61,    62,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    -1,    -1,    81,    82,    -1,    -1,    -1,
      -1,    84,    -1,    -1,    87,    88,    -1,    90,    91,    -1,
      93,    94,    95,    -1,    97,    98,    99,   100,   101,   102,
      -1,    -1,    -1,   109,    -1,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,    -1,    -1,    -1,   121,    -1,
      -1,    -1,     3,     4,     5,     6,     7,     8,     9,    10,
     136,   134,    13,    14,    15,    16,    17,    -1,    -1,    20,
      21,    22,    23,    24,    25,    26,    -1,    -1,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    64,    65,    66,    67,    68,    69,    -1,
      71,    72,    -1,    -1,    75,    -1,    -1,    -1,    79,    80,
      81,    82,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    93,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
      -1,    -1,   123,    -1,     3,     4,     5,    -1,     7,    -1,
     131,   132,    11,    12,    -1,    -1,    -1,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    -1,    26,    -1,    -1,
      -1,    30,    31,    32,    33,    34,    35,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,    -1,    -1,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    -1,    61,    62,    -1,    64,    65,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    84,    -1,    -1,    87,    88,
      -1,    90,    91,    -1,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   121,   122,   123,    -1,   125,     3,     4,     5,
      -1,     7,    -1,   132,    -1,    11,    12,    -1,    -1,    -1,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    -1,
      26,    -1,    -1,    -1,    30,    31,    32,    33,    34,    35,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      46,    -1,    -1,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    -1,    61,    62,    -1,    64,    65,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    84,    -1,
      -1,    87,    88,    -1,    90,    91,    -1,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   121,   122,   123,    -1,   125,
       3,     4,     5,    -1,     7,    -1,   132,    -1,    11,    12,
      -1,    -1,    -1,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,
      33,    34,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    46,    -1,    -1,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    -1,    61,    62,
      -1,    64,    65,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    84,    85,    -1,    87,    88,    -1,    90,    91,    -1,
      93,    94,    95,    -1,    97,    98,    99,   100,   101,   102,
      -1,    -1,    -1,    -1,    -1,   108,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   121,   122,
     123,    -1,     3,     4,     5,    -1,     7,    -1,    -1,   132,
      11,    12,    -1,    -1,    -1,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    -1,    -1,    -1,    -1,    -1,    30,
      31,    32,    33,    34,    35,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    46,    -1,    -1,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    -1,
      61,    62,    -1,    64,    65,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    84,    85,    -1,    87,    88,    -1,    90,
      91,    -1,    93,    94,    95,    -1,    97,    98,    99,   100,
     101,   102,    -1,    -1,    -1,    -1,    -1,   108,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     121,   122,   123,    -1,     3,     4,     5,    -1,     7,    -1,
      -1,   132,    11,    12,    -1,    -1,    -1,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    -1,    -1,    -1,    -1,
      -1,    30,    31,    32,    33,    34,    35,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,    -1,    -1,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    -1,    61,    62,    -1,    64,    65,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    84,    -1,    -1,    87,    88,
      -1,    90,    91,    -1,    93,    94,    95,    -1,    97,    98,
      99,   100,   101,   102,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   121,   122,   123,    -1,     3,     4,     5,    -1,
       7,    -1,    -1,   132,    11,    12,    -1,    -1,    -1,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    -1,    -1,
      -1,    -1,    -1,    30,    31,    32,    33,    34,    35,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,
      -1,    -1,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    -1,    61,    62,    -1,    64,    65,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    84,    -1,    -1,
      87,    88,    -1,    90,    91,    -1,    93,    94,    95,    -1,
      97,    98,    99,   100,   101,   102,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   121,   122,   123,    -1,     3,     4,
       5,    -1,     7,    -1,    -1,   132,    11,    12,    -1,    -1,
      -1,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,    34,
      35,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    46,    -1,    -1,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    -1,    61,    62,    -1,    64,
      65,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    84,
      -1,    -1,    87,    88,    -1,    90,    91,    -1,    93,    94,
      95,    -1,    97,    98,    99,   100,   101,   102,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   121,   122,   123,    -1,
       3,     4,     5,    -1,     7,    -1,    -1,   132,    11,    12,
      -1,    -1,    -1,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,
      33,    34,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    46,    -1,    -1,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    -1,    61,    62,
      -1,    64,    65,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    84,    -1,    -1,    87,    88,    -1,    90,    91,    -1,
      93,    94,    95,    -1,    97,    98,    99,   100,   101,   102,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   121,   122,
     123,     3,     4,     5,     6,     7,     8,     9,    10,   132,
      -1,    13,    14,    15,    16,    17,    -1,    -1,    20,    21,
      22,    23,    24,    25,    26,    -1,    -1,    -1,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    64,    65,    66,    67,    68,    69,    -1,    71,
      72,    -1,    -1,    75,    -1,    -1,    -1,    79,    80,    81,
      82,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    93,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,    -1,
      -1,   123,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   131,
       3,     4,     5,     6,     7,     8,     9,    10,    -1,    -1,
      13,    14,    15,    16,    17,    -1,    -1,    20,    21,    22,
      23,    24,    25,    26,    -1,    -1,    -1,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    64,    65,    66,    67,    68,    69,    -1,    71,    72,
      -1,    -1,    75,    -1,    -1,    -1,    79,    80,    81,    82,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      93,    -1,    -1,    -1,    97,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,    -1,    -1,
     123,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   131,     3,
       4,     5,     6,     7,     8,     9,    10,    -1,    -1,    13,
      14,    15,    16,    17,    -1,    -1,    20,    21,    22,    23,
      24,    25,    26,    -1,    -1,    -1,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    -1,
      -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      64,    65,    66,    67,    68,    69,    -1,    71,    72,    -1,
      -1,    75,    -1,    -1,    -1,    79,    80,    81,    82,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    93,
      -1,    -1,    -1,    97,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,    -1,    -1,   123,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   131,     3,     4,
       5,     6,     7,     8,     9,    10,    -1,    -1,    13,    14,
      15,    16,    17,    -1,    -1,    20,    21,    22,    23,    24,
      25,    26,    -1,    -1,    -1,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    -1,    -1,
      55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,
      65,    66,    67,    68,    69,    -1,    71,    72,    -1,    -1,
      75,    -1,    -1,    -1,    79,    80,    81,    82,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    93,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,    -1,    -1,   123,     3,
       4,     5,    -1,     7,    -1,    -1,   131,    11,    12,    -1,
      -1,    -1,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,
      34,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    46,    -1,    -1,    49,    50,    51,    52,    53,
      54,    55,    56,    -1,    58,    59,    -1,    61,    62,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      84,    -1,    -1,    87,    88,    -1,    90,    91,    -1,    -1,
      -1,    95,    -1,    97,    98,    99,   100,   101,   102,    -1,
      -1,    -1,    -1,     3,     4,     5,    -1,     7,    -1,    -1,
      -1,    11,    12,    -1,    -1,    -1,    16,   121,    18,    19,
      20,    21,    22,    23,    24,    -1,   130,    -1,    -1,    -1,
      30,    31,    32,    33,    34,    35,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    46,    -1,    -1,    49,
      50,    51,    52,    53,    54,    55,    56,    -1,    58,    59,
      -1,    61,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    84,    -1,    -1,    87,    88,    -1,
      90,    91,    -1,    -1,    -1,    95,    -1,    97,    98,    99,
     100,   101,   102,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,     7,    -1,    -1,    -1,    11,    12,    -1,    -1,    -1,
      16,   121,    18,    19,    20,    21,    22,    23,    24,    -1,
     130,    -1,    -1,    -1,    30,    31,    32,    33,    34,    35,
      36,    -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    -1,    58,    59,    -1,    61,    62,    -1,    64,    65,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    84,    -1,
      -1,    87,    88,    -1,    90,    91,    -1,    93,    -1,    95,
      -1,    97,    98,    99,   100,   101,   102,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,    -1,     7,
      -1,    -1,    -1,    11,    12,   121,   122,   123,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    -1,    -1,    -1,
      -1,    -1,    30,    31,    32,    33,    34,    35,    36,    -1,
      -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,    46,    -1,
      -1,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    -1,    61,    62,    -1,    64,    65,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    84,    -1,    -1,    87,
      88,    -1,    90,    91,    -1,    93,    94,    95,    -1,    97,
      98,    99,   100,   101,   102,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,    -1,     7,    -1,    -1,
      -1,    11,    12,   121,   122,   123,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    -1,    -1,    -1,    -1,    -1,
      30,    31,    32,    33,    34,    35,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    46,    -1,    -1,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      -1,    61,    62,    -1,    64,    65,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    84,    -1,    -1,    87,    88,    -1,
      90,    91,    -1,    93,    94,    95,    -1,    97,    98,    99,
     100,   101,   102,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,    -1,     7,    -1,    -1,    -1,    11,
      12,   121,   122,   123,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    -1,    -1,    -1,    -1,    -1,    30,    31,
      32,    33,    34,    35,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    46,    -1,    -1,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    -1,    61,
      62,    -1,    64,    65,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    84,    -1,    -1,    87,    88,    -1,    90,    91,
      -1,    93,    94,    95,    -1,    97,    98,    99,   100,   101,
     102,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,    -1,     7,    -1,    -1,    -1,    11,    12,   121,
     122,   123,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,
      34,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    46,    -1,    -1,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    -1,    61,    62,    -1,
      64,    65,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      84,    -1,    -1,    87,    88,    -1,    90,    91,    -1,    93,
      94,    95,    -1,    97,    98,    99,   100,   101,   102,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
      -1,     7,    -1,    -1,    -1,    11,    12,   121,   122,   123,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    -1,
      -1,    -1,    -1,    -1,    30,    31,    32,    33,    34,    35,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      46,    -1,    -1,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    -1,    61,    62,    -1,    64,    65,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    84,    -1,
      -1,    87,    88,    -1,    90,    91,    -1,    93,    94,    95,
      -1,    97,    98,    99,   100,   101,   102,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,    -1,     7,
      -1,    -1,    -1,    11,    12,   121,   122,   123,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    -1,    -1,    -1,
      -1,    -1,    30,    31,    32,    33,    34,    35,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,    -1,
      -1,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    -1,    61,    62,    -1,    64,    65,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    84,    -1,    -1,    87,
      88,    -1,    90,    91,    -1,    93,    94,    95,    -1,    97,
      98,    99,   100,   101,   102,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,    -1,     7,    -1,    -1,
      -1,    11,    12,   121,   122,   123,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    -1,    -1,    -1,    -1,    -1,
      30,    31,    32,    33,    34,    35,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    46,    -1,    -1,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      -1,    61,    62,    -1,    64,    65,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    84,    -1,    -1,    87,    88,    -1,
      90,    91,    -1,    93,    94,    95,    -1,    97,    98,    99,
     100,   101,   102,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,    -1,     7,    -1,    -1,    -1,    11,
      12,   121,   122,   123,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    -1,    -1,    -1,    -1,    -1,    30,    31,
      32,    33,    34,    35,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    46,    -1,    -1,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    -1,    61,
      62,    -1,    64,    65,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    84,    -1,    -1,    87,    88,    -1,    90,    91,
      -1,    93,    94,    95,    -1,    97,    98,    99,   100,   101,
     102,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,    -1,     7,    -1,    -1,    -1,    11,    12,   121,
     122,   123,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,
      34,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    46,    -1,    -1,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    -1,    61,    62,    -1,
      64,    65,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      84,    -1,    -1,    87,    88,    -1,    90,    91,    -1,    93,
      94,    95,    -1,    97,    98,    99,   100,   101,   102,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
      -1,     7,    -1,    -1,    -1,    11,    12,   121,   122,   123,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    -1,
      -1,    -1,    -1,    -1,    30,    31,    32,    33,    34,    35,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      46,    -1,    -1,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    -1,    61,    62,    -1,    64,    65,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    84,    -1,
      -1,    87,    88,    -1,    90,    91,    -1,    93,    94,    95,
      -1,    97,    98,    99,   100,   101,   102,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,    -1,     7,
      -1,    -1,    -1,    11,    12,   121,   122,   123,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    -1,    -1,    -1,
      -1,    -1,    30,    31,    32,    33,    34,    35,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,    -1,
      -1,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    -1,    61,    62,    -1,    64,    65,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    84,    -1,    -1,    87,
      88,    -1,    90,    91,    -1,    93,    94,    95,    -1,    97,
      98,    99,   100,   101,   102,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,    -1,     7,    -1,    -1,
      -1,    11,    12,   121,   122,   123,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    -1,    -1,    -1,    -1,    -1,
      30,    31,    32,    33,    34,    35,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    46,    -1,    -1,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      -1,    61,    62,    -1,    64,    65,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    84,    -1,    -1,    87,    88,    -1,
      90,    91,    -1,    93,    94,    95,    -1,    97,    98,    99,
     100,   101,   102,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,    -1,     7,    -1,    -1,    -1,    11,
      12,   121,   122,   123,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    -1,    -1,    -1,    -1,    -1,    30,    31,
      32,    33,    34,    35,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    46,    -1,    -1,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    -1,    61,
      62,    -1,    64,    65,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    84,    -1,    -1,    87,    88,    -1,    90,    91,
      -1,    93,    -1,    95,    -1,    97,    98,    99,   100,   101,
     102,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,    -1,     7,    -1,    -1,    -1,    11,    12,   121,
     122,   123,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,
      34,    35,    36,    -1,    -1,    39,    -1,    -1,    -1,    -1,
      -1,    -1,    46,    -1,    -1,    49,    50,    51,    52,    53,
      54,    55,    56,    -1,    58,    59,    -1,    61,    62,    -1,
      64,    65,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      84,    -1,    -1,    87,    88,    -1,    90,    91,    -1,    -1,
      -1,    95,    -1,    97,    98,    99,   100,   101,   102,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
      -1,     7,    -1,    -1,    -1,    11,    12,   121,   122,   123,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    -1,
      -1,    -1,    -1,    -1,    30,    31,    32,    33,    34,    35,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      46,    -1,    -1,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    -1,    61,    62,    -1,    64,    65,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    84,    -1,
      -1,    87,    88,    -1,    90,    91,    -1,    -1,    -1,    95,
      -1,    97,    98,    99,   100,   101,   102,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,    -1,     7,
      -1,    -1,    -1,    11,    12,   121,   122,   123,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    -1,    -1,    -1,
      -1,    -1,    30,    31,    32,    33,    34,    35,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,    -1,
      -1,    49,    50,    51,    52,    53,    54,    55,    56,    -1,
      58,    59,    -1,    61,    62,    -1,    64,    65,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    84,    -1,    -1,    87,
      88,    -1,    90,    91,    -1,    93,    -1,    95,    -1,    97,
      98,    99,   100,   101,   102,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,    -1,     7,    -1,    -1,
      -1,    11,    12,   121,   122,   123,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    -1,    -1,    -1,    -1,    -1,
      30,    31,    32,    33,    34,    35,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    46,    -1,    -1,    49,
      50,    51,    52,    53,    54,    55,    56,    -1,    58,    59,
      -1,    61,    62,    -1,    64,    65,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    84,    -1,    -1,    87,    88,    -1,
      90,    91,    -1,    93,    -1,    95,    -1,    97,    98,    99,
     100,   101,   102,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,    -1,     7,    -1,    -1,    -1,    11,
      12,   121,   122,   123,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    -1,    -1,    -1,    -1,    -1,    30,    31,
      32,    33,    34,    35,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    46,    -1,    -1,    49,    50,    51,
      52,    53,    54,    55,    56,    -1,    58,    59,    -1,    61,
      62,    -1,    64,    65,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    84,    -1,    -1,    87,    88,    -1,    90,    91,
      -1,    93,    -1,    95,    -1,    97,    98,    99,   100,   101,
     102,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,    -1,     7,    -1,    -1,    -1,    11,    12,   121,
     122,   123,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,
      34,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    46,    -1,    -1,    49,    50,    51,    52,    53,
      54,    55,    56,    -1,    58,    59,    -1,    61,    62,    -1,
      64,    65,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      84,    -1,    -1,    87,    88,    -1,    90,    91,    -1,    93,
      -1,    95,    -1,    97,    98,    99,   100,   101,   102,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
      -1,     7,    -1,    -1,    -1,    11,    12,   121,   122,   123,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    -1,
      -1,    -1,    -1,    -1,    30,    31,    32,    33,    34,    35,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      46,    -1,    -1,    49,    50,    51,    52,    53,    54,    55,
      56,    -1,    58,    59,    -1,    61,    62,    -1,    64,    65,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    84,    -1,
      -1,    87,    88,    -1,    90,    91,    -1,    93,    -1,    95,
      -1,    97,    98,    99,   100,   101,   102,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,    -1,     7,
      -1,    -1,    -1,    11,    12,   121,   122,   123,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    -1,    -1,    -1,
      -1,    -1,    30,    31,    32,    33,    34,    35,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,    -1,
      -1,    49,    50,    51,    52,    53,    54,    55,    56,    -1,
      58,    59,    -1,    61,    62,    -1,    64,    65,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    84,    -1,    -1,    87,
      88,    -1,    90,    91,    -1,    93,    -1,    95,    -1,    97,
      98,    99,   100,   101,   102,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,    -1,     7,    -1,    -1,
      -1,    11,    12,   121,   122,   123,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    -1,    -1,    -1,    -1,    -1,
      30,    31,    32,    33,    34,    35,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    46,    -1,    -1,    49,
      50,    51,    52,    53,    54,    55,    56,    -1,    58,    59,
      -1,    61,    62,    -1,    64,    65,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    84,    -1,    -1,    87,    88,    -1,
      90,    91,    -1,    -1,    -1,    95,    -1,    97,    98,    99,
     100,   101,   102,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,    -1,     7,    -1,    -1,    -1,    11,
      12,   121,   122,   123,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    -1,    -1,    -1,    -1,    -1,    30,    31,
      32,    33,    34,    35,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    46,    -1,    -1,    49,    50,    51,
      52,    53,    54,    55,    56,    -1,    58,    59,    -1,    61,
      62,    -1,    64,    65,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    84,    -1,    -1,    87,    88,    -1,    90,    91,
      -1,    -1,    -1,    95,    -1,    97,    98,    99,   100,   101,
     102,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,    -1,     7,    -1,    -1,    -1,    11,    12,   121,
     122,   123,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,
      34,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    46,    -1,    -1,    49,    50,    51,    52,    53,
      54,    55,    56,    -1,    58,    59,    -1,    61,    62,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      84,    -1,    -1,    87,    88,    -1,    90,    91,    -1,    93,
      94,    95,    -1,    97,    98,    99,   100,   101,   102,    -1,
      -1,    -1,    -1,     3,     4,     5,    -1,     7,    -1,    -1,
      -1,    11,    12,    -1,    -1,    -1,    16,   121,    18,    19,
      20,    21,    22,    23,    24,    -1,    -1,    -1,    -1,    -1,
      30,    31,    32,    33,    34,    35,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    46,    -1,    -1,    49,
      50,    51,    52,    53,    54,    55,    56,    -1,    58,    59,
      -1,    61,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    81,    -1,    -1,    84,    -1,    -1,    87,    88,    -1,
      90,    91,    -1,    -1,    -1,    95,    -1,    97,    98,    99,
     100,   101,   102,    -1,    -1,    -1,    -1,     3,     4,     5,
      -1,     7,    -1,    -1,    -1,    11,    12,    -1,    -1,    -1,
      16,   121,    18,    19,    20,    21,    22,    23,    24,    -1,
      -1,    -1,    -1,    -1,    30,    31,    32,    33,    34,    35,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      46,    -1,    -1,    49,    50,    51,    52,    53,    54,    55,
      56,    -1,    58,    59,    -1,    61,    62,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    84,    -1,
      -1,    87,    88,    -1,    90,    91,    -1,    93,    -1,    95,
      -1,    97,    98,    99,   100,   101,   102,    -1,    -1,    -1,
      -1,     3,     4,     5,    -1,     7,    -1,    -1,    -1,    11,
      12,    -1,    -1,    -1,    16,   121,    18,    19,    20,    21,
      22,    23,    24,    -1,    -1,    -1,    -1,    -1,    30,    31,
      32,    33,    34,    35,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    46,    -1,    -1,    49,    50,    51,
      52,    53,    54,    55,    56,    -1,    58,    59,    -1,    61,
      62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    84,    -1,    -1,    87,    88,    -1,    90,    91,
      -1,    93,    -1,    95,    -1,    97,    98,    99,   100,   101,
     102,    -1,    -1,    -1,    -1,     3,     4,     5,    -1,     7,
      -1,    -1,    -1,    11,    12,    -1,    -1,    -1,    16,   121,
      18,    19,    20,    21,    22,    23,    24,    -1,    -1,    -1,
      -1,    -1,    30,    31,    32,    33,    34,    35,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,    -1,
      -1,    49,    50,    51,    52,    53,    54,    55,    56,    -1,
      58,    59,    -1,    61,    62,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    84,    -1,    -1,    87,
      88,    -1,    90,    91,    -1,    -1,    -1,    95,    -1,    97,
      98,    99,   100,   101,   102,    -1,    -1,    -1,    -1,     3,
       4,     5,    -1,     7,    -1,    -1,    -1,    11,    12,    -1,
      -1,    -1,    16,   121,    18,    19,    20,    21,    22,    23,
      24,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,
      34,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    46,    -1,    -1,    49,    50,    51,    52,    53,
      54,    55,    56,    -1,    58,    59,    -1,    61,    62,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      84,    -1,    -1,    87,    88,    -1,    90,    91,    -1,    -1,
      -1,    95,    -1,    97,    98,    99,   100,   101,   102,    -1,
      -1,    -1,    -1,     3,     4,     5,    -1,     7,    -1,    -1,
      -1,    11,    12,    -1,    -1,    -1,    16,   121,    18,    19,
      20,    21,    22,    23,    24,    -1,    -1,    -1,    -1,    -1,
      30,    31,    32,    33,    34,    35,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    46,    -1,    -1,    49,
      50,    51,    52,    53,    54,    55,    56,    -1,    58,    59,
      -1,    61,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    84,    -1,    -1,    87,    88,    -1,
      90,    91,    -1,    -1,    -1,    95,    -1,    97,    98,    99,
     100,   101,   102,    -1,    -1,    -1,    -1,    -1,    -1,    51,
      52,    -1,    -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   121,    64,    65,    66,    67,    68,    69,    -1,    71,
      72,    -1,    -1,    75,    -1,    -1,    -1,    79,    80,    81,
      82,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    93,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,    51,
      52,   123,    -1,    55,    -1,    -1,    -1,    -1,    -1,   131,
      -1,    -1,    64,    65,    66,    67,    68,    69,    -1,    71,
      72,    -1,    -1,    75,    -1,    -1,    -1,    79,    80,    81,
      82,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    93,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,    51,
      52,   123,    -1,    55,    -1,    -1,    -1,    -1,    -1,   131,
      -1,    -1,    64,    65,    66,    67,    68,    69,    -1,    71,
      72,    -1,    -1,    75,    -1,    -1,    -1,    79,    80,    81,
      82,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    93,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,    51,
      52,   123,    -1,    55,    -1,    -1,    -1,    -1,    -1,   131,
      -1,    -1,    64,    65,    66,    67,    68,    69,    -1,    71,
      72,    -1,    -1,    75,    -1,    -1,    -1,    79,    80,    81,
      82,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    93,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,    51,
      52,   123,    -1,    55,    -1,    -1,    -1,    -1,    -1,   131,
      -1,    -1,    64,    65,    66,    67,    68,    69,    -1,    71,
      72,    -1,    -1,    75,    -1,    -1,    -1,    79,    80,    81,
      82,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    93,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,    51,
      52,   123,    -1,    55,    -1,    -1,    -1,    -1,    -1,   131,
      -1,    -1,    64,    65,    66,    67,    68,    69,    -1,    71,
      72,    -1,    -1,    75,    -1,    -1,    -1,    79,    80,    81,
      82,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    93,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,    51,
      52,   123,    -1,    55,    -1,    -1,    -1,    -1,    -1,   131,
      -1,    -1,    64,    65,    66,    67,    68,    69,    -1,    71,
      72,    -1,    -1,    75,    -1,    -1,    -1,    79,    80,    81,
      82,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    93,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,    51,
      52,   123,    -1,    55,    -1,    -1,    -1,    -1,    -1,   131,
      -1,    -1,    64,    65,    66,    67,    68,    69,    -1,    71,
      72,    -1,    -1,    75,    -1,    -1,    -1,    79,    80,    81,
      82,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    93,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,    51,
      52,   123,    -1,    55,    -1,    -1,    -1,    -1,    -1,   131,
      -1,    -1,    64,    65,    66,    67,    68,    69,    -1,    71,
      72,    -1,    -1,    75,    -1,    -1,    -1,    79,    80,    81,
      82,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    93,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,    51,
      52,   123,    -1,    55,    -1,    -1,    -1,    -1,    -1,   131,
      -1,    -1,    64,    65,    66,    67,    68,    69,    -1,    71,
      72,    -1,    -1,    75,    -1,    -1,    -1,    79,    80,    81,
      82,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    93,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,    51,
      52,   123,    -1,    55,    -1,    -1,    -1,    -1,    -1,   131,
      -1,    -1,    64,    65,    66,    67,    68,    69,    -1,    71,
      72,    -1,    -1,    75,    -1,    -1,    -1,    79,    80,    81,
      82,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    93,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,    -1,
      -1,   123,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   131,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    -1,    -1,    81,    82,    -1,    -1,    -1,
      86,    -1,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    -1,    -1,    81,    82,    -1,
      -1,    -1,    -1,   109,    -1,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   130,   109,    -1,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   130,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      -1,    -1,    81,    82,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    -1,    -1,    81,
      82,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,    -1,    -1,    -1,    -1,    -1,   109,    -1,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    -1,    -1,    81,    82,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned short int yystos[] =
{
       0,   138,   139,     0,     1,     3,     4,     5,     6,     7,
      11,    12,    16,    18,    19,    20,    21,    22,    23,    24,
      30,    31,    32,    33,    34,    35,    36,    39,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      58,    59,    61,    62,    64,    65,    84,    87,    88,    90,
      91,    93,    95,    97,    98,    99,   100,   101,   102,   121,
     122,   123,   141,   142,   143,   146,   148,   149,   153,   154,
     156,   157,   158,   159,   160,   170,   187,   204,   226,   227,
     240,   241,   242,   243,   244,   245,   246,   249,   257,   259,
     260,   261,   262,   263,   264,   283,   293,   143,    21,    22,
      30,    31,    32,    46,    51,    55,    81,    84,    87,   121,
     161,   162,   187,   204,   261,   264,   283,   162,     3,     4,
       5,     6,     7,     8,     9,    10,    13,    14,    15,    16,
      17,    20,    21,    22,    23,    24,    25,    26,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    55,    64,    65,    66,    67,    68,    69,    71,    72,
      75,    79,    80,    81,    82,    93,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   123,   131,   132,   163,
     168,   169,   262,   278,    33,    34,    35,    36,    49,    50,
      51,    55,   163,   164,   165,   166,   257,   259,   188,    84,
     146,   147,   160,   204,   261,   263,   264,   147,   134,   136,
     147,   287,   291,   292,   191,   193,    84,   154,   160,   204,
     209,   261,   264,    57,    93,    94,   122,   153,   170,   172,
     176,   183,   185,   281,   282,   176,   176,   132,   178,   179,
     132,   174,   178,   146,    53,   165,   136,   288,   145,   125,
     170,   204,   170,    55,    87,   141,   155,   156,   146,    93,
     153,   173,   185,   281,   293,   185,   280,   281,   293,    84,
     159,   204,   261,   264,   217,   218,    53,    54,    56,   163,
     252,   258,   251,   252,   252,   135,   247,   135,   250,    58,
      59,   148,   170,   170,   287,   292,    40,    41,    42,    43,
      44,    37,    38,    28,   223,   108,   130,    87,    93,   157,
     108,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    81,    82,   109,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,    83,   127,   129,
      83,   129,    26,    96,   125,   228,   243,    85,    85,   174,
     178,   228,   288,   146,    51,    55,   161,    58,    59,     1,
     112,   265,   291,    83,   127,   129,   200,   279,   201,    83,
     129,   286,   130,   140,   141,    55,    13,   110,   205,   291,
     108,    83,   127,   129,    85,    85,   205,   287,    15,    17,
     233,   134,   147,   147,    55,    83,   127,   129,    25,   172,
     172,   172,    86,   130,   184,   293,   130,   184,   176,   288,
     289,    88,   176,   180,   153,   176,   185,   226,   293,    53,
      61,    62,   144,   132,   171,   125,   141,    83,   129,    85,
     155,   133,   289,   189,   170,   288,   128,   130,   136,   290,
     130,   290,   130,   290,   126,   290,    55,    83,   127,   129,
     219,    60,   103,   104,   105,   253,   105,   253,   105,    63,
     105,   105,   248,   253,   105,    60,   105,    66,    66,   143,
     147,   147,   147,   147,   143,   146,   146,   224,    93,   148,
     172,   185,   186,   155,   159,   130,   148,   170,   172,   186,
     170,   170,   170,   170,   170,   170,   170,   170,   170,   170,
     170,   170,   170,   170,   170,   170,   170,   170,   170,   170,
     170,   170,   170,   170,   170,   170,    51,    52,    55,   168,
     284,   285,   173,    51,    52,    55,   168,   284,    51,    55,
     284,   284,   231,   217,   229,   148,   170,   148,   170,    92,
     150,   198,   291,   266,   197,    51,    55,   161,   284,   173,
     284,   140,   146,    51,    53,    54,    55,    56,    93,    94,
     115,   118,   132,   267,   268,   269,   270,   271,   272,   273,
     274,   275,   276,   202,   167,    10,     8,   236,   293,   141,
      13,   170,    51,    55,   173,    51,    55,   141,    15,   233,
     141,    93,   185,   234,    10,    27,   110,   206,   291,   206,
      51,    55,   173,    51,    55,   195,   130,   184,   172,    93,
     172,   183,   281,    93,   172,   282,   289,   133,    93,   170,
     172,   177,   181,   183,   281,   289,   130,    83,   129,   289,
     133,   165,   190,   170,   141,   126,   170,   289,   174,   289,
     288,    93,   172,    51,    55,   173,    51,    55,   132,   221,
     268,   255,   254,   135,   253,   135,   170,   170,    74,   113,
     212,   213,   293,   172,   130,   289,    44,   110,    85,    85,
     174,   178,   128,    85,    85,   174,   175,   178,   293,   175,
     178,   175,   178,   212,   212,   151,   291,   147,   140,   128,
      10,   289,   108,   268,   140,   291,   130,   277,   293,   130,
     277,    51,   130,   277,    51,   163,   165,   172,   186,   237,
     293,    15,   208,   293,    14,   207,   208,    85,   128,    85,
      85,   208,   141,    10,    10,   172,   130,   205,   192,   194,
     128,   147,   172,   130,   184,   172,   172,   130,   182,   289,
     130,   184,   153,   226,   284,   284,   146,   126,   170,   128,
     268,   220,   134,   214,   293,   141,    53,    54,    56,   256,
     264,    93,    94,   157,   210,   211,   214,   225,    93,   172,
     170,   170,   148,   170,   170,   150,    85,   148,   170,   148,
     170,   150,   232,   230,   212,   199,   291,    10,   172,   289,
      10,   269,   272,   274,   276,    51,   271,   274,   203,    86,
     238,   293,   141,     9,   239,   293,   147,    10,    85,    10,
      10,    93,   141,   141,   141,   206,   184,    93,   184,   184,
      93,   183,   185,   281,   289,    93,   289,   289,   288,   214,
      29,   106,   222,    51,   215,   216,   126,    84,   130,   160,
     204,   261,   264,   160,   130,   214,   113,   141,   172,   148,
     170,   141,   141,   152,   140,   130,   277,   277,   277,   267,
     160,   205,   141,   205,   172,   208,   233,   235,    10,    10,
     196,   170,   172,   130,   184,   130,   184,   172,   289,   141,
     141,   130,    55,    94,   130,    83,   127,   129,    93,    94,
     157,   113,    10,    10,   126,   141,    10,   274,   140,   141,
     141,   141,   184,   184,    93,   281,    93,   184,    10,   126,
     216,   160,    94,    51,    55,   173,    51,    55,   130,   160,
     160,   126,   277,    10,   236,   207,    10,   172,   130,   184,
     172,   160,   128,    94,   130,   184,    93,   184,   160,    94,
     172,   160,   184
};

#if ! defined (YYSIZE_T) && defined (__SIZE_TYPE__)
# define YYSIZE_T __SIZE_TYPE__
#endif
#if ! defined (YYSIZE_T) && defined (size_t)
# define YYSIZE_T size_t
#endif
#if ! defined (YYSIZE_T)
# if defined (__STDC__) || defined (__cplusplus)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# endif
#endif
#if ! defined (YYSIZE_T)
# define YYSIZE_T unsigned int
#endif

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK;						\
      goto yybackup;						\
    }								\
  else								\
    { 								\
      yyerror ("syntax error: cannot back up");\
      YYERROR;							\
    }								\
while (0)

#define YYTERROR	1
#define YYERRCODE	256

/* YYLLOC_DEFAULT -- Compute the default location (before the actions
   are run).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)		\
   ((Current).first_line   = (Rhs)[1].first_line,	\
    (Current).first_column = (Rhs)[1].first_column,	\
    (Current).last_line    = (Rhs)[N].last_line,	\
    (Current).last_column  = (Rhs)[N].last_column)
#endif

/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (&yylval, YYLEX_PARAM)
#else
# define YYLEX yylex (&yylval)
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (0)

# define YYDSYMPRINT(Args)			\
do {						\
  if (yydebug)					\
    yysymprint Args;				\
} while (0)

# define YYDSYMPRINTF(Title, Token, Value, Location)		\
do {								\
  if (yydebug)							\
    {								\
      YYFPRINTF (stderr, "%s ", Title);				\
      yysymprint (stderr, 					\
                  Token, Value);	\
      YYFPRINTF (stderr, "\n");					\
    }								\
} while (0)

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yy_stack_print (short int *bottom, short int *top)
#else
static void
yy_stack_print (bottom, top)
    short int *bottom;
    short int *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (/* Nothing. */; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yy_reduce_print (int yyrule)
#else
static void
yy_reduce_print (yyrule)
    int yyrule;
#endif
{
  int yyi;
  unsigned int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %u), ",
             yyrule - 1, yylno);
  /* Print the symbols being reduced, and their result.  */
  for (yyi = yyprhs[yyrule]; 0 <= yyrhs[yyi]; yyi++)
    YYFPRINTF (stderr, "%s ", yytname [yyrhs[yyi]]);
  YYFPRINTF (stderr, "-> %s\n", yytname [yyr1[yyrule]]);
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (Rule);		\
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YYDSYMPRINT(Args)
# define YYDSYMPRINTF(Title, Token, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   SIZE_MAX < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#if defined (YYMAXDEPTH) && YYMAXDEPTH == 0
# undef YYMAXDEPTH
#endif

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined (__GLIBC__) && defined (_STRING_H)
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
#   if defined (__STDC__) || defined (__cplusplus)
yystrlen (const char *yystr)
#   else
yystrlen (yystr)
     const char *yystr;
#   endif
{
  register const char *yys = yystr;

  while (*yys++ != '\0')
    continue;

  return yys - yystr - 1;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined (__GLIBC__) && defined (_STRING_H) && defined (_GNU_SOURCE)
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
#   if defined (__STDC__) || defined (__cplusplus)
yystpcpy (char *yydest, const char *yysrc)
#   else
yystpcpy (yydest, yysrc)
     char *yydest;
     const char *yysrc;
#   endif
{
  register char *yyd = yydest;
  register const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

#endif /* !YYERROR_VERBOSE */



#if YYDEBUG
/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yysymprint (FILE *yyoutput, int yytype, YYSTYPE *yyvaluep)
#else
static void
yysymprint (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  /* Pacify ``unused variable'' warnings.  */
  (void) yyvaluep;

  if (yytype < YYNTOKENS)
    {
      YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
# ifdef YYPRINT
      YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
    }
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  switch (yytype)
    {
      default:
        break;
    }
  YYFPRINTF (yyoutput, ")");
}

#endif /* ! YYDEBUG */
/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yydestruct (int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yytype, yyvaluep)
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  /* Pacify ``unused variable'' warnings.  */
  (void) yyvaluep;

  switch (yytype)
    {

      default:
        break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
# if defined (__STDC__) || defined (__cplusplus)
int yyparse (void *YYPARSE_PARAM);
# else
int yyparse ();
# endif
#else /* ! YYPARSE_PARAM */
#if defined (__STDC__) || defined (__cplusplus)
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */






/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
# if defined (__STDC__) || defined (__cplusplus)
int yyparse (void *YYPARSE_PARAM)
# else
int yyparse (YYPARSE_PARAM)
  void *YYPARSE_PARAM;
# endif
#else /* ! YYPARSE_PARAM */
#if defined (__STDC__) || defined (__cplusplus)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  /* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;

  register int yystate;
  register int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  short int yyssa[YYINITDEPTH];
  short int *yyss = yyssa;
  register short int *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  register YYSTYPE *yyvsp;



#define YYPOPSTACK   (yyvsp--, yyssp--)

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* When reducing, the number of symbols on the RHS of the reduced
     rule.  */
  int yylen;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;


  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed. so pushing a state here evens the stacks.
     */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack. Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	short int *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow ("parser stack overflow",
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyoverflowlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyoverflowlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	short int *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyoverflowlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

/* Do appropriate processing given the current state.  */
/* Read a lookahead token if we need one and don't already have one.  */
/* yyresume: */

  /* First try to decide what to do without reference to lookahead token.  */

  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YYDSYMPRINTF ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Shift the lookahead token.  */
  YYDPRINTF ((stderr, "Shifting token %s, ", yytname[yytoken]));

  /* Discard the token being shifted unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  *++yyvsp = yylval;


  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  yystate = yyn;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 596 "ripper.y"
    {
#if 0
			lex_state = EXPR_BEG;
			top_local_init();
			if (ruby_class == rb_cObject) class_nest = 0;
                        else class_nest = 1;
#endif
		        lex_state = EXPR_BEG;
		        class_nest = !parser->toplevel_p;
		        yyval.val = Qnil;

		    ;}
    break;

  case 3:
#line 609 "ripper.y"
    {
#if 0
			if (yyvsp[0].val && !compile_for_eval) {
                            /* last expression should not be void */
			    if (nd_type(yyvsp[0].val) != NODE_BLOCK) void_expr(yyvsp[0].val);
			    else {
				NODE *node = yyvsp[0].val;
				while (node->nd_next) {
				    node = node->nd_next;
				}
				void_expr(node->nd_head);
			    }
			}
			ruby_eval_tree = block_append(ruby_eval_tree, yyvsp[0].val);
                        top_local_setup();
			class_nest = 0;
#endif
			class_nest = 0;
                        yyval.val = yyvsp[0].val;
                        parser->result = dispatch1(program, yyval.val);

		    ;}
    break;

  case 4:
#line 637 "ripper.y"
    {
#if 0
		        yyval.val = yyvsp[-3].val;
			if (yyvsp[-2].val) {
			    yyval.val = NEW_RESCUE(yyvsp[-3].val, yyvsp[-2].val, yyvsp[-1].val);
			}
			else if (yyvsp[-1].val) {
			    rb_warn("else without rescue is useless");
			    yyval.val = block_append(yyval.val, yyvsp[-1].val);
			}
			if (yyvsp[0].val) {
			    if (yyval.val) {
				yyval.val = NEW_ENSURE(yyval.val, yyvsp[0].val);
			    }
			    else {
				yyval.val = block_append(yyvsp[0].val, NEW_NIL());
			    }
			}
			fixpos(yyval.val, yyvsp[-3].val);
#endif
		        yyval.val = dispatch4(bodystmt,
                                       escape_Qundef(yyvsp[-3].val),
                                       escape_Qundef(yyvsp[-2].val),
                                       escape_Qundef(yyvsp[-1].val),
                                       escape_Qundef(yyvsp[0].val));

		    ;}
    break;

  case 5:
#line 667 "ripper.y"
    {
#if 0
			void_stmts(yyvsp[-1].val);
		        yyval.val = yyvsp[-1].val;
#endif
		    	yyval.val = yyvsp[-1].val;

		    ;}
    break;

  case 6:
#line 680 "ripper.y"
    {
			yyval.val = dispatch2(stmts_add, dispatch0(stmts_new),
			                          dispatch0(void_stmt));
		    ;}
    break;

  case 7:
#line 686 "ripper.y"
    {
#if 0
			yyval.val = newline_node(remove_begin(yyvsp[0].val));
#endif
			yyval.val = dispatch2(stmts_add, dispatch0(stmts_new), yyvsp[0].val);

		    ;}
    break;

  case 8:
#line 694 "ripper.y"
    {
#if 0
			yyval.val = block_append(yyvsp[-2].val, newline_node(remove_begin(yyvsp[0].val)));
#endif
			yyval.val = dispatch2(stmts_add, yyvsp[-2].val, yyvsp[0].val);

		    ;}
    break;

  case 9:
#line 702 "ripper.y"
    {
			yyval.val = remove_begin(yyvsp[0].val);
		    ;}
    break;

  case 10:
#line 707 "ripper.y"
    {lex_state = EXPR_FNAME;;}
    break;

  case 11:
#line 708 "ripper.y"
    {
#if 0
		        yyval.val = NEW_ALIAS(yyvsp[-2].val, yyvsp[0].val);
#endif
			yyval.val = dispatch2(alias, yyvsp[-2].val, yyvsp[0].val);

		    ;}
    break;

  case 12:
#line 716 "ripper.y"
    {
#if 0
		        yyval.val = NEW_VALIAS(yyvsp[-1].val, yyvsp[0].val);
#endif
			yyval.val = dispatch2(var_alias, yyvsp[-1].val, yyvsp[0].val);

		    ;}
    break;

  case 13:
#line 724 "ripper.y"
    {
#if 0
			char buf[3];

			sprintf(buf, "$%c", (char)yyvsp[0].val->nd_nth);
		        yyval.val = NEW_VALIAS(yyvsp[-1].val, rb_intern(buf));
#endif
			yyval.val = dispatch2(var_alias, yyvsp[-1].val, yyvsp[0].val);

		    ;}
    break;

  case 14:
#line 735 "ripper.y"
    {
#if 0
		        yyerror("can't make alias for the number variables");
		        yyval.val = 0;
#endif
			yyval.val = dispatch2(var_alias, yyvsp[-1].val, yyvsp[0].val);
			yyval.val = dispatch1(alias_error, yyval.val);

		    ;}
    break;

  case 15:
#line 745 "ripper.y"
    {
#if 0
			yyval.val = yyvsp[0].val;
#endif
			yyval.val = dispatch1(undef, yyvsp[0].val);

		    ;}
    break;

  case 16:
#line 753 "ripper.y"
    {
#if 0
			yyval.val = NEW_IF(cond(yyvsp[0].val), yyvsp[-2].val, 0);
		        fixpos(yyval.val, yyvsp[0].val);
			if (cond_negative(&yyval.val->nd_cond)) {
		            yyval.val->nd_else = yyval.val->nd_body;
		            yyval.val->nd_body = 0;
			}
#endif
			yyval.val = dispatch2(if_mod, yyvsp[0].val, yyvsp[-2].val);

		    ;}
    break;

  case 17:
#line 766 "ripper.y"
    {
#if 0
			yyval.val = NEW_UNLESS(cond(yyvsp[0].val), yyvsp[-2].val, 0);
		        fixpos(yyval.val, yyvsp[0].val);
			if (cond_negative(&yyval.val->nd_cond)) {
		            yyval.val->nd_body = yyval.val->nd_else;
		            yyval.val->nd_else = 0;
			}
#endif
		    	yyval.val = dispatch2(unless_mod, yyvsp[0].val, yyvsp[-2].val);

		    ;}
    break;

  case 18:
#line 779 "ripper.y"
    {
#if 0
			if (yyvsp[-2].val && nd_type(yyvsp[-2].val) == NODE_BEGIN) {
			    yyval.val = NEW_WHILE(cond(yyvsp[0].val), yyvsp[-2].val->nd_body, 0);
			}
			else {
			    yyval.val = NEW_WHILE(cond(yyvsp[0].val), yyvsp[-2].val, 1);
			}
			if (cond_negative(&yyval.val->nd_cond)) {
			    nd_set_type(yyval.val, NODE_UNTIL);
			}
#endif
			yyval.val = dispatch2(while_mod, yyvsp[0].val, yyvsp[-2].val);

		    ;}
    break;

  case 19:
#line 795 "ripper.y"
    {
#if 0
			if (yyvsp[-2].val && nd_type(yyvsp[-2].val) == NODE_BEGIN) {
			    yyval.val = NEW_UNTIL(cond(yyvsp[0].val), yyvsp[-2].val->nd_body, 0);
			}
			else {
			    yyval.val = NEW_UNTIL(cond(yyvsp[0].val), yyvsp[-2].val, 1);
			}
			if (cond_negative(&yyval.val->nd_cond)) {
			    nd_set_type(yyval.val, NODE_WHILE);
			}
#endif
			yyval.val = dispatch2(until_mod, yyvsp[0].val, yyvsp[-2].val);

		    ;}
    break;

  case 20:
#line 811 "ripper.y"
    {
#if 0
			yyval.val = NEW_RESCUE(yyvsp[-2].val, NEW_RESBODY(0,yyvsp[0].val,0), 0);
#endif
			yyval.val = dispatch2(rescue_mod, yyvsp[0].val, yyvsp[-2].val);

		    ;}
    break;

  case 21:
#line 819 "ripper.y"
    {
#if 0
			if (in_def || in_single) {
			    yyerror("BEGIN in method");
			}
			local_push(0);
#endif
			if (in_def || in_single) {
			    yyerror("BEGIN in method");
			}

		    ;}
    break;

  case 22:
#line 832 "ripper.y"
    {
#if 0
			ruby_eval_tree_begin = block_append(ruby_eval_tree_begin,
						            NEW_PREEXE(yyvsp[-1].val));
		        local_pop();
		        yyval.val = 0;
#endif
			yyval.val = dispatch1(BEGIN, yyvsp[-1].val);

		    ;}
    break;

  case 23:
#line 843 "ripper.y"
    {
#if 0
			if (in_def || in_single) {
			    rb_warn("END in method; use at_exit");
			}

			yyval.val = NEW_ITER(0, NEW_POSTEXE(), yyvsp[-1].val);
#endif
			if (in_def || in_single) {
			    rb_warn0("END in method; use at_exit");
			}
		    	yyval.val = dispatch1(END, yyvsp[-1].val);

		    ;}
    break;

  case 24:
#line 858 "ripper.y"
    {
#if 0
			yyval.val = node_assign(yyvsp[-2].val, yyvsp[0].val);
#endif
		    	yyval.val = dispatch2(assign, yyvsp[-2].val, yyvsp[0].val);

		    ;}
    break;

  case 25:
#line 866 "ripper.y"
    {
#if 0
			value_expr(yyvsp[0].val);
			yyvsp[-2].val->nd_value = (yyvsp[-2].val->nd_head) ? NEW_TO_ARY(yyvsp[0].val) : NEW_ARRAY(yyvsp[0].val);
			yyval.val = yyvsp[-2].val;
#endif
		    	yyval.val = dispatch2(massign, yyvsp[-2].val, yyvsp[0].val);

		    ;}
    break;

  case 26:
#line 876 "ripper.y"
    {
#if 0
			value_expr(yyvsp[0].val);
			if (yyvsp[-2].val) {
			    ID vid = yyvsp[-2].val->nd_vid;
			    if (yyvsp[-1].val == tOROP) {
				yyvsp[-2].val->nd_value = yyvsp[0].val;
				yyval.val = NEW_OP_ASGN_OR(gettable(vid), yyvsp[-2].val);
				if (is_asgn_or_id(vid)) {
				    yyval.val->nd_aid = vid;
				}
			    }
			    else if (yyvsp[-1].val == tANDOP) {
				yyvsp[-2].val->nd_value = yyvsp[0].val;
				yyval.val = NEW_OP_ASGN_AND(gettable(vid), yyvsp[-2].val);
			    }
			    else {
				yyval.val = yyvsp[-2].val;
				yyval.val->nd_value = call_op(gettable(vid),yyvsp[-1].val,1,yyvsp[0].val);
			    }
			}
			else {
			    yyval.val = 0;
			}
#endif
		    	yyval.val = dispatch3(opassign, yyvsp[-2].val, yyvsp[-1].val, yyvsp[0].val);

		    ;}
    break;

  case 27:
#line 905 "ripper.y"
    {
#if 0
                        NODE *args;

			value_expr(yyvsp[0].val);
		        args = NEW_LIST(yyvsp[0].val);
			if (yyvsp[-3].val && nd_type(yyvsp[-3].val) != NODE_ARRAY)
			    yyvsp[-3].val = NEW_LIST(yyvsp[-3].val);
			yyvsp[-3].val = list_append(yyvsp[-3].val, NEW_NIL());
			list_concat(args, yyvsp[-3].val);
			if (yyvsp[-1].val == tOROP) {
			    yyvsp[-1].val = 0;
			}
			else if (yyvsp[-1].val == tANDOP) {
			    yyvsp[-1].val = 1;
			}
			yyval.val = NEW_OP_ASGN1(yyvsp[-5].val, yyvsp[-1].val, args);
		        fixpos(yyval.val, yyvsp[-5].val);
#endif
			yyval.val = dispatch2(aref_field, yyvsp[-5].val, escape_Qundef(yyvsp[-3].val));
		    	yyval.val = dispatch3(opassign, yyval.val, yyvsp[-1].val, yyvsp[0].val);

		    ;}
    break;

  case 28:
#line 929 "ripper.y"
    {
#if 0
			value_expr(yyvsp[0].val);
			if (yyvsp[-1].val == tOROP) {
			    yyvsp[-1].val = 0;
			}
			else if (yyvsp[-1].val == tANDOP) {
			    yyvsp[-1].val = 1;
			}
			yyval.val = NEW_OP_ASGN2(yyvsp[-4].val, yyvsp[-2].val, yyvsp[-1].val, yyvsp[0].val);
		        fixpos(yyval.val, yyvsp[-4].val);
#endif
                        yyval.val = dispatch3(field, yyvsp[-4].val, ripper_id2sym('.'), yyvsp[-2].val);
			yyval.val = dispatch3(opassign, yyval.val, yyvsp[-1].val, yyvsp[0].val);

		    ;}
    break;

  case 29:
#line 946 "ripper.y"
    {
#if 0
			value_expr(yyvsp[0].val);
			if (yyvsp[-1].val == tOROP) {
			    yyvsp[-1].val = 0;
			}
			else if (yyvsp[-1].val == tANDOP) {
			    yyvsp[-1].val = 1;
			}
			yyval.val = NEW_OP_ASGN2(yyvsp[-4].val, yyvsp[-2].val, yyvsp[-1].val, yyvsp[0].val);
		        fixpos(yyval.val, yyvsp[-4].val);
#endif
                        yyval.val = dispatch3(field, yyvsp[-4].val, ripper_id2sym('.'), yyvsp[-2].val);
			yyval.val = dispatch3(opassign, yyval.val, yyvsp[-1].val, yyvsp[0].val);

		    ;}
    break;

  case 30:
#line 963 "ripper.y"
    {
#if 0
			value_expr(yyvsp[0].val);
			if (yyvsp[-1].val == tOROP) {
			    yyvsp[-1].val = 0;
			}
			else if (yyvsp[-1].val == tANDOP) {
			    yyvsp[-1].val = 1;
			}
			yyval.val = NEW_OP_ASGN2(yyvsp[-4].val, yyvsp[-2].val, yyvsp[-1].val, yyvsp[0].val);
		        fixpos(yyval.val, yyvsp[-4].val);
#endif
                        yyval.val = dispatch3(field, yyvsp[-4].val, ripper_intern("::"), yyvsp[-2].val);
		    	yyval.val = dispatch3(opassign, yyval.val, yyvsp[-1].val, yyvsp[0].val);

		    ;}
    break;

  case 31:
#line 980 "ripper.y"
    {
#if 0
		        rb_backref_error(yyvsp[-2].val);
			yyval.val = 0;
#endif
                        yyval.val = dispatch2(assign, dispatch1(var_field, yyvsp[-2].val), yyvsp[0].val);
		    	yyval.val = dispatch1(assign_error, yyval.val);

		    ;}
    break;

  case 32:
#line 990 "ripper.y"
    {
#if 0
			yyval.val = node_assign(yyvsp[-2].val, NEW_SVALUE(yyvsp[0].val));
#endif
		    	yyval.val = dispatch2(assign, yyvsp[-2].val, yyvsp[0].val);

		    ;}
    break;

  case 33:
#line 998 "ripper.y"
    {
#if 0
			yyvsp[-2].val->nd_value = (yyvsp[-2].val->nd_head) ? NEW_TO_ARY(yyvsp[0].val) : NEW_ARRAY(yyvsp[0].val);
			yyval.val = yyvsp[-2].val;
#endif
		    	dispatch2(massign, yyvsp[-2].val, yyvsp[0].val);

		    ;}
    break;

  case 34:
#line 1007 "ripper.y"
    {
#if 0
			yyvsp[-2].val->nd_value = yyvsp[0].val;
			yyval.val = yyvsp[-2].val;
#endif
		    	yyval.val = dispatch2(massign, yyvsp[-2].val, yyvsp[0].val);

		    ;}
    break;

  case 37:
#line 1020 "ripper.y"
    {
#if 0
			yyval.val = logop(NODE_AND, yyvsp[-2].val, yyvsp[0].val);
#endif
		    	yyval.val = dispatch3(binary, yyvsp[-2].val, ripper_intern("and"), yyvsp[0].val);

		    ;}
    break;

  case 38:
#line 1028 "ripper.y"
    {
#if 0
			yyval.val = logop(NODE_OR, yyvsp[-2].val, yyvsp[0].val);
#endif
		    	yyval.val = dispatch3(binary, yyvsp[-2].val, ripper_intern("or"), yyvsp[0].val);

		    ;}
    break;

  case 39:
#line 1036 "ripper.y"
    {
#if 0
			yyval.val = NEW_NOT(cond(yyvsp[0].val));
#endif
		    	yyval.val = dispatch2(unary, ripper_intern("not"), yyvsp[0].val);

		    ;}
    break;

  case 40:
#line 1044 "ripper.y"
    {
#if 0
			yyval.val = NEW_NOT(cond(yyvsp[0].val));
#endif
		    	yyval.val = dispatch2(unary, ID2SYM('!'), yyvsp[0].val);

		    ;}
    break;

  case 42:
#line 1055 "ripper.y"
    {
#if 0
			value_expr(yyval.val);
			yyval.val = yyvsp[0].val;
#endif
		    	yyval.val = yyvsp[0].val;

		    ;}
    break;

  case 45:
#line 1068 "ripper.y"
    {
#if 0
			yyval.val = NEW_RETURN(ret_args(yyvsp[0].val));
#endif
		    	yyval.val = dispatch1(return, yyvsp[0].val);

		    ;}
    break;

  case 46:
#line 1076 "ripper.y"
    {
#if 0
			yyval.val = NEW_BREAK(ret_args(yyvsp[0].val));
#endif
		    	yyval.val = dispatch1(break, yyvsp[0].val);

		    ;}
    break;

  case 47:
#line 1084 "ripper.y"
    {
#if 0
			yyval.val = NEW_NEXT(ret_args(yyvsp[0].val));
#endif
		    	yyval.val = dispatch1(next, yyvsp[0].val);

		    ;}
    break;

  case 49:
#line 1095 "ripper.y"
    {
#if 0
			yyval.val = new_call(yyvsp[-3].val, yyvsp[-1].val, yyvsp[0].val);
#endif
		    	yyval.val = dispatch3(call, yyvsp[-3].val, ripper_id2sym('.'), yyvsp[-1].val);
                        yyval.val = method_arg(yyval.val, yyvsp[0].val);

		    ;}
    break;

  case 50:
#line 1104 "ripper.y"
    {
#if 0
			yyval.val = new_call(yyvsp[-3].val, yyvsp[-1].val, yyvsp[0].val);
#endif
		    	yyval.val = dispatch3(call, yyvsp[-3].val, ripper_intern("::"), yyvsp[-1].val);
                        yyval.val = method_arg(yyval.val, yyvsp[0].val);

		    ;}
    break;

  case 51:
#line 1115 "ripper.y"
    {
#if 0
			yyval.vars = dyna_push();
			yyvsp[0].num = ruby_sourceline;
#endif

		    ;}
    break;

  case 52:
#line 1122 "ripper.y"
    {yyval.vars = ruby_dyna_vars;;}
    break;

  case 53:
#line 1125 "ripper.y"
    {
#if 0
			yyvsp[-3].val->nd_body = block_append(yyvsp[-3].val->nd_body,
						   dyna_init(yyvsp[-1].val, yyvsp[-2].vars));
			yyval.val = yyvsp[-3].val;
			nd_set_line(yyval.val, yyvsp[-5].num);
			dyna_pop(yyvsp[-4].vars);
#endif
			yyval.val = dispatch2(brace_block, escape_Qundef(yyvsp[-3].val), yyvsp[-1].val);

		    ;}
    break;

  case 54:
#line 1139 "ripper.y"
    {
#if 0
			yyval.val = new_fcall(yyvsp[-1].val, yyvsp[0].val);
		        fixpos(yyval.val, yyvsp[0].val);
#endif
		        yyval.val = dispatch2(command, yyvsp[-1].val, yyvsp[0].val);

		    ;}
    break;

  case 55:
#line 1148 "ripper.y"
    {
#if 0
			yyval.val = new_fcall(yyvsp[-2].val, yyvsp[-1].val);
			if (yyvsp[0].val) {
		            block_dup_check(yyval.val);
			    yyvsp[0].val->nd_iter = yyval.val;
			    yyval.val = yyvsp[0].val;
			}
		        fixpos(yyval.val, yyvsp[-1].val);
#endif
		        yyval.val = dispatch2(command, yyvsp[-2].val, yyvsp[-1].val);
                        yyval.val = dispatch2(iter_block, yyval.val, yyvsp[0].val);

		    ;}
    break;

  case 56:
#line 1163 "ripper.y"
    {
#if 0
			yyval.val = new_call(yyvsp[-3].val, yyvsp[-1].val, yyvsp[0].val);
		        fixpos(yyval.val, yyvsp[-3].val);
#endif
			yyval.val = dispatch4(command_call, yyvsp[-3].val, ripper_id2sym('.'), yyvsp[-1].val, yyvsp[0].val);

		    ;}
    break;

  case 57:
#line 1172 "ripper.y"
    {
#if 0
			yyval.val = new_call(yyvsp[-4].val, yyvsp[-2].val, yyvsp[-1].val);
			if (yyvsp[0].val) {
		            block_dup_check(yyval.val);
			    yyvsp[0].val->nd_iter = yyval.val;
			    yyval.val = yyvsp[0].val;
			}
		        fixpos(yyval.val, yyvsp[-4].val);
#endif
			yyval.val = dispatch4(command_call, yyvsp[-4].val, ripper_id2sym('.'), yyvsp[-2].val, yyvsp[-1].val);
			yyval.val = dispatch2(iter_block, yyval.val, yyvsp[0].val);

		   ;}
    break;

  case 58:
#line 1187 "ripper.y"
    {
#if 0
			yyval.val = new_call(yyvsp[-3].val, yyvsp[-1].val, yyvsp[0].val);
		        fixpos(yyval.val, yyvsp[-3].val);
#endif
			yyval.val = dispatch4(command_call, yyvsp[-3].val, ripper_intern("::"), yyvsp[-1].val, yyvsp[0].val);

		    ;}
    break;

  case 59:
#line 1196 "ripper.y"
    {
#if 0
			yyval.val = new_call(yyvsp[-4].val, yyvsp[-2].val, yyvsp[-1].val);
			if (yyvsp[0].val) {
		            block_dup_check(yyval.val);
			    yyvsp[0].val->nd_iter = yyval.val;
			    yyval.val = yyvsp[0].val;
			}
		        fixpos(yyval.val, yyvsp[-4].val);
#endif
			yyval.val = dispatch4(command_call, yyvsp[-4].val, ripper_intern("::"), yyvsp[-2].val, yyvsp[-1].val);
                        yyval.val = dispatch2(iter_block, yyval.val, yyvsp[0].val);

		   ;}
    break;

  case 60:
#line 1211 "ripper.y"
    {
#if 0
			yyval.val = new_super(yyvsp[0].val);
		        fixpos(yyval.val, yyvsp[0].val);
#endif
			yyval.val = dispatch1(super, yyvsp[0].val);

		    ;}
    break;

  case 61:
#line 1220 "ripper.y"
    {
#if 0
			yyval.val = new_yield(yyvsp[0].val);
		        fixpos(yyval.val, yyvsp[0].val);
#endif
			yyval.val = dispatch1(yield, yyvsp[0].val);

		    ;}
    break;

  case 63:
#line 1232 "ripper.y"
    {
#if 0
			yyval.val = yyvsp[-1].val;
#endif
			yyval.val = dispatch1(mlhs_paren, yyvsp[-1].val);

		    ;}
    break;

  case 65:
#line 1243 "ripper.y"
    {
#if 0
			yyval.val = NEW_MASGN(NEW_LIST(yyvsp[-1].val), 0);
#endif
			yyval.val = dispatch1(mlhs_paren, yyvsp[-1].val);

		    ;}
    break;

  case 66:
#line 1253 "ripper.y"
    {
#if 0
			yyval.val = NEW_MASGN(yyvsp[0].val, 0);
#endif
			yyval.val = yyvsp[0].val;

		    ;}
    break;

  case 67:
#line 1261 "ripper.y"
    {
#if 0
			yyval.val = NEW_MASGN(list_append(yyvsp[-1].val,yyvsp[0].val), 0);
#endif
			yyval.val = mlhs_add(yyvsp[-1].val, yyvsp[0].val);

		    ;}
    break;

  case 68:
#line 1269 "ripper.y"
    {
#if 0
			yyval.val = NEW_MASGN(yyvsp[-2].val, yyvsp[0].val);
#endif
			yyval.val = mlhs_add_star(yyvsp[-2].val, yyvsp[0].val);

		    ;}
    break;

  case 69:
#line 1277 "ripper.y"
    {
#if 0
			yyval.val = NEW_MASGN(yyvsp[-1].val, -1);
#endif
			yyval.val = mlhs_add_star(yyvsp[-1].val, Qnil);

		    ;}
    break;

  case 70:
#line 1285 "ripper.y"
    {
#if 0
			yyval.val = NEW_MASGN(0, yyvsp[0].val);
#endif
			yyval.val = mlhs_add_star(mlhs_new(), yyvsp[0].val);

		    ;}
    break;

  case 71:
#line 1293 "ripper.y"
    {
#if 0
			yyval.val = NEW_MASGN(0, -1);
#endif
			yyval.val = mlhs_add_star(mlhs_new(), Qnil);

		    ;}
    break;

  case 73:
#line 1304 "ripper.y"
    {
#if 0
			yyval.val = yyvsp[-1].val;
#endif
			yyval.val = dispatch1(mlhs_paren, yyvsp[-1].val);

		    ;}
    break;

  case 74:
#line 1314 "ripper.y"
    {
#if 0
			yyval.val = NEW_LIST(yyvsp[-1].val);
#endif
			yyval.val = mlhs_add(mlhs_new(), yyvsp[-1].val);

		    ;}
    break;

  case 75:
#line 1322 "ripper.y"
    {
#if 0
			yyval.val = list_append(yyvsp[-2].val, yyvsp[-1].val);
#endif
			yyval.val = mlhs_add(yyvsp[-2].val, yyvsp[-1].val);

		    ;}
    break;

  case 76:
#line 1332 "ripper.y"
    {
#if 0
			yyval.val = assignable(yyvsp[0].val, 0);
#endif
			yyval.val = yyvsp[0].val;

		    ;}
    break;

  case 77:
#line 1340 "ripper.y"
    {
#if 0
			yyval.val = aryset(yyvsp[-3].val, yyvsp[-1].val);
#endif
			yyval.val = dispatch2(aref_field, yyvsp[-3].val, escape_Qundef(yyvsp[-1].val));

		    ;}
    break;

  case 78:
#line 1348 "ripper.y"
    {
#if 0
			yyval.val = attrset(yyvsp[-2].val, yyvsp[0].val);
#endif
			yyval.val = dispatch3(field, yyvsp[-2].val, ripper_id2sym('.'), yyvsp[0].val);

		    ;}
    break;

  case 79:
#line 1356 "ripper.y"
    {
#if 0
			yyval.val = attrset(yyvsp[-2].val, yyvsp[0].val);
#endif
			yyval.val = dispatch2(constpath_field, yyvsp[-2].val, yyvsp[0].val);

		    ;}
    break;

  case 80:
#line 1364 "ripper.y"
    {
#if 0
			yyval.val = attrset(yyvsp[-2].val, yyvsp[0].val);
#endif
			yyval.val = dispatch3(field, yyvsp[-2].val, ripper_id2sym('.'), yyvsp[0].val);

		    ;}
    break;

  case 81:
#line 1372 "ripper.y"
    {
#if 0
			if (in_def || in_single)
			    yyerror("dynamic constant assignment");
			yyval.val = NEW_CDECL(0, 0, NEW_COLON2(yyvsp[-2].val, yyvsp[0].val));
#endif
			if (in_def || in_single)
			    yyerror("dynamic constant assignment");
			yyval.val = dispatch2(constpath_field, yyvsp[-2].val, yyvsp[0].val);

		    ;}
    break;

  case 82:
#line 1384 "ripper.y"
    {
#if 0
			if (in_def || in_single)
			    yyerror("dynamic constant assignment");
			yyval.val = NEW_CDECL(0, 0, NEW_COLON3(yyvsp[0].val));
#endif
			yyval.val = dispatch1(topconst_field, yyvsp[0].val);

		    ;}
    break;

  case 83:
#line 1394 "ripper.y"
    {
#if 0
		        rb_backref_error(yyvsp[0].val);
			yyval.val = 0;
#endif
			yyval.val = dispatch1(var_field, yyvsp[0].val);
                        yyval.val = dispatch1(assign_error, yyval.val);

		    ;}
    break;

  case 84:
#line 1406 "ripper.y"
    {
#if 0
			yyval.val = assignable(yyvsp[0].val, 0);
#endif
			yyval.val = dispatch1(var_field, yyvsp[0].val);

		    ;}
    break;

  case 85:
#line 1414 "ripper.y"
    {
#if 0
			yyval.val = aryset(yyvsp[-3].val, yyvsp[-1].val);
#endif
			yyval.val = dispatch2(aref_field, yyvsp[-3].val, escape_Qundef(yyvsp[-1].val));

		    ;}
    break;

  case 86:
#line 1422 "ripper.y"
    {
#if 0
			yyval.val = attrset(yyvsp[-2].val, yyvsp[0].val);
#endif
			yyval.val = dispatch3(field, yyvsp[-2].val, ripper_id2sym('.'), yyvsp[0].val);

		    ;}
    break;

  case 87:
#line 1430 "ripper.y"
    {
#if 0
			yyval.val = attrset(yyvsp[-2].val, yyvsp[0].val);
#endif
			yyval.val = dispatch3(field, yyvsp[-2].val, ripper_intern("::"), yyvsp[0].val);

		    ;}
    break;

  case 88:
#line 1438 "ripper.y"
    {
#if 0
			yyval.val = attrset(yyvsp[-2].val, yyvsp[0].val);
#endif
			yyval.val = dispatch3(field, yyvsp[-2].val, ripper_id2sym('.'), yyvsp[0].val);

		    ;}
    break;

  case 89:
#line 1446 "ripper.y"
    {
#if 0
			if (in_def || in_single)
			    yyerror("dynamic constant assignment");
			yyval.val = NEW_CDECL(0, 0, NEW_COLON2(yyvsp[-2].val, yyvsp[0].val));
#endif
                        yyval.val = dispatch2(constpath_field, yyvsp[-2].val, yyvsp[0].val);
			if (in_def || in_single) {
			    yyval.val = dispatch1(assign_error, yyval.val);
			}

		    ;}
    break;

  case 90:
#line 1459 "ripper.y"
    {
#if 0
			if (in_def || in_single)
			    yyerror("dynamic constant assignment");
			yyval.val = NEW_CDECL(0, 0, NEW_COLON3(yyvsp[0].val));
#endif
                        yyval.val = dispatch1(topconst_field, yyvsp[0].val);
			if (in_def || in_single) {
			    yyval.val = dispatch1(assign_error, yyval.val);
			}

		    ;}
    break;

  case 91:
#line 1472 "ripper.y"
    {
#if 0
		        rb_backref_error(yyvsp[0].val);
			yyval.val = 0;
#endif
			yyval.val = dispatch1(assign_error, yyvsp[0].val);

		    ;}
    break;

  case 92:
#line 1483 "ripper.y"
    {
#if 0
			yyerror("class/module name must be CONSTANT");
#endif
			yyval.val = dispatch1(class_name_error, yyvsp[0].val);

		    ;}
    break;

  case 94:
#line 1494 "ripper.y"
    {
#if 0
			yyval.val = NEW_COLON3(yyvsp[0].val);
#endif
			yyval.val = dispatch1(topconst_ref, yyvsp[0].val);

		    ;}
    break;

  case 95:
#line 1502 "ripper.y"
    {
#if 0
			yyval.val = NEW_COLON2(0, yyval.val);
#endif
			yyval.val = dispatch1(const_ref, yyvsp[0].val);

		    ;}
    break;

  case 96:
#line 1510 "ripper.y"
    {
#if 0
			yyval.val = NEW_COLON2(yyvsp[-2].val, yyvsp[0].val);
#endif
			yyval.val = dispatch2(constpath_ref, yyvsp[-2].val, yyvsp[0].val);

		    ;}
    break;

  case 100:
#line 1523 "ripper.y"
    {
#if 0
			lex_state = EXPR_END;
			yyval.val = yyvsp[0].val;
#endif
			lex_state = EXPR_END;
			yyval.val = yyvsp[0].val;

		    ;}
    break;

  case 101:
#line 1533 "ripper.y"
    {
#if 0
			lex_state = EXPR_END;
			yyval.val = yyvsp[0].id;
#endif
			lex_state = EXPR_END;
			yyval.val = yyvsp[0].val;

		    ;}
    break;

  case 104:
#line 1549 "ripper.y"
    {
#if 0
			yyval.val = NEW_LIT(ID2SYM(yyvsp[0].val));
#endif
			yyval.val = dispatch1(symbol_literal, yyvsp[0].val);

		    ;}
    break;

  case 106:
#line 1560 "ripper.y"
    {
#if 0
			yyval.val = NEW_UNDEF(yyvsp[0].val);
#endif
			yyval.val = rb_ary_new3(1, yyvsp[0].val);

		    ;}
    break;

  case 107:
#line 1567 "ripper.y"
    {lex_state = EXPR_FNAME;;}
    break;

  case 108:
#line 1568 "ripper.y"
    {
#if 0
			yyval.val = block_append(yyvsp[-3].val, NEW_UNDEF(yyvsp[0].val));
#endif
			rb_ary_push(yyvsp[-3].val, yyvsp[0].val);

		    ;}
    break;

  case 109:
#line 1577 "ripper.y"
    { ifndef_ripper(yyval.val = '|'); ;}
    break;

  case 110:
#line 1578 "ripper.y"
    { ifndef_ripper(yyval.val = '^'); ;}
    break;

  case 111:
#line 1579 "ripper.y"
    { ifndef_ripper(yyval.val = '&'); ;}
    break;

  case 112:
#line 1580 "ripper.y"
    { ifndef_ripper(yyval.val = tCMP); ;}
    break;

  case 113:
#line 1581 "ripper.y"
    { ifndef_ripper(yyval.val = tEQ); ;}
    break;

  case 114:
#line 1582 "ripper.y"
    { ifndef_ripper(yyval.val = tEQQ); ;}
    break;

  case 115:
#line 1583 "ripper.y"
    { ifndef_ripper(yyval.val = tMATCH); ;}
    break;

  case 116:
#line 1584 "ripper.y"
    { ifndef_ripper(yyval.val = '>'); ;}
    break;

  case 117:
#line 1585 "ripper.y"
    { ifndef_ripper(yyval.val = tGEQ); ;}
    break;

  case 118:
#line 1586 "ripper.y"
    { ifndef_ripper(yyval.val = '<'); ;}
    break;

  case 119:
#line 1587 "ripper.y"
    { ifndef_ripper(yyval.val = tLEQ); ;}
    break;

  case 120:
#line 1588 "ripper.y"
    { ifndef_ripper(yyval.val = tLSHFT); ;}
    break;

  case 121:
#line 1589 "ripper.y"
    { ifndef_ripper(yyval.val = tRSHFT); ;}
    break;

  case 122:
#line 1590 "ripper.y"
    { ifndef_ripper(yyval.val = '+'); ;}
    break;

  case 123:
#line 1591 "ripper.y"
    { ifndef_ripper(yyval.val = '-'); ;}
    break;

  case 124:
#line 1592 "ripper.y"
    { ifndef_ripper(yyval.val = '*'); ;}
    break;

  case 125:
#line 1593 "ripper.y"
    { ifndef_ripper(yyval.val = '*'); ;}
    break;

  case 126:
#line 1594 "ripper.y"
    { ifndef_ripper(yyval.val = '/'); ;}
    break;

  case 127:
#line 1595 "ripper.y"
    { ifndef_ripper(yyval.val = '%'); ;}
    break;

  case 128:
#line 1596 "ripper.y"
    { ifndef_ripper(yyval.val = tPOW); ;}
    break;

  case 129:
#line 1597 "ripper.y"
    { ifndef_ripper(yyval.val = '~'); ;}
    break;

  case 130:
#line 1598 "ripper.y"
    { ifndef_ripper(yyval.val = tUPLUS); ;}
    break;

  case 131:
#line 1599 "ripper.y"
    { ifndef_ripper(yyval.val = tUMINUS); ;}
    break;

  case 132:
#line 1600 "ripper.y"
    { ifndef_ripper(yyval.val = tAREF); ;}
    break;

  case 133:
#line 1601 "ripper.y"
    { ifndef_ripper(yyval.val = tASET); ;}
    break;

  case 134:
#line 1602 "ripper.y"
    { ifndef_ripper(yyval.val = '`'); ;}
    break;

  case 176:
#line 1615 "ripper.y"
    {
#if 0
			yyval.val = node_assign(yyvsp[-2].val, yyvsp[0].val);
#endif
		    	yyval.val = dispatch2(assign, yyvsp[-2].val, yyvsp[0].val);

		    ;}
    break;

  case 177:
#line 1623 "ripper.y"
    {
#if 0
			yyval.val = node_assign(yyvsp[-4].val, NEW_RESCUE(yyvsp[-2].val, NEW_RESBODY(0,yyvsp[0].val,0), 0));
#endif
		    	yyval.val = dispatch2(assign, yyvsp[-4].val, dispatch2(rescue_mod,yyvsp[-2].val,yyvsp[0].val));

		    ;}
    break;

  case 178:
#line 1631 "ripper.y"
    {
#if 0
			value_expr(yyvsp[0].val);
			if (yyvsp[-2].val) {
			    ID vid = yyvsp[-2].val->nd_vid;
			    if (yyvsp[-1].val == tOROP) {
				yyvsp[-2].val->nd_value = yyvsp[0].val;
				yyval.val = NEW_OP_ASGN_OR(gettable(vid), yyvsp[-2].val);
				if (is_asgn_or_id(vid)) {
				    yyval.val->nd_aid = vid;
				}
			    }
			    else if (yyvsp[-1].val == tANDOP) {
				yyvsp[-2].val->nd_value = yyvsp[0].val;
				yyval.val = NEW_OP_ASGN_AND(gettable(vid), yyvsp[-2].val);
			    }
			    else {
				yyval.val = yyvsp[-2].val;
				yyval.val->nd_value = call_op(gettable(vid),yyvsp[-1].val,1,yyvsp[0].val);
			    }
			}
			else {
			    yyval.val = 0;
			}
#endif
		    	yyval.val = dispatch3(opassign, yyvsp[-2].val, yyvsp[-1].val, yyvsp[0].val);

		    ;}
    break;

  case 179:
#line 1660 "ripper.y"
    {
#if 0
                        NODE *args;

			value_expr(yyvsp[0].val);
			args = NEW_LIST(yyvsp[0].val);
			if (yyvsp[-3].val && nd_type(yyvsp[-3].val) != NODE_ARRAY)
			    yyvsp[-3].val = NEW_LIST(yyvsp[-3].val);
			yyvsp[-3].val = list_append(yyvsp[-3].val, NEW_NIL());
			list_concat(args, yyvsp[-3].val);
			if (yyvsp[-1].val == tOROP) {
			    yyvsp[-1].val = 0;
			}
			else if (yyvsp[-1].val == tANDOP) {
			    yyvsp[-1].val = 1;
			}
			yyval.val = NEW_OP_ASGN1(yyvsp[-5].val, yyvsp[-1].val, args);
		        fixpos(yyval.val, yyvsp[-5].val);
#endif
			yyvsp[-5].val = dispatch2(aref_field, yyvsp[-5].val, escape_Qundef(yyvsp[-3].val));
		    	yyval.val = dispatch3(opassign, yyvsp[-5].val, yyvsp[-1].val, yyvsp[0].val);

		    ;}
    break;

  case 180:
#line 1684 "ripper.y"
    {
#if 0
			value_expr(yyvsp[0].val);
			if (yyvsp[-1].val == tOROP) {
			    yyvsp[-1].val = 0;
			}
			else if (yyvsp[-1].val == tANDOP) {
			    yyvsp[-1].val = 1;
			}
			yyval.val = NEW_OP_ASGN2(yyvsp[-4].val, yyvsp[-2].val, yyvsp[-1].val, yyvsp[0].val);
		        fixpos(yyval.val, yyvsp[-4].val);
#endif
			yyvsp[-4].val = dispatch3(field, yyvsp[-4].val, ripper_id2sym('.'), yyvsp[-2].val);
		    	yyval.val = dispatch3(opassign, yyvsp[-4].val, yyvsp[-1].val, yyvsp[0].val);

		    ;}
    break;

  case 181:
#line 1701 "ripper.y"
    {
#if 0
			value_expr(yyvsp[0].val);
			if (yyvsp[-1].val == tOROP) {
			    yyvsp[-1].val = 0;
			}
			else if (yyvsp[-1].val == tANDOP) {
			    yyvsp[-1].val = 1;
			}
			yyval.val = NEW_OP_ASGN2(yyvsp[-4].val, yyvsp[-2].val, yyvsp[-1].val, yyvsp[0].val);
		        fixpos(yyval.val, yyvsp[-4].val);
#endif
			yyvsp[-4].val = dispatch3(field, yyvsp[-4].val, ripper_id2sym('.'), yyvsp[-2].val);
		    	yyval.val = dispatch3(opassign, yyvsp[-4].val, yyvsp[-1].val, yyvsp[0].val);

		    ;}
    break;

  case 182:
#line 1718 "ripper.y"
    {
#if 0
			value_expr(yyvsp[0].val);
			if (yyvsp[-1].val == tOROP) {
			    yyvsp[-1].val = 0;
			}
			else if (yyvsp[-1].val == tANDOP) {
			    yyvsp[-1].val = 1;
			}
			yyval.val = NEW_OP_ASGN2(yyvsp[-4].val, yyvsp[-2].val, yyvsp[-1].val, yyvsp[0].val);
		        fixpos(yyval.val, yyvsp[-4].val);
#endif
			yyvsp[-4].val = dispatch3(field, yyvsp[-4].val, ripper_intern("::"), yyvsp[-2].val);
		    	yyval.val = dispatch3(opassign, yyvsp[-4].val, yyvsp[-1].val, yyvsp[0].val);

		    ;}
    break;

  case 183:
#line 1735 "ripper.y"
    {
#if 0
			yyerror("constant re-assignment");
			yyval.val = 0;
#endif
			yyval.val = dispatch2(constpath_field, yyvsp[-4].val, yyvsp[-2].val);
			yyval.val = dispatch3(opassign, yyval.val, yyvsp[-1].val, yyvsp[0].val);
                        yyval.val = dispatch1(assign_error, yyval.val);

		    ;}
    break;

  case 184:
#line 1746 "ripper.y"
    {
#if 0
			yyerror("constant re-assignment");
			yyval.val = 0;
#endif
			yyval.val = dispatch1(topconst_field, yyvsp[-2].val);
			yyval.val = dispatch3(opassign, yyval.val, yyvsp[-1].val, yyvsp[0].val);
                        yyval.val = dispatch1(assign_error, yyval.val);

		    ;}
    break;

  case 185:
#line 1757 "ripper.y"
    {
#if 0
		        rb_backref_error(yyvsp[-2].val);
			yyval.val = 0;
#endif
			yyval.val = dispatch1(var_field, yyvsp[-2].val);
			yyval.val = dispatch3(opassign, yyval.val, yyvsp[-1].val, yyvsp[0].val);
                        yyval.val = dispatch1(assign_error, yyval.val);

		    ;}
    break;

  case 186:
#line 1768 "ripper.y"
    {
#if 0
			value_expr(yyvsp[-2].val);
			value_expr(yyvsp[0].val);
			if (nd_type(yyvsp[-2].val) == NODE_LIT && FIXNUM_P(yyvsp[-2].val->nd_lit) &&
			    nd_type(yyvsp[0].val) == NODE_LIT && FIXNUM_P(yyvsp[0].val->nd_lit)) {
			    yyvsp[-2].val->nd_lit = rb_range_new(yyvsp[-2].val->nd_lit, yyvsp[0].val->nd_lit, Qfalse);
			    yyval.val = yyvsp[-2].val;
			}
			else {
			    yyval.val = NEW_DOT2(yyvsp[-2].val, yyvsp[0].val);
			}
#endif
			yyval.val = dispatch2(dot2, yyvsp[-2].val, yyvsp[0].val);

		    ;}
    break;

  case 187:
#line 1785 "ripper.y"
    {
#if 0
			value_expr(yyvsp[-2].val);
			value_expr(yyvsp[0].val);
			if (nd_type(yyvsp[-2].val) == NODE_LIT && FIXNUM_P(yyvsp[-2].val->nd_lit) &&
			    nd_type(yyvsp[0].val) == NODE_LIT && FIXNUM_P(yyvsp[0].val->nd_lit)) {
			    yyvsp[-2].val->nd_lit = rb_range_new(yyvsp[-2].val->nd_lit, yyvsp[0].val->nd_lit, Qtrue);
			    yyval.val = yyvsp[-2].val;
			}
			else {
			    yyval.val = NEW_DOT3(yyvsp[-2].val, yyvsp[0].val);
			}
#endif
			yyval.val = dispatch2(dot3, yyvsp[-2].val, yyvsp[0].val);

		    ;}
    break;

  case 188:
#line 1802 "ripper.y"
    {
#if 0
			yyval.val = call_op(yyvsp[-2].val, '+', 1, yyvsp[0].val);
#endif
			yyval.val = dispatch3(binary, yyvsp[-2].val, ID2SYM('+'), yyvsp[0].val);

		    ;}
    break;

  case 189:
#line 1810 "ripper.y"
    {
#if 0
		        yyval.val = call_op(yyvsp[-2].val, '-', 1, yyvsp[0].val);
#endif
			yyval.val = dispatch3(binary, yyvsp[-2].val, ID2SYM('-'), yyvsp[0].val);

		    ;}
    break;

  case 190:
#line 1818 "ripper.y"
    {
#if 0
		        yyval.val = call_op(yyvsp[-2].val, '*', 1, yyvsp[0].val);
#endif
			yyval.val = dispatch3(binary, yyvsp[-2].val, ID2SYM('*'), yyvsp[0].val);

		    ;}
    break;

  case 191:
#line 1826 "ripper.y"
    {
#if 0
			yyval.val = call_op(yyvsp[-2].val, '/', 1, yyvsp[0].val);
#endif
			yyval.val = dispatch3(binary, yyvsp[-2].val, ID2SYM('/'), yyvsp[0].val);

		    ;}
    break;

  case 192:
#line 1834 "ripper.y"
    {
#if 0
			yyval.val = call_op(yyvsp[-2].val, '%', 1, yyvsp[0].val);
#endif
			yyval.val = dispatch3(binary, yyvsp[-2].val, ID2SYM('%'), yyvsp[0].val);

		    ;}
    break;

  case 193:
#line 1842 "ripper.y"
    {
#if 0
			yyval.val = call_op(yyvsp[-2].val, tPOW, 1, yyvsp[0].val);
#endif
			yyval.val = dispatch3(binary, yyvsp[-2].val, ripper_intern("**"), yyvsp[0].val);

		    ;}
    break;

  case 194:
#line 1850 "ripper.y"
    {
#if 0
			yyval.val = call_op(call_op(yyvsp[-2].val, tPOW, 1, yyvsp[0].val), tUMINUS, 0, 0);
#endif
			yyval.val = dispatch3(binary, yyvsp[-2].val, ripper_intern("**"), yyvsp[0].val);
			yyval.val = dispatch2(unary, ripper_intern("-@"), yyval.val);

		    ;}
    break;

  case 195:
#line 1859 "ripper.y"
    {
#if 0
			yyval.val = call_op(call_op(yyvsp[-2].val, tPOW, 1, yyvsp[0].val), tUMINUS, 0, 0);
#endif
			yyval.val = dispatch3(binary, yyvsp[-2].val, ripper_intern("**"), yyvsp[0].val);
			yyval.val = dispatch2(unary, ripper_intern("-@"), yyval.val);

		    ;}
    break;

  case 196:
#line 1868 "ripper.y"
    {
#if 0
			if (yyvsp[0].val && nd_type(yyvsp[0].val) == NODE_LIT) {
			    yyval.val = yyvsp[0].val;
			}
			else {
			    yyval.val = call_op(yyvsp[0].val, tUPLUS, 0, 0);
			}
#endif
			yyval.val = dispatch2(unary, ripper_intern("+@"), yyvsp[0].val);

		    ;}
    break;

  case 197:
#line 1881 "ripper.y"
    {
#if 0
			yyval.val = call_op(yyvsp[0].val, tUMINUS, 0, 0);
#endif
			yyval.val = dispatch2(unary, ripper_intern("-@"), yyvsp[0].val);

		    ;}
    break;

  case 198:
#line 1889 "ripper.y"
    {
#if 0
		        yyval.val = call_op(yyvsp[-2].val, '|', 1, yyvsp[0].val);
#endif
			yyval.val = dispatch3(binary, yyvsp[-2].val, ID2SYM('!'), yyvsp[0].val);

		    ;}
    break;

  case 199:
#line 1897 "ripper.y"
    {
#if 0
			yyval.val = call_op(yyvsp[-2].val, '^', 1, yyvsp[0].val);
#endif
			yyval.val = dispatch3(binary, yyvsp[-2].val, ID2SYM('^'), yyvsp[0].val);

		    ;}
    break;

  case 200:
#line 1905 "ripper.y"
    {
#if 0
			yyval.val = call_op(yyvsp[-2].val, '&', 1, yyvsp[0].val);
#endif
			yyval.val = dispatch3(binary, yyvsp[-2].val, ID2SYM('&'), yyvsp[0].val);

		    ;}
    break;

  case 201:
#line 1913 "ripper.y"
    {
#if 0
			yyval.val = call_op(yyvsp[-2].val, tCMP, 1, yyvsp[0].val);
#endif
			yyval.val = dispatch3(binary, yyvsp[-2].val, ripper_intern("<=>"), yyvsp[0].val);

		    ;}
    break;

  case 202:
#line 1921 "ripper.y"
    {
#if 0
			yyval.val = call_op(yyvsp[-2].val, '>', 1, yyvsp[0].val);
#endif
			yyval.val = dispatch3(binary, yyvsp[-2].val, ID2SYM('>'), yyvsp[0].val);

		    ;}
    break;

  case 203:
#line 1929 "ripper.y"
    {
#if 0
			yyval.val = call_op(yyvsp[-2].val, tGEQ, 1, yyvsp[0].val);
#endif
			yyval.val = dispatch3(binary, yyvsp[-2].val, ripper_intern(">="), yyvsp[0].val);

		    ;}
    break;

  case 204:
#line 1937 "ripper.y"
    {
#if 0
			yyval.val = call_op(yyvsp[-2].val, '<', 1, yyvsp[0].val);
#endif
			yyval.val = dispatch3(binary, yyvsp[-2].val, ID2SYM('<'), yyvsp[0].val);

		    ;}
    break;

  case 205:
#line 1945 "ripper.y"
    {
#if 0
			yyval.val = call_op(yyvsp[-2].val, tLEQ, 1, yyvsp[0].val);
#endif
			yyval.val = dispatch3(binary, yyvsp[-2].val, ripper_intern("<="), yyvsp[0].val);

		    ;}
    break;

  case 206:
#line 1953 "ripper.y"
    {
#if 0
			yyval.val = call_op(yyvsp[-2].val, tEQ, 1, yyvsp[0].val);
#endif
			yyval.val = dispatch3(binary, yyvsp[-2].val, ripper_intern("=="), yyvsp[0].val);

		    ;}
    break;

  case 207:
#line 1961 "ripper.y"
    {
#if 0
			yyval.val = call_op(yyvsp[-2].val, tEQQ, 1, yyvsp[0].val);
#endif
			yyval.val = dispatch3(binary, yyvsp[-2].val, ripper_intern("==="), yyvsp[0].val);

		    ;}
    break;

  case 208:
#line 1969 "ripper.y"
    {
#if 0
			yyval.val = NEW_NOT(call_op(yyvsp[-2].val, tEQ, 1, yyvsp[0].val));
#endif
			yyval.val = dispatch3(binary, yyvsp[-2].val, ripper_intern("!="), yyvsp[0].val);

		    ;}
    break;

  case 209:
#line 1977 "ripper.y"
    {
#if 0
			yyval.val = match_op(yyvsp[-2].val, yyvsp[0].val);
#endif
			yyval.val = dispatch3(binary, yyvsp[-2].val, ripper_intern("=~"), yyvsp[0].val);

		    ;}
    break;

  case 210:
#line 1985 "ripper.y"
    {
#if 0
			yyval.val = NEW_NOT(match_op(yyvsp[-2].val, yyvsp[0].val));
#endif
			yyval.val = dispatch3(binary, yyvsp[-2].val, ripper_intern("!~"), yyvsp[0].val);

		    ;}
    break;

  case 211:
#line 1993 "ripper.y"
    {
#if 0
			yyval.val = NEW_NOT(cond(yyvsp[0].val));
#endif
			yyval.val = dispatch2(unary, ID2SYM('!'), yyvsp[0].val);

		    ;}
    break;

  case 212:
#line 2001 "ripper.y"
    {
#if 0
			yyval.val = call_op(yyvsp[0].val, '~', 0, 0);
#endif
			yyval.val = dispatch2(unary, ID2SYM('~'), yyvsp[0].val);

		    ;}
    break;

  case 213:
#line 2009 "ripper.y"
    {
#if 0
			yyval.val = call_op(yyvsp[-2].val, tLSHFT, 1, yyvsp[0].val);
#endif
			yyval.val = dispatch3(binary, yyvsp[-2].val, ripper_intern("<<"), yyvsp[0].val);

		    ;}
    break;

  case 214:
#line 2017 "ripper.y"
    {
#if 0
			yyval.val = call_op(yyvsp[-2].val, tRSHFT, 1, yyvsp[0].val);
#endif
			yyval.val = dispatch3(binary, yyvsp[-2].val, ripper_intern(">>"), yyvsp[0].val);

		    ;}
    break;

  case 215:
#line 2025 "ripper.y"
    {
#if 0
			yyval.val = logop(NODE_AND, yyvsp[-2].val, yyvsp[0].val);
#endif
			yyval.val = dispatch3(binary, yyvsp[-2].val, ripper_intern("&&"), yyvsp[0].val);

		    ;}
    break;

  case 216:
#line 2033 "ripper.y"
    {
#if 0
			yyval.val = logop(NODE_OR, yyvsp[-2].val, yyvsp[0].val);
#endif
			yyval.val = dispatch3(binary, yyvsp[-2].val, ripper_intern("||"), yyvsp[0].val);

		    ;}
    break;

  case 217:
#line 2040 "ripper.y"
    {in_defined = 1;;}
    break;

  case 218:
#line 2041 "ripper.y"
    {
#if 0
		        in_defined = 0;
			yyval.val = NEW_DEFINED(yyvsp[0].val);
#endif
		        in_defined = 0;
			yyval.val = dispatch1(defined, yyvsp[0].val);

		    ;}
    break;

  case 219:
#line 2051 "ripper.y"
    {
#if 0
			yyval.val = NEW_IF(cond(yyvsp[-4].val), yyvsp[-2].val, yyvsp[0].val);
		        fixpos(yyval.val, yyvsp[-4].val);
#endif
			yyval.val = dispatch3(ifop, yyvsp[-4].val, yyvsp[-2].val, yyvsp[0].val);

		    ;}
    break;

  case 220:
#line 2060 "ripper.y"
    {
			yyval.val = yyvsp[0].val;
		    ;}
    break;

  case 221:
#line 2066 "ripper.y"
    {
#if 0
			value_expr(yyvsp[0].val);
			yyval.val = yyvsp[0].val;
#endif
			yyval.val = yyvsp[0].val;

		    ;}
    break;

  case 223:
#line 2078 "ripper.y"
    {
#if 0
		        rb_warn("parenthesize argument(s) for future version");
			yyval.val = NEW_LIST(yyvsp[-1].val);
#endif
		        rb_warn0("parenthesize argument(s) for future version");
			yyval.val = arg_add(arg_new(), yyvsp[-1].val);

		    ;}
    break;

  case 224:
#line 2088 "ripper.y"
    {
			yyval.val = yyvsp[-1].val;
		    ;}
    break;

  case 225:
#line 2092 "ripper.y"
    {
#if 0
			value_expr(yyvsp[-1].val);
			yyval.val = arg_concat(yyvsp[-4].val, yyvsp[-1].val);
#endif
			yyval.val = arg_add_star(yyvsp[-4].val, yyvsp[-1].val);

		    ;}
    break;

  case 226:
#line 2101 "ripper.y"
    {
#if 0
			yyval.val = NEW_LIST(NEW_HASH(yyvsp[-1].val));
#endif
			yyval.val = arg_add_assocs(arg_new(), yyvsp[-1].val);

		    ;}
    break;

  case 227:
#line 2109 "ripper.y"
    {
#if 0
			value_expr(yyvsp[-1].val);
			yyval.val = newline_node(NEW_SPLAT(yyvsp[-1].val));
#endif
			yyval.val = arg_add_star(arg_new(), yyvsp[-1].val);

		    ;}
    break;

  case 228:
#line 2120 "ripper.y"
    {
#if 0
			yyval.val = yyvsp[-1].val;
#endif
			yyval.val = dispatch1(arg_paren, arg_new());

		    ;}
    break;

  case 229:
#line 2128 "ripper.y"
    {
#if 0
			yyval.val = yyvsp[-1].val;
#endif
			yyval.val = dispatch1(arg_paren, yyvsp[-1].val);

		    ;}
    break;

  case 230:
#line 2136 "ripper.y"
    {
#if 0
		        rb_warn("parenthesize argument for future version");
			yyval.val = NEW_LIST(yyvsp[-1].val);
#endif
		        rb_warn0("parenthesize argument for future version");
			yyval.val = dispatch1(arg_paren, arg_add(arg_new(), yyvsp[-1].val));

		    ;}
    break;

  case 231:
#line 2146 "ripper.y"
    {
#if 0
		        rb_warn("parenthesize argument for future version");
			yyval.val = list_append(yyvsp[-3].val, yyvsp[-1].val);
#endif
		        rb_warn0("parenthesize argument for future version");
			yyval.val = dispatch1(arg_paren, arg_add(yyvsp[-3].val, yyvsp[-1].val));

		    ;}
    break;

  case 234:
#line 2162 "ripper.y"
    {
#if 0
		        rb_warn("parenthesize argument(s) for future version");
			yyval.val = NEW_LIST(yyvsp[0].val);
#endif
		        rb_warn0("parenthesize argument(s) for future version");
			yyval.val = arg_add(arg_new(), yyvsp[0].val);

		    ;}
    break;

  case 235:
#line 2172 "ripper.y"
    {
#if 0
			yyval.val = arg_blk_pass(yyvsp[-1].val, yyvsp[0].val);
#endif
			yyval.val = arg_add_optblock(yyvsp[-1].val, yyvsp[0].val);

		    ;}
    break;

  case 236:
#line 2180 "ripper.y"
    {
#if 0
			yyval.val = arg_concat(yyvsp[-4].val, yyvsp[-1].val);
			yyval.val = arg_blk_pass(yyval.val, yyvsp[0].val);
#endif
			arg_add_optblock(arg_add_star(yyvsp[-4].val, yyvsp[-1].val), yyvsp[0].val);

		    ;}
    break;

  case 237:
#line 2189 "ripper.y"
    {
#if 0
			yyval.val = NEW_LIST(NEW_HASH(yyvsp[-1].val));
			yyval.val = arg_blk_pass(yyval.val, yyvsp[0].val);
#endif
			yyval.val = arg_add_assocs(arg_new(), yyvsp[-1].val);
			yyval.val = arg_add_optblock(yyval.val, yyvsp[0].val);

		    ;}
    break;

  case 238:
#line 2199 "ripper.y"
    {
#if 0
			yyval.val = arg_concat(NEW_LIST(NEW_HASH(yyvsp[-4].val)), yyvsp[-1].val);
			yyval.val = arg_blk_pass(yyval.val, yyvsp[0].val);
#endif
			yyval.val = arg_add_star(arg_add_assocs(arg_new(), yyvsp[-4].val), yyvsp[-1].val);
			yyval.val = arg_add_optblock(yyval.val, yyvsp[0].val);

		    ;}
    break;

  case 239:
#line 2209 "ripper.y"
    {
#if 0
			yyval.val = list_append(yyvsp[-3].val, NEW_HASH(yyvsp[-1].val));
			yyval.val = arg_blk_pass(yyval.val, yyvsp[0].val);
#endif
			yyval.val = arg_add_optblock(arg_add_assocs(yyvsp[-3].val, yyvsp[-1].val), yyvsp[0].val);

		    ;}
    break;

  case 240:
#line 2218 "ripper.y"
    {
#if 0
			value_expr(yyvsp[-1].val);
			yyval.val = arg_concat(list_append(yyvsp[-6].val, NEW_HASH(yyvsp[-4].val)), yyvsp[-1].val);
			yyval.val = arg_blk_pass(yyval.val, yyvsp[0].val);
#endif
			yyval.val = arg_add_star(arg_add_assocs(yyvsp[-6].val, yyvsp[-4].val), yyvsp[-1].val);
			yyval.val = arg_add_optblock(yyval.val, yyvsp[0].val);

		    ;}
    break;

  case 241:
#line 2229 "ripper.y"
    {
#if 0
			yyval.val = arg_blk_pass(NEW_SPLAT(yyvsp[-1].val), yyvsp[0].val);
#endif
			yyval.val = arg_add_optblock(arg_add_star(arg_new(), yyvsp[-1].val), yyvsp[0].val);

		    ;}
    break;

  case 242:
#line 2239 "ripper.y"
    {
			yyval.val = arg_add_block(arg_new(), yyvsp[0].val);
                    ;}
    break;

  case 243:
#line 2246 "ripper.y"
    {
#if 0
			yyval.val = arg_blk_pass(list_concat(NEW_LIST(yyvsp[-3].val),yyvsp[-1].val), yyvsp[0].val);
#endif
			yyval.val = arg_add_optblock(arg_prepend(yyvsp[-1].val, yyvsp[-3].val), yyvsp[0].val);

		    ;}
    break;

  case 244:
#line 2254 "ripper.y"
    {
#if 0
                        yyval.val = arg_blk_pass(yyvsp[-2].val, yyvsp[0].val);
#endif
			yyval.val = arg_add_block(arg_add(arg_new(), yyvsp[-2].val), yyvsp[0].val);

                    ;}
    break;

  case 245:
#line 2262 "ripper.y"
    {
#if 0
			yyval.val = arg_concat(NEW_LIST(yyvsp[-4].val), yyvsp[-1].val);
			yyval.val = arg_blk_pass(yyval.val, yyvsp[0].val);
#endif
			yyval.val = arg_add_star(arg_add(arg_new(), yyvsp[-4].val), yyvsp[-1].val);
			yyval.val = arg_add_optblock(yyval.val, yyvsp[0].val);

		    ;}
    break;

  case 246:
#line 2272 "ripper.y"
    {
#if 0
			yyval.val = arg_concat(list_concat(NEW_LIST(yyvsp[-6].val),yyvsp[-4].val), yyvsp[-1].val);
			yyval.val = arg_blk_pass(yyval.val, yyvsp[0].val);
#endif
			yyval.val = arg_add_star(arg_prepend(yyvsp[-4].val, yyvsp[-6].val), yyvsp[-1].val);
			yyval.val = arg_add_optblock(yyval.val, yyvsp[0].val);

		    ;}
    break;

  case 247:
#line 2282 "ripper.y"
    {
#if 0
			yyval.val = NEW_LIST(NEW_HASH(yyvsp[-1].val));
			yyval.val = arg_blk_pass(yyval.val, yyvsp[0].val);
#endif
			yyval.val = arg_add_optblock(arg_add_assocs(arg_new(), yyvsp[-1].val), yyvsp[0].val);

		    ;}
    break;

  case 248:
#line 2291 "ripper.y"
    {
#if 0
			yyval.val = arg_concat(NEW_LIST(NEW_HASH(yyvsp[-4].val)), yyvsp[-1].val);
			yyval.val = arg_blk_pass(yyval.val, yyvsp[0].val);
#endif
			yyval.val = arg_add_star(arg_add_assocs(arg_new(), yyvsp[-4].val), yyvsp[-1].val);
			yyval.val = arg_add_optblock(yyval.val, yyvsp[-1].val);

		    ;}
    break;

  case 249:
#line 2301 "ripper.y"
    {
#if 0
			yyval.val = list_append(NEW_LIST(yyvsp[-3].val), NEW_HASH(yyvsp[-1].val));
			yyval.val = arg_blk_pass(yyval.val, yyvsp[0].val);
#endif
			yyval.val = arg_add_assocs(arg_add(arg_new(), yyvsp[-3].val), yyvsp[-1].val);
			yyval.val = arg_add_optblock(yyval.val, yyvsp[0].val);

		    ;}
    break;

  case 250:
#line 2311 "ripper.y"
    {
#if 0
			yyval.val = list_append(list_concat(NEW_LIST(yyvsp[-5].val),yyvsp[-3].val), NEW_HASH(yyvsp[-1].val));
			yyval.val = arg_blk_pass(yyval.val, yyvsp[0].val);
#endif
			yyval.val = arg_add_assocs(arg_prepend(yyvsp[-3].val, yyvsp[-5].val), yyvsp[-1].val);
			yyval.val = arg_add_optblock(yyval.val, yyvsp[0].val);

		    ;}
    break;

  case 251:
#line 2321 "ripper.y"
    {
#if 0
			yyval.val = arg_concat(list_append(NEW_LIST(yyvsp[-6].val), NEW_HASH(yyvsp[-4].val)), yyvsp[-1].val);
			yyval.val = arg_blk_pass(yyval.val, yyvsp[0].val);
#endif
			yyval.val = arg_add_assocs(arg_add(arg_new(), yyvsp[-6].val), yyvsp[-4].val);
			yyval.val = arg_add_star(yyval.val, yyvsp[-1].val);
			yyval.val = arg_add_optblock(yyval.val, yyvsp[0].val);

		    ;}
    break;

  case 252:
#line 2332 "ripper.y"
    {
#if 0
			yyval.val = arg_concat(list_append(list_concat(NEW_LIST(yyvsp[-8].val), yyvsp[-6].val), NEW_HASH(yyvsp[-4].val)), yyvsp[-1].val);
			yyval.val = arg_blk_pass(yyval.val, yyvsp[0].val);
#endif
			yyval.val = arg_add_assocs(arg_prepend(yyvsp[-6].val, yyvsp[-8].val), yyvsp[-4].val);
			yyval.val = arg_add_star(yyval.val, yyvsp[-1].val);
			yyval.val = arg_add_optblock(yyval.val, yyvsp[0].val);

		    ;}
    break;

  case 253:
#line 2343 "ripper.y"
    {
#if 0
			yyval.val = arg_blk_pass(NEW_SPLAT(yyvsp[-1].val), yyvsp[0].val);
#endif
			yyval.val = arg_add_optblock(arg_add_star(arg_new(), yyvsp[-1].val), yyvsp[0].val);

		    ;}
    break;

  case 255:
#line 2353 "ripper.y"
    {
			yyval.num = cmdarg_stack;
			CMDARG_PUSH(1);
		    ;}
    break;

  case 256:
#line 2358 "ripper.y"
    {
			/* CMDARG_POP() */
		        cmdarg_stack = yyvsp[-1].num;
			yyval.val = yyvsp[0].val;
		    ;}
    break;

  case 258:
#line 2366 "ripper.y"
    {lex_state = EXPR_ENDARG;;}
    break;

  case 259:
#line 2367 "ripper.y"
    {
#if 0
		        rb_warning("don't put space before argument parentheses");
			yyval.val = 0;
#endif
			yyval.val = dispatch1(space, dispatch1(arg_paren, arg_new()));

		    ;}
    break;

  case 260:
#line 2375 "ripper.y"
    {lex_state = EXPR_ENDARG;;}
    break;

  case 261:
#line 2376 "ripper.y"
    {
#if 0
		        rb_warning("don't put space before argument parentheses");
			yyval.val = yyvsp[-2].val;
#endif
			yyval.val = dispatch1(space, dispatch1(arg_paren, yyvsp[-2].val));

		    ;}
    break;

  case 262:
#line 2387 "ripper.y"
    {
#if 0
			yyval.val = NEW_BLOCK_PASS(yyvsp[0].val);
#endif
			yyval.val = yyvsp[0].val;

		    ;}
    break;

  case 263:
#line 2397 "ripper.y"
    {
			yyval.val = yyvsp[0].val;
		    ;}
    break;

  case 265:
#line 2404 "ripper.y"
    {
#if 0
			yyval.val = NEW_LIST(yyvsp[0].val);
#endif
			yyval.val = arg_add(arg_new(), yyvsp[0].val);

		    ;}
    break;

  case 266:
#line 2412 "ripper.y"
    {
#if 0
			yyval.val = list_append(yyvsp[-2].val, yyvsp[0].val);
#endif
			yyval.val = arg_add(yyvsp[-2].val, yyvsp[0].val);

		    ;}
    break;

  case 267:
#line 2422 "ripper.y"
    {
#if 0
			yyval.val = list_append(yyvsp[-2].val, yyvsp[0].val);
#endif
			yyval.val = mrhs_add(args2mrhs(yyvsp[-2].val), yyvsp[0].val);

		    ;}
    break;

  case 268:
#line 2430 "ripper.y"
    {
#if 0
			yyval.val = arg_concat(yyvsp[-3].val, yyvsp[0].val);
#endif
			yyval.val = mrhs_add_star(args2mrhs(yyvsp[-3].val), yyvsp[0].val);

		    ;}
    break;

  case 269:
#line 2438 "ripper.y"
    {
#if 0
			yyval.val = NEW_SPLAT(yyvsp[0].val);
#endif
			yyval.val = mrhs_add_star(mrhs_new(), yyvsp[0].val);

		    ;}
    break;

  case 278:
#line 2456 "ripper.y"
    {
#if 0
			yyval.val = NEW_FCALL(yyvsp[0].val, 0);
#endif
			yyval.val = method_arg(dispatch1(fcall, yyvsp[0].val), arg_new());

		    ;}
    break;

  case 279:
#line 2464 "ripper.y"
    {
#if 0
			yyvsp[0].num = ruby_sourceline;
#endif

		    ;}
    break;

  case 280:
#line 2472 "ripper.y"
    {
#if 0
			if (yyvsp[-1].val == NULL) {
			    yyval.val = NEW_NIL();
			}
			else {
			    if (nd_type(yyvsp[-1].val) == NODE_RESCUE ||
				nd_type(yyvsp[-1].val) == NODE_ENSURE)
				nd_set_line(yyvsp[-1].val, yyvsp[-3].num);
			    yyval.val = NEW_BEGIN(yyvsp[-1].val);
			}
			nd_set_line(yyval.val, yyvsp[-3].num);
#endif
			yyval.val = dispatch1(begin, yyvsp[-1].val);

		    ;}
    break;

  case 281:
#line 2488 "ripper.y"
    {lex_state = EXPR_ENDARG;;}
    break;

  case 282:
#line 2489 "ripper.y"
    {
#if 0
		        rb_warning("(...) interpreted as grouped expression");
			yyval.val = yyvsp[-2].val;
#endif
		        rb_warning0("(...) interpreted as grouped expression");
			yyval.val = dispatch1(paren, yyvsp[-2].val);

		    ;}
    break;

  case 283:
#line 2499 "ripper.y"
    {
#if 0
			if (!yyvsp[-1].val) yyval.val = NEW_NIL();
			else yyval.val = yyvsp[-1].val;
#endif
			yyval.val = dispatch1(paren, yyvsp[-1].val);

		    ;}
    break;

  case 284:
#line 2508 "ripper.y"
    {
#if 0
			yyval.val = NEW_COLON2(yyvsp[-2].val, yyvsp[0].val);
#endif
			yyval.val = dispatch2(constpath_ref, yyvsp[-2].val, yyvsp[0].val);

		    ;}
    break;

  case 285:
#line 2516 "ripper.y"
    {
#if 0
			yyval.val = NEW_COLON3(yyvsp[0].val);
#endif
			yyval.val = dispatch1(topconst_ref, yyvsp[0].val);

		    ;}
    break;

  case 286:
#line 2524 "ripper.y"
    {
#if 0
		        if (yyvsp[-1].val == 0) {
			    yyval.val = NEW_ZARRAY(); /* zero length array*/
			}
			else {
			    yyval.val = yyvsp[-1].val;
			}
#endif
			yyval.val = dispatch1(array, escape_Qundef(yyvsp[-1].val));

		    ;}
    break;

  case 287:
#line 2537 "ripper.y"
    {
#if 0
			yyval.val = NEW_HASH(yyvsp[-1].val);
#endif
			yyval.val = dispatch1(hash, escape_Qundef(yyvsp[-1].val));

		    ;}
    break;

  case 288:
#line 2545 "ripper.y"
    {
#if 0
			yyval.val = NEW_RETURN(0);
#endif
			yyval.val = dispatch0(return0);

		    ;}
    break;

  case 289:
#line 2553 "ripper.y"
    {
#if 0
			yyval.val = new_yield(yyvsp[-1].val);
#endif
			yyval.val = dispatch1(yield, dispatch1(paren, yyvsp[-1].val));

		    ;}
    break;

  case 290:
#line 2561 "ripper.y"
    {
#if 0
			yyval.val = NEW_YIELD(0, Qfalse);
#endif
			yyval.val = dispatch1(yield, dispatch1(paren, arg_new()));

		    ;}
    break;

  case 291:
#line 2569 "ripper.y"
    {
#if 0
			yyval.val = NEW_YIELD(0, Qfalse);
#endif
			yyval.val = dispatch0(yield0);

		    ;}
    break;

  case 292:
#line 2576 "ripper.y"
    {in_defined = 1;;}
    break;

  case 293:
#line 2577 "ripper.y"
    {
#if 0
		        in_defined = 0;
			yyval.val = NEW_DEFINED(yyvsp[-1].val);
#endif
		        in_defined = 0;
			yyval.val = dispatch1(defined, yyvsp[-1].val);

		    ;}
    break;

  case 294:
#line 2587 "ripper.y"
    {
#if 0
			yyvsp[0].val->nd_iter = NEW_FCALL(yyvsp[-1].val, 0);
			yyval.val = yyvsp[0].val;
			fixpos(yyvsp[0].val->nd_iter, yyvsp[0].val);
#endif
			yyval.val = method_arg(dispatch1(fcall, yyvsp[-1].val), arg_new());
			yyval.val = dispatch2(iter_block, yyval.val, yyvsp[0].val);

		    ;}
    break;

  case 296:
#line 2599 "ripper.y"
    {
#if 0
		        block_dup_check(yyval.val);
			yyvsp[0].val->nd_iter = yyvsp[-1].val;
			yyval.val = yyvsp[0].val;
		        fixpos(yyval.val, yyvsp[-1].val);
#endif
			yyval.val = dispatch2(iter_block, yyvsp[-1].val, yyvsp[0].val);

		    ;}
    break;

  case 297:
#line 2610 "ripper.y"
    {
			yyval.val = yyvsp[0].val;
		    ;}
    break;

  case 298:
#line 2617 "ripper.y"
    {
#if 0
			yyval.val = NEW_IF(cond(yyvsp[-4].val), yyvsp[-2].val, yyvsp[-1].val);
		        fixpos(yyval.val, yyvsp[-4].val);
			if (cond_negative(&yyval.val->nd_cond)) {
		            NODE *tmp = yyval.val->nd_body;
		            yyval.val->nd_body = yyval.val->nd_else;
		            yyval.val->nd_else = tmp;
			}
#endif
			yyval.val = dispatch3(if, yyvsp[-4].val, yyvsp[-2].val, escape_Qundef(yyvsp[-1].val));

		    ;}
    break;

  case 299:
#line 2634 "ripper.y"
    {
#if 0
			yyval.val = NEW_UNLESS(cond(yyvsp[-4].val), yyvsp[-2].val, yyvsp[-1].val);
		        fixpos(yyval.val, yyvsp[-4].val);
			if (cond_negative(&yyval.val->nd_cond)) {
		            NODE *tmp = yyval.val->nd_body;
		            yyval.val->nd_body = yyval.val->nd_else;
		            yyval.val->nd_else = tmp;
			}
#endif
			yyval.val = dispatch3(unless, yyvsp[-4].val, yyvsp[-2].val, escape_Qundef(yyvsp[-1].val));

		    ;}
    break;

  case 300:
#line 2647 "ripper.y"
    {COND_PUSH(1);;}
    break;

  case 301:
#line 2647 "ripper.y"
    {COND_POP();;}
    break;

  case 302:
#line 2650 "ripper.y"
    {
#if 0
			yyval.val = NEW_WHILE(cond(yyvsp[-4].val), yyvsp[-1].val, 1);
		        fixpos(yyval.val, yyvsp[-4].val);
			if (cond_negative(&yyval.val->nd_cond)) {
			    nd_set_type(yyval.val, NODE_UNTIL);
			}
#endif
			yyval.val = dispatch2(while, yyvsp[-4].val, yyvsp[-1].val);

		    ;}
    break;

  case 303:
#line 2661 "ripper.y"
    {COND_PUSH(1);;}
    break;

  case 304:
#line 2661 "ripper.y"
    {COND_POP();;}
    break;

  case 305:
#line 2664 "ripper.y"
    {
#if 0
			yyval.val = NEW_UNTIL(cond(yyvsp[-4].val), yyvsp[-1].val, 1);
		        fixpos(yyval.val, yyvsp[-4].val);
			if (cond_negative(&yyval.val->nd_cond)) {
			    nd_set_type(yyval.val, NODE_WHILE);
			}
#endif
			yyval.val = dispatch2(until, yyvsp[-4].val, yyvsp[-1].val);

		    ;}
    break;

  case 306:
#line 2678 "ripper.y"
    {
#if 0
			yyval.val = NEW_CASE(yyvsp[-3].val, yyvsp[-1].val);
		        fixpos(yyval.val, yyvsp[-3].val);
#endif
			yyval.val = dispatch2(case, yyvsp[-3].val, yyvsp[-1].val);

		    ;}
    break;

  case 307:
#line 2687 "ripper.y"
    {
#if 0
			yyval.val = block_append(yyvsp[-4].val, yyvsp[-1].val);
#endif
		    	yyval.val = dispatch2(case, yyvsp[-4].val, dispatch1(else, yyvsp[-1].val));

		    ;}
    break;

  case 308:
#line 2695 "ripper.y"
    {
#if 0
			yyval.val = yyvsp[-1].val;
#endif
			yyval.val = dispatch2(case, Qnil, yyvsp[-1].val);

		    ;}
    break;

  case 309:
#line 2703 "ripper.y"
    {
#if 0
			yyval.val = yyvsp[-1].val;
#endif
			yyval.val = dispatch2(case, Qnil, dispatch1(else, yyvsp[-1].val));

		    ;}
    break;

  case 310:
#line 2710 "ripper.y"
    {COND_PUSH(1);;}
    break;

  case 311:
#line 2710 "ripper.y"
    {COND_POP();;}
    break;

  case 312:
#line 2713 "ripper.y"
    {
#if 0
			yyval.val = NEW_FOR(yyvsp[-7].val, yyvsp[-4].val, yyvsp[-1].val);
		        fixpos(yyval.val, yyvsp[-7].val);
#endif
			yyval.val = dispatch3(for, yyvsp[-7].val, yyvsp[-4].val, yyvsp[-1].val);

		    ;}
    break;

  case 313:
#line 2722 "ripper.y"
    {
#if 0
			if (in_def || in_single)
			    yyerror("class definition in method body");
			class_nest++;
			local_push(0);
		        yyval.num = ruby_sourceline;
#endif
			if (in_def || in_single)
			    yyerror("class definition in method body");
			class_nest++;

		    ;}
    break;

  case 314:
#line 2737 "ripper.y"
    {
#if 0
		        yyval.val = NEW_CLASS(yyvsp[-4].val, yyvsp[-1].val, yyvsp[-3].val);
		        nd_set_line(yyval.val, yyvsp[-2].num);
		        local_pop();
			class_nest--;
#endif
			yyval.val = dispatch3(class, yyvsp[-4].val, yyvsp[-3].val, yyvsp[-1].val);
			class_nest--;

		    ;}
    break;

  case 315:
#line 2749 "ripper.y"
    {
#if 0
			yyval.num = in_def;
		        in_def = 0;
#endif
		        in_def = 0;

		    ;}
    break;

  case 316:
#line 2758 "ripper.y"
    {
#if 0
		        yyval.num = in_single;
		        in_single = 0;
			class_nest++;
			local_push(0);
#endif
		        yyval.val = in_single;
		        in_single = 0;
			class_nest++;

		    ;}
    break;

  case 317:
#line 2772 "ripper.y"
    {
#if 0
		        yyval.val = NEW_SCLASS(yyvsp[-5].val, yyvsp[-1].val);
		        fixpos(yyval.val, yyvsp[-5].val);
		        local_pop();
			class_nest--;
		        in_def = yyvsp[-4].num;
		        in_single = yyvsp[-2].num;
#endif
			yyval.val = dispatch2(sclass, yyvsp[-5].val, yyvsp[-1].val);
			class_nest--;
		        in_def = yyvsp[-4].val;
		        in_single = yyvsp[-2].val;

		    ;}
    break;

  case 318:
#line 2788 "ripper.y"
    {
#if 0
			if (in_def || in_single)
			    yyerror("module definition in method body");
			class_nest++;
			local_push(0);
		        yyval.num = ruby_sourceline;
#endif
			if (in_def || in_single)
			    yyerror("module definition in method body");
			class_nest++;

		    ;}
    break;

  case 319:
#line 2803 "ripper.y"
    {
#if 0
		        yyval.val = NEW_MODULE(yyvsp[-3].val, yyvsp[-1].val);
		        nd_set_line(yyval.val, yyvsp[-2].num);
		        local_pop();
			class_nest--;
#endif
			yyval.val = dispatch2(module, yyvsp[-3].val, yyvsp[-1].val);
			class_nest--;

		    ;}
    break;

  case 320:
#line 2815 "ripper.y"
    {
#if 0
			yyval.id = cur_mid;
			cur_mid = yyvsp[0].val;
			in_def++;
			local_push(0);
#endif
			yyval.id = cur_mid;
			cur_mid = yyvsp[0].val;
			in_def++;

		    ;}
    break;

  case 321:
#line 2830 "ripper.y"
    {
#if 0
			NODE *body = remove_begin(yyvsp[-1].val);
			reduce_nodes(&body);
			yyval.val = NEW_DEFN(yyvsp[-4].val, yyvsp[-2].val, body, NOEX_PRIVATE);
		        fixpos(yyval.val, yyvsp[-2].val);
		        local_pop();
			in_def--;
			cur_mid = yyvsp[-3].id;
#endif
			yyval.val = dispatch3(def, yyvsp[-4].val, yyvsp[-2].val, yyvsp[-1].val);
			in_def--;
			cur_mid = yyvsp[-3].id;

		    ;}
    break;

  case 322:
#line 2845 "ripper.y"
    {lex_state = EXPR_FNAME;;}
    break;

  case 323:
#line 2846 "ripper.y"
    {
#if 0
			in_single++;
			local_push(0);
		        lex_state = EXPR_END; /* force for args */
#endif
			in_single++;
		        lex_state = EXPR_END;

		    ;}
    break;

  case 324:
#line 2859 "ripper.y"
    {
#if 0
			NODE *body = remove_begin(yyvsp[-1].val);
			reduce_nodes(&body);
			yyval.val = NEW_DEFS(yyvsp[-7].val, yyvsp[-4].val, yyvsp[-2].val, body);
		        fixpos(yyval.val, yyvsp[-7].val);
		        local_pop();
			in_single--;
#endif
			yyval.val = dispatch5(defs, yyvsp[-7].val, yyvsp[-6].val, yyvsp[-4].val, yyvsp[-2].val, yyvsp[-1].val);
			in_single--;

		    ;}
    break;

  case 325:
#line 2873 "ripper.y"
    {
#if 0
			yyval.val = NEW_BREAK(0);
#endif
			yyval.val = dispatch1(break, arg_new());

		    ;}
    break;

  case 326:
#line 2881 "ripper.y"
    {
#if 0
			yyval.val = NEW_NEXT(0);
#endif
			yyval.val = dispatch1(next, arg_new());

		    ;}
    break;

  case 327:
#line 2889 "ripper.y"
    {
#if 0
			yyval.val = NEW_REDO();
#endif
			yyval.val = dispatch0(redo);

		    ;}
    break;

  case 328:
#line 2897 "ripper.y"
    {
#if 0
			yyval.val = NEW_RETRY();
#endif
			yyval.val = dispatch0(retry);

		    ;}
    break;

  case 329:
#line 2907 "ripper.y"
    {
#if 0
			value_expr(yyvsp[0].val);
			yyval.val = yyvsp[0].val;
#endif
			yyval.val = yyvsp[0].val;

		    ;}
    break;

  case 330:
#line 2920 "ripper.y"
    { yyval.val = Qnil; ;}
    break;

  case 331:
#line 2925 "ripper.y"
    { yyval.val = Qnil; ;}
    break;

  case 333:
#line 2931 "ripper.y"
    { yyval.val = yyvsp[0].val; ;}
    break;

  case 334:
#line 2938 "ripper.y"
    { yyval.val = Qnil; ;}
    break;

  case 335:
#line 2943 "ripper.y"
    { yyval.val = Qnil; ;}
    break;

  case 338:
#line 2952 "ripper.y"
    {
#if 0
			yyval.val = NEW_IF(cond(yyvsp[-3].val), yyvsp[-1].val, yyvsp[0].val);
		        fixpos(yyval.val, yyvsp[-3].val);
#endif
			yyval.val = dispatch3(elsif, yyvsp[-3].val, yyvsp[-1].val, escape_Qundef(yyvsp[0].val));

		    ;}
    break;

  case 340:
#line 2964 "ripper.y"
    {
#if 0
			yyval.val = yyvsp[0].val;
#endif
			yyval.val = dispatch1(else, yyvsp[0].val);

		    ;}
    break;

  case 343:
#line 2978 "ripper.y"
    {
#if 0
			yyval.val = NEW_LIST(yyvsp[0].val);
#endif
			yyval.val = mlhs_add(mlhs_new(), yyvsp[0].val);

		    ;}
    break;

  case 344:
#line 2986 "ripper.y"
    {
#if 0
			yyval.val = list_append(yyvsp[-2].val, yyvsp[0].val);
#endif
		    	yyval.val = mlhs_add(yyvsp[-2].val, yyvsp[0].val);

		    ;}
    break;

  case 345:
#line 2996 "ripper.y"
    {
#if 0
			if (yyvsp[0].val->nd_alen == 1) {
			    yyval.val = yyvsp[0].val->nd_head;
			    rb_gc_force_recycle((VALUE)yyvsp[0].val);
			}
			else {
			    yyval.val = NEW_MASGN(yyvsp[0].val, 0);
			}
#endif
			yyval.val = blockvar_new(yyvsp[0].val);

		    ;}
    break;

  case 346:
#line 3010 "ripper.y"
    {
#if 0
			yyval.val = NEW_MASGN(yyvsp[-1].val, 0);
#endif
			yyval.val = blockvar_new(yyvsp[-1].val);

		    ;}
    break;

  case 347:
#line 3018 "ripper.y"
    {
#if 0
			yyval.val = NEW_BLOCK_PARAM(yyvsp[0].val, NEW_MASGN(yyvsp[-3].val, 0));
#endif
			yyval.val = blockvar_add_block(blockvar_new(yyvsp[-3].val), yyvsp[0].val);

		    ;}
    break;

  case 348:
#line 3026 "ripper.y"
    {
#if 0
			yyval.val = NEW_BLOCK_PARAM(yyvsp[0].val, NEW_MASGN(yyvsp[-6].val, yyvsp[-3].val));
#endif
			yyval.val = blockvar_add_star(blockvar_new(yyvsp[-6].val), yyvsp[-3].val);
			yyval.val = blockvar_add_block(yyval.val, yyvsp[0].val);

		    ;}
    break;

  case 349:
#line 3035 "ripper.y"
    {
#if 0
			yyval.val = NEW_BLOCK_PARAM(yyvsp[0].val, NEW_MASGN(yyvsp[-5].val, -1));
#endif
			yyval.val = blockvar_add_star(blockvar_new(yyvsp[-5].val), Qnil);
			yyval.val = blockvar_add_block(yyval.val, yyvsp[0].val);

		    ;}
    break;

  case 350:
#line 3044 "ripper.y"
    {
#if 0
			yyval.val = NEW_MASGN(yyvsp[-3].val, yyvsp[0].val);
#endif
			yyval.val = blockvar_add_star(blockvar_new(yyvsp[-3].val), yyvsp[0].val);

		    ;}
    break;

  case 351:
#line 3052 "ripper.y"
    {
#if 0
			yyval.val = NEW_MASGN(yyvsp[-2].val, -1);
#endif
			yyval.val = blockvar_add_star(blockvar_new(yyvsp[-2].val), Qnil);

		    ;}
    break;

  case 352:
#line 3060 "ripper.y"
    {
#if 0
			yyval.val = NEW_BLOCK_PARAM(yyvsp[0].val, NEW_MASGN(0, yyvsp[-3].val));
#endif
			yyval.val = blockvar_add_star(blockvar_new(Qnil), yyvsp[-3].val);
			yyval.val = blockvar_add_block(yyval.val, yyvsp[0].val);

		    ;}
    break;

  case 353:
#line 3069 "ripper.y"
    {
#if 0
			yyval.val = NEW_BLOCK_PARAM(yyvsp[0].val, NEW_MASGN(0, -1));
#endif
			yyval.val = blockvar_add_star(blockvar_new(Qnil), Qnil);
			yyval.val = blockvar_add_block(yyval.val, yyvsp[0].val);

		    ;}
    break;

  case 354:
#line 3078 "ripper.y"
    {
#if 0
			yyval.val = NEW_MASGN(0, yyvsp[0].val);
#endif
			yyval.val = blockvar_add_star(blockvar_new(Qnil), yyvsp[0].val);

		    ;}
    break;

  case 355:
#line 3086 "ripper.y"
    {
#if 0
			yyval.val = NEW_MASGN(0, -1);
#endif
			yyval.val = blockvar_add_star(blockvar_new(Qnil), Qnil);

		    ;}
    break;

  case 356:
#line 3094 "ripper.y"
    {
#if 0
			yyval.val = NEW_BLOCK_PARAM(yyvsp[0].val, (NODE*)1);
#endif
			yyval.val = blockvar_add_block(blockvar_new(Qnil), yyvsp[0].val);

		    ;}
    break;

  case 357:
#line 3104 "ripper.y"
    {
#if 0
			yyval.val = NEW_ITER(0, 0, 0);
#endif

		    ;}
    break;

  case 359:
#line 3114 "ripper.y"
    {
#if 0
			yyval.val = NEW_ITER((NODE*)1, 0, yyvsp[-1].val);
#endif
			yyval.val = blockvar_new(mlhs_new());

		    ;}
    break;

  case 360:
#line 3122 "ripper.y"
    {
#if 0
			yyval.val = NEW_ITER((NODE*)1, 0, 0);
#endif
			yyval.val = blockvar_new(mlhs_new());

		    ;}
    break;

  case 361:
#line 3130 "ripper.y"
    {
#if 0
			yyval.val = NEW_ITER(yyvsp[-2].val, 0, yyvsp[-1].val);
#endif
			yyval.val = blockvar_new(yyvsp[-2].val);

		    ;}
    break;

  case 363:
#line 3142 "ripper.y"
    {
#if 0
			yyval.val = yyvsp[0].val;
#endif
			yyval.val = FIXME;

		    ;}
    break;

  case 364:
#line 3152 "ripper.y"
    {
#if 0
			yyval.val = yyvsp[0].val;
#endif
			yyval.val = FIXME;

		    ;}
    break;

  case 365:
#line 3160 "ripper.y"
    {
#if 0
			yyval.val = block_append(yyvsp[-2].val, yyvsp[0].val);
#endif
			yyval.val = FIXME;

		    ;}
    break;

  case 366:
#line 3170 "ripper.y"
    {
#if 0
                        yyval.val = new_bv(yyvsp[0].val, NEW_NIL());
#endif
			yyval.val = FIXME;

		    ;}
    break;

  case 367:
#line 3179 "ripper.y"
    {
#if 0
			yyval.vars = dyna_push();
#endif

		  ;}
    break;

  case 368:
#line 3185 "ripper.y"
    {
			yyval.num = lpar_beg;
 			lpar_beg = ++paren_nest;
		  ;}
    break;

  case 369:
#line 3190 "ripper.y"
    {
		        yyval.vars = ruby_dyna_vars;
		    ;}
    break;

  case 370:
#line 3194 "ripper.y"
    {
#if 0
			yyval.val = yyvsp[-2].val;
                        yyval.val->nd_body = block_append(yyval.val->nd_body, yyvsp[0].val);
			dyna_pop(yyvsp[-4].vars);
			lpar_beg = yyvsp[-3].num;
#endif
		    	yyval.val = dispatch2(lambda, yyvsp[-2].val, yyvsp[0].val);

		    ;}
    break;

  case 371:
#line 3207 "ripper.y"
    {
#if 0
			yyval.val = NEW_LAMBDA(yyvsp[-2].val, yyvsp[-1].val);
#endif
			yyval.val = dispatch1(paren, yyvsp[-2].val);

		    ;}
    break;

  case 372:
#line 3215 "ripper.y"
    {
#if 0
			yyval.val = NEW_LAMBDA(yyvsp[-1].val, yyvsp[0].val);
#endif
			yyval.val = yyvsp[-1].val;

		    ;}
    break;

  case 373:
#line 3225 "ripper.y"
    {
			yyval.val = yyvsp[-1].val;
		    ;}
    break;

  case 374:
#line 3229 "ripper.y"
    {
			yyval.val = yyvsp[-1].val;
		    ;}
    break;

  case 375:
#line 3235 "ripper.y"
    {
#if 0
		        yyval.vars = dyna_push();
			yyvsp[0].num = ruby_sourceline;
#endif
		    ;}
    break;

  case 376:
#line 3242 "ripper.y"
    {
#if 0
			yyval.vars = ruby_dyna_vars;
#endif
		    ;}
    break;

  case 377:
#line 3249 "ripper.y"
    {
#if 0
			yyvsp[-3].val->nd_body = block_append(yyvsp[-3].val->nd_body,
						   dyna_init(yyvsp[-1].val, yyvsp[-2].vars));
			yyval.val = yyvsp[-3].val;
			nd_set_line(yyval.val, yyvsp[-5].num);
			dyna_pop(yyvsp[-4].vars);
#endif
			yyval.val = dispatch2(do_block, escape_Qundef(yyvsp[-3].val), yyvsp[-1].val);

		    ;}
    break;

  case 378:
#line 3263 "ripper.y"
    {
#if 0
		        block_dup_check(yyvsp[-1].val);
			yyvsp[0].val->nd_iter = yyvsp[-1].val;
			yyval.val = yyvsp[0].val;
		        fixpos(yyval.val, yyvsp[-1].val);
#endif
			yyval.val = dispatch2(iter_block, yyvsp[-1].val, yyvsp[0].val);

		    ;}
    break;

  case 379:
#line 3274 "ripper.y"
    {
#if 0
			yyval.val = new_call(yyvsp[-3].val, yyvsp[-1].val, yyvsp[0].val);
#endif
			yyval.val = dispatch3(call, yyvsp[-3].val, ripper_id2sym('.'), yyvsp[-1].val);
			yyval.val = method_optarg(yyval.val, yyvsp[0].val);

		    ;}
    break;

  case 380:
#line 3283 "ripper.y"
    {
#if 0
			yyval.val = new_call(yyvsp[-3].val, yyvsp[-1].val, yyvsp[0].val);
#endif
			yyval.val = dispatch3(call, yyvsp[-3].val, ripper_intern("::"), yyvsp[-1].val);
			yyval.val = method_optarg(yyval.val, yyvsp[0].val);

		    ;}
    break;

  case 381:
#line 3294 "ripper.y"
    {
#if 0
			yyval.val = new_fcall(yyvsp[-1].val, yyvsp[0].val);
		        fixpos(yyval.val, yyvsp[0].val);
#endif
		        yyval.val = method_arg(dispatch1(fcall, yyvsp[-1].val), yyvsp[0].val);

		    ;}
    break;

  case 382:
#line 3303 "ripper.y"
    {
#if 0
			yyval.val = new_call(yyvsp[-3].val, yyvsp[-1].val, yyvsp[0].val);
		        fixpos(yyval.val, yyvsp[-3].val);
#endif
			yyval.val = dispatch3(call, yyvsp[-3].val, ripper_id2sym('.'), yyvsp[-1].val);
			yyval.val = method_optarg(yyval.val, yyvsp[0].val);

		    ;}
    break;

  case 383:
#line 3313 "ripper.y"
    {
#if 0
			yyval.val = new_call(yyvsp[-3].val, yyvsp[-1].val, yyvsp[0].val);
		        fixpos(yyval.val, yyvsp[-3].val);
#endif
			yyval.val = dispatch3(call, yyvsp[-3].val, ripper_id2sym('.'), yyvsp[-1].val);
			yyval.val = method_optarg(yyval.val, yyvsp[0].val);

		    ;}
    break;

  case 384:
#line 3323 "ripper.y"
    {
#if 0
			yyval.val = new_call(yyvsp[-2].val, yyvsp[0].val, 0);
#endif
			yyval.val = dispatch3(call, yyvsp[-2].val, ripper_intern("::"), yyvsp[0].val);

		    ;}
    break;

  case 385:
#line 3331 "ripper.y"
    {
#if 0
			yyval.val = new_super(yyvsp[0].val);
#endif
			yyval.val = dispatch1(super, yyvsp[0].val);

		    ;}
    break;

  case 386:
#line 3339 "ripper.y"
    {
#if 0
			yyval.val = NEW_ZSUPER();
#endif
			yyval.val = dispatch0(zsuper);

		    ;}
    break;

  case 387:
#line 3347 "ripper.y"
    {
#if 0
			if (!yyvsp[-2].val) yyvsp[-2].val = NEW_NIL();
			yyval.val = new_call(yyvsp[-2].val, rb_intern("call"), yyvsp[0].val);
		        fixpos(yyval.val, yyvsp[-2].val);
#endif
			yyval.val = dispatch3(call, dispatch1(paren, yyvsp[-2].val),
		                       ripper_id2sym('.'), rb_intern("call"));
			yyval.val = method_optarg(yyval.val, yyvsp[0].val);

		    ;}
    break;

  case 388:
#line 3359 "ripper.y"
    {
#if 0
			if (yyvsp[-3].val && nd_type(yyvsp[-3].val) == NODE_SELF)
			    yyval.val = NEW_FCALL(tAREF, yyvsp[-1].val);
			else
			    yyval.val = NEW_CALL(yyvsp[-3].val, tAREF, yyvsp[-1].val);
			fixpos(yyval.val, yyvsp[-3].val);
#endif
			yyval.val = dispatch2(aref, yyvsp[-3].val, escape_Qundef(yyvsp[-1].val));

		    ;}
    break;

  case 389:
#line 3373 "ripper.y"
    {
#if 0
		        yyval.vars = dyna_push();
			yyvsp[0].num = ruby_sourceline;
#endif
		    ;}
    break;

  case 390:
#line 3380 "ripper.y"
    {
#if 0
			yyval.vars = ruby_dyna_vars;
#endif

		    ;}
    break;

  case 391:
#line 3387 "ripper.y"
    {
#if 0
			yyvsp[-3].val->nd_body = block_append(yyvsp[-3].val->nd_body,
						   dyna_init(yyvsp[-1].val, yyvsp[-2].vars));
			yyval.val = yyvsp[-3].val;
			nd_set_line(yyval.val, yyvsp[-5].num);
			dyna_pop(yyvsp[-4].vars);
#endif
			yyval.val = dispatch2(brace_block, escape_Qundef(yyvsp[-3].val), yyvsp[-1].val);

		    ;}
    break;

  case 392:
#line 3399 "ripper.y"
    {
#if 0
		        yyval.vars = dyna_push();
			yyvsp[0].num = ruby_sourceline;
#endif
		    ;}
    break;

  case 393:
#line 3406 "ripper.y"
    {
#if 0
			yyval.vars = ruby_dyna_vars;
#endif

		    ;}
    break;

  case 394:
#line 3413 "ripper.y"
    {
#if 0
			yyvsp[-3].val->nd_body = block_append(yyvsp[-3].val->nd_body,
						   dyna_init(yyvsp[-1].val, yyvsp[-2].vars));
			yyval.val = yyvsp[-3].val;
			nd_set_line(yyval.val, yyvsp[-5].num);
			dyna_pop(yyvsp[-4].vars);
#endif
			yyval.val = dispatch2(do_block, escape_Qundef(yyvsp[-3].val), yyvsp[-1].val);

		    ;}
    break;

  case 395:
#line 3426 "ripper.y"
    {
#if 0
			yyval.val = yyvsp[0].val;
			nd_set_type(yyval.val, NODE_ITER);
#endif
			yyval.val = yyvsp[0].val;
			yyval.val = dispatch1(do_block, yyvsp[0].val);

		    ;}
    break;

  case 396:
#line 3440 "ripper.y"
    {
#if 0
			yyval.val = NEW_WHEN(yyvsp[-3].val, yyvsp[-1].val, yyvsp[0].val);
#endif
			yyval.val = dispatch3(when, yyvsp[-3].val, yyvsp[-1].val, escape_Qundef(yyvsp[0].val));

		    ;}
    break;

  case 398:
#line 3450 "ripper.y"
    {
#if 0
			yyval.val = list_append(yyvsp[-3].val, NEW_WHEN(yyvsp[0].val, 0, 0));
#endif
			yyval.val = arg_add_star(yyvsp[-3].val, yyvsp[0].val);

		    ;}
    break;

  case 399:
#line 3458 "ripper.y"
    {
#if 0
			yyval.val = NEW_LIST(NEW_WHEN(yyvsp[0].val, 0, 0));
#endif
			yyval.val = arg_add_star(arg_new(), yyvsp[0].val);

		    ;}
    break;

  case 402:
#line 3474 "ripper.y"
    {
#if 0
		        if (yyvsp[-3].val) {
		            yyvsp[-3].val = node_assign(yyvsp[-3].val, NEW_ERRINFO());
			    yyvsp[-1].val = block_append(yyvsp[-3].val, yyvsp[-1].val);
			}
			yyval.val = NEW_RESBODY(yyvsp[-4].val, yyvsp[-1].val, yyvsp[0].val);
		        fixpos(yyval.val, yyvsp[-4].val?yyvsp[-4].val:yyvsp[-1].val);
#endif
			yyval.val = dispatch4(rescue,
                                       escape_Qundef(yyvsp[-4].val),
                                       escape_Qundef(yyvsp[-3].val),
                                       escape_Qundef(yyvsp[-1].val),
                                       escape_Qundef(yyvsp[0].val));

		    ;}
    break;

  case 404:
#line 3494 "ripper.y"
    {
#if 0
			yyval.val = NEW_LIST(yyvsp[0].val);
#endif
		    	yyval.val = rb_ary_new3(1, yyvsp[0].val);

		    ;}
    break;

  case 407:
#line 3506 "ripper.y"
    {
			yyval.val = yyvsp[0].val;
		    ;}
    break;

  case 409:
#line 3513 "ripper.y"
    {
#if 0
			yyval.val = yyvsp[0].val;
#endif
			yyval.val = dispatch1(ensure, yyvsp[0].val);

		    ;}
    break;

  case 412:
#line 3525 "ripper.y"
    {
#if 0
			yyval.val = NEW_LIT(ID2SYM(yyvsp[0].val));
#endif
			yyval.val = dispatch1(symbol_literal, yyvsp[0].val);

		    ;}
    break;

  case 414:
#line 3536 "ripper.y"
    {
#if 0
			NODE *node = yyvsp[0].val;
			if (!node) {
			    node = NEW_STR(rb_str_new(0, 0));
			}
			else {
			    node = evstr2dstr(node);
			}
			yyval.val = node;
#endif
			yyval.val = yyvsp[0].val;

		    ;}
    break;

  case 416:
#line 3554 "ripper.y"
    {
#if 0
			yyval.val = literal_concat(yyvsp[-1].val, yyvsp[0].val);
#endif
			yyval.val = dispatch2(string_concat, yyvsp[-1].val, yyvsp[0].val);

		    ;}
    break;

  case 417:
#line 3564 "ripper.y"
    {
#if 0
			yyval.val = yyvsp[-1].val;
#endif
			yyval.val = dispatch1(string_literal, yyvsp[-1].val);

		    ;}
    break;

  case 418:
#line 3574 "ripper.y"
    {
#if 0
			NODE *node = yyvsp[-1].val;
			if (!node) {
			    node = NEW_XSTR(rb_str_new(0, 0));
			}
			else {
			    switch (nd_type(node)) {
			      case NODE_STR:
				nd_set_type(node, NODE_XSTR);
				break;
			      case NODE_DSTR:
				nd_set_type(node, NODE_DXSTR);
				break;
			      default:
				node = NEW_NODE(NODE_DXSTR, rb_str_new(0, 0), 1, NEW_LIST(node));
				break;
			    }
			}
			yyval.val = node;
#endif
			yyval.val = dispatch1(xstring_literal, yyvsp[-1].val);

		    ;}
    break;

  case 419:
#line 3601 "ripper.y"
    {
#if 0
			int options = yyvsp[0].val;
			NODE *node = yyvsp[-1].val;
			if (!node) {
			    node = NEW_LIT(rb_reg_compile("", 0, options & ~RE_OPTION_ONCE));
			}
			else switch (nd_type(node)) {
			  case NODE_STR:
			    {
				VALUE src = node->nd_lit;
				nd_set_type(node, NODE_LIT);
				node->nd_lit = rb_reg_compile(RSTRING(src)->ptr,
							      RSTRING(src)->len,
							      options & ~RE_OPTION_ONCE);
			    }
			    break;
			  default:
			    node = NEW_NODE(NODE_DSTR, rb_str_new(0, 0), 1, NEW_LIST(node));
			  case NODE_DSTR:
			    if (options & RE_OPTION_ONCE) {
				nd_set_type(node, NODE_DREGX_ONCE);
			    }
			    else {
				nd_set_type(node, NODE_DREGX);
			    }
			    node->nd_cflag = options & ~RE_OPTION_ONCE;
			    break;
			}
			yyval.val = node;
#endif
			yyval.val = dispatch2(regexp_literal, yyvsp[-1].val, yyvsp[0].val);

		    ;}
    break;

  case 420:
#line 3638 "ripper.y"
    {
#if 0
			yyval.val = NEW_ZARRAY();
#endif
			yyval.val = dispatch0(words_new);

		    ;}
    break;

  case 421:
#line 3646 "ripper.y"
    {
			yyval.val = yyvsp[-1].val;
		    ;}
    break;

  case 422:
#line 3652 "ripper.y"
    {
#if 0
			yyval.val = 0;
#endif
			yyval.val = dispatch0(words_new);

		    ;}
    break;

  case 423:
#line 3660 "ripper.y"
    {
#if 0
			yyval.val = list_append(yyvsp[-2].val, evstr2dstr(yyvsp[-1].val));
#endif
			yyval.val = dispatch2(words_add, yyvsp[-2].val, yyvsp[-1].val);

		    ;}
    break;

  case 424:
#line 3672 "ripper.y"
    {
			yyval.val = dispatch0(word_new);
			yyval.val = dispatch2(word_add, yyval.val, yyvsp[0].val);
		    ;}
    break;

  case 425:
#line 3678 "ripper.y"
    {
#if 0
			yyval.val = literal_concat(yyvsp[-1].val, yyvsp[0].val);
#endif
			yyval.val = dispatch2(word_add, yyvsp[-1].val, yyvsp[0].val);

		    ;}
    break;

  case 426:
#line 3688 "ripper.y"
    {
#if 0
			yyval.val = NEW_ZARRAY();
#endif
			yyval.val = dispatch0(qwords_new);

		    ;}
    break;

  case 427:
#line 3696 "ripper.y"
    {
			yyval.val = yyvsp[-1].val;
		    ;}
    break;

  case 428:
#line 3702 "ripper.y"
    {
#if 0
			yyval.val = 0;
#endif
			yyval.val = dispatch0(qwords_new);

		    ;}
    break;

  case 429:
#line 3710 "ripper.y"
    {
#if 0
			yyval.val = list_append(yyvsp[-2].val, yyvsp[-1].val);
#endif
			yyval.val = dispatch2(qwords_add, yyvsp[-2].val, yyvsp[-1].val);

		    ;}
    break;

  case 430:
#line 3720 "ripper.y"
    {
#if 0
			yyval.val = 0;
#endif
			yyval.val = dispatch0(string_content);

		    ;}
    break;

  case 431:
#line 3728 "ripper.y"
    {
#if 0
			yyval.val = literal_concat(yyvsp[-1].val, yyvsp[0].val);
#endif
			yyval.val = dispatch2(string_add, yyvsp[-1].val, yyvsp[0].val);

		    ;}
    break;

  case 432:
#line 3738 "ripper.y"
    {
#if 0
			yyval.val = 0;
#endif
			yyval.val = dispatch0(xstring_new);

		    ;}
    break;

  case 433:
#line 3746 "ripper.y"
    {
#if 0
			yyval.val = literal_concat(yyvsp[-1].val, yyvsp[0].val);
#endif
			yyval.val = dispatch2(xstring_add, yyvsp[-1].val, yyvsp[0].val);

		    ;}
    break;

  case 435:
#line 3757 "ripper.y"
    {
			yyval.node = lex_strterm;
			lex_strterm = 0;
			lex_state = EXPR_BEG;
		    ;}
    break;

  case 436:
#line 3763 "ripper.y"
    {
#if 0
			lex_strterm = yyvsp[-1].node;
		        yyval.val = NEW_EVSTR(yyvsp[0].val);
#endif
			lex_strterm = yyvsp[-1].node;
			yyval.val = dispatch1(string_dvar, yyvsp[0].val);

		    ;}
    break;

  case 437:
#line 3773 "ripper.y"
    {
			yyval.node = lex_strterm;
			lex_strterm = 0;
			lex_state = EXPR_BEG;
			COND_PUSH(0);
			CMDARG_PUSH(0);
		    ;}
    break;

  case 438:
#line 3781 "ripper.y"
    {
			lex_strterm = yyvsp[-2].node;
			COND_LEXPOP();
			CMDARG_LEXPOP();
#if 0
		        if (yyvsp[-1].val) yyvsp[-1].val->flags &= ~NODE_NEWLINE;
			yyval.val = new_evstr(yyvsp[-1].val);
#endif
			yyval.val = dispatch1(string_embexpr, yyvsp[-1].val);

		    ;}
    break;

  case 439:
#line 3795 "ripper.y"
    {
#if 0
			yyval.val = NEW_GVAR(yyvsp[0].val);
#endif
			yyval.val = dispatch1(var_ref, yyvsp[0].val);

		    ;}
    break;

  case 440:
#line 3803 "ripper.y"
    {
#if 0
			yyval.val = NEW_IVAR(yyvsp[0].val);
#endif
			yyval.val = dispatch1(var_ref, yyvsp[0].val);

		    ;}
    break;

  case 441:
#line 3811 "ripper.y"
    {
#if 0
			yyval.val = NEW_CVAR(yyvsp[0].val);
#endif
			yyval.val = dispatch1(var_ref, yyvsp[0].val);

		    ;}
    break;

  case 443:
#line 3822 "ripper.y"
    {
#if 0
		        lex_state = EXPR_END;
			yyval.val = yyvsp[0].val;
#endif
		        lex_state = EXPR_END;
			yyval.val = dispatch1(symbol, yyvsp[0].val);

		    ;}
    break;

  case 448:
#line 3840 "ripper.y"
    {
#if 0
		        lex_state = EXPR_END;
			if (!(yyval.val = yyvsp[-1].val)) {
			    yyerror("empty symbol literal");
			}
			else {
			    switch (nd_type(yyval.val)) {
			      case NODE_DSTR:
				nd_set_type(yyval.val, NODE_DSYM);
				break;
			      case NODE_STR:
				if (strlen(RSTRING(yyval.val->nd_lit)->ptr) == RSTRING(yyval.val->nd_lit)->len) {
				    yyval.val->nd_lit = ID2SYM(rb_intern(RSTRING(yyval.val->nd_lit)->ptr));
				    nd_set_type(yyval.val, NODE_LIT);
				    break;
				}
				/* fall through */
			      default:
				yyval.val = NEW_NODE(NODE_DSYM, rb_str_new(0, 0), 1, NEW_LIST(yyval.val));
				break;
			    }
			}
#endif
		        lex_state = EXPR_END;
			yyval.val = dispatch1(dyna_symbol, yyvsp[-1].val);

		    ;}
    break;

  case 451:
#line 3873 "ripper.y"
    {
#if 0
			yyval.val = negate_lit(yyvsp[0].val);
#endif
			yyval.val = dispatch2(unary, ripper_intern("-@"), yyvsp[0].val);

		    ;}
    break;

  case 452:
#line 3881 "ripper.y"
    {
#if 0
			yyval.val = negate_lit(yyvsp[0].val);
#endif
			yyval.val = dispatch2(unary, ripper_intern("-@"), yyvsp[0].val);

		    ;}
    break;

  case 458:
#line 3895 "ripper.y"
    {ifndef_ripper(yyval.val = kNIL);;}
    break;

  case 459:
#line 3896 "ripper.y"
    {ifndef_ripper(yyval.val = kSELF);;}
    break;

  case 460:
#line 3897 "ripper.y"
    {ifndef_ripper(yyval.val = kTRUE);;}
    break;

  case 461:
#line 3898 "ripper.y"
    {ifndef_ripper(yyval.val = kFALSE);;}
    break;

  case 462:
#line 3899 "ripper.y"
    {ifndef_ripper(yyval.val = k__FILE__);;}
    break;

  case 463:
#line 3900 "ripper.y"
    {ifndef_ripper(yyval.val = k__LINE__);;}
    break;

  case 464:
#line 3904 "ripper.y"
    {
#if 0
			yyval.val = gettable(yyvsp[0].val);
#endif
			yyval.val = dispatch1(var_ref, yyvsp[0].val);

		    ;}
    break;

  case 465:
#line 3914 "ripper.y"
    {
#if 0
			yyval.val = assignable(yyvsp[0].val, 0);
#endif
			yyval.val = dispatch1(var_field, yyvsp[0].val);

		    ;}
    break;

  case 468:
#line 3928 "ripper.y"
    {
#if 0
			yyval.val = 0;
#endif
			yyval.val = Qnil;

		    ;}
    break;

  case 469:
#line 3936 "ripper.y"
    {
			lex_state = EXPR_BEG;
		    ;}
    break;

  case 470:
#line 3940 "ripper.y"
    {
			yyval.val = yyvsp[-1].val;
		    ;}
    break;

  case 471:
#line 3944 "ripper.y"
    {
#if 0
			yyerrok;
			yyval.val = 0;
#endif
			yyerrok;
			yyval.val = Qnil;

		    ;}
    break;

  case 472:
#line 3956 "ripper.y"
    {
#if 0
			yyval.val = yyvsp[-1].val;
			lex_state = EXPR_BEG;
#endif
			yyval.val = dispatch1(paren, yyvsp[-1].val);
			lex_state = EXPR_BEG;

		    ;}
    break;

  case 473:
#line 3966 "ripper.y"
    {
			yyval.val = yyvsp[-1].val;
		    ;}
    break;

  case 474:
#line 3972 "ripper.y"
    {
#if 0
			yyval.val = new_args(yyvsp[-5].val, yyvsp[-3].val, yyvsp[-1].val, yyvsp[0].val);
#endif
			yyval.val = dispatch4(params, yyvsp[-5].val, yyvsp[-3].val, yyvsp[-1].val, escape_Qundef(yyvsp[0].val));

		    ;}
    break;

  case 475:
#line 3980 "ripper.y"
    {
#if 0
			yyval.val = new_args(yyvsp[-3].val, yyvsp[-1].val, 0, yyvsp[0].val);
#endif
			yyval.val = dispatch4(params, yyvsp[-3].val, yyvsp[-1].val, Qnil, escape_Qundef(yyvsp[0].val));

		    ;}
    break;

  case 476:
#line 3988 "ripper.y"
    {
#if 0
			yyval.val = new_args(yyvsp[-3].val, 0, yyvsp[-1].val, yyvsp[0].val);
#endif
			yyval.val = dispatch4(params, yyvsp[-3].val, Qnil, yyvsp[-1].val, escape_Qundef(yyvsp[0].val));

		    ;}
    break;

  case 477:
#line 3996 "ripper.y"
    {
#if 0
			yyval.val = new_args(yyvsp[-1].val, 0, 0, yyvsp[0].val);
#endif
			yyval.val = dispatch4(params, yyvsp[-1].val, Qnil, Qnil, escape_Qundef(yyvsp[0].val));

		    ;}
    break;

  case 478:
#line 4004 "ripper.y"
    {
#if 0
			yyval.val = new_args(0, yyvsp[-3].val, yyvsp[-1].val, yyvsp[0].val);
#endif
			yyval.val = dispatch4(params, Qnil, yyvsp[-3].val, yyvsp[-1].val, escape_Qundef(yyvsp[0].val));

		    ;}
    break;

  case 479:
#line 4012 "ripper.y"
    {
#if 0
			yyval.val = new_args(0, yyvsp[-1].val, 0, yyvsp[0].val);
#endif
			yyval.val = dispatch4(params, Qnil, yyvsp[-1].val, Qnil, escape_Qundef(yyvsp[0].val));

		    ;}
    break;

  case 480:
#line 4020 "ripper.y"
    {
#if 0
			yyval.val = new_args(0, 0, yyvsp[-1].val, yyvsp[0].val);
#endif
			yyval.val = dispatch4(params, Qnil, Qnil, yyvsp[-1].val, escape_Qundef(yyvsp[0].val));

		    ;}
    break;

  case 481:
#line 4028 "ripper.y"
    {
#if 0
			yyval.val = new_args(0, 0, 0, yyvsp[0].val);
#endif
			yyval.val = dispatch4(params, Qnil, Qnil, Qnil, yyvsp[0].val);

		    ;}
    break;

  case 482:
#line 4036 "ripper.y"
    {
#if 0
			yyval.val = new_args(0, 0, 0, 0);
#endif
			yyval.val = dispatch4(params, Qnil, Qnil, Qnil, Qnil);

		    ;}
    break;

  case 483:
#line 4046 "ripper.y"
    {
#if 0
			yyerror("formal argument cannot be a constant");
#endif
			yyval.val = dispatch1(param_error, yyvsp[0].val);

		    ;}
    break;

  case 484:
#line 4054 "ripper.y"
    {
#if 0
                        yyerror("formal argument cannot be an instance variable");
#endif
			yyval.val = dispatch1(param_error, yyvsp[0].val);

		    ;}
    break;

  case 485:
#line 4062 "ripper.y"
    {
#if 0
                        yyerror("formal argument cannot be a global variable");
#endif
			yyval.val = dispatch1(param_error, yyvsp[0].val);

		    ;}
    break;

  case 486:
#line 4070 "ripper.y"
    {
#if 0
                        yyerror("formal argument cannot be a class variable");
#endif
			yyval.val = dispatch1(param_error, yyvsp[0].val);

		    ;}
    break;

  case 487:
#line 4078 "ripper.y"
    {
#if 0
			if (!is_local_id(yyvsp[0].val))
			    yyerror("formal argument must be local variable");
			if (dyna_in_block()) {
		            shadowing_lvar(yyvsp[0].val);
			    dyna_var(yyvsp[0].val);
			}
			else {
			    local_cnt(yyvsp[0].val);
			}
			yyval.val = yyvsp[0].val;
#endif
			yyval.val = yyvsp[0].val;

		    ;}
    break;

  case 488:
#line 4097 "ripper.y"
    {
#if 0
			VALUE arg = ID2SYM(yyvsp[0].val);
#endif
			VALUE arg = yyvsp[0].val;

		        yyval.val = rb_ary_new3(1, arg);
		    ;}
    break;

  case 489:
#line 4106 "ripper.y"
    {
#if 0
			VALUE arg = ID2SYM(yyvsp[0].val);
			yyval.val = yyvsp[-2].val;
			if (rb_ary_includes(yyval.val, arg)) {
			    yyerror("duplicated argument arg");
			}
			rb_ary_push(yyval.val, arg);
#endif
			rb_ary_push(yyval.val, yyvsp[0].val);

		    ;}
    break;

  case 490:
#line 4121 "ripper.y"
    {
#if 0
			if (!is_local_id(yyvsp[-2].val))
			    yyerror("formal argument must be local variable");
			if (dyna_in_block()) {
		            shadowing_lvar(yyvsp[-2].val);
			    dyna_var(yyvsp[-2].val);
			}
		        yyval.val = assignable(yyvsp[-2].val, yyvsp[0].val);
#endif
			yyval.val = rb_assoc_new(yyvsp[-2].val, yyvsp[0].val);

		    ;}
    break;

  case 491:
#line 4137 "ripper.y"
    {
#if 0
			yyval.val = NEW_BLOCK(yyvsp[0].val);
			yyval.val->nd_end = yyval.val;
#endif
			yyval.val = rb_ary_new3(1, yyvsp[0].val);

		    ;}
    break;

  case 492:
#line 4146 "ripper.y"
    {
#if 0
			yyval.val = block_append(yyvsp[-2].val, yyvsp[0].val);
#endif
			yyval.val = rb_ary_push(yyvsp[-2].val, yyvsp[0].val);

		    ;}
    break;

  case 495:
#line 4160 "ripper.y"
    {
#if 0
			if (!is_local_id(yyvsp[0].val))
			    yyerror("rest argument must be local variable");
			if (dyna_in_block()) {
		            shadowing_lvar(yyvsp[0].val);
			    dyna_var(yyvsp[0].val);
			}
			yyval.val = assignable(yyvsp[0].val, 0);
#endif
			yyval.val = dispatch1(restparam, yyvsp[0].val);

		    ;}
    break;

  case 496:
#line 4174 "ripper.y"
    {
#if 0
			if (dyna_in_block()) {
			    yyval.val = NEW_DASGN_CURR(internal_id(), 0);
			}
			else {
			    yyval.val = NEW_NODE(NODE_LASGN,0,0,local_append(0));
			}
#endif
			yyval.val = dispatch1(restparam, Qnil);

		    ;}
    break;

  case 499:
#line 4193 "ripper.y"
    {
#if 0
			if (!is_local_id(yyvsp[0].val))
			    yyerror("block argument must be local variable");
			else if (!dyna_in_block() && local_id(yyvsp[0].val))
			    yyerror("duplicated block argument name");
			if (dyna_in_block()) {
		            shadowing_lvar(yyvsp[0].val);
			    dyna_var(yyvsp[0].val);
			    yyval.val = assignable(yyvsp[0].val, 0);
			}
		        else {
			    yyval.val = NEW_BLOCK_ARG(yyvsp[0].val);
		        }
#endif
			yyval.val = yyvsp[0].val;

		    ;}
    break;

  case 500:
#line 4214 "ripper.y"
    {
			yyval.val = yyvsp[0].val;
		    ;}
    break;

  case 502:
#line 4221 "ripper.y"
    {
#if 0
			if (nd_type(yyvsp[0].val) == NODE_SELF) {
			    yyval.val = NEW_SELF();
			}
			else {
			    yyval.val = yyvsp[0].val;
		            value_expr(yyval.val);
			}
#endif
			yyval.val = yyvsp[0].val;

		    ;}
    break;

  case 503:
#line 4234 "ripper.y"
    {lex_state = EXPR_BEG;;}
    break;

  case 504:
#line 4235 "ripper.y"
    {
#if 0
			if (yyvsp[-1].val == 0) {
			    yyerror("can't define singleton method for ().");
			}
			else {
			    switch (nd_type(yyvsp[-1].val)) {
			      case NODE_STR:
			      case NODE_DSTR:
			      case NODE_XSTR:
			      case NODE_DXSTR:
			      case NODE_DREGX:
			      case NODE_LIT:
			      case NODE_ARRAY:
			      case NODE_ZARRAY:
				yyerror("can't define singleton method for literals");
			      default:
				value_expr(yyvsp[-1].val);
				break;
			    }
			}
			yyval.val = yyvsp[-1].val;
#endif
			yyval.val = dispatch1(paren, yyvsp[-1].val);

		    ;}
    break;

  case 506:
#line 4265 "ripper.y"
    {
			yyval.val = yyvsp[-1].val;
		    ;}
    break;

  case 507:
#line 4269 "ripper.y"
    {
#if 0
			if (yyvsp[-1].val->nd_alen%2 != 0) {
			    yyerror("odd number list for Hash");
			}
			yyval.val = yyvsp[-1].val;
#endif
		    	yyval.val = dispatch1(assoclist_from_args, yyvsp[-1].val);

		    ;}
    break;

  case 508:
#line 4284 "ripper.y"
    {
			yyval.val = rb_ary_new3(1, yyvsp[0].val);
		    ;}
    break;

  case 509:
#line 4289 "ripper.y"
    {
#if 0
			yyval.val = list_concat(yyvsp[-2].val, yyvsp[0].val);
#endif
			rb_ary_push(yyval.val, yyvsp[0].val);

		    ;}
    break;

  case 510:
#line 4299 "ripper.y"
    {
#if 0
			yyval.val = list_append(NEW_LIST(yyvsp[-2].val), yyvsp[0].val);
#endif
			yyval.val = dispatch2(assoc_new, yyvsp[-2].val, yyvsp[0].val);

		    ;}
    break;

  case 511:
#line 4307 "ripper.y"
    {
#if 0
			yyval.val = list_append(NEW_LIST(NEW_LIT(ID2SYM(yyvsp[-1].val))), yyvsp[0].val);
#endif
		    	yyval.val = dispatch2(assoc_new, yyvsp[-1].val, yyvsp[0].val);

		    ;}
    break;

  case 522:
#line 4335 "ripper.y"
    { yyval.val = yyvsp[0].val; ;}
    break;

  case 523:
#line 4340 "ripper.y"
    { yyval.val = yyvsp[0].val; ;}
    break;

  case 532:
#line 4360 "ripper.y"
    {yyerrok;;}
    break;

  case 535:
#line 4365 "ripper.y"
    {yyerrok;;}
    break;

  case 536:
#line 4369 "ripper.y"
    {
#if 0
			yyval.val = 0;
#endif
		    	yyval.val = Qundef;

		    ;}
    break;


    }

/* Line 1010 of yacc.c.  */
#line 9177 "ripper.c"

  yyvsp -= yylen;
  yyssp -= yylen;


  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if YYERROR_VERBOSE
      yyn = yypact[yystate];

      if (YYPACT_NINF < yyn && yyn < YYLAST)
	{
	  YYSIZE_T yysize = 0;
	  int yytype = YYTRANSLATE (yychar);
	  const char* yyprefix;
	  char *yymsg;
	  int yyx;

	  /* Start YYX at -YYN if negative to avoid negative indexes in
	     YYCHECK.  */
	  int yyxbegin = yyn < 0 ? -yyn : 0;

	  /* Stay within bounds of both yycheck and yytname.  */
	  int yychecklim = YYLAST - yyn;
	  int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
	  int yycount = 0;

	  yyprefix = ", expecting ";
	  for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	    if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	      {
		yysize += yystrlen (yyprefix) + yystrlen (yytname [yyx]);
		yycount += 1;
		if (yycount == 5)
		  {
		    yysize = 0;
		    break;
		  }
	      }
	  yysize += (sizeof ("syntax error, unexpected ")
		     + yystrlen (yytname[yytype]));
	  yymsg = (char *) YYSTACK_ALLOC (yysize);
	  if (yymsg != 0)
	    {
	      char *yyp = yystpcpy (yymsg, "syntax error, unexpected ");
	      yyp = yystpcpy (yyp, yytname[yytype]);

	      if (yycount < 5)
		{
		  yyprefix = ", expecting ";
		  for (yyx = yyxbegin; yyx < yyxend; ++yyx)
		    if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
		      {
			yyp = yystpcpy (yyp, yyprefix);
			yyp = yystpcpy (yyp, yytname[yyx]);
			yyprefix = " or ";
		      }
		}
	      yyerror (yymsg);
	      YYSTACK_FREE (yymsg);
	    }
	  else
	    yyerror ("syntax error; also virtual memory exhausted");
	}
      else
#endif /* YYERROR_VERBOSE */
	yyerror ("syntax error");
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* If at end of input, pop the error token,
	     then the rest of the stack, then return failure.  */
	  if (yychar == YYEOF)
	     for (;;)
	       {
		 YYPOPSTACK;
		 if (yyssp == yyss)
		   YYABORT;
		 YYDSYMPRINTF ("Error: popping", yystos[*yyssp], yyvsp, yylsp);
		 yydestruct (yystos[*yyssp], yyvsp);
	       }
        }
      else
	{
	  YYDSYMPRINTF ("Error: discarding", yytoken, &yylval, &yylloc);
	  yydestruct (yytoken, &yylval);
	  yychar = YYEMPTY;

	}
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

#ifdef __GNUC__
  /* Pacify GCC when the user code never invokes YYERROR and the label
     yyerrorlab therefore never appears in user code.  */
  if (0)
     goto yyerrorlab;
#endif

  yyvsp -= yylen;
  yyssp -= yylen;
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;

      YYDSYMPRINTF ("Error: popping", yystos[*yyssp], yyvsp, yylsp);
      yydestruct (yystos[yystate], yyvsp);
      YYPOPSTACK;
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  YYDPRINTF ((stderr, "Shifting error token, "));

  *++yyvsp = yylval;


  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#ifndef yyoverflow
/*----------------------------------------------.
| yyoverflowlab -- parser overflow comes here.  |
`----------------------------------------------*/
yyoverflowlab:
  yyerror ("parser stack overflow");
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  return yyresult;
}


#line 4377 "ripper.y"

# undef parser
# undef yylex
# undef yylval
# define yylval  (*((YYSTYPE*)(parser->parser_yylval)))

#ifndef RIPPER
static VALUE rb_parser_s_new _((void));
#endif
static int parser_regx_options _((struct parser_params*));
static int parser_tokadd_string _((struct parser_params*,int,int,int,long*));
static int parser_parse_string _((struct parser_params*,NODE*));
static int parser_here_document _((struct parser_params*,NODE*));

# define nextc()                   parser_nextc(parser)
# define pushback(c)               parser_pushback(parser, c)
# define newtok()                  parser_newtok(parser)
# define tokadd(c)                 parser_tokadd(parser, c)
# define read_escape()             parser_read_escape(parser)
# define tokadd_escape(t)          parser_tokadd_escape(parser, t)
# define regx_options()            parser_regx_options(parser)
# define tokadd_string(f,t,p,n)    parser_tokadd_string(parser,f,t,p,n)
# define parse_string(n)           parser_parse_string(parser,n)
# define here_document(n)          parser_here_document(parser,n)
# define heredoc_identifier()      parser_heredoc_identifier(parser)
# define heredoc_restore(n)        parser_heredoc_restore(parser,n)
# define whole_match_p(e,l,i)      parser_whole_match_p(parser,e,l,i)

#ifdef RIPPER
/* FIXME */
# define local_cnt(x)      3
# define local_id(x)       1
# define dyna_in_block()   1
#endif /* RIPPER */

#ifndef RIPPER
# define set_yylval_str(x) yylval.node = NEW_STR(x)
# define set_yylval_num(x) yylval.num = x
# define set_yylval_id(x)  yylval.id = x
# define set_yylval_literal(x) yylval.node = NEW_LIT(x)
# define set_yylval_node(x) yylval.node = x
# define yylval_id() yylval.id
#else
# define set_yylval_str(x) x
# define set_yylval_num(x) x
# define set_yylval_id(x) x
# define set_yylval_literal(x) x
# define set_yylval_node(x) x
# define yylval_id() SYM2ID(yylval.val)
#endif

#ifdef RIPPER
#define ripper_flush(p) (p->tokp = p->parser_lex_p)

static void
ripper_dispatch_scan_event(parser, t)
    struct parser_params *parser;
    int t;
{
    VALUE str;

    if (lex_p < parser->tokp) rb_raise(rb_eRuntimeError, "lex_p < tokp");
    if (lex_p == parser->tokp) return;
    str = rb_str_new(parser->tokp, lex_p - parser->tokp);
    yylval.val = ripper_dispatch1(parser, ripper_token2eventid(t), str);
    ripper_flush(parser);
}

static void
ripper_dispatch_delayed_token(parser, t)
    struct parser_params *parser;
    int t;
{
    int saved_line = ruby_sourceline;
    char *saved_tokp = parser->tokp;

    ruby_sourceline = parser->delayed_line;
    parser->tokp = lex_pbeg + parser->delayed_col;
    yylval.val = ripper_dispatch1(parser, ripper_token2eventid(t), parser->delayed);
    parser->delayed = Qnil;
    ruby_sourceline = saved_line;
    parser->tokp = saved_tokp;
}
#endif /* RIPPER */

#include "regex.h"
#include "util.h"

/* We remove any previous definition of `SIGN_EXTEND_CHAR',
   since ours (we hope) works properly with all combinations of
   machines, compilers, `char' and `unsigned char' argument types.
   (Per Bothner suggested the basic approach.)  */
#undef SIGN_EXTEND_CHAR
#if __STDC__
# define SIGN_EXTEND_CHAR(c) ((signed char)(c))
#else  /* not __STDC__ */
/* As in Harbison and Steele.  */
# define SIGN_EXTEND_CHAR(c) ((((unsigned char)(c)) ^ 128) - 128)
#endif
#define is_identchar(c) (SIGN_EXTEND_CHAR(c)!=-1&&(ISALNUM(c) || (c) == '_' || ismbchar(c)))

static int
parser_yyerror(parser, msg)
    struct parser_params *parser;
    const char *msg;
{
#ifndef RIPPER
    char *p, *pe, *buf;
    int len, i;

    rb_compile_error("%s", msg);
    p = lex_p;
    while (lex_pbeg <= p) {
	if (*p == '\n') break;
	p--;
    }
    p++;

    pe = lex_p;
    while (pe < lex_pend) {
	if (*pe == '\n') break;
	pe++;
    }

    len = pe - p;
    if (len > 4) {
	buf = ALLOCA_N(char, len+2);
	MEMCPY(buf, p, char, len);
	buf[len] = '\0';
	rb_compile_error_append("%s", buf);

	i = lex_p - p;
	p = buf; pe = p + len;

	while (p < pe) {
	    if (*p != '\t') *p = ' ';
	    p++;
	}
	buf[i] = '^';
	buf[i+1] = '\0';
	rb_compile_error_append("%s", buf);
    }
#else
    dispatch1(parse_error, rb_str_new2(msg));
#endif /* !RIPPER */
    return 0;
}

static void parser_prepare _((struct parser_params *parser));

#ifndef RIPPER
static NODE*
yycompile(parser, f, line)
    struct parser_params *parser;
    char *f;
    int line;
{
    int n;
    NODE *node = 0;
    struct RVarmap *vp, *vars = ruby_dyna_vars;
    const char *kcode_save;

    if (!compile_for_eval && rb_safe_level() == 0 &&
	rb_const_defined(rb_cObject, rb_intern("SCRIPT_LINES__"))) {
	VALUE hash, fname;

	hash = rb_const_get(rb_cObject, rb_intern("SCRIPT_LINES__"));
	if (TYPE(hash) == T_HASH) {
	    fname = rb_str_new2(f);
	    ruby_debug_lines = rb_hash_aref(hash, fname);
	    if (NIL_P(ruby_debug_lines)) {
		ruby_debug_lines = rb_ary_new();
		rb_hash_aset(hash, fname, ruby_debug_lines);
	    }
	}
	if (line > 1) {
	    VALUE str = rb_str_new(0,0);
	    n = line - 1;
	    do {
		rb_ary_push(ruby_debug_lines, str);
	    } while (--n);
	}
    }

    kcode_save = rb_get_kcode();
    ruby_current_node = 0;
    ruby_sourcefile = rb_source_filename(f);
    ruby_sourceline = line - 1;
    parser_prepare(parser);
    n = yyparse((void*)parser);
    ruby_debug_lines = 0;
    compile_for_eval = 0;
    rb_set_kcode(kcode_save);

    vp = ruby_dyna_vars;
    ruby_dyna_vars = vars;
    lex_strterm = 0;
    while (vp && vp != vars) {
	struct RVarmap *tmp = vp;
	vp = vp->next;
	rb_gc_force_recycle((VALUE)tmp);
    }
    if (ruby_eval_tree_begin) {
	return NEW_PRELUDE(ruby_eval_tree_begin, ruby_eval_tree);
    }
    else {
	return ruby_eval_tree;
    }
}
#endif /* !RIPPER */

static VALUE lex_get_str _((struct parser_params *, VALUE));
static VALUE
lex_get_str(parser, s)
    struct parser_params *parser;
    VALUE s;
{
    char *beg, *end, *pend;

    beg = RSTRING(s)->ptr;
    if (lex_gets_ptr) {
	if (RSTRING(s)->len == lex_gets_ptr) return Qnil;
	beg += lex_gets_ptr;
    }
    pend = RSTRING(s)->ptr + RSTRING(s)->len;
    end = beg;
    while (end < pend) {
	if (*end++ == '\n') break;
    }
    lex_gets_ptr = end - RSTRING(s)->ptr;
    return rb_str_new(beg, end - beg);
}

static VALUE
lex_getline(parser)
    struct parser_params *parser;
{
    VALUE line = (*parser->parser_lex_gets)(parser, parser->parser_lex_input);
#ifndef RIPPER
    if (ruby_debug_lines && !NIL_P(line)) {
	rb_ary_push(ruby_debug_lines, line);
    }
#endif
    return line;
}

#ifndef RIPPER
NODE*
rb_compile_string(f, s, line)
    const char *f;
    VALUE s;
    int line;
{
    VALUE volatile vparser = rb_parser_new();

    return rb_parser_compile_string(vparser, f, s, line);
}

NODE*
rb_parser_compile_string(vparser, f, s, line)
    volatile VALUE vparser;
    const char *f;
    VALUE s;
    int line;
{
    struct parser_params *parser;

    Data_Get_Struct(vparser, struct parser_params, parser);
    lex_gets = lex_get_str;
    lex_gets_ptr = 0;
    lex_input = s;
    lex_pbeg = lex_p = lex_pend = 0;
    compile_for_eval = ruby_in_eval;

    return yycompile(parser, f, line);
}

NODE*
rb_compile_cstr(f, s, len, line)
    const char *f, *s;
    int len, line;
{
    return rb_compile_string(f, rb_str_new(s, len), line);
}

NODE*
rb_parser_compile_cstr(vparser, f, s, len, line)
    volatile VALUE vparser;
    const char *f, *s;
    int len, line;
{
    return rb_parser_compile_string(vparser, f, rb_str_new(s, len), line);
}

static VALUE lex_io_gets _((struct parser_params *, VALUE));
static VALUE
lex_io_gets(parser, io)
    struct parser_params *parser;
    VALUE io;
{
    return rb_io_gets(io);
}

NODE*
rb_compile_file(f, file, start)
    const char *f;
    VALUE file;
    int start;
{
    VALUE volatile vparser = rb_parser_new();

    return rb_parser_compile_file(vparser, f, file, start);
}

NODE*
rb_parser_compile_file(vparser, f, file, start)
    volatile VALUE vparser;
    const char *f;
    VALUE file;
    int start;
{
    struct parser_params *parser;
    
    Data_Get_Struct(vparser, struct parser_params, parser);
    lex_gets = lex_io_gets;
    lex_input = file;
    lex_pbeg = lex_p = lex_pend = 0;

    return yycompile(parser, f, start);
}
#endif  /* !RIPPER */

static inline int
parser_nextc(parser)
    struct parser_params *parser;
{
    int c;

    if (lex_p == lex_pend) {
        if (parser->eofp)
            return -1;
	if (lex_input) {
	    VALUE v = lex_getline(parser);

	    if (NIL_P(v)) {
                parser->eofp = Qtrue;
                return -1;
            }
#ifdef RIPPER
	    if (parser->tokp < lex_pend) {
		if (NIL_P(parser->delayed)) {
		    parser->delayed = rb_str_buf_new(1024);
		    rb_str_buf_cat(parser->delayed,
				   parser->tokp, lex_pend - parser->tokp);
		    parser->delayed_line = ruby_sourceline;
		    parser->delayed_col = parser->tokp - lex_pbeg;
		}
		else {
		    rb_str_buf_cat(parser->delayed,
				   parser->tokp, lex_pend - parser->tokp);
		}
	    }
#endif
	    if (heredoc_end > 0) {
		ruby_sourceline = heredoc_end;
		heredoc_end = 0;
	    }
	    ruby_sourceline++;
	    parser->line_count++;
	    lex_pbeg = lex_p = RSTRING(v)->ptr;
	    lex_pend = lex_p + RSTRING(v)->len;
#ifdef RIPPER
	    ripper_flush(parser);
#endif
	    lex_lastline = v;
	}
	else {
	    lex_lastline = 0;
	    return -1;
	}
    }
    c = (unsigned char)*lex_p++;
    if (c == '\r' && lex_p < lex_pend && *lex_p == '\n') {
	lex_p++;
	c = '\n';
    }

    return c;
}

static void
parser_pushback(parser, c)
    struct parser_params *parser;
    int c;
{
    if (c == -1) return;
    lex_p--;
    if (lex_p > lex_pbeg && lex_p[0] == '\n' && lex_p[-1] == '\r') {
	lex_p--;
    }
}

#define lex_goto_eol(parser) (parser->parser_lex_p = parser->parser_lex_pend)
#define was_bol() (lex_p == lex_pbeg + 1)
#define peek(c) (lex_p != lex_pend && (c) == *lex_p)

#define tokfix() (tokenbuf[tokidx]='\0')
#define tok() tokenbuf
#define toklen() tokidx
#define toklast() (tokidx>0?tokenbuf[tokidx-1]:0)

static char*
parser_newtok(parser)
    struct parser_params *parser;
{
    tokidx = 0;
    if (!tokenbuf) {
	toksiz = 60;
	tokenbuf = ALLOC_N(char, 60);
    }
    if (toksiz > 4096) {
	toksiz = 60;
	REALLOC_N(tokenbuf, char, 60);
    }
    return tokenbuf;
}

static void
parser_tokadd(parser, c)
    struct parser_params *parser;
    char c;
{
    tokenbuf[tokidx++] = c;
    if (tokidx >= toksiz) {
	toksiz *= 2;
	REALLOC_N(tokenbuf, char, toksiz);
    }
}

static int
parser_read_escape(parser)
    struct parser_params *parser;
{
    int c;

    switch (c = nextc()) {
      case '\\':	/* Backslash */
	return c;

      case 'n':	/* newline */
	return '\n';

      case 't':	/* horizontal tab */
	return '\t';

      case 'r':	/* carriage-return */
	return '\r';

      case 'f':	/* form-feed */
	return '\f';

      case 'v':	/* vertical tab */
	return '\13';

      case 'a':	/* alarm(bell) */
	return '\007';

      case 'e':	/* escape */
	return 033;

      case '0': case '1': case '2': case '3': /* octal constant */
      case '4': case '5': case '6': case '7':
	{
	    int numlen;

	    pushback(c);
	    c = scan_oct(lex_p, 3, &numlen);
	    lex_p += numlen;
	}
	return c;

      case 'x':	/* hex constant */
	{
	    int numlen;

	    c = scan_hex(lex_p, 2, &numlen);
	    if (numlen == 0) {
		yyerror("Invalid escape character syntax");
		return 0;
	    }
	    lex_p += numlen;
	}
	return c;

      case 'b':	/* backspace */
	return '\010';

      case 's':	/* space */
	return ' ';

      case 'M':
	if ((c = nextc()) != '-') {
	    yyerror("Invalid escape character syntax");
	    pushback(c);
	    return '\0';
	}
	if ((c = nextc()) == '\\') {
	    return read_escape() | 0x80;
	}
	else if (c == -1) goto eof;
	else {
	    return ((c & 0xff) | 0x80);
	}

      case 'C':
	if ((c = nextc()) != '-') {
	    yyerror("Invalid escape character syntax");
	    pushback(c);
	    return '\0';
	}
      case 'c':
	if ((c = nextc())== '\\') {
	    c = read_escape();
	}
	else if (c == '?')
	    return 0177;
	else if (c == -1) goto eof;
	return c & 0x9f;

      eof:
      case -1:
        yyerror("Invalid escape character syntax");
	return '\0';

      default:
	return c;
    }
}

static int
parser_tokadd_escape(parser, term)
    struct parser_params *parser;
    int term;
{
    int c;

    switch (c = nextc()) {
      case '\n':
	return 0;		/* just ignore */

      case '0': case '1': case '2': case '3': /* octal constant */
      case '4': case '5': case '6': case '7':
	{
	    int i;

	    tokadd('\\');
	    tokadd(c);
	    for (i=0; i<2; i++) {
		c = nextc();
		if (c == -1) goto eof;
		if (c < '0' || '7' < c) {
		    pushback(c);
		    break;
		}
		tokadd(c);
	    }
	}
	return 0;

      case 'x':	/* hex constant */
	{
	    int numlen;

	    tokadd('\\');
	    tokadd(c);
	    scan_hex(lex_p, 2, &numlen);
	    if (numlen == 0) {
		yyerror("Invalid escape character syntax");
		return -1;
	    }
	    while (numlen--)
		tokadd(nextc());
	}
	return 0;

      case 'M':
	if ((c = nextc()) != '-') {
	    yyerror("Invalid escape character syntax");
	    pushback(c);
	    return 0;
	}
	tokadd('\\'); tokadd('M'); tokadd('-');
	goto escaped;

      case 'C':
	if ((c = nextc()) != '-') {
	    yyerror("Invalid escape character syntax");
	    pushback(c);
	    return 0;
	}
	tokadd('\\'); tokadd('C'); tokadd('-');
	goto escaped;

      case 'c':
	tokadd('\\'); tokadd('c');
      escaped:
	if ((c = nextc()) == '\\') {
	    return tokadd_escape(term);
	}
	else if (c == -1) goto eof;
	tokadd(c);
	return 0;

      eof:
      case -1:
        yyerror("Invalid escape character syntax");
	return -1;

      default:
	if (c != '\\' || c != term)
	    tokadd('\\');
	tokadd(c);
    }
    return 0;
}

static int
parser_regx_options(parser)
    struct parser_params *parser;
{
    char kcode = 0;
    int options = 0;
    int c;

    newtok();
    while (c = nextc(), ISALPHA(c)) {
	switch (c) {
	  case 'i':
	    options |= RE_OPTION_IGNORECASE;
	    break;
	  case 'x':
	    options |= RE_OPTION_EXTENDED;
	    break;
	  case 'm':
	    options |= RE_OPTION_MULTILINE;
	    break;
	  case 'o':
	    options |= RE_OPTION_ONCE;
	    break;
	  case 'n':
	    kcode = 16;
	    break;
	  case 'e':
	    kcode = 32;
	    break;
	  case 's':
	    kcode = 48;
	    break;
	  case 'u':
	    kcode = 64;
	    break;
	  default:
	    tokadd(c);
	    break;
	}
    }
    pushback(c);
    if (toklen()) {
	tokfix();
	compile_error(PARSER_ARG "unknown regexp option%s - %s",
		  toklen() > 1 ? "s" : "", tok());
    }
    return options | kcode;
}

#define STR_FUNC_ESCAPE 0x01
#define STR_FUNC_EXPAND 0x02
#define STR_FUNC_REGEXP 0x04
#define STR_FUNC_QWORDS 0x08
#define STR_FUNC_SYMBOL 0x10
#define STR_FUNC_INDENT 0x20

enum string_type {
    str_squote = (0),
    str_dquote = (STR_FUNC_EXPAND),
    str_xquote = (STR_FUNC_EXPAND),
    str_regexp = (STR_FUNC_REGEXP|STR_FUNC_ESCAPE|STR_FUNC_EXPAND),
    str_sword  = (STR_FUNC_QWORDS),
    str_dword  = (STR_FUNC_QWORDS|STR_FUNC_EXPAND),
    str_ssym   = (STR_FUNC_SYMBOL),
    str_dsym   = (STR_FUNC_SYMBOL|STR_FUNC_EXPAND),
};

static void
dispose_string(str)
    VALUE str;
{
    xfree(RSTRING(str)->ptr);
    rb_gc_force_recycle(str);
}

static int
parser_tokadd_string(parser, func, term, paren, nest)
    struct parser_params *parser;
    int func, term, paren;
    long *nest;
{
    int c;
    unsigned char uc;

    while ((c = nextc()) != -1) {
        uc = (unsigned char)c;
	if (paren && c == paren) {
	    ++*nest;
	}
	else if (c == term) {
	    if (!nest || !*nest) {
		pushback(c);
		break;
	    }
	    --*nest;
	}
	else if ((func & STR_FUNC_EXPAND) && c == '#' && lex_p < lex_pend) {
	    int c2 = *lex_p;
	    if (c2 == '$' || c2 == '@' || c2 == '{') {
		pushback(c);
		break;
	    }
	}
	else if (c == '\\') {
	    c = nextc();
	    switch (c) {
	      case '\n':
		if (func & STR_FUNC_QWORDS) break;
		if (func & STR_FUNC_EXPAND) continue;
		tokadd('\\');
		break;

	      case '\\':
		if (func & STR_FUNC_ESCAPE) tokadd(c);
		break;

	      default:
		if (func & STR_FUNC_REGEXP) {
		    pushback(c);
		    if (tokadd_escape(term) < 0)
			return -1;
		    continue;
		}
		else if (func & STR_FUNC_EXPAND) {
		    pushback(c);
		    if (func & STR_FUNC_ESCAPE) tokadd('\\');
		    c = read_escape();
		}
		else if ((func & STR_FUNC_QWORDS) && ISSPACE(c)) {
		    /* ignore backslashed spaces in %w */
		}
		else if (c != term && !(paren && c == paren)) {
		    tokadd('\\');
		}
	    }
	}
	else if (ismbchar(uc)) {
	    int i, len = mbclen(uc)-1;

	    for (i = 0; i < len; i++) {
		tokadd(c);
		c = nextc();
	    }
	}
	else if ((func & STR_FUNC_QWORDS) && ISSPACE(c)) {
	    pushback(c);
	    break;
	}
	if (!c && (func & STR_FUNC_SYMBOL)) {
	    func &= ~STR_FUNC_SYMBOL;
	    rb_compile_error(PARSER_ARG  "symbol cannot contain '\\0'");
	    continue;
	}
	tokadd(c);
    }
    return c;
}

#define NEW_STRTERM0(func, term, paren) \
	rb_node_newnode(NODE_STRTERM, (func), (term) | ((paren) << (CHAR_BIT * 2)), 0)
#ifndef RIPPER
# define NEW_STRTERM(func, term, paren) NEW_STRTERM0(func, term, paren)
#else
# define NEW_STRTERM(func, term, paren) ripper_new_strterm(parser, func, term, paren)
static NODE *
ripper_new_strterm(parser, func, term, paren)
    struct parser_params *parser;
    VALUE func, term, paren;
{
    NODE *node = NEW_STRTERM0(func, term, paren);
    nd_set_line(node, ruby_sourceline);
    return node;
}
#endif

static int
parser_parse_string(parser, quote)
    struct parser_params *parser;
    NODE *quote;
{
    int func = quote->nd_func;
    int term = nd_term(quote);
    int paren = nd_paren(quote);
    int c, space = 0;

    if (func == -1) return tSTRING_END;
    c = nextc();
    if ((func & STR_FUNC_QWORDS) && ISSPACE(c)) {
	do {c = nextc();} while (ISSPACE(c));
	space = 1;
    }
    if (c == term && !quote->nd_nest) {
	if (func & STR_FUNC_QWORDS) {
	    quote->nd_func = -1;
	    return ' ';
	}
	if (!(func & STR_FUNC_REGEXP)) return tSTRING_END;
        set_yylval_num(regx_options());
	return tREGEXP_END;
    }
    if (space) {
	pushback(c);
	return ' ';
    }
    newtok();
    if ((func & STR_FUNC_EXPAND) && c == '#') {
	switch (c = nextc()) {
	  case '$':
	  case '@':
	    pushback(c);
	    return tSTRING_DVAR;
	  case '{':
	    return tSTRING_DBEG;
	}
	tokadd('#');
    }
    pushback(c);
    if (tokadd_string(func, term, paren, &quote->nd_nest) == -1) {
	ruby_sourceline = nd_line(quote);
	rb_compile_error(PARSER_ARG  "unterminated string meets end of file");
	return tSTRING_END;
    }

    tokfix();
    set_yylval_str(rb_str_new(tok(), toklen()));
    return tSTRING_CONTENT;
}

static int
parser_heredoc_identifier(parser)
    struct parser_params *parser;
{
    int c = nextc(), term, func = 0, len;
    unsigned int uc;

    if (c == '-') {
	c = nextc();
	func = STR_FUNC_INDENT;
    }
    switch (c) {
      case '\'':
	func |= str_squote; goto quoted;
      case '"':
	func |= str_dquote; goto quoted;
      case '`':
	func |= str_xquote;
      quoted:
	newtok();
	tokadd(func);
	term = c;
	while ((c = nextc()) != -1 && c != term) {
            uc = (unsigned int)c;
	    len = mbclen(uc);
	    do {tokadd(c);} while (--len > 0 && (c = nextc()) != -1);
	}
	if (c == -1) {
	    rb_compile_error(PARSER_ARG  "unterminated here document identifier");
	    return 0;
	}
	break;

      default:
        uc = (unsigned int)c;
	if (!is_identchar(uc)) {
	    pushback(c);
	    if (func & STR_FUNC_INDENT) {
		pushback('-');
	    }
	    return 0;
	}
	newtok();
	term = '"';
	tokadd(func |= str_dquote);
	do {
            uc = (unsigned int)c;
	    len = mbclen(uc);
	    do {tokadd(c);} while (--len > 0 && (c = nextc()) != -1);
	} while ((c = nextc()) != -1 &&
		 (uc = (unsigned char)c, is_identchar(uc)));
	pushback(c);
	break;
    }

    tokfix();
#ifdef RIPPER
    ripper_dispatch_scan_event(parser, tHEREDOC_BEG);
#endif
    len = lex_p - lex_pbeg;
    lex_goto_eol(parser);
    lex_strterm = rb_node_newnode(NODE_HEREDOC,
				  rb_str_new(tok(), toklen()),	/* nd_lit */
				  len,				/* nd_nth */
				  lex_lastline);		/* nd_orig */
    nd_set_line(lex_strterm, ruby_sourceline);
#ifdef RIPPER
    ripper_flush(parser);
#endif
    return term == '`' ? tXSTRING_BEG : tSTRING_BEG;
}

static void
parser_heredoc_restore(parser, here)
    struct parser_params *parser;
    NODE *here;
{
    VALUE line;

#ifdef RIPPER
    if (!NIL_P(parser->delayed))
	ripper_dispatch_delayed_token(parser, tSTRING_CONTENT);
    lex_goto_eol(parser);
    ripper_dispatch_scan_event(parser, tHEREDOC_END);
#endif
    line = here->nd_orig;
    lex_lastline = line;
    lex_pbeg = RSTRING(line)->ptr;
    lex_pend = lex_pbeg + RSTRING(line)->len;
    lex_p = lex_pbeg + here->nd_nth;
    heredoc_end = ruby_sourceline;
    ruby_sourceline = nd_line(here);
    dispose_string(here->nd_lit);
    rb_gc_force_recycle((VALUE)here);
#ifdef RIPPER
    ripper_flush(parser);
#endif
}

static int
parser_whole_match_p(parser, eos, len, indent)
    struct parser_params *parser;
    char *eos;
    int len, indent;
{
    char *p = lex_pbeg;
    int n;

    if (indent) {
	while (*p && ISSPACE(*p)) p++;
    }
    n= lex_pend - (p + len);
    if (n < 0 || (n > 0 && p[len] != '\n' && p[len] != '\r')) return Qfalse;
    if (strncmp(eos, p, len) == 0) return Qtrue;
    return Qfalse;
}

static int
parser_here_document(parser, here)
    struct parser_params *parser;
    NODE *here;
{
    int c, func, indent = 0;
    char *eos, *p, *pend;
    long len;
    VALUE str = 0;

    eos = RSTRING(here->nd_lit)->ptr;
    len = RSTRING(here->nd_lit)->len - 1;
    indent = (func = *eos++) & STR_FUNC_INDENT;

    if ((c = nextc()) == -1) {
      error:
	rb_compile_error(PARSER_ARG  "can't find string \"%s\" anywhere before EOF", eos);
	heredoc_restore(lex_strterm);
	lex_strterm = 0;
	return 0;
    }
    if (was_bol() && whole_match_p(eos, len, indent)) {
	heredoc_restore(lex_strterm);
	return tSTRING_END;
    }

    if (!(func & STR_FUNC_EXPAND)) {
	do {
	    p = RSTRING(lex_lastline)->ptr;
	    pend = lex_pend;
	    if (pend > p) {
		switch (pend[-1]) {
		  case '\n':
		    if (--pend == p || pend[-1] != '\r') {
			pend++;
			break;
		    }
		  case '\r':
		    --pend;
		}
	    }
	    if (str)
		rb_str_cat(str, p, pend - p);
	    else
		str = rb_str_new(p, pend - p);
	    if (pend < lex_pend) rb_str_cat(str, "\n", 1);
	    lex_goto_eol(parser);
	    if (nextc() == -1) {
		if (str) dispose_string(str);
		goto error;
	    }
	} while (!whole_match_p(eos, len, indent));
    }
    else {
	newtok();
	if (c == '#') {
	    switch (c = nextc()) {
	      case '$':
	      case '@':
		pushback(c);
		return tSTRING_DVAR;
	      case '{':
		return tSTRING_DBEG;
	    }
	    tokadd('#');
	}
	do {
	    pushback(c);
	    if ((c = tokadd_string(func, '\n', 0, NULL)) == -1) goto error;
	    if (c != '\n') {
                set_yylval_str(rb_str_new(tok(), toklen()));
		return tSTRING_CONTENT;
	    }
	    tokadd(nextc());
	    if ((c = nextc()) == -1) goto error;
	} while (!whole_match_p(eos, len, indent));
	str = rb_str_new(tok(), toklen());
    }
    heredoc_restore(lex_strterm);
    lex_strterm = NEW_STRTERM(-1, 0, 0);
    set_yylval_str(str);
    return tSTRING_CONTENT;
}

#include "lex.c"

#ifndef RIPPER
static void
arg_ambiguous()
{
    rb_warning("ambiguous first argument; put parentheses or even spaces");
}
#else
static void
ripper_arg_ambiguous(parser)
    struct parser_params *parser;
{
    dispatch0(arg_ambiguous);
}
#define arg_ambiguous() ripper_arg_ambiguous(parser)
#endif

static int
lvar_defined_gen(parser, id)
    struct parser_params *parser;
    ID id;
{
#ifndef RIPPER
    return (dyna_in_block() && rb_dvar_defined(id)) || local_id(id);
#else
    return 0;
#endif
}

/* emacsen -*- hack */
#ifndef RIPPER
typedef void (*rb_pragma_setter_t) _((struct parser_params *parser, const char *name, const char *val));

static void pragma_encoding _((struct parser_params *, const char *, const char *));
static void
pragma_encoding(parser, name, val)
    struct parser_params *parser;
    const char *name, *val;
{
    if (parser && parser->line_count != (parser->has_shebang ? 2 : 1))
	return;
    rb_set_kcode(val);
}

struct pragma {
    const char *name;
    rb_pragma_setter_t func;
};

static const struct pragma pragmas[] = {
    {"coding", pragma_encoding},
};
#endif

static const char *
pragma_marker(str, len)
    const char *str;
    int len;
{
    int i = 2;

    while (i < len) {
	switch (str[i]) {
	  case '-':
	    if (str[i-1] == '*' && str[i-2] == '-') {
		return str + i + 1;
	    }
	    i += 2;
	    break;
	  case '*':
	    if (i + 1 >= len) return 0;
	    if (str[i+1] != '-') {
		i += 4;
	    }
	    else if (str[i-1] != '-') {
		i += 2;
	    }
	    else {
		return str + i + 2;
	    }
	    break;
	  default:
	    i += 3;
	    break;
	}
    }
    return 0;
}

static int
parser_pragma(parser, str, len)
    struct parser_params *parser;
    const char *str;
    int len;
{
    VALUE name = 0, val = 0;
    const char *beg, *end, *vbeg, *vend;
#define str_copy(_s, _p, _n) ((_s) \
	? (rb_str_resize((_s), (_n)), \
	   MEMCPY(RSTRING(_s)->ptr, (_p), char, (_n)), (_s)) \
	: ((_s) = rb_str_new((_p), (_n))))

    if (len <= 7) return Qfalse;
    if (!(beg = pragma_marker(str, len))) return Qfalse;
    if (!(end = pragma_marker(beg, str + len - beg))) return Qfalse;
    str = beg;
    len = end - beg - 3;
    
    /* %r"([^\\s\'\":;]+)\\s*:\\s*(\"(?:\\\\.|[^\"])*\"|[^\"\\s;]+)[\\s;]*" */
    while (len > 0) {
#ifndef RIPPER
	const struct pragma *p = pragmas;
#endif
	int n = 0;

	for (; len > 0 && *str; str++, --len) {
	    switch (*str) {
	      case '\'': case '"': case ':': case ';':
		continue;
	    }
	    if (!ISSPACE(*str)) break;
	}
	for (beg = str; len > 0; str++, --len) {
	    switch (*str) {
	      case '\'': case '"': case ':': case ';':
		break;
	      default:
		if (ISSPACE(*str)) break;
		continue;
	    }
	    break;
	}
	for (end = str; len > 0 && ISSPACE(*str); str++, --len);
	if (!len) break;
	if (*str != ':') continue;

	do str++; while (--len > 0 && ISSPACE(*str));
	if (!len) break;
	if (*str == '"') {
	    for (vbeg = ++str; --len > 0 && *str != '"'; str++) {
		if (*str == '\\') {
		    --len;
		    ++str;
		}
	    }
	    vend = str;
	    if (len) {
		--len;
		++str;
	    }
	}
	else {
	    for (vbeg = str; len > 0 && *str != '"' && !ISSPACE(*str); --len, str++);
	    vend = str;
	}
	while (len > 0 && (*str == ';' || ISSPACE(*str))) --len, str++;

	n = end - beg;
	str_copy(name, beg, n);
	rb_funcall(name, rb_intern("downcase!"), 0);
#ifndef RIPPER
	do {
	    if (strncmp(p->name, RSTRING(name)->ptr, n) == 0) {
		str_copy(val, vbeg, vend - vbeg);
		(*p->func)(parser, RSTRING(name)->ptr, RSTRING(val)->ptr);
		break;
	    }
	} while (++p < pragmas + sizeof(pragmas) / sizeof(*p));
#else
	dispatch2(pragma, name, val);
#endif
    }

    return Qtrue;
}

static void
parser_prepare(parser)
    struct parser_params *parser;
{
    int c = nextc();
    switch (c) {
      case '#':
	if (peek('!')) parser->has_shebang = 1;
	break;
      case 0xef:		/* UTF-8 BOM marker */
	if (lex_pend - lex_p >= 2 &&
	    (unsigned char)lex_p[0] == 0xbb &&
	    (unsigned char)lex_p[1] == 0xbf) {
	    rb_set_kcode("UTF-8");
	    lex_p += 2;
	    return;
	}
	break;
      case EOF:
	return;
    }
    pushback(c);
}

#define IS_ARG() (lex_state == EXPR_ARG || lex_state == EXPR_CMDARG)
#define IS_BEG() (lex_state == EXPR_BEG || lex_state == EXPR_MID || lex_state == EXPR_VALUE || lex_state == EXPR_CLASS)

static int
parser_yylex(parser)
    struct parser_params *parser;
{
    register int c;
    int space_seen = 0;
    int cmd_state;
    unsigned char uc;
#ifdef RIPPER
    int fallthru = Qfalse;
#endif

    if (lex_strterm) {
	int token;
	if (nd_type(lex_strterm) == NODE_HEREDOC) {
	    token = here_document(lex_strterm);
	    if (token == tSTRING_END) {
		lex_strterm = 0;
		lex_state = EXPR_END;
	    }
	}
	else {
	    token = parse_string(lex_strterm);
	    if (token == tSTRING_END || token == tREGEXP_END) {
		rb_gc_force_recycle((VALUE)lex_strterm);
		lex_strterm = 0;
		lex_state = EXPR_END;
	    }
	}
	return token;
    }
    cmd_state = command_start;
    command_start = Qfalse;
  retry:
#ifdef RIPPER
    while ((c = nextc())) {
        switch (c) {
          case ' ': case '\t': case '\f': case '\r':
          case '\13': /* '\v' */
            space_seen++;
            break;
          default:
            goto outofloop;
        }
    }
  outofloop:
    pushback(c);
    ripper_dispatch_scan_event(parser, tSP);
#endif
    switch (c = nextc()) {
      case '\0':		/* NUL */
      case '\004':		/* ^D */
      case '\032':		/* ^Z */
      case -1:			/* end of script. */
	return 0;

	/* white spaces */
      case ' ': case '\t': case '\f': case '\r':
      case '\13': /* '\v' */
	space_seen++;
	goto retry;

      case '#':		/* it's a comment */
	if (!parser->has_shebang || parser->line_count != 1) {
	    /* no pragma in shebang line */
	    parser_pragma(parser, lex_p, lex_pend - lex_p);
	}
	lex_p = lex_pend;
#ifdef RIPPER
        ripper_dispatch_scan_event(parser, tCOMMENT);
        fallthru = Qtrue;
#endif
	/* fall through */
      case '\n':
	switch (lex_state) {
	  case EXPR_BEG:
	  case EXPR_FNAME:
	  case EXPR_DOT:
	  case EXPR_CLASS:
	  case EXPR_VALUE:
#ifdef RIPPER
            if (!fallthru) {
                ripper_dispatch_scan_event(parser, tIGNORED_NL);
            }
            fallthru = Qfalse;
#endif
	    goto retry;
	  default:
	    break;
	}
	command_start = Qtrue;
	lex_state = EXPR_BEG;
	return '\n';

      case '*':
	if ((c = nextc()) == '*') {
	    if ((c = nextc()) == '=') {
                set_yylval_id(tPOW);
		lex_state = EXPR_BEG;
		return tOP_ASGN;
	    }
	    pushback(c);
	    c = tPOW;
	}
	else {
	    if (c == '=') {
                set_yylval_id('*');
		lex_state = EXPR_BEG;
		return tOP_ASGN;
	    }
	    pushback(c);
	    if (IS_ARG() && space_seen && !ISSPACE(c)){
		rb_warning0("`*' interpreted as argument prefix");
		c = tSTAR;
	    }
	    else if (IS_BEG()) {
		c = tSTAR;
	    }
	    else {
		c = '*';
	    }
	}
	switch (lex_state) {
	  case EXPR_FNAME: case EXPR_DOT:
	    lex_state = EXPR_ARG; break;
	  default:
	    lex_state = EXPR_BEG; break;
	}
	return c;

      case '!':
	lex_state = EXPR_BEG;
	if ((c = nextc()) == '=') {
	    return tNEQ;
	}
	if (c == '~') {
	    return tNMATCH;
	}
	pushback(c);
	return '!';

      case '=':
	if (was_bol()) {
	    /* skip embedded rd document */
	    if (strncmp(lex_p, "begin", 5) == 0 && ISSPACE(lex_p[5])) {
#ifdef RIPPER
                int first_p = Qtrue;

                lex_goto_eol(parser);
                ripper_dispatch_scan_event(parser, tEMBDOC_BEG);
#endif
		for (;;) {
		    lex_goto_eol(parser);
#ifdef RIPPER
                    if (!first_p) {
                        ripper_dispatch_scan_event(parser, tEMBDOC);
                    }
                    first_p = Qfalse;
#endif
		    c = nextc();
		    if (c == -1) {
			rb_compile_error(PARSER_ARG  "embedded document meets end of file");
			return 0;
		    }
		    if (c != '=') continue;
		    if (strncmp(lex_p, "end", 3) == 0 &&
			(lex_p + 3 == lex_pend || ISSPACE(lex_p[3]))) {
			break;
		    }
		}
		lex_goto_eol(parser);
#ifdef RIPPER
                ripper_dispatch_scan_event(parser, tEMBDOC_END);
#endif
		goto retry;
	    }
	}

	switch (lex_state) {
	  case EXPR_FNAME: case EXPR_DOT:
	    lex_state = EXPR_ARG; break;
	  default:
	    lex_state = EXPR_BEG; break;
	}
	if ((c = nextc()) == '=') {
	    if ((c = nextc()) == '=') {
		return tEQQ;
	    }
	    pushback(c);
	    return tEQ;
	}
	if (c == '~') {
	    return tMATCH;
	}
	else if (c == '>') {
	    return tASSOC;
	}
	pushback(c);
	return '=';

      case '<':
	c = nextc();
	if (c == '<' &&
	    lex_state != EXPR_END &&
	    lex_state != EXPR_END2 &&
	    lex_state != EXPR_DOT &&
	    lex_state != EXPR_ENDARG &&
	    lex_state != EXPR_CLASS &&
	    (!IS_ARG() || space_seen)) {
	    int token = heredoc_identifier();
	    if (token) return token;
	}
	switch (lex_state) {
	  case EXPR_FNAME: case EXPR_DOT:
	    lex_state = EXPR_ARG; break;
	  default:
	    lex_state = EXPR_BEG; break;
	}
	if (c == '=') {
	    if ((c = nextc()) == '>') {
		return tCMP;
	    }
	    pushback(c);
	    return tLEQ;
	}
	if (c == '<') {
	    if ((c = nextc()) == '=') {
                set_yylval_id(tLSHFT);
		lex_state = EXPR_BEG;
		return tOP_ASGN;
	    }
	    pushback(c);
	    return tLSHFT;
	}
	pushback(c);
	return '<';

      case '>':
	switch (lex_state) {
	  case EXPR_FNAME: case EXPR_DOT:
	    lex_state = EXPR_ARG; break;
	  default:
	    lex_state = EXPR_BEG; break;
	}
	if ((c = nextc()) == '=') {
	    return tGEQ;
	}
	if (c == '>') {
	    if ((c = nextc()) == '=') {
                set_yylval_id(tRSHFT);
		lex_state = EXPR_BEG;
		return tOP_ASGN;
	    }
	    pushback(c);
	    return tRSHFT;
	}
	pushback(c);
	return '>';

      case '"':
	lex_strterm = NEW_STRTERM(str_dquote, '"', 0);
	return tSTRING_BEG;

      case '`':
	if (lex_state == EXPR_FNAME) {
	    lex_state = EXPR_END;
	    return c;
	}
	if (lex_state == EXPR_DOT) {
	    if (cmd_state)
		lex_state = EXPR_CMDARG;
	    else
		lex_state = EXPR_ARG;
	    return c;
	}
	lex_strterm = NEW_STRTERM(str_xquote, '`', 0);
	return tXSTRING_BEG;

      case '\'':
	lex_strterm = NEW_STRTERM(str_squote, '\'', 0);
	return tSTRING_BEG;

      case '?':
	if (lex_state == EXPR_END ||
	    lex_state == EXPR_END2 ||
	    lex_state == EXPR_ENDARG) {
	    lex_state = EXPR_VALUE;
	    return '?';
	}
	c = nextc();
	if (c == -1) {
	    rb_compile_error(PARSER_ARG  "incomplete character syntax");
	    return 0;
	}
        uc = (unsigned char)c;
	if (ISSPACE(c)){
	    if (!IS_ARG()){
		int c2 = 0;
		switch (c) {
		  case ' ':
		    c2 = 's';
		    break;
		  case '\n':
		    c2 = 'n';
		    break;
		  case '\t':
		    c2 = 't';
		    break;
		  case '\v':
		    c2 = 'v';
		    break;
		  case '\r':
		    c2 = 'r';
		    break;
		  case '\f':
		    c2 = 'f';
		    break;
		}
		if (c2) {
		    rb_warnI("invalid character syntax; use ?\\%c", c2);
		}
	    }
	  ternary:
	    pushback(c);
	    lex_state = EXPR_VALUE;
	    return '?';
	}
	else if (ismbchar(uc)) {
	    rb_warnI("multibyte character literal not supported yet; use ?\\%.3o", c);
	    goto ternary;
	}
	else if ((ISALNUM(c) || c == '_') && lex_p < lex_pend && is_identchar(*lex_p)) {
	    goto ternary;
	}
	else if (c == '\\') {
	    c = read_escape();
	}
	c &= 0xff;
	lex_state = EXPR_END;
        set_yylval_literal(INT2FIX(c));
	return tINTEGER;

      case '&':
	if ((c = nextc()) == '&') {
	    lex_state = EXPR_BEG;
	    if ((c = nextc()) == '=') {
                set_yylval_id(tANDOP);
		lex_state = EXPR_BEG;
		return tOP_ASGN;
	    }
	    pushback(c);
	    return tANDOP;
	}
	else if (c == '=') {
            set_yylval_id('&');
	    lex_state = EXPR_BEG;
	    return tOP_ASGN;
	}
	pushback(c);
	if (IS_ARG() && space_seen && !ISSPACE(c)){
	    rb_warning0("`&' interpreted as argument prefix");
	    c = tAMPER;
	}
	else if (IS_BEG()) {
	    c = tAMPER;
	}
	else {
	    c = '&';
	}
	switch (lex_state) {
	  case EXPR_FNAME: case EXPR_DOT:
	    lex_state = EXPR_ARG; break;
	  default:
	    lex_state = EXPR_BEG;
	}
	return c;

      case '|':
	if ((c = nextc()) == '|') {
	    lex_state = EXPR_BEG;
	    if ((c = nextc()) == '=') {
                set_yylval_id(tOROP);
		lex_state = EXPR_BEG;
		return tOP_ASGN;
	    }
	    pushback(c);
	    return tOROP;
	}
	if (c == '=') {
            set_yylval_id('|');
	    lex_state = EXPR_BEG;
	    return tOP_ASGN;
	}
	if (lex_state == EXPR_FNAME || lex_state == EXPR_DOT) {
	    lex_state = EXPR_ARG;
	}
	else {
	    lex_state = EXPR_BEG;
	}
	pushback(c);
	return '|';

      case '+':
	c = nextc();
	if (lex_state == EXPR_FNAME || lex_state == EXPR_DOT) {
	    lex_state = EXPR_ARG;
	    if (c == '@') {
		return tUPLUS;
	    }
	    pushback(c);
	    return '+';
	}
	if (c == '=') {
            set_yylval_id('+');
	    lex_state = EXPR_BEG;
	    return tOP_ASGN;
	}
	if (IS_BEG() ||
	    (IS_ARG() && space_seen && !ISSPACE(c))) {
	    if (IS_ARG()) arg_ambiguous();
	    lex_state = EXPR_BEG;
	    pushback(c);
	    if (ISDIGIT(c)) {
		c = '+';
		goto start_num;
	    }
	    return tUPLUS;
	}
	lex_state = EXPR_BEG;
	pushback(c);
	return '+';

      case '-':
	c = nextc();
	if (lex_state == EXPR_FNAME || lex_state == EXPR_DOT) {
	    lex_state = EXPR_ARG;
	    if (c == '@') {
		return tUMINUS;
	    }
	    pushback(c);
	    return '-';
	}
	if (c == '=') {
            set_yylval_id('-');
	    lex_state = EXPR_BEG;
	    return tOP_ASGN;
	}
	if (c == '>') {
	    enum lex_state_e state = lex_state;
	    lex_state = EXPR_ARG;
	    switch (state) {
	      case EXPR_CMDARG:
	      case EXPR_ENDARG:
	      case EXPR_ARG:
	      case EXPR_END:
		return tLAMBDA_ARG;
	      default:
		return tLAMBDA;
	    }
	}
	if (IS_BEG() ||
	    (IS_ARG() && space_seen && !ISSPACE(c))) {
	    if (IS_ARG()) arg_ambiguous();
	    lex_state = EXPR_BEG;
	    pushback(c);
	    if (ISDIGIT(c)) {
		return tUMINUS_NUM;
	    }
	    return tUMINUS;
	}
	lex_state = EXPR_BEG;
	pushback(c);
	return '-';

      case '.':
	lex_state = EXPR_BEG;
	if ((c = nextc()) == '.') {
	    if ((c = nextc()) == '.') {
		return tDOT3;
	    }
	    pushback(c);
	    return tDOT2;
	}
	pushback(c);
	if (ISDIGIT(c)) {
	    yyerror("no .<digit> floating literal anymore; put 0 before dot");
	}
	lex_state = EXPR_DOT;
	return '.';

      start_num:
      case '0': case '1': case '2': case '3': case '4':
      case '5': case '6': case '7': case '8': case '9':
	{
	    int is_float, seen_point, seen_e, nondigit;

	    is_float = seen_point = seen_e = nondigit = 0;
	    lex_state = EXPR_END;
	    newtok();
	    if (c == '-' || c == '+') {
		tokadd(c);
		c = nextc();
	    }
	    if (c == '0') {
		int start = toklen();
		c = nextc();
		if (c == 'x' || c == 'X') {
		    /* hexadecimal */
		    c = nextc();
		    if (ISXDIGIT(c)) {
			do {
			    if (c == '_') {
				if (nondigit) break;
				nondigit = c;
				continue;
			    }
			    if (!ISXDIGIT(c)) break;
			    nondigit = 0;
			    tokadd(c);
			} while ((c = nextc()) != -1);
		    }
		    pushback(c);
		    tokfix();
		    if (toklen() == start) {
			yyerror("numeric literal without digits");
		    }
		    else if (nondigit) goto trailing_uc;
                    set_yylval_literal(rb_cstr_to_inum(tok(), 16, Qfalse));
		    return tINTEGER;
		}
		if (c == 'b' || c == 'B') {
		    /* binary */
		    c = nextc();
		    if (c == '0' || c == '1') {
			do {
			    if (c == '_') {
				if (nondigit) break;
				nondigit = c;
				continue;
			    }
			    if (c != '0' && c != '1') break;
			    nondigit = 0;
			    tokadd(c);
			} while ((c = nextc()) != -1);
		    }
		    pushback(c);
		    tokfix();
		    if (toklen() == start) {
			yyerror("numeric literal without digits");
		    }
		    else if (nondigit) goto trailing_uc;
                    set_yylval_literal(rb_cstr_to_inum(tok(), 2, Qfalse));
		    return tINTEGER;
		}
		if (c == 'd' || c == 'D') {
		    /* decimal */
		    c = nextc();
		    if (ISDIGIT(c)) {
			do {
			    if (c == '_') {
				if (nondigit) break;
				nondigit = c;
				continue;
			    }
			    if (!ISDIGIT(c)) break;
			    nondigit = 0;
			    tokadd(c);
			} while ((c = nextc()) != -1);
		    }
		    pushback(c);
		    tokfix();
		    if (toklen() == start) {
			yyerror("numeric literal without digits");
		    }
		    else if (nondigit) goto trailing_uc;
                    set_yylval_literal(rb_cstr_to_inum(tok(), 10, Qfalse));
		    return tINTEGER;
		}
		if (c == '_') {
		    /* 0_0 */
		    goto octal_number;
		}
		if (c == 'o' || c == 'O') {
		    /* prefixed octal */
		    c = nextc();
		    if (c == '_') {
			yyerror("numeric literal without digits");
		    }
		}
		if (c >= '0' && c <= '7') {
		    /* octal */
		  octal_number:
	            do {
			if (c == '_') {
			    if (nondigit) break;
			    nondigit = c;
			    continue;
			}
			if (c < '0' || c > '7') break;
			nondigit = 0;
			tokadd(c);
		    } while ((c = nextc()) != -1);
		    if (toklen() > start) {
			pushback(c);
			tokfix();
			if (nondigit) goto trailing_uc;
                        set_yylval_literal(rb_cstr_to_inum(tok(), 8, Qfalse));
			return tINTEGER;
		    }
		    if (nondigit) {
			pushback(c);
			goto trailing_uc;
		    }
		}
		if (c > '7' && c <= '9') {
		    yyerror("Illegal octal digit");
		}
		else if (c == '.' || c == 'e' || c == 'E') {
		    tokadd('0');
		}
		else {
		    pushback(c);
                    set_yylval_literal(INT2FIX(0));
		    return tINTEGER;
		}
	    }

	    for (;;) {
		switch (c) {
		  case '0': case '1': case '2': case '3': case '4':
		  case '5': case '6': case '7': case '8': case '9':
		    nondigit = 0;
		    tokadd(c);
		    break;

		  case '.':
		    if (nondigit) goto trailing_uc;
		    if (seen_point || seen_e) {
			goto decode_num;
		    }
		    else {
			int c0 = nextc();
			if (!ISDIGIT(c0)) {
			    pushback(c0);
			    goto decode_num;
			}
			c = c0;
		    }
		    tokadd('.');
		    tokadd(c);
		    is_float++;
		    seen_point++;
		    nondigit = 0;
		    break;

		  case 'e':
		  case 'E':
		    if (nondigit) {
			pushback(c);
			c = nondigit;
			goto decode_num;
		    }
		    if (seen_e) {
			goto decode_num;
		    }
		    tokadd(c);
		    seen_e++;
		    is_float++;
		    nondigit = c;
		    c = nextc();
		    if (c != '-' && c != '+') continue;
		    tokadd(c);
		    nondigit = c;
		    break;

		  case '_':	/* `_' in number just ignored */
		    if (nondigit) goto decode_num;
		    nondigit = c;
		    break;

		  default:
		    goto decode_num;
		}
		c = nextc();
	    }

	  decode_num:
	    pushback(c);
	    tokfix();
	    if (nondigit) {
		char tmp[30];
	      trailing_uc:
		sprintf(tmp, "trailing `%c' in number", nondigit);
		yyerror(tmp);
	    }
	    if (is_float) {
		double d = strtod(tok(), 0);
		if (errno == ERANGE) {
		    rb_warnS("Float %s out of range", tok());
		    errno = 0;
		}
                set_yylval_literal(rb_float_new(d));
		return tFLOAT;
	    }
            set_yylval_literal(rb_cstr_to_inum(tok(), 10, Qfalse));
	    return tINTEGER;
	}

      case ')':
      case ']':
	paren_nest--;
      case '}':
	COND_LEXPOP();
	CMDARG_LEXPOP();
	lex_state = EXPR_END;
	return c;

      case ':':
	c = nextc();
	if (c == ':') {
	    if (IS_BEG() ||
		lex_state == EXPR_CLASS || (IS_ARG() && space_seen)) {
		lex_state = EXPR_BEG;
		return tCOLON3;
	    }
	    lex_state = EXPR_DOT;
	    return tCOLON2;
	}
	if (lex_state == EXPR_END || lex_state == EXPR_END2 ||
	    lex_state == EXPR_ENDARG || ISSPACE(c)) {
	    pushback(c);
	    lex_state = EXPR_BEG;
	    return ':';
	}
	switch (c) {
	  case '\'':
	    lex_strterm = NEW_STRTERM(str_ssym, c, 0);
	    break;
	  case '"':
	    lex_strterm = NEW_STRTERM(str_dsym, c, 0);
	    break;
	  default:
	    pushback(c);
	    break;
	}
	lex_state = EXPR_FNAME;
	return tSYMBEG;

      case '/':
	if (IS_BEG()) {
	    lex_strterm = NEW_STRTERM(str_regexp, '/', 0);
	    return tREGEXP_BEG;
	}
	if ((c = nextc()) == '=') {
            set_yylval_id('/');
	    lex_state = EXPR_BEG;
	    return tOP_ASGN;
	}
	pushback(c);
	if (IS_ARG() && space_seen) {
	    if (!ISSPACE(c)) {
		arg_ambiguous();
		lex_strterm = NEW_STRTERM(str_regexp, '/', 0);
		return tREGEXP_BEG;
	    }
	}
	switch (lex_state) {
	  case EXPR_FNAME: case EXPR_DOT:
	    lex_state = EXPR_ARG; break;
	  default:
	    lex_state = EXPR_BEG; break;
	}
	return '/';

      case '^':
	if ((c = nextc()) == '=') {
            set_yylval_id('^');
	    lex_state = EXPR_BEG;
	    return tOP_ASGN;
	}
	switch (lex_state) {
	  case EXPR_FNAME: case EXPR_DOT:
	    lex_state = EXPR_ARG; break;
	  default:
	    lex_state = EXPR_BEG; break;
	}
	pushback(c);
	return '^';

      case ';':
	if (lex_state != EXPR_END2 && peek(';')) {
	    lex_state = EXPR_END2;
	    return kEND;
	}
	lex_state = EXPR_BEG;
	command_start = Qtrue;
	return ';';

      case ',':
	lex_state = EXPR_BEG;
	return ',';

      case '~':
	if (lex_state == EXPR_FNAME || lex_state == EXPR_DOT) {
	    if ((c = nextc()) != '@') {
		pushback(c);
	    }
	}
	switch (lex_state) {
	  case EXPR_FNAME: case EXPR_DOT:
	    lex_state = EXPR_ARG; break;
	  default:
	    lex_state = EXPR_BEG; break;
	}
	return '~';

      case '(':
	if (IS_BEG()) {
	    c = tLPAREN;
	}
	else if (space_seen) {
	    if (lex_state == EXPR_CMDARG) {
		c = tLPAREN_ARG;
	    }
	    else if (lex_state == EXPR_ARG) {
		rb_warning0("don't put space before argument parentheses");
		c = '(';
	    }
	}
	paren_nest++;
	COND_PUSH(0);
	CMDARG_PUSH(0);
	lex_state = EXPR_BEG;
	return c;

      case '[':
	paren_nest++;
	if (lex_state == EXPR_FNAME || lex_state == EXPR_DOT) {
	    lex_state = EXPR_ARG;
	    if ((c = nextc()) == ']') {
		if ((c = nextc()) == '=') {
		    return tASET;
		}
		pushback(c);
		return tAREF;
	    }
	    pushback(c);
	    return '[';
	}
	else if (IS_BEG()) {
	    c = tLBRACK;
	}
	else if (IS_ARG() && space_seen) {
	    c = tLBRACK;
	}
	lex_state = EXPR_BEG;
	COND_PUSH(0);
	CMDARG_PUSH(0);
	return c;

      case '{':
	if (lpar_beg && lpar_beg == paren_nest) {
	    lex_state = EXPR_BEG;
	    lpar_beg = 0;
	    --paren_nest;
	    return tLAMBEG;
	}
	if (IS_ARG() || lex_state == EXPR_END || lex_state == EXPR_END2)
	    c = '{';          /* block (primary) */
	else if (lex_state == EXPR_ENDARG)
	    c = tLBRACE_ARG;  /* block (expr) */
	else
	    c = tLBRACE;      /* hash */
	COND_PUSH(0);
	CMDARG_PUSH(0);
	lex_state = EXPR_BEG;
	return c;

      case '\\':
	c = nextc();
	if (c == '\n') {
	    space_seen = 1;
#ifdef RIPPER
	    ripper_dispatch_scan_event(parser, tSP);
#endif
	    goto retry; /* skip \\n */
	}
	pushback(c);
	return '\\';

      case '%':
	if (IS_BEG()) {
	    int term;
	    int paren;

	    c = nextc();
	  quotation:
	    if (!ISALNUM(c)) {
		term = c;
		c = 'Q';
	    }
	    else {
		term = nextc();
                uc = (unsigned char)c;
		if (ISALNUM(term) || ismbchar(uc)) {
		    yyerror("unknown type of %string");
		    return 0;
		}
	    }
	    if (c == -1 || term == -1) {
		rb_compile_error(PARSER_ARG  "unterminated quoted string meets end of file");
		return 0;
	    }
	    paren = term;
	    if (term == '(') term = ')';
	    else if (term == '[') term = ']';
	    else if (term == '{') term = '}';
	    else if (term == '<') term = '>';
	    else paren = 0;

	    switch (c) {
	      case 'Q':
		lex_strterm = NEW_STRTERM(str_dquote, term, paren);
		return tSTRING_BEG;

	      case 'q':
		lex_strterm = NEW_STRTERM(str_squote, term, paren);
		return tSTRING_BEG;

	      case 'W':
		lex_strterm = NEW_STRTERM(str_dquote | STR_FUNC_QWORDS, term, paren);
		do {c = nextc();} while (ISSPACE(c));
		pushback(c);
		return tWORDS_BEG;

	      case 'w':
		lex_strterm = NEW_STRTERM(str_squote | STR_FUNC_QWORDS, term, paren);
		do {c = nextc();} while (ISSPACE(c));
		pushback(c);
		return tQWORDS_BEG;

	      case 'x':
		lex_strterm = NEW_STRTERM(str_xquote, term, paren);
		return tXSTRING_BEG;

	      case 'r':
		lex_strterm = NEW_STRTERM(str_regexp, term, paren);
		return tREGEXP_BEG;

	      case 's':
		lex_strterm = NEW_STRTERM(str_ssym, term, paren);
		lex_state = EXPR_FNAME;
		return tSYMBEG;

	      default:
		yyerror("unknown type of %string");
		return 0;
	    }
	}
	if ((c = nextc()) == '=') {
            set_yylval_id('%');
	    lex_state = EXPR_BEG;
	    return tOP_ASGN;
	}
	if (IS_ARG() && space_seen && !ISSPACE(c)) {
	    goto quotation;
	}
	switch (lex_state) {
	  case EXPR_FNAME: case EXPR_DOT:
	    lex_state = EXPR_ARG; break;
	  default:
	    lex_state = EXPR_BEG; break;
	}
	pushback(c);
	return '%';

      case '$':
	lex_state = EXPR_END;
	newtok();
	c = nextc();
	switch (c) {
	  case '_':		/* $_: last read line string */
	    c = nextc();
            uc = (unsigned char)c;
	    if (is_identchar(uc)) {
		tokadd('$');
		tokadd('_');
		break;
	    }
	    pushback(c);
	    c = '_';
	    /* fall through */
	  case '~':		/* $~: match-data */
	    local_cnt(c);
	    /* fall through */
	  case '*':		/* $*: argv */
	  case '$':		/* $$: pid */
	  case '?':		/* $?: last status */
	  case '!':		/* $!: error string */
	  case '@':		/* $@: error position */
	  case '/':		/* $/: input record separator */
	  case '\\':		/* $\: output record separator */
	  case ';':		/* $;: field separator */
	  case ',':		/* $,: output field separator */
	  case '.':		/* $.: last read line number */
	  case '=':		/* $=: ignorecase */
	  case ':':		/* $:: load path */
	  case '<':		/* $<: reading filename */
	  case '>':		/* $>: default output handle */
	  case '\"':		/* $": already loaded files */
	    tokadd('$');
	    tokadd(c);
	    tokfix();
            set_yylval_id(rb_intern(tok()));
	    return tGVAR;

	  case '-':
	    tokadd('$');
	    tokadd(c);
	    c = nextc();
	    tokadd(c);
	    tokfix();
            set_yylval_id(rb_intern(tok()));
	    if (!is_global_id(yylval_id())) {
	    	rb_compile_error(PARSER_ARG  "invalid global variable `%s'", rb_id2name(yylval.id));
		return 0;
	    }
	    return tGVAR;

	  case '&':		/* $&: last match */
	  case '`':		/* $`: string before last match */
	  case '\'':		/* $': string after last match */
	  case '+':		/* $+: string matches last paren. */
	    set_yylval_node(NEW_BACK_REF(c));
	    return tBACK_REF;

	  case '1': case '2': case '3':
	  case '4': case '5': case '6':
	  case '7': case '8': case '9':
	    tokadd('$');
	    do {
		tokadd(c);
		c = nextc();
	    } while (ISDIGIT(c));
	    pushback(c);
	    tokfix();
	    set_yylval_node(NEW_NTH_REF(atoi(tok()+1)));
	    return tNTH_REF;

	  default:
            uc = (unsigned char)c;
	    if (!is_identchar(uc)) {
		pushback(c);
		return '$';
	    }
	  case '0':
	    tokadd('$');
	}
	break;

      case '@':
	c = nextc();
	newtok();
	tokadd('@');
	if (c == '@') {
	    tokadd('@');
	    c = nextc();
	}
	if (ISDIGIT(c)) {
	    if (tokidx == 1) {
		rb_compile_error(PARSER_ARG  "`@%c' is not allowed as an instance variable name", c);
	    }
	    else {
		rb_compile_error(PARSER_ARG  "`@@%c' is not allowed as a class variable name", c);
	    }
	}
        uc = (unsigned char)c;
	if (!is_identchar(uc)) {
	    pushback(c);
	    return '@';
	}
	break;

      case '_':
	if (was_bol() && whole_match_p("__END__", 7, 0)) {
	    ruby__end__seen = 1;
	    lex_lastline = 0;
#ifndef RIPPER
	    return -1;
#else
            lex_goto_eol(parser);
            ripper_dispatch_scan_event(parser, k__END__);
            return 0;
#endif
	}
	newtok();
	break;

      default:
	uc = (unsigned char)c;
	if (!is_identchar(uc)) {
	    rb_compile_error(PARSER_ARG  "Invalid char `\\%03o' in expression", c);
	    goto retry;
	}

	newtok();
	break;
    }

    uc = (unsigned char)c;
    do {
	tokadd(c);
	if (ismbchar(uc)) {
	    int i, len = mbclen(uc)-1;

	    for (i = 0; i < len; i++) {
		c = nextc();
		tokadd(c);
	    }
	}
	c = nextc();
        uc = (unsigned char)c;
    } while (is_identchar(uc));
    if ((c == '!' || c == '?') && is_identchar(tok()[0]) && !peek('=')) {
	tokadd(c);
    }
    else {
	pushback(c);
    }
    tokfix();

    {
	int result = 0;
	enum lex_state_e last_state = lex_state;

	switch (tok()[0]) {
	  case '$':
	    lex_state = EXPR_END;
	    result = tGVAR;
	    break;
	  case '@':
	    lex_state = EXPR_END;
	    if (tok()[1] == '@')
		result = tCVAR;
	    else
		result = tIVAR;
	    break;

	  default:
	    if (toklast() == '!' || toklast() == '?') {
		result = tFID;
	    }
	    else {
		if (lex_state == EXPR_FNAME) {
		    if ((c = nextc()) == '=' && !peek('~') && !peek('>') &&
			(!peek('=') || (lex_p + 1 < lex_pend && lex_p[1] == '>'))) {
			result = tIDENTIFIER;
			tokadd(c);
			tokfix();
		    }
		    else {
			pushback(c);
		    }
		}
		if (result == 0 && ISUPPER(tok()[0])) {
		    result = tCONSTANT;
		}
		else {
		    result = tIDENTIFIER;
		}
	    }

	    if (lex_state != EXPR_DOT) {
		const struct kwtable *kw;

		/* See if it is a reserved word.  */
		kw = ripper_reserved_word(tok(), toklen());
		if (kw) {
		    enum lex_state_e state = lex_state;
		    lex_state = kw->state;
		    if (state == EXPR_FNAME) {
                        set_yylval_id(rb_intern(kw->name));
		    }
		    if (kw->id[0] == kDO) {
			if (lpar_beg && lpar_beg == paren_nest) {
			    lpar_beg = 0;
			    --paren_nest;
			    return kDO_LAMBDA;
			}
			if (COND_P()) return kDO_COND;
			if (CMDARG_P() && state != EXPR_CMDARG)
			    return kDO_BLOCK;
			if (state == EXPR_ENDARG || state == EXPR_BEG)
			    return kDO_BLOCK;
			return kDO;
		    }
		    if (state == EXPR_BEG || state == EXPR_VALUE)
			return kw->id[0];
		    else {
			if (kw->id[0] != kw->id[1])
			    lex_state = EXPR_BEG;
			return kw->id[1];
		    }
		}
	    }

	    if ((lex_state == EXPR_BEG && !cmd_state) ||
		lex_state == EXPR_ARG ||
		lex_state == EXPR_CMDARG) {
		if (peek(':') && !(lex_p + 1 < lex_pend && lex_p[1] == ':')) {
		    lex_state = EXPR_BEG;
		    nextc();
		    set_yylval_id(rb_intern(tok()));
		    return tLABEL;
		}
	    }
	    if (IS_BEG() ||
		lex_state == EXPR_DOT ||
		IS_ARG()) {
		if (cmd_state) {
		    lex_state = EXPR_CMDARG;
		}
		else {
		    lex_state = EXPR_ARG;
		}
	    }
	    else {
		lex_state = EXPR_END;
	    }
	}
        {
            ID ident = rb_intern(tok());

            set_yylval_id(ident);
            if (last_state != EXPR_DOT && is_local_id(ident) && lvar_defined(ident)) {
                lex_state = EXPR_END;
            }
        }
	return result;
    }
}

#if YYPURE
static int
yylex(lval, p)
    void *lval, *p;
#else
yylex(p)
    void *p;
#endif
{
    struct parser_params *parser = (struct parser_params*)p;
    int t;

#if YYPURE
    parser->parser_yylval = (union tmpyystype*)lval;
    parser->parser_yylval->val = Qundef;
#endif
    t = parser_yylex(parser);
#ifdef RIPPER
    if (!NIL_P(parser->delayed)) {
	ripper_dispatch_delayed_token(parser, t);
	return t;
    }
    if (t != 0)
	ripper_dispatch_scan_event(parser, t);
#endif

    return t;
}

#ifndef RIPPER
NODE*
rb_node_newnode(type, a0, a1, a2)
    enum node_type type;
    VALUE a0, a1, a2;
{
    NODE *n = (NODE*)rb_newobj();

    n->flags |= T_NODE;
    nd_set_type(n, type);
    nd_set_line(n, ruby_sourceline);
    n->nd_file = ruby_sourcefile;

    n->u1.value = a0;
    n->u2.value = a1;
    n->u3.value = a2;

    return n;
}

static enum node_type
nodetype(node)			/* for debug */
    NODE *node;
{
    return (enum node_type)nd_type(node);
}

static int
nodeline(node)
    NODE *node;
{
    return nd_line(node);
}

static NODE*
newline_node(node)
    NODE *node;
{
    if (node) {
	node->flags |= NODE_NEWLINE;
    }
    return node;
}

static void
fixpos(node, orig)
    NODE *node, *orig;
{
    if (!node) return;
    if (!orig) return;
    if (orig == (NODE*)1) return;
    node->nd_file = orig->nd_file;
    nd_set_line(node, nd_line(orig));
}

static void
parser_warning(node, mesg)
    NODE *node;
    const char *mesg;
{
    int line = ruby_sourceline;
    ruby_sourceline = nd_line(node);
    rb_warning(mesg);
    ruby_sourceline = line;
}

static void
parser_warn(node, mesg)
    NODE *node;
    const char *mesg;
{
    int line = ruby_sourceline;
    ruby_sourceline = nd_line(node);
    rb_warn(mesg);
    ruby_sourceline = line;
}

static NODE*
block_append(head, tail)
    NODE *head, *tail;
{
    NODE *end, *h = head, *nd;

    if (tail == 0) return head;

    if (h == 0) return tail;
    switch (nd_type(h)) {
      case NODE_LIT:
      case NODE_STR:
      case NODE_SELF:
      case NODE_TRUE:
      case NODE_FALSE:
      case NODE_NIL:
	parser_warning(h, "unused literal ignored");
	return tail;
      default:
	h = end = NEW_BLOCK(head);
	end->nd_end = end;
	fixpos(end, head);
	head = end;
	break;
      case NODE_BLOCK:
	end = h->nd_end;
	break;
    }

    nd = end->nd_head;
    switch (nd_type(nd)) {
      case NODE_RETURN:
      case NODE_BREAK:
      case NODE_NEXT:
      case NODE_REDO:
      case NODE_RETRY:
	if (RTEST(ruby_verbose)) {
	    parser_warning(nd, "statement not reached");
	}
	break;

      default:
	break;
    }

    if (nd_type(tail) != NODE_BLOCK) {
	tail = NEW_BLOCK(tail);
	tail->nd_end = tail;
    }
    end->nd_next = tail;
    h->nd_end = tail->nd_end;
    return head;
}

/* append item to the list */
static NODE*
list_append(list, item)
    NODE *list, *item;
{
    NODE *last;

    if (list == 0) return NEW_LIST(item);
    if (list->nd_next) {
	last = list->nd_next->nd_end;
    }
    else {
	last = list;
    }

    list->nd_alen += 1;
    last->nd_next = NEW_LIST(item);
    list->nd_next->nd_end = last->nd_next;
    return list;
}

/* concat two lists */
static NODE*
list_concat(head, tail)
    NODE *head, *tail;
{
    NODE *last;

    if (head->nd_next) {
	last = head->nd_next->nd_end;
    }
    else {
	last = head;
    }

    head->nd_alen += tail->nd_alen;
    last->nd_next = tail;
    if (tail->nd_next) {
	head->nd_next->nd_end = tail->nd_next->nd_end;
    }
    else {
	head->nd_next->nd_end = tail;
    }

    return head;
}

/* concat two string literals */
static NODE *
literal_concat(head, tail)
    NODE *head, *tail;
{
    enum node_type htype;

    if (!head) return tail;
    if (!tail) return head;

    htype = nd_type(head);
    if (htype == NODE_EVSTR) {
	NODE *node = NEW_DSTR(rb_str_new(0, 0));
	head = list_append(node, head);
    }
    switch (nd_type(tail)) {
      case NODE_STR:
	if (htype == NODE_STR) {
	    rb_str_concat(head->nd_lit, tail->nd_lit);
	    rb_gc_force_recycle((VALUE)tail);
	}
	else {
	    list_append(head, tail);
	}
	break;

      case NODE_DSTR:
	if (htype == NODE_STR) {
	    rb_str_concat(head->nd_lit, tail->nd_lit);
	    tail->nd_lit = head->nd_lit;
	    rb_gc_force_recycle((VALUE)head);
	    head = tail;
	}
	else {
	    nd_set_type(tail, NODE_ARRAY);
	    tail->nd_head = NEW_STR(tail->nd_lit);
	    list_concat(head, tail);
	}
	break;

      case NODE_EVSTR:
	if (htype == NODE_STR) {
	    nd_set_type(head, NODE_DSTR);
	    head->nd_alen = 1;
	}
	list_append(head, tail);
	break;
    }
    return head;
}

static NODE *
evstr2dstr(node)
    NODE *node;
{
    if (nd_type(node) == NODE_EVSTR) {
	node = list_append(NEW_DSTR(rb_str_new(0, 0)), node);
    }
    return node;
}

static NODE *
new_evstr(node)
    NODE *node;
{
    NODE *head = node;

    if (node) {
	switch (nd_type(node)) {
	  case NODE_STR: case NODE_DSTR: case NODE_EVSTR:
	    return node;
	}
    }
    return NEW_EVSTR(head);
}

static NODE *
call_op_gen(parser, recv, id, narg, arg1)
    struct parser_params *parser;
    NODE *recv;
    ID id;
    int narg;
    NODE *arg1;
{
    value_expr(arg1);
    if (narg == 1) {
	value_expr(arg1);
	arg1 = NEW_LIST(arg1);
    }
    else {
	arg1 = 0;
    }
    return NEW_CALL(recv, id, arg1);
}

static NODE*
match_op_gen(parser, node1, node2)
    struct parser_params *parser;
    NODE *node1;
    NODE *node2;
{
    local_cnt('~');

    value_expr(node1);
    value_expr(node2);
    if (node1) {
	switch (nd_type(node1)) {
	  case NODE_DREGX:
	  case NODE_DREGX_ONCE:
	    return NEW_MATCH2(node1, node2);

	  case NODE_LIT:
	    if (TYPE(node1->nd_lit) == T_REGEXP) {
		return NEW_MATCH2(node1, node2);
	    }
	}
    }

    if (node2) {
	switch (nd_type(node2)) {
	  case NODE_DREGX:
	  case NODE_DREGX_ONCE:
	    return NEW_MATCH3(node2, node1);

	  case NODE_LIT:
	    if (TYPE(node2->nd_lit) == T_REGEXP) {
		return NEW_MATCH3(node2, node1);
	    }
	}
    }

    return NEW_CALL(node1, tMATCH, NEW_LIST(node2));
}

static NODE*
gettable_gen(parser, id)
    struct parser_params *parser;
    ID id;
{
    if (id == kSELF) {
	return NEW_SELF();
    }
    else if (id == kNIL) {
	return NEW_NIL();
    }
    else if (id == kTRUE) {
	return NEW_TRUE();
    }
    else if (id == kFALSE) {
	return NEW_FALSE();
    }
    else if (id == k__FILE__) {
	return NEW_STR(rb_str_new2(ruby_sourcefile));
    }
    else if (id == k__LINE__) {
	return NEW_LIT(INT2FIX(ruby_sourceline));
    }
    else if (is_local_id(id)) {
	if (dyna_in_block() && rb_dvar_defined(id)) return NEW_DVAR(id);
	if (local_id(id)) return NEW_LVAR(id);
	/* method call without arguments */
        dyna_check(id);
	return NEW_VCALL(id);
    }
    else if (is_global_id(id)) {
	return NEW_GVAR(id);
    }
    else if (is_instance_id(id)) {
	return NEW_IVAR(id);
    }
    else if (is_const_id(id)) {
	return NEW_CONST(id);
    }
    else if (is_class_id(id)) {
	return NEW_CVAR(id);
    }
    rb_compile_error("identifier %s is not valid", rb_id2name(id));
    return 0;
}

static NODE*
assignable_gen(parser, id, val)
    struct parser_params *parser;
    ID id;
    NODE *val;
{
    value_expr(val);
    if (id == kSELF) {
	yyerror("Can't change the value of self");
    }
    else if (id == kNIL) {
	yyerror("Can't assign to nil");
    }
    else if (id == kTRUE) {
	yyerror("Can't assign to true");
    }
    else if (id == kFALSE) {
	yyerror("Can't assign to false");
    }
    else if (id == k__FILE__) {
	yyerror("Can't assign to __FILE__");
    }
    else if (id == k__LINE__) {
	yyerror("Can't assign to __LINE__");
    }
    else if (is_local_id(id)) {
	if (rb_dvar_curr(id)) {
	    return NEW_DASGN_CURR(id, val);
	}
	else if (rb_dvar_defined(id)) {
	    return NEW_DASGN(id, val);
	}
	else if (local_id(id) || !dyna_in_block()) {
	    return NEW_LASGN(id, val);
	}
	else{
	    dyna_var(id);
	    return NEW_DASGN_CURR(id, val);
	}
    }
    else if (is_global_id(id)) {
	return NEW_GASGN(id, val);
    }
    else if (is_instance_id(id)) {
	return NEW_IASGN(id, val);
    }
    else if (is_const_id(id)) {
	if (in_def || in_single)
	    yyerror("dynamic constant assignment");
	return NEW_CDECL(id, val, 0);
    }
    else if (is_class_id(id)) {
	if (in_def || in_single) return NEW_CVASGN(id, val);
	return NEW_CVDECL(id, val);
    }
    else {
	rb_compile_error("identifier %s is not valid", rb_id2name(id));
    }
    return 0;
}

static void
shadowing_lvar_gen(parser, name)
    struct parser_params *parser;
    ID name;
{
    if (rb_dvar_defined(name) || local_id(name)) {
	rb_warningS("shadowing outer local variable - %s", rb_id2name(name));
    }
}

static NODE*
new_bv_gen(parser, name, val)
    struct parser_params *parser;
    ID name;
    NODE *val;
{
    if (!is_local_id(name)) {
	compile_error(PARSER_ARG "invalid local variable - %s",
		      rb_id2name(name));
	return 0;
    }
    shadowing_lvar(name);
    dyna_var(name);
    return NEW_DASGN_CURR(name, val);
}

static NODE *
aryset_gen(parser, recv, idx)
    struct parser_params *parser;
    NODE *recv, *idx;
{
    if (recv && nd_type(recv) == NODE_SELF)
	recv = (NODE *)1;
    else
	value_expr(recv);
    return NEW_ATTRASGN(recv, tASET, idx);
}

static void
block_dup_check(node)
    NODE *node;
{
    if (node && nd_type(node) == NODE_BLOCK_PASS) {
	compile_error(PARSER_ARG "both block arg and actual block given");
    }
}

ID
rb_id_attrset(id)
    ID id;
{
    id &= ~ID_SCOPE_MASK;
    id |= ID_ATTRSET;
    return id;
}

static NODE *
attrset_gen(parser, recv, id)
    struct parser_params *parser;
    NODE *recv;
    ID id;
{
    if (recv && nd_type(recv) == NODE_SELF)
	recv = (NODE *)1;
    else
	value_expr(recv);
    return NEW_ATTRASGN(recv, rb_id_attrset(id), 0);
}

static void
rb_backref_error(node)
    NODE *node;
{
    switch (nd_type(node)) {
      case NODE_NTH_REF:
	rb_compile_error("Can't set variable $%d", node->nd_nth);
	break;
      case NODE_BACK_REF:
	rb_compile_error("Can't set variable $%c", (int)node->nd_nth);
	break;
    }
}

static NODE *
arg_concat(node1, node2)
    NODE *node1;
    NODE *node2;
{
    if (!node2) return node1;
    return NEW_ARGSCAT(node1, node2);
}

static NODE *
arg_add(node1, node2)
    NODE *node1;
    NODE *node2;
{
    if (!node1) return NEW_LIST(node2);
    if (nd_type(node1) == NODE_ARRAY) {
	return list_append(node1, node2);
    }
    else {
	return NEW_ARGSPUSH(node1, node2);
    }
}

static NODE*
node_assign_gen(parser, lhs, rhs)
    struct parser_params *parser;
    NODE *lhs, *rhs;
{
    if (!lhs) return 0;

    value_expr(rhs);
    switch (nd_type(lhs)) {
      case NODE_GASGN:
      case NODE_IASGN:
      case NODE_LASGN:
      case NODE_DASGN:
      case NODE_DASGN_CURR:
      case NODE_MASGN:
      case NODE_CDECL:
      case NODE_CVDECL:
      case NODE_CVASGN:
	lhs->nd_value = rhs;
	break;

      case NODE_ATTRASGN:
      case NODE_CALL:
	lhs->nd_args = arg_add(lhs->nd_args, rhs);
	break;

      default:
	/* should not happen */
	break;
    }

    return lhs;
}

static int
value_expr_gen(parser, node)
    struct parser_params *parser;
    NODE *node;
{
    int cond = 0;

    while (node) {
	switch (nd_type(node)) {
	  case NODE_DEFN:
	  case NODE_DEFS:
	    parser_warning(node, "void value expression");
	    return Qfalse;

	  case NODE_RETURN:
	  case NODE_BREAK:
	  case NODE_NEXT:
	  case NODE_REDO:
	  case NODE_RETRY:
	    if (!cond) yyerror("void value expression");
	    /* or "control never reach"? */
	    return Qfalse;

	  case NODE_BLOCK:
	    while (node->nd_next) {
		node = node->nd_next;
	    }
	    node = node->nd_head;
	    break;

	  case NODE_BEGIN:
	    node = node->nd_body;
	    break;

	  case NODE_IF:
	    if (!value_expr(node->nd_body)) return Qfalse;
	    node = node->nd_else;
	    break;

	  case NODE_AND:
	  case NODE_OR:
	    cond = 1;
	    node = node->nd_2nd;
	    break;

	  default:
	    return Qtrue;
	}
    }

    return Qtrue;
}

static void
void_expr_gen(parser, node)
    struct parser_params *parser;
    NODE *node;
{
    char *useless = 0;

    if (!RTEST(ruby_verbose)) return;

    if (!node) return;
    switch (nd_type(node)) {
      case NODE_CALL:
	switch (node->nd_mid) {
	  case '+':
	  case '-':
	  case '*':
	  case '/':
	  case '%':
	  case tPOW:
	  case tUPLUS:
	  case tUMINUS:
	  case '|':
	  case '^':
	  case '&':
	  case tCMP:
	  case '>':
	  case tGEQ:
	  case '<':
	  case tLEQ:
	  case tEQ:
	  case tNEQ:
	    useless = rb_id2name(node->nd_mid);
	    break;
	}
	break;

      case NODE_LVAR:
      case NODE_DVAR:
      case NODE_GVAR:
      case NODE_IVAR:
      case NODE_CVAR:
      case NODE_NTH_REF:
      case NODE_BACK_REF:
	useless = "a variable";
	break;
      case NODE_CONST:
      case NODE_CREF:
	useless = "a constant";
	break;
      case NODE_LIT:
      case NODE_STR:
      case NODE_DSTR:
      case NODE_DREGX:
      case NODE_DREGX_ONCE:
	useless = "a literal";
	break;
      case NODE_COLON2:
      case NODE_COLON3:
	useless = "::";
	break;
      case NODE_DOT2:
	useless = "..";
	break;
      case NODE_DOT3:
	useless = "...";
	break;
      case NODE_SELF:
	useless = "self";
	break;
      case NODE_NIL:
	useless = "nil";
	break;
      case NODE_TRUE:
	useless = "true";
	break;
      case NODE_FALSE:
	useless = "false";
	break;
      case NODE_DEFINED:
	useless = "defined?";
	break;
    }

    if (useless) {
	int line = ruby_sourceline;

	ruby_sourceline = nd_line(node);
	rb_warn("useless use of %s in void context", useless);
	ruby_sourceline = line;
    }
}

static void
void_stmts_gen(parser, node)
    struct parser_params *parser;
    NODE *node;
{
    if (!RTEST(ruby_verbose)) return;
    if (!node) return;
    if (nd_type(node) != NODE_BLOCK) return;

    for (;;) {
	if (!node->nd_next) return;
	void_expr(node->nd_head);
	node = node->nd_next;
    }
}

static NODE *
remove_begin(node)
    NODE *node;
{
    NODE **n = &node;
    while (*n) {
	if (nd_type(*n) != NODE_BEGIN) {
	    return node;
	}
	*n = (*n)->nd_body;
    }
    return node;
}

static void
reduce_nodes(body)
    NODE **body;
{
    NODE *node = *body;

    if (!node) {
	*body = NEW_NIL();
	return;
    }
#define subnodes(n1, n2) \
    ((!node->n1) ? (node->n2 ? (body = &node->n2, 1) : 0) : \
     (!node->n2) ? (body = &node->n1, 1) : \
     (reduce_nodes(&node->n1), body = &node->n2, 1))

    while (node) {
	switch (nd_type(node)) {
	  end:
	  case NODE_NIL:
	    *body = 0;
	    return;
	  case NODE_RETURN:
	    *body = node = node->nd_stts;
	    continue;
	  case NODE_BEGIN:
	    *body = node = node->nd_body;
	    continue;
	  case NODE_BLOCK:
	    body = &node->nd_end->nd_head;
	    break;
	  case NODE_IF:
	    if (subnodes(nd_body, nd_else)) break;
	    return;
	  case NODE_CASE:
	    body = &node->nd_body;
	    break;
	  case NODE_WHEN:
	    if (!subnodes(nd_body, nd_next)) goto end;
	    break;
	  case NODE_ENSURE:
	    if (!subnodes(nd_head, nd_resq)) goto end;
	    break;
	  case NODE_RESCUE:
	    if (!subnodes(nd_head, nd_resq)) goto end;
	    break;
	  default:
	    return;
	}
	node = *body;
    }

#undef subnodes
}

static int
assign_in_cond(parser, node)
    struct parser_params *parser;
    NODE *node;
{
    switch (nd_type(node)) {
      case NODE_MASGN:
	yyerror("multiple assignment in conditional");
	return 1;

      case NODE_LASGN:
      case NODE_DASGN:
      case NODE_GASGN:
      case NODE_IASGN:
	break;

      default:
	return 0;
    }

    switch (nd_type(node->nd_value)) {
      case NODE_LIT:
      case NODE_STR:
      case NODE_NIL:
      case NODE_TRUE:
      case NODE_FALSE:
	/* reports always */
	parser_warn(node->nd_value, "found = in conditional, should be ==");
	return 1;

      case NODE_DSTR:
      case NODE_XSTR:
      case NODE_DXSTR:
      case NODE_EVSTR:
      case NODE_DREGX:
      default:
	break;
    }
    return 1;
}

static int
e_option_supplied()
{
    if (strcmp(ruby_sourcefile, "-e") == 0)
	return Qtrue;
    return Qfalse;
}

static void
warn_unless_e_option(node, str)
    NODE *node;
    const char *str;
{
    if (!e_option_supplied()) parser_warn(node, str);
}

static void
warning_unless_e_option(node, str)
    NODE *node;
    const char *str;
{
    if (!e_option_supplied()) parser_warning(node, str);
}

static NODE *cond0 _((struct parser_params*,NODE*));

static NODE*
range_op(parser, node)
    struct parser_params *parser;
    NODE *node;
{
    enum node_type type;

    if (!e_option_supplied()) return node;
    if (node == 0) return 0;

    value_expr(node);
    node = cond0(parser, node);
    type = nd_type(node);
    if (type == NODE_LIT && FIXNUM_P(node->nd_lit)) {
	warn_unless_e_option(node, "integer literal in conditional range");
	return call_op(node,tEQ,1,NEW_GVAR(rb_intern("$.")));
    }
    return node;
}

static int
literal_node(node)
    NODE *node;
{
    if (!node) return 1;	/* same as NODE_NIL */
    switch (nd_type(node)) {
      case NODE_LIT:
      case NODE_STR:
      case NODE_DSTR:
      case NODE_EVSTR:
      case NODE_DREGX:
      case NODE_DREGX_ONCE:
      case NODE_DSYM:
	return 2;
      case NODE_TRUE:
      case NODE_FALSE:
      case NODE_NIL:
	return 1;
    }
    return 0;
}

static NODE*
cond0(parser, node)
    struct parser_params *parser;
    NODE *node;
{
    if (node == 0) return 0;
    assign_in_cond(parser, node);

    switch (nd_type(node)) {
      case NODE_DSTR:
      case NODE_EVSTR:
      case NODE_STR:
	rb_warn("string literal in condition");
	break;

      case NODE_DREGX:
      case NODE_DREGX_ONCE:
	warning_unless_e_option(node, "regex literal in condition");
	local_cnt('_');
	local_cnt('~');
	return NEW_MATCH2(node, NEW_GVAR(rb_intern("$_")));

      case NODE_AND:
      case NODE_OR:
	node->nd_1st = cond0(parser, node->nd_1st);
	node->nd_2nd = cond0(parser, node->nd_2nd);
	break;

      case NODE_DOT2:
      case NODE_DOT3:
	node->nd_beg = range_op(parser, node->nd_beg);
	node->nd_end = range_op(parser, node->nd_end);
	if (nd_type(node) == NODE_DOT2) nd_set_type(node,NODE_FLIP2);
	else if (nd_type(node) == NODE_DOT3) nd_set_type(node, NODE_FLIP3);
	node->nd_cnt = local_append(internal_id());
	if (!e_option_supplied()) {
	    int b = literal_node(node->nd_beg);
	    int e = literal_node(node->nd_end);
	    if ((b == 1 && e == 1) || (b + e >= 2 && RTEST(ruby_verbose))) {
		parser_warn(node, "range literal in condition");
	    }
	}
	break;

      case NODE_DSYM:
	parser_warning(node, "literal in condition");
	break;

      case NODE_LIT:
	if (TYPE(node->nd_lit) == T_REGEXP) {
	    warn_unless_e_option(node, "regex literal in condition");
	    nd_set_type(node, NODE_MATCH);
	    local_cnt('_');
	    local_cnt('~');
	}
	else {
	    parser_warning(node, "literal in condition");
	}
      default:
	break;
    }
    return node;
}

static NODE*
cond_gen(parser, node)
    struct parser_params *parser;
    NODE *node;
{
    if (node == 0) return 0;
    value_expr(node);
    return cond0(parser, node);
}

static NODE*
logop_gen(parser, type, left, right)
    struct parser_params *parser;
    enum node_type type;
    NODE *left, *right;
{
    value_expr(left);
    if (left && nd_type(left) == type) {
	NODE *node = left, *second;
	while ((second = node->nd_2nd) != 0 && nd_type(second) == type) {
	    node = second;
	}
	node->nd_2nd = NEW_NODE(type, second, right, 0);
	return left;
    }
    return NEW_NODE(type, left, right, 0);
}

static int
cond_negative(nodep)
    NODE **nodep;
{
    NODE *c = *nodep;

    if (!c) return 0;
    switch (nd_type(c)) {
      case NODE_NOT:
	*nodep = c->nd_body;
	return 1;
    }
    return 0;
}

static void
no_blockarg(node)
    NODE *node;
{
    if (node && nd_type(node) == NODE_BLOCK_PASS) {
	rb_compile_error("block argument should not be given");
    }
}

static NODE *
ret_args(node)
    NODE *node;
{
    if (node) {
	no_blockarg(node);
	if (nd_type(node) == NODE_ARRAY) {
	    if (node->nd_next == 0) {
		node = node->nd_head;
	    }
	    else {
		nd_set_type(node, NODE_VALUES);
	    }
	}
	else if (nd_type(node) == NODE_SPLAT) {
	    node = NEW_SVALUE(node);
	}
    }
    return node;
}

static NODE *
new_yield(node)
    NODE *node;
{
    long state = Qtrue;

    if (node) {
        no_blockarg(node);
        if (nd_type(node) == NODE_ARRAY && node->nd_next == 0) {
            node = node->nd_head;
            state = Qfalse;
        }
        else if (node && nd_type(node) == NODE_SPLAT) {
            state = Qtrue;
        }
    }
    else {
        state = Qfalse;
    }
    return NEW_YIELD(node, state);
}

static NODE*
negate_lit(node)
    NODE *node;
{
    switch (TYPE(node->nd_lit)) {
      case T_FIXNUM:
	node->nd_lit = LONG2FIX(-FIX2LONG(node->nd_lit));
	break;
      case T_BIGNUM:
	node->nd_lit = rb_funcall(node->nd_lit,tUMINUS,0,0);
	break;
      case T_FLOAT:
	RFLOAT(node->nd_lit)->value = -RFLOAT(node->nd_lit)->value;
	break;
      default:
	break;
    }
    return node;
}

static NODE *
arg_blk_pass(node1, node2)
    NODE *node1;
    NODE *node2;
{
    if (node2) {
	node2->nd_head = node1;
	return node2;
    }
    return node1;
}

static NODE*
arg_prepend(node1, node2)
    NODE *node1, *node2;
{
    switch (nd_type(node2)) {
      case NODE_ARRAY:
	return list_concat(NEW_LIST(node1), node2);

      case NODE_SPLAT:
	return arg_concat(node1, node2->nd_head);

      case NODE_BLOCK_PASS:
	node2->nd_body = arg_prepend(node1, node2->nd_body);
	return node2;

      default:
	rb_bug("unknown nodetype(%d) for arg_prepend", nd_type(node2));
    }
    return 0;			/* not reached */
}

static int
arg_dup_check(vid, m, list, node)
    ID vid;
    VALUE m, list;
    NODE *node;
{
    VALUE sym = ID2SYM(vid);
    if ((m && rb_ary_includes(m, sym)) || rb_ary_includes(list, sym)) {
	ruby_sourceline = nd_line(node);
	return 1;
    }
    rb_ary_push(list, sym);		  
    return 0;
}

static NODE*
new_args_gen(parser, m, o, r, b)
    struct parser_params *parser;
    VALUE m;
    NODE *o, *r, *b;
{
    int saved_line = ruby_sourceline;
    NODE *tmp;
    VALUE list;

    list = rb_ary_new();
    tmp = o;
    while (tmp) {
	if (!tmp->nd_head) break;
	if (arg_dup_check(tmp->nd_head->nd_vid, m, list, tmp)) {
	    yyerror("duplicated optional argument name");
	    return 0;	
	}
	tmp = tmp->nd_next;
    }
    if (RTEST(r)) {
	if (arg_dup_check(r->nd_vid, m, list, r)) {
	    yyerror("duplicated rest argument name");
	    return 0;
	}
    }
    if (b) {
	if (arg_dup_check(b->nd_vid, m, list, b)) {
	    yyerror("duplicated block argument name");
	    return 0;
	}
    }
    ruby_sourceline = saved_line;
    return block_append(NEW_ARGS(m, o, r), b);
}

static NODE*
new_call(r,m,a)
    NODE *r;
    ID m;
    NODE *a;
{
    if (a && nd_type(a) == NODE_BLOCK_PASS) {
	a->nd_iter = NEW_CALL(r,m,a->nd_head);
	return a;
    }
    return NEW_CALL(r,m,a);
}

static NODE*
fcall_gen(parser, m, a)
    struct parser_params *parser;
    ID m;
    NODE *a;
{
    if (is_local_id(m)) {
	if ((dyna_in_block() && rb_dvar_defined(m)) || local_id(m)) {
	    return NEW_CALL(gettable(m), rb_intern("call"), a);
	}
    }
    return NEW_FCALL(m,a);
}

static NODE*
new_fcall_gen(parser, m, a)
    struct parser_params *parser;
    ID m;
    NODE *a;
{
    if (a && nd_type(a) == NODE_BLOCK_PASS) {
	a->nd_iter = NEW_FCALL(m,a->nd_head);
	return a;
    }
    return NEW_FCALL(m, a);
}

static NODE*
new_super(a)
    NODE *a;
{
    if (a && nd_type(a) == NODE_BLOCK_PASS) {
	a->nd_iter = NEW_SUPER(a->nd_head);
	return a;
    }
    return NEW_SUPER(a);
}

static void
local_push_gen(parser, top)
    struct parser_params *parser;
    int top;
{
    struct local_vars *local;

    local = ALLOC(struct local_vars);
    local->prev = lvtbl;
    local->nofree = 0;
    local->cnt = 0;
    local->tbl = 0;
    local->dlev = 0;
    local->dname_size = 0;
    local->dnames = 0;
    local->dyna_vars = ruby_dyna_vars;
    lvtbl = local;
    if (!top) {
	/* preserve reference for GC, but link should be cut. */
	rb_dvar_push(0, (VALUE)ruby_dyna_vars);
	ruby_dyna_vars->next = 0;
    }
}

static void
local_pop_gen(parser)
    struct parser_params *parser;
{
    struct local_vars *local = lvtbl->prev;

    if (lvtbl->tbl) {
	if (!lvtbl->nofree) xfree(lvtbl->tbl);
	else lvtbl->tbl[0] = lvtbl->cnt;
    }
    if (lvtbl->dnames) {
	xfree(lvtbl->dnames);
    }
    ruby_dyna_vars = lvtbl->dyna_vars;
    xfree(lvtbl);
    lvtbl = local;
}

static ID*
local_tbl_gen(parser)
    struct parser_params *parser;
{
    lvtbl->nofree = 1;
    return lvtbl->tbl;
}

static int
local_append_gen(parser, id)
    struct parser_params *parser;
    ID id;
{
    if (lvtbl->tbl == 0) {
	lvtbl->tbl = ALLOC_N(ID, 4);
	lvtbl->tbl[0] = 0;
	lvtbl->tbl[1] = '_';
	lvtbl->tbl[2] = '~';
	lvtbl->cnt = 2;
	if (id == '_') return 0;
	if (id == '~') return 1;
    }
    else {
	REALLOC_N(lvtbl->tbl, ID, lvtbl->cnt+2);
    }

    lvtbl->tbl[lvtbl->cnt+1] = id;
    return lvtbl->cnt++;
}

static int
local_cnt_gen(parser, id)
    struct parser_params *parser;
    ID id;
{
    int cnt, max;

    if (id == 0) return lvtbl->cnt;

    for (cnt=1, max=lvtbl->cnt+1; cnt<max;cnt++) {
	if (lvtbl->tbl[cnt] == id) return cnt-1;
    }
    return local_append(id);
}

static int
local_id_gen(parser, id)
    struct parser_params *parser;
    ID id;
{
    int i, max;

    if (lvtbl == 0) return Qfalse;
    for (i=3, max=lvtbl->cnt+1; i<max; i++) {
	if (lvtbl->tbl[i] == id) return Qtrue;
    }
    return Qfalse;
}

static void
top_local_init_gen(parser)
    struct parser_params *parser;
{
    local_push(1);
    lvtbl->cnt = ruby_scope->local_tbl?ruby_scope->local_tbl[0]:0;
    if (lvtbl->cnt > 0) {
	lvtbl->tbl = ALLOC_N(ID, lvtbl->cnt+3);
	MEMCPY(lvtbl->tbl, ruby_scope->local_tbl, ID, lvtbl->cnt+1);
    }
    else {
	lvtbl->tbl = 0;
    }
    if (ruby_dyna_vars)
	lvtbl->dlev = 1;
    else
	lvtbl->dlev = 0;
}

static void
top_local_setup_gen(parser)
    struct parser_params *parser;
{
    int len = lvtbl->cnt;
    int i;

    if (len > 0) {
	i = ruby_scope->local_tbl?ruby_scope->local_tbl[0]:0;

	if (i < len) {
	    if (i == 0 || (ruby_scope->flags & SCOPE_MALLOC) == 0) {
		VALUE *vars = ALLOC_N(VALUE, len+1);
		if (ruby_scope->local_vars) {
		    *vars++ = ruby_scope->local_vars[-1];
		    MEMCPY(vars, ruby_scope->local_vars, VALUE, i);
		    rb_mem_clear(vars+i, len-i);
		}
		else {
		    *vars++ = 0;
		    rb_mem_clear(vars, len);
		}
		ruby_scope->local_vars = vars;
		ruby_scope->flags |= SCOPE_MALLOC;
	    }
	    else {
		VALUE *vars = ruby_scope->local_vars-1;
		REALLOC_N(vars, VALUE, len+1);
		ruby_scope->local_vars = vars+1;
		rb_mem_clear(ruby_scope->local_vars+i, len-i);
	    }
	    if (ruby_scope->local_tbl && ruby_scope->local_vars[-1] == 0) {
		xfree(ruby_scope->local_tbl);
	    }
	    ruby_scope->local_vars[-1] = 0;
	    ruby_scope->local_tbl = local_tbl();
	}
    }
    local_pop();
}

static void
dyna_var_gen(parser, id)
    struct parser_params *parser;
    ID id;
{
    int i;

    rb_dvar_push(id, Qnil);
    for (i=0; i<lvtbl->dname_size; i++) {
	if (lvtbl->dnames[i] == id) return;
    }
    if (lvtbl->dname_size == 0) {
	lvtbl->dnames = ALLOC_N(ID, 1);
    }
    else {
	REALLOC_N(lvtbl->dnames, ID, lvtbl->dname_size+1);
    }
    lvtbl->dnames[lvtbl->dname_size++] = id;
}

static void
dyna_check_gen(parser, id)
    struct parser_params *parser;
    ID id;
{
    int i;

    if (in_defined) return;	/* no check needed */
    for (i=0; i<lvtbl->dname_size; i++) {
	if (lvtbl->dnames[i] == id) {
	    rb_warnS("out-of-scope variable - %s", rb_id2name(id));
	    return;
	}
    }
}

static struct RVarmap*
dyna_push_gen(parser)
    struct parser_params *parser;
{
    struct RVarmap* vars = ruby_dyna_vars;

    rb_dvar_push(0, 0);
    lvtbl->dlev++;
    return vars;
}

static void
dyna_pop_gen(parser, vars)
    struct parser_params *parser;
    struct RVarmap* vars;
{
    lvtbl->dlev--;
    ruby_dyna_vars = vars;
}

static int
dyna_in_block_gen(parser)
    struct parser_params *parser;
{
    return (lvtbl->dlev > 0);
}

static NODE *
dyna_init_gen(parser, node, pre)
    struct parser_params *parser;
    NODE *node;
    struct RVarmap *pre;
{
    struct RVarmap *post = ruby_dyna_vars;
    NODE *var;

    if (!node || !post || pre == post) return node;
    for (var = 0; post != pre && post->id; post = post->next) {
	var = NEW_DASGN_CURR(post->id, var);
    }
    return block_append(var, node);
}

void
rb_gc_mark_parser()
{
}

NODE*
rb_parser_append_print(node)
    NODE *node;
{
    NODE *prelude = 0;

    if (node && (nd_type(node) == NODE_PRELUDE)) {
	prelude = node;
	node = node->nd_body;
    }
    node = block_append(node,
			NEW_FCALL(rb_intern("print"),
				  NEW_ARRAY(NEW_GVAR(rb_intern("$_")))));
    if (prelude) {
	prelude->nd_body = node;
	return prelude;
    }
    return node;
}

NODE *
rb_parser_while_loop(node, chop, split)
    NODE *node;
    int chop, split;
{
    NODE *prelude = 0;

    if (node && (nd_type(node) == NODE_PRELUDE)) {
	prelude = node;
	node = node->nd_body;
    }
    if (split) {
	node = block_append(NEW_GASGN(rb_intern("$F"),
				      NEW_CALL(NEW_GVAR(rb_intern("$_")),
					       rb_intern("split"), 0)),
			    node);
    }
    if (chop) {
	node = block_append(NEW_CALL(NEW_GVAR(rb_intern("$_")),
				     rb_intern("chop!"), 0), node);
    }
    node = NEW_OPT_N(node);
    if (prelude) {
	prelude->nd_body = node;
	return prelude;
    }
    return node;
}

static const struct {
    ID token;
    char *name;
} op_tbl[] = {
    {tDOT2,	".."},
    {tDOT3,	"..."},
    {'+',	"+"},
    {'-',	"-"},
    {'+',	"+(binary)"},
    {'-',	"-(binary)"},
    {'*',	"*"},
    {'/',	"/"},
    {'%',	"%"},
    {tPOW,	"**"},
    {tUPLUS,	"+@"},
    {tUMINUS,	"-@"},
    {tUPLUS,	"+(unary)"},
    {tUMINUS,	"-(unary)"},
    {'|',	"|"},
    {'^',	"^"},
    {'&',	"&"},
    {tCMP,	"<=>"},
    {'>',	">"},
    {tGEQ,	">="},
    {'<',	"<"},
    {tLEQ,	"<="},
    {tEQ,	"=="},
    {tEQQ,	"==="},
    {tNEQ,	"!="},
    {tMATCH,	"=~"},
    {tNMATCH,	"!~"},
    {'!',	"!"},
    {'~',	"~"},
    {'!',	"!(unary)"},
    {'~',	"~(unary)"},
    {'!',	"!@"},
    {'~',	"~@"},
    {tAREF,	"[]"},
    {tASET,	"[]="},
    {tLSHFT,	"<<"},
    {tRSHFT,	">>"},
    {tCOLON2,	"::"},
    {'`',	"`"},
    {0,	0}
};

static struct symbols {
    ID last_id;
    st_table *tbl;
    st_table *rev;
} global_symbols = {tLAST_TOKEN};

void
Init_sym()
{
    global_symbols.tbl = st_init_strtable_with_size(200);
    global_symbols.rev = st_init_numtable_with_size(200);
}

static ID
internal_id()
{
    return ID_INTERNAL | (++global_symbols.last_id << ID_SCOPE_SHIFT);
}

ID
rb_intern(name)
    const char *name;
{
    const char *m = name;
    ID id;
    int last;

    if (st_lookup(global_symbols.tbl, (st_data_t)name, (st_data_t *)&id))
	return id;

    last = strlen(name)-1;
    id = 0;
    switch (*name) {
      case '$':
	id |= ID_GLOBAL;
	m++;
	if (!is_identchar(*m)) m++;
	break;
      case '@':
	if (name[1] == '@') {
	    m++;
	    id |= ID_CLASS;
	}
	else {
	    id |= ID_INSTANCE;
	}
	m++;
	break;
      default:
	if (name[0] != '_' && !ISALPHA(name[0]) && !ismbchar(name[0])) {
	    /* operators */
	    int i;

	    for (i=0; op_tbl[i].token; i++) {
		if (*op_tbl[i].name == *name &&
		    strcmp(op_tbl[i].name, name) == 0) {
		    id = op_tbl[i].token;
		    goto id_regist;
		}
	    }
	}

	if (name[last] == '=') {
	    /* attribute assignment */
	    char *buf = ALLOCA_N(char,last+1);

	    strncpy(buf, name, last);
	    buf[last] = '\0';
	    id = rb_intern(buf);
	    if (id > tLAST_TOKEN && !is_attrset_id(id)) {
		id = rb_id_attrset(id);
		goto id_regist;
	    }
	    id = ID_ATTRSET;
	}
	else if (ISUPPER(name[0])) {
	    id = ID_CONST;
        }
	else {
	    id = ID_LOCAL;
	}
	break;
    }
    while (m <= name + last && is_identchar(*m)) {
	m += mbclen(*m);
    }
    if (*m) id = ID_JUNK;
    id |= ++global_symbols.last_id << ID_SCOPE_SHIFT;
  id_regist:
    name = strdup(name);
    st_add_direct(global_symbols.tbl, (st_data_t)name, id);
    st_add_direct(global_symbols.rev, id, (st_data_t)name);
    return id;
}

char *
rb_id2name(id)
    ID id;
{
    char *name;

    if (id < tLAST_TOKEN) {
	int i = 0;

	for (i=0; op_tbl[i].token; i++) {
	    if (op_tbl[i].token == id)
		return op_tbl[i].name;
	}
    }

    if (st_lookup(global_symbols.rev, id, (st_data_t *)&name))
	return name;

    if (is_attrset_id(id)) {
	ID id2 = (id & ~ID_SCOPE_MASK) | ID_LOCAL;

      again:
	name = rb_id2name(id2);
	if (name) {
	    char *buf = ALLOCA_N(char, strlen(name)+2);

	    strcpy(buf, name);
	    strcat(buf, "=");
	    rb_intern(buf);
	    return rb_id2name(id);
	}
	if (is_local_id(id2)) {
	    id2 = (id & ~ID_SCOPE_MASK) | ID_CONST;
	    goto again;
	}
    }
    return 0;
}

static int
symbols_i(key, value, ary)
    char *key;
    ID value;
    VALUE ary;
{
    rb_ary_push(ary, ID2SYM(value));
    return ST_CONTINUE;
}

/*
 *  call-seq:
 *     Symbol.all_symbols    => array
 *  
 *  Returns an array of all the symbols currently in Ruby's symbol
 *  table.
 *     
 *     Symbol.all_symbols.size    #=> 903
 *     Symbol.all_symbols[1,20]   #=> [:floor, :ARGV, :Binding, :symlink,
 *                                     :chown, :EOFError, :$;, :String, 
 *                                     :LOCK_SH, :"setuid?", :$<, 
 *                                     :default_proc, :compact, :extend, 
 *                                     :Tms, :getwd, :$=, :ThreadGroup,
 *                                     :wait2, :$>]
 */

VALUE
rb_sym_all_symbols()
{
    VALUE ary = rb_ary_new2(global_symbols.tbl->num_entries);

    st_foreach(global_symbols.tbl, symbols_i, ary);
    return ary;
}

int
rb_is_const_id(id)
    ID id;
{
    if (is_const_id(id)) return Qtrue;
    return Qfalse;
}

int
rb_is_class_id(id)
    ID id;
{
    if (is_class_id(id)) return Qtrue;
    return Qfalse;
}

int
rb_is_instance_id(id)
    ID id;
{
    if (is_instance_id(id)) return Qtrue;
    return Qfalse;
}

int
rb_is_local_id(id)
    ID id;
{
    if (is_local_id(id)) return Qtrue;
    return Qfalse;
}

int
rb_is_junk_id(id)
    ID id;
{
    if (is_junk_id(id)) return Qtrue;
    return Qfalse;
}

static void
special_local_set(c, val)
    char c;
    VALUE val;
{
    VALUE volatile vparser = rb_parser_new();
    struct parser_params *parser;
    int cnt;
    
    Data_Get_Struct(vparser, struct parser_params, parser);
    top_local_init();
    cnt = local_cnt(c);
    top_local_setup();
    ruby_scope->local_vars[cnt] = val;
}

VALUE
rb_backref_get()
{
    VALUE *var = rb_svar(1);
    if (var) {
	return *var;
    }
    return Qnil;
}

void
rb_backref_set(val)
    VALUE val;
{
    VALUE *var = rb_svar(1);
    if (var) {
	*var = val;
    }
    else {
	special_local_set('~', val);
    }
}

VALUE
rb_lastline_get()
{
    VALUE *var = rb_svar(0);
    if (var) {
	return *var;
    }
    return Qnil;
}

void
rb_lastline_set(val)
    VALUE val;
{
    VALUE *var = rb_svar(0);
    if (var) {
	*var = val;
    }
    else {
	special_local_set('_', val);
    }
}
#endif /* !RIPPER */

static void
parser_initialize(parser)
    struct parser_params *parser;
{
    parser->eofp = Qfalse;

    parser->parser_lex_strterm = 0;
    parser->parser_cond_stack = 0;
    parser->parser_cmdarg_stack = 0;
    parser->parser_class_nest = 0;
    parser->parser_paren_nest = 0;
    parser->parser_lpar_beg = 0;
    parser->parser_in_single = 0;
    parser->parser_in_def = 0;
    parser->parser_in_defined = 0;
    parser->parser_compile_for_eval = 0;
    parser->parser_cur_mid = 0;
    parser->parser_tokenbuf = NULL;
    parser->parser_tokidx = 0;
    parser->parser_toksiz = 0;
    parser->parser_heredoc_end = 0;
    parser->parser_command_start = Qtrue;
    parser->parser_lex_pbeg = 0;
    parser->parser_lex_p = 0;
    parser->parser_lex_pend = 0;
    parser->parser_lvtbl = 0;
    parser->parser_ruby__end__seen = 0;
#ifndef RIPPER
    parser->parser_eval_tree_begin = 0;
    parser->parser_eval_tree = 0;
#else
    parser->parser_ruby_sourcefile = Qnil;
    parser->delayed = Qnil;

    parser->result = Qnil;
    parser->parsing_thread = Qnil;
    parser->toplevel_p = Qtrue;
#endif
}

static void
parser_mark(ptr)
    void *ptr;
{
    struct parser_params *p = (struct parser_params*)ptr;

    rb_gc_mark((VALUE)p->parser_lex_strterm);
    rb_gc_mark(p->parser_lex_input);
    rb_gc_mark(p->parser_lex_lastline);
#ifndef RIPPER
    rb_gc_mark((VALUE)p->parser_eval_tree_begin) ;
    rb_gc_mark((VALUE)p->parser_eval_tree) ;
    rb_gc_mark(p->debug_lines);
#else
    rb_gc_mark(p->parser_ruby_sourcefile);
    rb_gc_mark(p->delayed);
    rb_gc_mark(p->result);
    rb_gc_mark(p->parsing_thread);
#endif
}

static void
parser_free(ptr)
    void *ptr;
{
    struct parser_params *p = (struct parser_params*)ptr;
    struct local_vars *local, *prev;

    if (p->parser_tokenbuf) {
        xfree(p->parser_tokenbuf);
    }
    for (local = p->parser_lvtbl; local; local = prev) {
	if (local->tbl && !local->nofree)
	    xfree(local->tbl);
	prev = local->prev;
	xfree(local);
    }
    xfree(p);
}

#ifndef RIPPER
static struct parser_params *
parser_new()
{
    struct parser_params *p;

    p = ALLOC_N(struct parser_params, 1);
    MEMZERO(p, struct parser_params, 1);
    parser_initialize(p);
    return p;
}

VALUE
rb_parser_new()
{
    struct parser_params *p = parser_new();

    return Data_Wrap_Struct(0, parser_mark, parser_free, p);
}

#endif
/*
 *  call-seq:
 *    ripper#end_seen?   -> Boolean
 *
 *  Return if parsed source ended by +\_\_END\_\_+.
 *  This number starts from 1.
 */
VALUE
rb_parser_end_seen_p(vparser)
    VALUE vparser;
{
    struct parser_params *parser;

    Data_Get_Struct(vparser, struct parser_params, parser);
    return ruby__end__seen ? Qtrue : Qfalse;
}

#ifdef RIPPER
#ifdef RIPPER_DEBUG
extern int rb_is_pointer_to_heap _((VALUE));

/* :nodoc: */
static VALUE
ripper_validate_object(self, x)
    VALUE self, x;
{
    if (x == Qfalse) return x;
    if (x == Qtrue) return x;
    if (x == Qnil) return x;
    if (x == Qundef)
        rb_raise(rb_eArgError, "Qundef given");
    if (FIXNUM_P(x)) return x;
    if (SYMBOL_P(x)) return x;
    if (!rb_is_pointer_to_heap(x))
        rb_raise(rb_eArgError, "invalid pointer: %p", x);
    switch (TYPE(x)) {
      case T_STRING:
      case T_OBJECT:
      case T_ARRAY:
      case T_BIGNUM:
      case T_FLOAT:
        return x;
      case T_NODE:
        rb_raise(rb_eArgError, "NODE given: %p", x);
      default:
        rb_raise(rb_eArgError, "wrong type of ruby object: %p (%s)",
                 x, rb_obj_classname(x));
    }
    return x;
}
#endif

#define validate(x)

static VALUE
ripper_dispatch0(parser, mid)
    struct parser_params *parser;
    ID mid;
{
    return rb_funcall(parser->value, mid, 0);
}

static VALUE
ripper_dispatch1(parser, mid, a)
    struct parser_params *parser;
    ID mid;
    VALUE a;
{
    validate(a);
    return rb_funcall(parser->value, mid, 1, a);
}

static VALUE
ripper_dispatch2(parser, mid, a, b)
    struct parser_params *parser;
    ID mid;
    VALUE a, b;
{
    validate(a);
    validate(b);
    return rb_funcall(parser->value, mid, 2, a, b);
}

static VALUE
ripper_dispatch3(parser, mid, a, b, c)
    struct parser_params *parser;
    ID mid;
    VALUE a, b, c;
{
    validate(a);
    validate(b);
    validate(c);
    return rb_funcall(parser->value, mid, 3, a, b, c);
}

static VALUE
ripper_dispatch4(parser, mid, a, b, c, d)
    struct parser_params *parser;
    ID mid;
    VALUE a, b, c, d;
{
    validate(a);
    validate(b);
    validate(c);
    validate(d);
    return rb_funcall(parser->value, mid, 4, a, b, c, d);
}

static VALUE
ripper_dispatch5(parser, mid, a, b, c, d, e)
    struct parser_params *parser;
    ID mid;
    VALUE a, b, c, d, e;
{
    validate(a);
    validate(b);
    validate(c);
    validate(d);
    validate(e);
    return rb_funcall(parser->value, mid, 5, a, b, c, d, e);
}

static struct kw_assoc {
    ID id;
    const char *name;
} keyword_to_name[] = {
    {kCLASS,	"class"},
    {kMODULE,	"module"},
    {kDEF,	"def"},
    {kUNDEF,	"undef"},
    {kBEGIN,	"begin"},
    {kRESCUE,	"rescue"},
    {kENSURE,	"ensure"},
    {kEND,	"end"},
    {kIF,	"if"},
    {kUNLESS,	"unless"},
    {kTHEN,	"then"},
    {kELSIF,	"elsif"},
    {kELSE,	"else"},
    {kCASE,	"case"},
    {kWHEN,	"when"},
    {kWHILE,	"while"},
    {kUNTIL,	"until"},
    {kFOR,	"for"},
    {kBREAK,	"break"},
    {kNEXT,	"next"},
    {kREDO,	"redo"},
    {kRETRY,	"retry"},
    {kIN,	"in"},
    {kDO,	"do"},
    {kDO_COND,	"do"},
    {kDO_BLOCK,	"do"},
    {kRETURN,	"return"},
    {kYIELD,	"yield"},
    {kSUPER,	"super"},
    {kSELF,	"self"},
    {kNIL,	"nil"},
    {kTRUE,	"true"},
    {kFALSE,	"false"},
    {kAND,	"and"},
    {kOR,	"or"},
    {kNOT,	"not"},
    {kIF_MOD,	"if"},
    {kUNLESS_MOD,	"unless"},
    {kWHILE_MOD,	"while"},
    {kUNTIL_MOD,	"until"},
    {kRESCUE_MOD,	"rescue"},
    {kALIAS,	"alias"},
    {kDEFINED,	"defined"},
    {klBEGIN,	"BEGIN"},
    {klEND,	"END"},
    {k__LINE__,	"__LINE__"},
    {k__FILE__,	"__FILE__"},
    {0, NULL}
};

static const char*
keyword_id_to_str(id)
    ID id;
{
    struct kw_assoc *a;

    for (a = keyword_to_name; a->id; a++) {
        if (a->id == id)
            return a->name;
    }
    return NULL;
}

static VALUE
ripper_id2sym(id)
    ID id;
{
    const char *name;
    char buf[8];

    if (id <= 256) {
        buf[0] = id;
        buf[1] = '\0';
        return ID2SYM(rb_intern(buf));
    }
    if ((name = keyword_id_to_str(id))) {
        return ID2SYM(rb_intern(name));
    }
    switch (id) {
    case tOROP:
        name = "||";
        break;
    case tANDOP:
        name = "&&";
        break;
    default:
        name = rb_id2name(id);
        if (!name) {
            rb_bug("cannot convert ID to string: %ld", (unsigned long)id);
        }
        break;
    }
    return ID2SYM(rb_intern(name));
}

static VALUE
ripper_intern(s)
    const char *s;
{
    return ID2SYM(rb_intern(s));
}

#ifdef HAVE_STDARG_PROTOTYPES
# include <stdarg.h>
# define va_init_list(a,b) va_start(a,b)
#else
# include <varargs.h>
# define va_init_list(a,b) va_start(a)
#endif

static void
#ifdef HAVE_STDARG_PROTOTYPES
ripper_compile_error(struct parser_params *parser, const char *fmt, ...)
#else
ripper_compile_error(parser, fmt, va_alist)
    struct parser_params *parser;
    const char *fmt;
    va_dcl
#endif
{
    char buf[BUFSIZ];
    va_list args;

    va_init_list(args, fmt);
    vsnprintf(buf, BUFSIZ, fmt, args);
    va_end(args);
    rb_funcall(parser->value, rb_intern("compile_error"), 1, rb_str_new2(buf));
}

static void
ripper_warn0(parser, fmt)
    struct parser_params *parser;
    const char *fmt;
{
    rb_funcall(parser->value, rb_intern("warn"), 1, rb_str_new2(fmt));
}

static void
ripper_warnI(parser, fmt, a)
    struct parser_params *parser;
    const char *fmt;
    int a;
{
    rb_funcall(parser->value, rb_intern("warn"), 2,
               rb_str_new2(fmt), INT2NUM(a));
}

static void
ripper_warnS(parser, fmt, str)
    struct parser_params *parser;
    const char *fmt;
    const char *str;
{
    rb_funcall(parser->value, rb_intern("warn"), 2,
    	       rb_str_new2(fmt), rb_str_new2(str));
}

static void
ripper_warning0(parser, fmt)
    struct parser_params *parser;
    const char *fmt;
{
    rb_funcall(parser->value, rb_intern("warning"), 1, rb_str_new2(fmt));
}

static void
ripper_warningS(parser, fmt, str)
    struct parser_params *parser;
    const char *fmt;
    const char *str;
{
    rb_funcall(parser->value, rb_intern("warning"), 2,
    	       rb_str_new2(fmt), rb_str_new2(str));
}

static VALUE ripper_lex_get_generic _((struct parser_params *, VALUE));

static VALUE
ripper_lex_get_generic(parser, src)
    struct parser_params *parser;
    VALUE src;
{
    return rb_funcall(src, ripper_id_gets, 0);
}

static VALUE ripper_s_allocate _((VALUE));

static VALUE
ripper_s_allocate(klass)
    VALUE klass;
{
    struct parser_params *p;
    VALUE self;

    p = ALLOC_N(struct parser_params, 1);
    MEMZERO(p, struct parser_params, 1);
    self = Data_Wrap_Struct(klass, parser_mark, parser_free, p);
    p->value = self;
    return self;
}

static int
obj_respond_to(obj, mid)
    VALUE obj, mid;
{
    VALUE st;

    st = rb_funcall(obj, rb_intern("respond_to?"), 2, mid, Qfalse);
    return RTEST(st);
}

#define ripper_initialized_p(r) ((r)->parser_lex_input != 0)

/*
 *  call-seq:
 *    Ripper.new(src, filename="(ripper)", lineno=1) -> ripper
 *
 *  Create a new Ripper object.
 *  _src_ must be a String, a IO, or an Object which has #gets method.
 *
 *  This method does not starts parsing.
 *  See also Ripper#parse and Ripper.parse.
 */
static VALUE
ripper_initialize(argc, argv, self)
    int argc;
    VALUE *argv;
    VALUE self;
{
    struct parser_params *parser;
    VALUE src, fname, lineno;

    Data_Get_Struct(self, struct parser_params, parser);
    rb_scan_args(argc, argv, "12", &src, &fname, &lineno);
    if (obj_respond_to(src, ID2SYM(ripper_id_gets))) {
        parser->parser_lex_gets = ripper_lex_get_generic;
    }
    else {
        StringValue(src);
        parser->parser_lex_gets = lex_get_str;
    }
    parser->parser_lex_input = src;
    parser->eofp = Qfalse;
    if (NIL_P(fname)) {
        fname = rb_str_new2("(ripper)");
    }
    else {
        StringValue(fname);
    }
    parser_initialize(parser);
    parser->parser_ruby_sourcefile = fname;
    parser->parser_ruby_sourceline = NIL_P(lineno) ? 0 : NUM2INT(lineno) - 1;

    return Qnil;
}

/*
 *  call-seq:
 *    Ripper.yydebug   -> true or false
 *
 *  Get yydebug.
 */
static VALUE
ripper_s_get_yydebug(self)
    VALUE self;
{
    return ripper_yydebug ? Qtrue : Qfalse;
}

/*
 *  call-seq:
 *    Ripper.yydebug = flag
 *
 *  Set yydebug.
 */
static VALUE
ripper_s_set_yydebug(self, flag)
    VALUE self, flag;
{
    ripper_yydebug = RTEST(flag);
    return flag;
}

extern VALUE rb_thread_pass _((void));

struct ripper_args {
    struct parser_params *parser;
    int argc;
    VALUE *argv;
};

static VALUE
ripper_parse0(parser_v)
    VALUE parser_v;
{
    struct parser_params *parser;

    Data_Get_Struct(parser_v, struct parser_params, parser);
    parser_prepare(parser);
    ripper_yyparse((void*)parser);
    return parser->result;
}

static VALUE
ripper_ensure(parser_v)
    VALUE parser_v;
{
    struct parser_params *parser;

    Data_Get_Struct(parser_v, struct parser_params, parser);
    parser->parsing_thread = Qnil;
    return Qnil;
}

/*
 *  call-seq:
 *    ripper#parse
 *
 *  Start parsing and returns the value of the root action.
 */
static VALUE
ripper_parse(self)
    VALUE self;
{
    struct parser_params *parser;

    Data_Get_Struct(self, struct parser_params, parser);
    if (!ripper_initialized_p(parser)) {
        rb_raise(rb_eArgError, "method called for uninitialized object");
    }
    if (!NIL_P(parser->parsing_thread)) {
        if (parser->parsing_thread == rb_thread_current())
            rb_raise(rb_eArgError, "Ripper#parse is not reentrant");
        else
            rb_raise(rb_eArgError, "Ripper#parse is not multithread-safe");
    }
    parser->parsing_thread = rb_thread_current();
    rb_ensure(ripper_parse0, self, ripper_ensure, self);

    return parser->result;
}

/*
 *  call-seq:
 *    ripper#column   -> Integer
 *
 *  Return column number of current parsing line.
 *  This number starts from 0.
 */
static VALUE
ripper_column(self)
    VALUE self;
{
    struct parser_params *parser;
    long col;

    Data_Get_Struct(self, struct parser_params, parser);
    if (!ripper_initialized_p(parser)) {
        rb_raise(rb_eArgError, "method called for uninitialized object");
    }
    if (NIL_P(parser->parsing_thread)) return Qnil;
    col = parser->tokp - parser->parser_lex_pbeg;
    return LONG2NUM(col);
}

/*
 *  call-seq:
 *    ripper#lineno   -> Integer
 *
 *  Return line number of current parsing line.
 *  This number starts from 1.
 */
static VALUE
ripper_lineno(self)
    VALUE self;
{
    struct parser_params *parser;

    Data_Get_Struct(self, struct parser_params, parser);
    if (!ripper_initialized_p(parser)) {
        rb_raise(rb_eArgError, "method called for uninitialized object");
    }
    if (NIL_P(parser->parsing_thread)) return Qnil;
    return INT2NUM(parser->parser_ruby_sourceline);
}

#ifdef RIPPER_DEBUG
/* :nodoc: */
static VALUE
ripper_assert_Qundef(self, obj, msg)
    VALUE self, obj, msg;
{
    StringValue(msg);
    if (obj == Qundef) {
        rb_raise(rb_eArgError, RSTRING(msg)->ptr);
    }
    return Qnil;
}

/* :nodoc: */
static VALUE
ripper_value(self, obj)
    VALUE self, obj;
{
    return ULONG2NUM(obj);
}
#endif

void
Init_ripper()
{
    VALUE Ripper;

    Ripper = rb_define_class("Ripper", rb_cObject);
    rb_define_const(Ripper, "Version", rb_str_new2(RIPPER_VERSION));
    rb_define_singleton_method(Ripper, "yydebug", ripper_s_get_yydebug, 0);
    rb_define_singleton_method(Ripper, "yydebug=", ripper_s_set_yydebug, 1);
    rb_define_alloc_func(Ripper, ripper_s_allocate);
    rb_define_method(Ripper, "initialize", ripper_initialize, -1);
    rb_define_method(Ripper, "parse", ripper_parse, 0);
    rb_define_method(Ripper, "column", ripper_column, 0);
    rb_define_method(Ripper, "lineno", ripper_lineno, 0);
    rb_define_method(Ripper, "end_seen?", rb_parser_end_seen_p, 0);
#ifdef RIPPER_DEBUG
    rb_define_method(rb_mKernel, "assert_Qundef", ripper_assert_Qundef, 2);
    rb_define_method(rb_mKernel, "rawVALUE", ripper_value, 1);
    rb_define_method(rb_mKernel, "validate_object", ripper_validate_object, 1);
#endif

    ripper_id_gets = rb_intern("gets");
    ripper_init_eventids1();
    ripper_init_eventids2();
    /* ensure existing in symbol table */
    rb_intern("||");
    rb_intern("&&");
}
#endif /* RIPPER */


