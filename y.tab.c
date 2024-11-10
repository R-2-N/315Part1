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
    0,    1,    1,    1,    1,    2,    2,    3,    3,    3,
    3,    3,    3,    5,    5,    9,    9,    6,    6,   11,
   12,    7,   14,   14,   14,    8,    4,    4,   10,   10,
   16,   16,   16,   16,   16,   16,   16,   16,   16,   13,
   13,   17,   17,   19,   19,   21,   21,   21,   18,   18,
   20,   20,   20,   22,   23,   23,   23,   23,   23,   23,
   25,   25,   24,   26,   26,   26,   15,
};
static const YYINT yylen[] = {                            2,
    1,    3,    2,    2,    1,    1,    1,    1,    1,    1,
    1,    1,    1,    2,    6,    5,    7,    1,    1,    8,
   12,   14,    3,    1,    1,    2,    1,    1,    3,    1,
    1,    1,    1,    1,    1,    1,    1,    1,    1,    3,
    3,    3,    1,    3,    1,    2,    3,    1,    1,    1,
    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
    1,    1,    4,    3,    1,    1,    0,
};
static const YYINT yydefred[] = {                         0,
    5,    0,    0,    0,    0,    0,    0,    0,   13,   60,
   12,   54,   57,   58,   59,   62,    0,    0,    0,    6,
    7,    0,    9,   10,    0,    0,   18,   19,   28,    0,
    0,   45,    0,   48,   55,    0,    0,    0,    0,    0,
    0,    0,    0,   26,    4,    0,    3,    0,   14,    0,
   31,   32,   33,   34,   35,   36,   37,   38,   39,    0,
   49,   50,    0,   51,   52,   53,    0,   46,    0,    0,
    0,    0,    0,    0,    0,   41,   47,    2,    0,    0,
   40,    0,    0,   44,    0,   66,    0,    0,    0,    0,
    0,    0,   25,    0,    0,    0,   63,    0,    0,    0,
    0,    0,    0,    0,   64,   15,    0,    0,   23,    0,
    0,   16,    0,    0,    0,    0,   20,    0,    0,   17,
    0,    0,    0,    0,    0,    0,   21,    0,    0,   22,
};
static const YYINT yydgoto[] = {                         17,
   18,   19,   20,   21,   22,   23,   24,   25,   49,   26,
   27,   28,   29,   92,   86,   60,   30,   63,   31,   67,
   32,   33,   34,   35,   36,   87,
};
static const YYINT yysindex[] = {                        28,
    0, -175, -256, -247, -234, -245, -175, -225,    0,    0,
    0,    0,    0,    0,    0,    0,    0,   66, -220,    0,
    0, -212,    0,    0, -233,  286,    0,    0,    0, -257,
 -226,    0, -175,    0,    0, -208,    0,  248,  153, -244,
 -203,  153,  277,    0,    0, -200,    0, -211,    0,  153,
    0,    0,    0,    0,    0,    0,    0,    0,    0, -175,
    0,    0, -175,    0,    0,    0, -175,    0,  153, -194,
 -201, -233, -245, -188, -197,    0,    0,    0, -175, -189,
    0, -257, -226,    0, -198,    0, -195,   28, -185,  153,
 -192, -187,    0,  262,   28,  153,    0, -248, -184, -176,
 -197, -177, -173, -162,    0,    0,   28, -244,    0, -171,
   28,    0, -124, -178,   28,  -86,    0, -166,  -48,    0,
 -153, -183,   28,  153,  -10, -160,    0, -144, -148,    0,
};
static const YYINT yyrindex[] = {                         0,
    0,    0,    0,    0,    0,  121,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,   84,    0,    0,
    0, -142,    0,    0, -136, -230,    0,    0,    0,  211,
  155,    0,    0,    0,    0,    0,   94,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0, -146,    0,
    0,    0,    0,    0, -146,    0,    0,    0,    0,    0,
    0,  238,  183,    0, -145,    0,    0,    0,    0,    0,
 -143,    0,    0,    0,    0, -146,    0,    0,    0,    0,
 -146,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
};
static const YYINT yygindex[] = {                         0,
  -57,  -18,    0,  -35,    0,    0,    0,  -37,    0,   -1,
    0,    0,  -32,   24,  -66,    0,   67,    0,   65,    0,
  -11,    0,    0,    0,    0,   40,
};
#define YYTABLESIZE 569
static const YYINT yytable[] = {                         46,
   38,   72,   72,   71,   72,   43,   76,   74,   93,   45,
    2,   39,   72,  106,   81,    3,    4,    5,    6,    7,
   40,   68,   73,    8,    9,   10,   27,    8,   61,   62,
   98,   72,   41,   85,   93,   11,   47,  104,   27,   42,
   27,   44,   12,   13,   14,   15,   16,   79,   80,  113,
   48,   50,   72,  116,  100,   84,   78,  119,   72,   69,
   85,   64,   65,   66,   75,  125,   88,   89,   90,   91,
   72,   95,   96,   97,   99,  114,  107,   94,  101,   46,
  108,  102,  110,    1,  124,   46,   72,  111,  126,  115,
  118,   37,    7,  121,   46,   45,    2,   46,   10,  112,
   46,    3,    4,    5,    6,    7,   46,  123,  128,    8,
    9,   10,  129,  130,    8,   12,   13,   14,   15,   16,
   11,   11,   67,   65,  109,   24,   82,   83,   12,   13,
   14,   15,   16,   45,    2,  105,    0,  117,    0,    3,
    4,    5,    6,    7,    0,    0,    0,    8,    9,   10,
    0,    0,    0,    0,    0,    0,    0,    0,    0,   11,
    0,    0,    0,    0,    0,    0,   12,   13,   14,   15,
   16,   45,    2,    0,    0,  120,    0,    3,    4,    5,
    6,    7,    0,    0,    0,    8,    9,   10,    0,    0,
    0,    0,    0,    0,    0,    0,    0,   11,    0,    0,
    0,    0,    0,    0,   12,   13,   14,   15,   16,   45,
    2,    0,    0,    0,    0,    3,    4,    5,    6,    7,
    0,  122,    0,    8,    9,   10,    0,    0,    0,    0,
    0,    0,    0,    0,    0,   11,    0,    0,    0,    0,
    0,    0,   12,   13,   14,   15,   16,   45,    2,    0,
    0,  127,    0,    3,    4,    5,    6,    7,    0,    0,
    0,    8,    9,   10,    0,    0,    0,    0,    0,    0,
    0,    0,    0,   11,    0,    0,    0,    0,    0,    0,
   12,   13,   14,   15,   16,    1,    2,    0,    0,    0,
    0,    3,    4,    5,    6,    7,    0,    0,    0,    8,
    9,   10,    0,    0,    0,    0,    0,    0,    0,    0,
    0,   11,    0,    0,    0,    0,    0,    0,   12,   13,
   14,   15,   16,   45,    2,    0,    0,    0,    0,    3,
    4,    5,    6,    7,    0,    0,    0,    8,    9,   10,
    0,    0,    0,    0,    0,    0,    0,    0,    0,   11,
   56,    0,    0,   56,    0,    0,   12,   13,   14,   15,
   16,   61,   56,    0,   56,    0,    0,    0,   56,   56,
   56,   56,   56,   56,   56,   56,   56,   56,    0,   56,
   56,   56,   56,   56,    0,    0,    0,    0,   61,   56,
    0,   56,    0,    0,    0,   56,   56,   56,   56,   56,
   56,   56,   56,   56,    0,    0,   56,   56,   56,   56,
   56,   43,    0,    0,   43,    0,    0,    0,    0,    6,
    7,    0,    0,   43,    8,   43,   10,    0,    0,   43,
   43,   43,   43,   43,   43,   43,   43,   43,    0,   42,
   43,   43,   42,   12,   13,   14,   15,   16,    0,    0,
    0,   42,    0,   42,    0,    0,    0,   42,   42,   42,
   42,   42,   42,   42,   42,   42,    0,   30,   42,   42,
   30,    0,    0,    0,    0,    0,    0,    0,    0,   30,
    0,   30,    0,    0,    0,   30,   30,   30,   30,   30,
   30,   30,   30,   30,   29,    0,    0,   29,    0,    0,
    0,    0,    0,    0,    0,    0,   29,   70,   29,    0,
    0,    0,   29,   29,   29,   29,   29,   29,   29,   29,
   29,  103,   51,   52,   53,   54,   55,   56,   57,   58,
   59,    0,    0,    0,    0,    0,   51,   52,   53,   54,
   55,   56,   57,   58,   59,   77,    0,    0,    0,    0,
    0,   51,   52,   53,   54,   55,   56,   57,   58,   59,
   51,   52,   53,   54,   55,   56,   57,   58,   59,
};
static const YYINT yycheck[] = {                         18,
    2,   39,   40,   39,   42,    7,   42,   40,   75,  258,
  259,  268,   50,  262,   50,  264,  265,  266,  267,  268,
  268,   33,  267,  272,  273,  274,  257,  272,  286,  287,
   88,   69,  267,   69,  101,  284,  257,   95,  269,  285,
  271,  267,  291,  292,  293,  294,  295,  259,  260,  107,
  263,  285,   90,  111,   90,   67,  257,  115,   96,  268,
   96,  288,  289,  290,  268,  123,  261,  269,  257,  267,
  108,  261,  271,  269,  260,  108,  261,   79,  271,   98,
  257,  269,  260,    0,  268,  104,  124,  261,  124,  261,
  269,  267,  268,  260,  113,  258,  259,  116,  274,  262,
  119,  264,  265,  266,  267,  268,  125,  261,  269,  272,
  273,  274,  257,  262,  257,  291,  292,  293,  294,  295,
  257,  284,  269,  269,  101,  269,   60,   63,  291,  292,
  293,  294,  295,  258,  259,   96,   -1,  262,   -1,  264,
  265,  266,  267,  268,   -1,   -1,   -1,  272,  273,  274,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  284,
   -1,   -1,   -1,   -1,   -1,   -1,  291,  292,  293,  294,
  295,  258,  259,   -1,   -1,  262,   -1,  264,  265,  266,
  267,  268,   -1,   -1,   -1,  272,  273,  274,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,  284,   -1,   -1,
   -1,   -1,   -1,   -1,  291,  292,  293,  294,  295,  258,
  259,   -1,   -1,   -1,   -1,  264,  265,  266,  267,  268,
   -1,  270,   -1,  272,  273,  274,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,  284,   -1,   -1,   -1,   -1,
   -1,   -1,  291,  292,  293,  294,  295,  258,  259,   -1,
   -1,  262,   -1,  264,  265,  266,  267,  268,   -1,   -1,
   -1,  272,  273,  274,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,  284,   -1,   -1,   -1,   -1,   -1,   -1,
  291,  292,  293,  294,  295,  258,  259,   -1,   -1,   -1,
   -1,  264,  265,  266,  267,  268,   -1,   -1,   -1,  272,
  273,  274,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,  284,   -1,   -1,   -1,   -1,   -1,   -1,  291,  292,
  293,  294,  295,  258,  259,   -1,   -1,   -1,   -1,  264,
  265,  266,  267,  268,   -1,   -1,   -1,  272,  273,  274,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  284,
  257,   -1,   -1,  260,   -1,   -1,  291,  292,  293,  294,
  295,  268,  269,   -1,  271,   -1,   -1,   -1,  275,  276,
  277,  278,  279,  280,  281,  282,  283,  257,   -1,  286,
  287,  288,  289,  290,   -1,   -1,   -1,   -1,  268,  269,
   -1,  271,   -1,   -1,   -1,  275,  276,  277,  278,  279,
  280,  281,  282,  283,   -1,   -1,  286,  287,  288,  289,
  290,  257,   -1,   -1,  260,   -1,   -1,   -1,   -1,  267,
  268,   -1,   -1,  269,  272,  271,  274,   -1,   -1,  275,
  276,  277,  278,  279,  280,  281,  282,  283,   -1,  257,
  286,  287,  260,  291,  292,  293,  294,  295,   -1,   -1,
   -1,  269,   -1,  271,   -1,   -1,   -1,  275,  276,  277,
  278,  279,  280,  281,  282,  283,   -1,  257,  286,  287,
  260,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  269,
   -1,  271,   -1,   -1,   -1,  275,  276,  277,  278,  279,
  280,  281,  282,  283,  257,   -1,   -1,  260,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,  269,  260,  271,   -1,
   -1,   -1,  275,  276,  277,  278,  279,  280,  281,  282,
  283,  260,  275,  276,  277,  278,  279,  280,  281,  282,
  283,   -1,   -1,   -1,   -1,   -1,  275,  276,  277,  278,
  279,  280,  281,  282,  283,  269,   -1,   -1,   -1,   -1,
   -1,  275,  276,  277,  278,  279,  280,  281,  282,  283,
  275,  276,  277,  278,  279,  280,  281,  282,  283,
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
"program : statement_list",
"statement_list : statement_list statement SEMICOLON",
"statement_list : statement SEMICOLON",
"statement_list : statement_list COMMENT",
"statement_list : COMMENT",
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
"while_loop : WHILE LP expression RP DO LBRACE statement_list RBRACE",
"for_loop : FOR LP assignment_expression SEMICOLON expression SEMICOLON assignment_expression RP DO LBRACE statement_list RBRACE",
"function_def : DEF VARIABLE LP variable_list RP DO LBRACE statement_list RETURN LP expression RP SEMICOLON RBRACE",
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
int lineno = 0;
extern int yylineno;
void yyerror(char *s){fprintf(stderr, "error::%s at line %d\n", s, yylineno);}
int main(){
	return yyparse();
}
#line 431 "y.tab.c"

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
