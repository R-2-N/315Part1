/* original parser id follows */
/* yysccsid[] = "@(#)yaccpar	1.9 (Berkeley) 02/21/93" */
/* (use YYMAJOR/YYMINOR for ifdefs dependent on parser version) */

#define YYBYACC 1
#define YYMAJOR 1
#define YYMINOR 9
#define YYPATCH 20170709

#define YYEMPTY        (-1)
#define yyclearin      (yychar = YYEMPTY)
#define yyerrok        (yyerrflag = 0)
#define YYRECOVERING() (yyerrflag != 0)
#define YYENOMEM       (-2)
#define YYEOF          0
#define YYPREFIX "yy"

#define YYPURE 0


#if ! defined(YYSTYPE) && ! defined(YYSTYPE_IS_DECLARED)
/* Default: YYSTYPE is the semantic value type. */
typedef int YYSTYPE;
# define YYSTYPE_IS_DECLARED 1
#endif

/* compatibility with bison */
#ifdef YYPARSE_PARAM
/* compatibility with FreeBSD */
# ifdef YYPARSE_PARAM_TYPE
#  define YYPARSE_DECL() yyparse(YYPARSE_PARAM_TYPE YYPARSE_PARAM)
# else
#  define YYPARSE_DECL() yyparse(void *YYPARSE_PARAM)
# endif
#else
# define YYPARSE_DECL() yyparse(void)
#endif

/* Parameters sent to lex. */
#ifdef YYLEX_PARAM
# define YYLEX_DECL() yylex(void *YYLEX_PARAM)
# define YYLEX yylex(YYLEX_PARAM)
#else
# define YYLEX_DECL() yylex(void)
# define YYLEX yylex()
#endif

/* Parameters sent to yyerror. */
#ifndef YYERROR_DECL
#define YYERROR_DECL() yyerror(const char *s)
#endif
#ifndef YYERROR_CALL
#define YYERROR_CALL(msg) yyerror(msg)
#endif

extern int YYPARSE_DECL();

#define SEMICOLON 257
#define COMMENT 258
#define IF 259
#define DO 260
#define LBRACE 261
#define RBRACE 262
#define ELSE 263
#define WHILE 264
#define FOR 265
#define DEF 266
#define VARIABLE 267
#define LP 268
#define RP 269
#define RETURN 270
#define COMMA 271
#define TYPE 272
#define CONTINUE 273
#define BOOLEAN 274
#define LESSER 275
#define LARGER 276
#define LESSER_EQ 277
#define LARGER_EQ 278
#define EQUALS 279
#define NOT_EQUALS 280
#define AND 281
#define OR 282
#define XOR 283
#define BREAK 284
#define ASSIGNMENT 285
#define MINUS 286
#define PLUS 287
#define DIVISION 288
#define MULTIPLICATION 289
#define MODULUS 290
#define NOT 291
#define INTEGER 292
#define FLOAT 293
#define STRING 294
#define PRIMITIVE_FUNCTION 295
#define YYERRCODE 256
typedef short YYINT;
static const YYINT yylhs[] = {                           -1,
    0,    0,    0,    0,    1,    1,    2,    2,    3,    3,
    3,    3,    3,    3,    5,    5,    9,    9,    6,    6,
   11,   12,    7,   14,   14,   14,    8,    4,    4,   10,
   10,   16,   16,   16,   16,   16,   16,   16,   16,   16,
   13,   13,   17,   17,   19,   19,   21,   21,   21,   18,
   18,   20,   20,   20,   22,   23,   23,   23,   23,   23,
   23,   25,   25,   24,   26,   26,   26,   15,
};
static const YYINT yylen[] = {                            2,
    2,    2,    1,    1,    4,    2,    1,    1,    1,    1,
    1,    1,    1,    1,    2,    6,    5,    7,    1,    1,
    6,   12,   13,    3,    1,    1,    2,    1,    1,    3,
    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
    3,    3,    3,    1,    3,    1,    2,    3,    1,    1,
    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
    1,    1,    1,    4,    3,    1,    1,    0,
};
static const YYINT yydefred[] = {                         0,
    3,    0,    0,    0,    0,    0,    0,    0,   14,   61,
   13,   55,   58,   59,   60,   63,    0,    0,    0,    7,
    8,    0,   10,   11,    0,    0,   19,   20,   29,    0,
    0,   46,    0,   49,   56,    0,    0,    0,    0,    0,
    0,    0,    0,    0,   27,    2,    0,    0,    6,    0,
   15,    0,   32,   33,   34,   35,   36,   37,   38,   39,
   40,    0,   50,   51,    0,   52,   53,   54,    0,   47,
    0,    0,    0,    0,    0,    0,   42,   48,    0,    0,
    0,   41,    0,    0,   45,    0,   67,    0,    0,    0,
    0,    0,    0,   26,    5,    0,    0,    0,   64,    0,
    0,    0,    0,    0,    0,    0,   65,   16,   21,    0,
   24,    0,    0,   17,    0,    0,    0,    0,    0,   18,
    0,    0,    0,    0,    0,    0,   22,    0,   23,
};
static const YYINT yydgoto[] = {                         17,
   18,   19,   20,   21,   22,   23,   24,   25,   51,   26,
   27,   28,   29,   93,   87,   62,   30,   65,   31,   69,
   32,   33,   34,   35,   36,   88,
};
static const YYINT yysindex[] = {                      -248,
    0,  -57, -239, -262, -244, -235,  -57, -226,    0,    0,
    0,    0,    0,    0,    0,    0, -154, -192, -180,    0,
    0, -185,    0,    0, -206,  143,    0,    0,    0, -256,
 -275,    0,  -57,    0,    0, -188,    0,  105, -179, -206,
 -245, -184, -239,  134,    0,    0, -192, -117,    0, -187,
    0, -239,    0,    0,    0,    0,    0,    0,    0,    0,
    0,  -57,    0,    0,  -57,    0,    0,    0,  -57,    0,
 -239, -176, -175, -235, -170, -178,    0,    0, -166,  -57,
 -169,    0, -256, -275,    0, -177,    0, -173, -117, -117,
 -239, -171, -168,    0,    0,  119, -117, -239,    0, -225,
 -199, -164, -178, -162, -158, -198,    0,    0,    0, -245,
    0, -155, -117,    0, -161, -117, -196, -145, -249,    0,
 -144, -152, -117, -239, -195, -147,    0, -138,    0,
};
static const YYINT yyrindex[] = {                         0,
    0,    0,    0,    0,    0,  -89,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    1,    0,    0,
    0, -132,    0,    0, -131, -200,    0,    0,    0,  -27,
  -55,    0,    0,    0,    0,    0,  -89,    0,    0,    0,
    0,    0,    0,    0,    0,    0,   39,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
 -142,    0,    0,    0,    0, -142,    0,    0,    0,    0,
    0,    0,   95,   67,    0, -141,    0,    0,    0,    0,
    0, -140,    0,    0,    0,    0,    0, -142,    0,    0,
    0,    0, -142,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,
};
static const YYINT yygindex[] = {                         0,
  -14,   83,    0,   -1,    0,    0,    0,   -3,    0,    2,
    0,    0,  -36,   29,  -69,    0,   71,    0,   69,    0,
  -21,    0,    0,    0,    0,   37,
};
#define YYTABLESIZE 426
static const YYINT yytable[] = {                         40,
    4,   39,   47,   38,   75,   41,   94,   48,   44,    1,
    2,   70,   66,   67,   68,    3,    4,    5,    6,    7,
  122,   74,   42,    8,    9,   10,    8,    6,    7,   63,
   64,   48,    8,   94,   10,   11,  108,   40,    1,   40,
   45,   77,   12,   13,   14,   15,   16,   85,   40,   43,
   82,   12,   13,   14,   15,   16,   28,   48,   48,   28,
   48,   48,  109,  114,   48,  120,  127,   40,   28,   86,
   28,   80,   81,  115,  100,  101,   49,   50,   52,   71,
   73,   96,  106,   76,   89,   90,   91,   40,   92,  102,
   95,   97,  110,   98,   40,   99,   86,  112,  117,  103,
  104,  119,  113,   46,    2,  116,   40,  118,  125,    3,
    4,    5,    6,    7,  121,  124,  123,    8,    9,   10,
   40,  128,  126,  129,    9,   12,   68,   66,   25,   11,
   79,  111,   83,   84,  107,    0,   12,   13,   14,   15,
   16,    2,    0,    0,    0,    0,    3,    4,    5,    6,
    7,    0,    0,    0,    8,    9,   10,    0,    0,    0,
    0,    0,    0,    0,    0,    0,   11,   57,    0,    0,
   57,    0,    0,   12,   13,   14,   15,   16,   62,   57,
    0,   57,    0,    0,    0,   57,   57,   57,   57,   57,
   57,   57,   57,   57,    0,    0,   57,   57,   57,   57,
   57,   44,    0,    0,   44,    0,    0,    0,    0,   37,
    7,    0,    0,   44,    0,   44,   10,    0,    0,   44,
   44,   44,   44,   44,   44,   44,   44,   44,    0,   31,
   44,   44,   31,   12,   13,   14,   15,   16,    0,    0,
    0,   31,    0,   31,    0,    0,    0,   31,   31,   31,
   31,   31,   31,   31,   31,   31,    0,    0,    4,    4,
    0,    0,    0,    0,    4,    4,    4,    4,    4,    0,
    0,    0,    4,    4,    4,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    4,    0,    0,    0,    0,    0,
    0,    4,    4,    4,    4,    4,    1,    1,    0,    0,
    0,    0,    1,    1,    1,    1,    1,    0,    0,    0,
    1,    1,    1,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    1,   43,    0,    0,   43,    0,    0,    1,
    1,    1,    1,    1,    0,   43,    0,   43,    0,    0,
    0,   43,   43,   43,   43,   43,   43,   43,   43,   43,
    0,   30,   43,   43,   30,    0,    0,    0,    0,    0,
    0,    0,    0,   30,   72,   30,    0,    0,    0,   30,
   30,   30,   30,   30,   30,   30,   30,   30,  105,   53,
   54,   55,   56,   57,   58,   59,   60,   61,    0,    0,
    0,    0,    0,   53,   54,   55,   56,   57,   58,   59,
   60,   61,   78,    0,    0,    0,    0,    0,   53,   54,
   55,   56,   57,   58,   59,   60,   61,   53,   54,   55,
   56,   57,   58,   59,   60,   61,
};
static const YYINT yycheck[] = {                          3,
    0,    3,   17,    2,   41,  268,   76,  257,    7,  258,
  259,   33,  288,  289,  290,  264,  265,  266,  267,  268,
  270,  267,  267,  272,  273,  274,  272,  267,  268,  286,
  287,  257,  272,  103,  274,  284,  262,   41,    0,   43,
  267,   43,  291,  292,  293,  294,  295,   69,   52,  285,
   52,  291,  292,  293,  294,  295,  257,  257,  257,  260,
  257,  257,  262,  262,  257,  262,  262,   71,  269,   71,
  271,  259,  260,  110,   89,   90,  257,  263,  285,  268,
  260,   80,   97,  268,  261,  261,  257,   91,  267,   91,
  257,  261,  257,  271,   98,  269,   98,  260,  113,  271,
  269,  116,  261,  258,  259,  261,  110,  269,  123,  264,
  265,  266,  267,  268,  260,  268,  261,  272,  273,  274,
  124,  269,  124,  262,  257,  257,  269,  269,  269,  284,
   48,  103,   62,   65,   98,   -1,  291,  292,  293,  294,
  295,  259,   -1,   -1,   -1,   -1,  264,  265,  266,  267,
  268,   -1,   -1,   -1,  272,  273,  274,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,  284,  257,   -1,   -1,
  260,   -1,   -1,  291,  292,  293,  294,  295,  268,  269,
   -1,  271,   -1,   -1,   -1,  275,  276,  277,  278,  279,
  280,  281,  282,  283,   -1,   -1,  286,  287,  288,  289,
  290,  257,   -1,   -1,  260,   -1,   -1,   -1,   -1,  267,
  268,   -1,   -1,  269,   -1,  271,  274,   -1,   -1,  275,
  276,  277,  278,  279,  280,  281,  282,  283,   -1,  257,
  286,  287,  260,  291,  292,  293,  294,  295,   -1,   -1,
   -1,  269,   -1,  271,   -1,   -1,   -1,  275,  276,  277,
  278,  279,  280,  281,  282,  283,   -1,   -1,  258,  259,
   -1,   -1,   -1,   -1,  264,  265,  266,  267,  268,   -1,
   -1,   -1,  272,  273,  274,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,  284,   -1,   -1,   -1,   -1,   -1,
   -1,  291,  292,  293,  294,  295,  258,  259,   -1,   -1,
   -1,   -1,  264,  265,  266,  267,  268,   -1,   -1,   -1,
  272,  273,  274,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,  284,  257,   -1,   -1,  260,   -1,   -1,  291,
  292,  293,  294,  295,   -1,  269,   -1,  271,   -1,   -1,
   -1,  275,  276,  277,  278,  279,  280,  281,  282,  283,
   -1,  257,  286,  287,  260,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,  269,  260,  271,   -1,   -1,   -1,  275,
  276,  277,  278,  279,  280,  281,  282,  283,  260,  275,
  276,  277,  278,  279,  280,  281,  282,  283,   -1,   -1,
   -1,   -1,   -1,  275,  276,  277,  278,  279,  280,  281,
  282,  283,  269,   -1,   -1,   -1,   -1,   -1,  275,  276,
  277,  278,  279,  280,  281,  282,  283,  275,  276,  277,
  278,  279,  280,  281,  282,  283,
};
#define YYFINAL 17
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 295
#define YYUNDFTOKEN 324
#define YYTRANSLATE(a) ((a) > YYMAXTOKEN ? YYUNDFTOKEN : (a))
#if YYDEBUG
static const char *const yyname[] = {

"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"SEMICOLON","COMMENT","IF","DO",
"LBRACE","RBRACE","ELSE","WHILE","FOR","DEF","VARIABLE","LP","RP","RETURN",
"COMMA","TYPE","CONTINUE","BOOLEAN","LESSER","LARGER","LESSER_EQ","LARGER_EQ",
"EQUALS","NOT_EQUALS","AND","OR","XOR","BREAK","ASSIGNMENT","MINUS","PLUS",
"DIVISION","MULTIPLICATION","MODULUS","NOT","INTEGER","FLOAT","STRING",
"PRIMITIVE_FUNCTION",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
"illegal-symbol",
};
static const char *const yyrule[] = {
"$accept : program",
"program : program statement_list",
"program : program COMMENT",
"program : COMMENT",
"program : statement_list",
"statement_list : statement_list SEMICOLON statement SEMICOLON",
"statement_list : statement SEMICOLON",
"statement : void_statement",
"statement : expression",
"void_statement : if_statement",
"void_statement : loop",
"void_statement : function_def",
"void_statement : type_def",
"void_statement : BREAK",
"void_statement : CONTINUE",
"if_statement : if_statement else_statement",
"if_statement : IF conditional_expression DO LBRACE statement_list RBRACE",
"else_statement : ELSE DO LBRACE statement_list RBRACE",
"else_statement : ELSE IF conditional_expression DO LBRACE statement_list RBRACE",
"loop : while_loop",
"loop : for_loop",
"while_loop : WHILE expression DO LBRACE statement_list RBRACE",
"for_loop : FOR LP assignment_expression SEMICOLON expression SEMICOLON assignment_expression RP DO LBRACE statement_list RBRACE",
"function_def : DEF VARIABLE LP variable_list RP DO LBRACE statement_list RETURN LP expression RP RBRACE",
"variable_list : VARIABLE COMMA variable_list",
"variable_list : VARIABLE",
"variable_list : EMPTY",
"type_def : TYPE VARIABLE",
"expression : conditional_expression",
"expression : assignment_expression",
"conditional_expression : conditional_expression condition_operator low_precedence_arithmetic_expression",
"conditional_expression : low_precedence_arithmetic_expression",
"condition_operator : LESSER",
"condition_operator : LARGER",
"condition_operator : LESSER_EQ",
"condition_operator : LARGER_EQ",
"condition_operator : EQUALS",
"condition_operator : NOT_EQUALS",
"condition_operator : AND",
"condition_operator : OR",
"condition_operator : XOR",
"assignment_expression : type_def ASSIGNMENT expression",
"assignment_expression : VARIABLE ASSIGNMENT expression",
"low_precedence_arithmetic_expression : low_precedence_arithmetic_expression low_precedence_operator high_precedence_arithmetic_expression",
"low_precedence_arithmetic_expression : high_precedence_arithmetic_expression",
"high_precedence_arithmetic_expression : high_precedence_arithmetic_expression high_precedence_operator highest_precedence_arithmetic_expression",
"high_precedence_arithmetic_expression : highest_precedence_arithmetic_expression",
"highest_precedence_arithmetic_expression : highest_precedence_operator highest_precedence_arithmetic_expression",
"highest_precedence_arithmetic_expression : LP conditional_expression RP",
"highest_precedence_arithmetic_expression : value",
"low_precedence_operator : MINUS",
"low_precedence_operator : PLUS",
"high_precedence_operator : DIVISION",
"high_precedence_operator : MULTIPLICATION",
"high_precedence_operator : MODULUS",
"highest_precedence_operator : NOT",
"value : function_call",
"value : VARIABLE",
"value : INTEGER",
"value : FLOAT",
"value : STRING",
"value : BOOLEAN",
"function_name : VARIABLE",
"function_name : PRIMITIVE_FUNCTION",
"function_call : function_name LP expression_list RP",
"expression_list : expression COMMA expression_list",
"expression_list : expression",
"expression_list : EMPTY",
"EMPTY :",

};
#endif

int      yydebug;
int      yynerrs;

int      yyerrflag;
int      yychar;
YYSTYPE  yyval;
YYSTYPE  yylval;

/* define the initial stack-sizes */
#ifdef YYSTACKSIZE
#undef YYMAXDEPTH
#define YYMAXDEPTH  YYSTACKSIZE
#else
#ifdef YYMAXDEPTH
#define YYSTACKSIZE YYMAXDEPTH
#else
#define YYSTACKSIZE 10000
#define YYMAXDEPTH  10000
#endif
#endif

#define YYINITSTACKSIZE 200

typedef struct {
    unsigned stacksize;
    YYINT    *s_base;
    YYINT    *s_mark;
    YYINT    *s_last;
    YYSTYPE  *l_base;
    YYSTYPE  *l_mark;
} YYSTACKDATA;
/* variables for the parser stack */
static YYSTACKDATA yystack;
#line 50 "yacc.y"

#include "lex.yy.c"
int yyerror(char* s){
	fprintf(stderr, "%s\n", s);
}
#line 401 "y.tab.c"

#if YYDEBUG
#include <stdio.h>	/* needed for printf */
#endif

#include <stdlib.h>	/* needed for malloc, etc */
#include <string.h>	/* needed for memset */

/* allocate initial stack or double stack size, up to YYMAXDEPTH */
static int yygrowstack(YYSTACKDATA *data)
{
    int i;
    unsigned newsize;
    YYINT *newss;
    YYSTYPE *newvs;

    if ((newsize = data->stacksize) == 0)
        newsize = YYINITSTACKSIZE;
    else if (newsize >= YYMAXDEPTH)
        return YYENOMEM;
    else if ((newsize *= 2) > YYMAXDEPTH)
        newsize = YYMAXDEPTH;

    i = (int) (data->s_mark - data->s_base);
    newss = (YYINT *)realloc(data->s_base, newsize * sizeof(*newss));
    if (newss == 0)
        return YYENOMEM;

    data->s_base = newss;
    data->s_mark = newss + i;

    newvs = (YYSTYPE *)realloc(data->l_base, newsize * sizeof(*newvs));
    if (newvs == 0)
        return YYENOMEM;

    data->l_base = newvs;
    data->l_mark = newvs + i;

    data->stacksize = newsize;
    data->s_last = data->s_base + newsize - 1;
    return 0;
}

#if YYPURE || defined(YY_NO_LEAKS)
static void yyfreestack(YYSTACKDATA *data)
{
    free(data->s_base);
    free(data->l_base);
    memset(data, 0, sizeof(*data));
}
#else
#define yyfreestack(data) /* nothing */
#endif

#define YYABORT  goto yyabort
#define YYREJECT goto yyabort
#define YYACCEPT goto yyaccept
#define YYERROR  goto yyerrlab

int
YYPARSE_DECL()
{
    int yym, yyn, yystate;
#if YYDEBUG
    const char *yys;

    if ((yys = getenv("YYDEBUG")) != 0)
    {
        yyn = *yys;
        if (yyn >= '0' && yyn <= '9')
            yydebug = yyn - '0';
    }
#endif

    yym = 0;
    yyn = 0;
    yynerrs = 0;
    yyerrflag = 0;
    yychar = YYEMPTY;
    yystate = 0;

#if YYPURE
    memset(&yystack, 0, sizeof(yystack));
#endif

    if (yystack.s_base == NULL && yygrowstack(&yystack) == YYENOMEM) goto yyoverflow;
    yystack.s_mark = yystack.s_base;
    yystack.l_mark = yystack.l_base;
    yystate = 0;
    *yystack.s_mark = 0;

yyloop:
    if ((yyn = yydefred[yystate]) != 0) goto yyreduce;
    if (yychar < 0)
    {
        yychar = YYLEX;
        if (yychar < 0) yychar = YYEOF;
#if YYDEBUG
        if (yydebug)
        {
            if ((yys = yyname[YYTRANSLATE(yychar)]) == NULL) yys = yyname[YYUNDFTOKEN];
            printf("%sdebug: state %d, reading %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
    }
    if (((yyn = yysindex[yystate]) != 0) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == (YYINT) yychar)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: state %d, shifting to state %d\n",
                    YYPREFIX, yystate, yytable[yyn]);
#endif
        if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM) goto yyoverflow;
        yystate = yytable[yyn];
        *++yystack.s_mark = yytable[yyn];
        *++yystack.l_mark = yylval;
        yychar = YYEMPTY;
        if (yyerrflag > 0)  --yyerrflag;
        goto yyloop;
    }
    if (((yyn = yyrindex[yystate]) != 0) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == (YYINT) yychar)
    {
        yyn = yytable[yyn];
        goto yyreduce;
    }
    if (yyerrflag != 0) goto yyinrecovery;

    YYERROR_CALL("syntax error");

    goto yyerrlab; /* redundant goto avoids 'unused label' warning */
yyerrlab:
    ++yynerrs;

yyinrecovery:
    if (yyerrflag < 3)
    {
        yyerrflag = 3;
        for (;;)
        {
            if (((yyn = yysindex[*yystack.s_mark]) != 0) && (yyn += YYERRCODE) >= 0 &&
                    yyn <= YYTABLESIZE && yycheck[yyn] == (YYINT) YYERRCODE)
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: state %d, error recovery shifting\
 to state %d\n", YYPREFIX, *yystack.s_mark, yytable[yyn]);
#endif
                if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM) goto yyoverflow;
                yystate = yytable[yyn];
                *++yystack.s_mark = yytable[yyn];
                *++yystack.l_mark = yylval;
                goto yyloop;
            }
            else
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: error recovery discarding state %d\n",
                            YYPREFIX, *yystack.s_mark);
#endif
                if (yystack.s_mark <= yystack.s_base) goto yyabort;
                --yystack.s_mark;
                --yystack.l_mark;
            }
        }
    }
    else
    {
        if (yychar == YYEOF) goto yyabort;
#if YYDEBUG
        if (yydebug)
        {
            if ((yys = yyname[YYTRANSLATE(yychar)]) == NULL) yys = yyname[YYUNDFTOKEN];
            printf("%sdebug: state %d, error recovery discards token %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
        yychar = YYEMPTY;
        goto yyloop;
    }

yyreduce:
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: state %d, reducing by rule %d (%s)\n",
                YYPREFIX, yystate, yyn, yyrule[yyn]);
#endif
    yym = yylen[yyn];
    if (yym > 0)
        yyval = yystack.l_mark[1-yym];
    else
        memset(&yyval, 0, sizeof yyval);

    switch (yyn)
    {
    }
    yystack.s_mark -= yym;
    yystate = *yystack.s_mark;
    yystack.l_mark -= yym;
    yym = yylhs[yyn];
    if (yystate == 0 && yym == 0)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: after reduction, shifting from state 0 to\
 state %d\n", YYPREFIX, YYFINAL);
#endif
        yystate = YYFINAL;
        *++yystack.s_mark = YYFINAL;
        *++yystack.l_mark = yyval;
        if (yychar < 0)
        {
            yychar = YYLEX;
            if (yychar < 0) yychar = YYEOF;
#if YYDEBUG
            if (yydebug)
            {
                if ((yys = yyname[YYTRANSLATE(yychar)]) == NULL) yys = yyname[YYUNDFTOKEN];
                printf("%sdebug: state %d, reading %d (%s)\n",
                        YYPREFIX, YYFINAL, yychar, yys);
            }
#endif
        }
        if (yychar == YYEOF) goto yyaccept;
        goto yyloop;
    }
    if (((yyn = yygindex[yym]) != 0) && (yyn += yystate) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == (YYINT) yystate)
        yystate = yytable[yyn];
    else
        yystate = yydgoto[yym];
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: after reduction, shifting from state %d \
to state %d\n", YYPREFIX, *yystack.s_mark, yystate);
#endif
    if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM) goto yyoverflow;
    *++yystack.s_mark = (YYINT) yystate;
    *++yystack.l_mark = yyval;
    goto yyloop;

yyoverflow:
    YYERROR_CALL("yacc stack overflow");

yyabort:
    yyfreestack(&yystack);
    return (1);

yyaccept:
    yyfreestack(&yystack);
    return (0);
}
