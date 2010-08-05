#define tIGNORED_NL      (tLAST_TOKEN + 1)
#define tCOMMENT         (tLAST_TOKEN + 2)
#define tEMBDOC_BEG      (tLAST_TOKEN + 3)
#define tEMBDOC          (tLAST_TOKEN + 4)
#define tEMBDOC_END      (tLAST_TOKEN + 5)
#define tSP              (tLAST_TOKEN + 6)
#define tHEREDOC_BEG     (tLAST_TOKEN + 7)
#define tHEREDOC_END     (tLAST_TOKEN + 8)
#define k__END__         (tLAST_TOKEN + 9)
#define tCHAR            (tLAST_TOKEN + 10)

static ID ripper_id_backref;
static ID ripper_id_backtick;
static ID ripper_id_comma;
static ID ripper_id_const;
static ID ripper_id_cvar;
static ID ripper_id_embexpr_beg;
static ID ripper_id_embexpr_end;
static ID ripper_id_embvar;
static ID ripper_id_float;
static ID ripper_id_gvar;
static ID ripper_id_ident;
static ID ripper_id_int;
static ID ripper_id_ivar;
static ID ripper_id_kw;
static ID ripper_id_lbrace;
static ID ripper_id_lbracket;
static ID ripper_id_lparen;
static ID ripper_id_nl;
static ID ripper_id_op;
static ID ripper_id_period;
static ID ripper_id_rbrace;
static ID ripper_id_rbracket;
static ID ripper_id_rparen;
static ID ripper_id_semicolon;
static ID ripper_id_symbeg;
static ID ripper_id_tstring_beg;
static ID ripper_id_tstring_content;
static ID ripper_id_tstring_end;
static ID ripper_id_words_beg;
static ID ripper_id_qwords_beg;
static ID ripper_id_words_sep;
static ID ripper_id_regexp_beg;
static ID ripper_id_regexp_end;
static ID ripper_id_label;
static ID ripper_id_lambda;
static ID ripper_id_lambda_arg;
static ID ripper_id_lambeg;

static ID ripper_id_ignored_nl;
static ID ripper_id_comment;
static ID ripper_id_embdoc_beg;
static ID ripper_id_embdoc;
static ID ripper_id_embdoc_end;
static ID ripper_id_sp;
static ID ripper_id_heredoc_beg;
static ID ripper_id_heredoc_end;
static ID ripper_id___end__;
static ID ripper_id_CHAR;

static void
ripper_init_eventids2()
{
    ripper_id_backref = rb_intern("on_backref");
    ripper_id_backtick = rb_intern("on_backtick");
    ripper_id_comma = rb_intern("on_comma");
    ripper_id_const = rb_intern("on_const");
    ripper_id_cvar = rb_intern("on_cvar");
    ripper_id_embexpr_beg = rb_intern("on_embexpr_beg");
    ripper_id_embexpr_end = rb_intern("on_embexpr_end");
    ripper_id_embvar = rb_intern("on_embvar");
    ripper_id_float = rb_intern("on_float");
    ripper_id_gvar = rb_intern("on_gvar");
    ripper_id_ident = rb_intern("on_ident");
    ripper_id_int = rb_intern("on_int");
    ripper_id_ivar = rb_intern("on_ivar");
    ripper_id_kw = rb_intern("on_kw");
    ripper_id_lbrace = rb_intern("on_lbrace");
    ripper_id_lbracket = rb_intern("on_lbracket");
    ripper_id_lparen = rb_intern("on_lparen");
    ripper_id_nl = rb_intern("on_nl");
    ripper_id_op = rb_intern("on_op");
    ripper_id_period = rb_intern("on_period");
    ripper_id_rbrace = rb_intern("on_rbrace");
    ripper_id_rbracket = rb_intern("on_rbracket");
    ripper_id_rparen = rb_intern("on_rparen");
    ripper_id_semicolon = rb_intern("on_semicolon");
    ripper_id_symbeg = rb_intern("on_symbeg");
    ripper_id_tstring_beg = rb_intern("on_tstring_beg");
    ripper_id_tstring_content = rb_intern("on_tstring_content");
    ripper_id_tstring_end = rb_intern("on_tstring_end");
    ripper_id_words_beg = rb_intern("on_words_beg");
    ripper_id_qwords_beg = rb_intern("on_qwords_beg");
    ripper_id_words_sep = rb_intern("on_words_sep");
    ripper_id_regexp_beg = rb_intern("on_regexp_beg");
    ripper_id_regexp_end = rb_intern("on_regexp_end");
    ripper_id_label = rb_intern("on_label");
    ripper_id_lambda = rb_intern("on_lambda");
    ripper_id_lambda_arg = rb_intern("on_lambda_arg");
    ripper_id_lambeg = rb_intern("on_lambeg");

    ripper_id_ignored_nl = rb_intern("on_ignored_nl");
    ripper_id_comment = rb_intern("on_comment");
    ripper_id_embdoc_beg = rb_intern("on_embdoc_beg");
    ripper_id_embdoc = rb_intern("on_embdoc");
    ripper_id_embdoc_end = rb_intern("on_embdoc_end");
    ripper_id_sp = rb_intern("on_sp");
    ripper_id_heredoc_beg = rb_intern("on_heredoc_beg");
    ripper_id_heredoc_end = rb_intern("on_heredoc_end");
    ripper_id___end__ = rb_intern("on___end__");
    ripper_id_CHAR = rb_intern("on_CHAR");
}

static struct token_assoc {
    int token;
    ID *id;
} token_to_eventid[] = {
    {' ',		&ripper_id_words_sep},
    {'!',		&ripper_id_op},
    {'%',		&ripper_id_op},
    {'&',		&ripper_id_op},
    {'*',		&ripper_id_op},
    {'+',		&ripper_id_op},
    {'-',		&ripper_id_op},
    {'/',		&ripper_id_op},
    {'<',		&ripper_id_op},
    {'=',		&ripper_id_op},
    {'>',		&ripper_id_op},
    {'?',		&ripper_id_op},
    {'^',		&ripper_id_op},
    {'|',		&ripper_id_op},
    {'~',		&ripper_id_op},
    {':',		&ripper_id_op},
    {',',		&ripper_id_comma},
    {'.',		&ripper_id_period},
    {';',		&ripper_id_semicolon},
    {'`',		&ripper_id_backtick},
    {'\n',              &ripper_id_nl},
    {kALIAS,		&ripper_id_kw},
    {kAND,		&ripper_id_kw},
    {kBEGIN,		&ripper_id_kw},
    {kBREAK,		&ripper_id_kw},
    {kCASE,		&ripper_id_kw},
    {kCLASS,		&ripper_id_kw},
    {kDEF,		&ripper_id_kw},
    {kDEFINED,		&ripper_id_kw},
    {kDO,		&ripper_id_kw},
    {kDO_BLOCK,		&ripper_id_kw},
    {kDO_COND,		&ripper_id_kw},
    {kELSE,		&ripper_id_kw},
    {kELSIF,		&ripper_id_kw},
    {kEND,		&ripper_id_kw},
    {kENSURE,		&ripper_id_kw},
    {kFALSE,		&ripper_id_kw},
    {kFOR,		&ripper_id_kw},
    {kIF,		&ripper_id_kw},
    {kIF_MOD,		&ripper_id_kw},
    {kIN,		&ripper_id_kw},
    {kMODULE,		&ripper_id_kw},
    {kNEXT,		&ripper_id_kw},
    {kNIL,		&ripper_id_kw},
    {kNOT,		&ripper_id_kw},
    {kOR,		&ripper_id_kw},
    {kREDO,		&ripper_id_kw},
    {kRESCUE,		&ripper_id_kw},
    {kRESCUE_MOD,	&ripper_id_kw},
    {kRETRY,		&ripper_id_kw},
    {kRETURN,		&ripper_id_kw},
    {kSELF,		&ripper_id_kw},
    {kSUPER,		&ripper_id_kw},
    {kTHEN,		&ripper_id_kw},
    {kTRUE,		&ripper_id_kw},
    {kUNDEF,		&ripper_id_kw},
    {kUNLESS,		&ripper_id_kw},
    {kUNLESS_MOD,	&ripper_id_kw},
    {kUNTIL,		&ripper_id_kw},
    {kUNTIL_MOD,	&ripper_id_kw},
    {kWHEN,		&ripper_id_kw},
    {kWHILE,		&ripper_id_kw},
    {kWHILE_MOD,	&ripper_id_kw},
    {kYIELD,		&ripper_id_kw},
    {k__FILE__,		&ripper_id_kw},
    {k__LINE__,		&ripper_id_kw},
    {klBEGIN,		&ripper_id_kw},
    {klEND,		&ripper_id_kw},
    {tAMPER,		&ripper_id_op},
    {tANDOP,		&ripper_id_op},
    {tAREF,		&ripper_id_op},
    {tASET,		&ripper_id_op},
    {tASSOC,		&ripper_id_op},
    {tBACK_REF,		&ripper_id_backref},
    {tCMP,		&ripper_id_op},
    {tCOLON2,		&ripper_id_op},
    {tCOLON3,		&ripper_id_op},
    {tCONSTANT,		&ripper_id_const},
    {tCVAR,		&ripper_id_cvar},
    {tDOT2,		&ripper_id_op},
    {tDOT3,		&ripper_id_op},
    {tEQ,		&ripper_id_op},
    {tEQQ,		&ripper_id_op},
    {tFID,		&ripper_id_ident},
    {tFLOAT,		&ripper_id_float},
    {tGEQ,		&ripper_id_op},
    {tGVAR,		&ripper_id_gvar},
    {tIDENTIFIER,	&ripper_id_ident},
    {tINTEGER,		&ripper_id_int},
    {tIVAR,		&ripper_id_ivar},
    {tLBRACE,		&ripper_id_lbrace},
    {tLBRACE_ARG,	&ripper_id_lbrace},
    {'{',       	&ripper_id_lbrace},
    {'}',       	&ripper_id_rbrace},
    {tLBRACK,		&ripper_id_lbracket},
    {'[',       	&ripper_id_lbracket},
    {']',       	&ripper_id_rbracket},
    {tLEQ,		&ripper_id_op},
    {tLPAREN,		&ripper_id_lparen},
    {tLPAREN_ARG,	&ripper_id_lparen},
    {'(',		&ripper_id_lparen},
    {')',		&ripper_id_rparen},
    {tLSHFT,		&ripper_id_op},
    {tMATCH,		&ripper_id_op},
    {tNEQ,		&ripper_id_op},
    {tNMATCH,		&ripper_id_op},
    {tNTH_REF,		&ripper_id_backref},
    {tOP_ASGN,		&ripper_id_op},
    {tOROP,		&ripper_id_op},
    {tPOW,		&ripper_id_op},
    {tQWORDS_BEG,	&ripper_id_qwords_beg},
    {tREGEXP_BEG,	&ripper_id_regexp_beg},
    {tREGEXP_END,	&ripper_id_regexp_end},
    {tRPAREN,		&ripper_id_rparen},
    {tRSHFT,		&ripper_id_op},
    {tSTAR,		&ripper_id_op},
    {tSTRING_BEG,	&ripper_id_tstring_beg},
    {tSTRING_CONTENT,	&ripper_id_tstring_content},
    {tSTRING_DBEG,	&ripper_id_embexpr_beg},
    {tSTRING_DVAR,	&ripper_id_embvar},
    {tSTRING_END,	&ripper_id_tstring_end},
    {tSYMBEG,		&ripper_id_symbeg},
    {tUMINUS,		&ripper_id_op},
    {tUMINUS_NUM,	&ripper_id_op},
    {tUPLUS,		&ripper_id_op},
    {tWORDS_BEG,	&ripper_id_words_beg},
    {tXSTRING_BEG,	&ripper_id_backtick},
    {tLABEL,		&ripper_id_label},
    {tLAMBDA,		&ripper_id_lambda},
    {tLAMBDA_ARG,	&ripper_id_lambda_arg},
    {tLAMBEG,		&ripper_id_lambeg},

    /* ripper specific tokens */
    {tIGNORED_NL,       &ripper_id_ignored_nl},
    {tCOMMENT,          &ripper_id_comment},
    {tEMBDOC_BEG,       &ripper_id_embdoc_beg},
    {tEMBDOC,           &ripper_id_embdoc},
    {tEMBDOC_END,       &ripper_id_embdoc_end},
    {tSP,               &ripper_id_sp},
    {tHEREDOC_BEG,      &ripper_id_heredoc_beg},
    {tHEREDOC_END,      &ripper_id_heredoc_end},
    {k__END__,          &ripper_id___end__},
    {0, NULL}
};

static ID
ripper_token2eventid(tok)
    int tok;
{
    struct token_assoc *a;

    for (a = token_to_eventid; a->id != NULL; a++) {
        if (a->token == tok)
            return *a->id;
    }
    if (tok < 256) {
        return ripper_id_CHAR;
    }
    rb_raise(rb_eRuntimeError, "[Ripper FATAL] unknown token %d", tok);
}
