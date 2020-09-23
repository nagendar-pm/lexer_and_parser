/* original parser id follows */
/* yysccsid[] = "@(#)yaccpar	1.9 (Berkeley) 02/21/93" */
/* (use YYMAJOR/YYMINOR for ifdefs dependent on parser version) */

#define YYBYACC 1
#define YYMAJOR 1
#define YYMINOR 9
#define YYPATCH 20140715

#define YYEMPTY        (-1)
#define yyclearin      (yychar = YYEMPTY)
#define yyerrok        (yyerrflag = 0)
#define YYRECOVERING() (yyerrflag != 0)
#define YYENOMEM       (-2)
#define YYEOF          0
#define YYPREFIX "yy"

#define YYPURE 0

#line 2 "parser.y"
	#include<stdio.h>
	int yylex(void);
	int yyerror(const char *s);
	void print(char *s);
	int success = 1;
	#define YYDEBUG 1
#line 28 "y.tab.c"

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

#define INTEGER 257
#define FLOAT 258
#define IDENTIFIER 259
#define ASSIGNMENT 260
#define RELATIONAL 261
#define ARITHMETIC 262
#define LOGICAL 263
#define UNRECOGNISED 264
#define DECLARE 265
#define AND 266
#define ARRAY 267
#define BEGIN 268
#define CASE 269
#define DIV 270
#define DO 271
#define ELSE 272
#define END 273
#define FOR 274
#define FROM 275
#define GOTO 276
#define IF 277
#define IS 278
#define MOD 279
#define NEW 280
#define NOT 281
#define OF 282
#define OR 283
#define PROCEDURE 284
#define RECORD 285
#define REF 286
#define THEN 287
#define TO 288
#define TYPE 289
#define WHILE 290
#define COLON 291
#define SEMICOLON 292
#define COMMA 293
#define DOT 294
#define DOUBLESLASH 295
#define LEFTPAR 296
#define RIGHTPAR 297
#define LEFTSQUARE 298
#define RIGHTSQUARE 299
#define LE 300
#define GE 301
#define LT 302
#define GT 303
#define EQ 304
#define ET 305
#define PLUS 306
#define MINUS 307
#define MULTI 308
#define DIVIDE 309
#define YYERRCODE 256
typedef short YYINT;
static const YYINT yylhs[] = {                           -1,
    0,    1,    3,    3,    5,    5,    6,    4,    4,    4,
    8,    8,    8,    7,   10,   10,   12,   11,    2,    2,
    2,    2,   13,   13,   17,   17,   17,   17,   18,   20,
   22,   22,   21,   23,   23,   23,   23,   14,   15,   26,
   26,   26,   26,   27,   25,   16,   29,   30,   19,   19,
   24,   24,   28,   28,   31,   31,   32,   32,   32,   32,
   32,    9,    9,   37,   35,   36,   36,   38,   38,   39,
   39,   41,   41,   40,   40,   43,   43,   42,   42,   45,
   45,   44,   44,   47,   47,   47,   47,   46,   46,   49,
   49,   49,   48,   48,   48,   48,   48,   50,   50,   34,
   53,   51,   51,   55,   55,   56,   57,   33,   33,   54,
   54,   58,   58,   52,
};
static const YYINT yylen[] = {                            2,
    1,    7,    3,    0,    3,    0,    2,    2,    1,    2,
    1,    1,    1,    2,    3,    7,    3,    2,    1,    1,
    1,    1,    3,    9,    1,    2,    2,    1,    3,    6,
    2,    0,    2,    4,    1,    5,    0,    5,    3,    6,
    3,    7,    2,    3,    2,    4,    4,    3,    3,    0,
    3,    0,    3,    0,    3,    0,    1,    3,    5,    2,
    1,    1,    1,    1,    3,    1,    3,    1,    3,    1,
    3,    1,    1,    3,    1,    1,    1,    1,    3,    1,
    1,    1,    3,    1,    1,    1,    1,    1,    2,    1,
    1,    1,    1,    1,    3,    1,    1,    1,    1,    5,
    1,    1,    1,    5,    7,   10,    1,    3,    0,    3,
    0,    3,    0,    1,
};
static const YYINT yydefred[] = {                         0,
    0,    0,    1,    0,    0,    0,    0,   19,   20,   21,
   22,    0,    0,    0,    0,    0,    0,  114,   99,   57,
    0,    0,    0,   92,    0,   90,   91,   96,    0,    0,
   61,   62,    0,    0,   68,    0,    0,    0,   82,   88,
    0,   93,   97,   98,  102,  103,   25,    0,    0,    0,
   23,   28,    0,    0,    0,    0,   39,    0,    0,    0,
    0,    0,   60,    0,    0,   64,    0,    0,    0,    0,
    0,    0,   72,   73,    0,   76,   77,   80,   81,    0,
    0,   86,   87,   84,   85,    0,    0,   89,    0,    0,
   33,   35,    0,   26,   27,   45,   43,    0,    0,    0,
    0,   46,    3,    0,    0,    0,    0,    0,    0,    0,
    9,   11,   12,   13,    0,    0,   95,   38,   58,  101,
    0,    0,   65,    0,   69,   71,    0,    0,   83,    0,
    0,    0,    0,    0,    0,    0,   41,    0,    0,   10,
   14,    0,   18,    0,    0,    0,    8,  107,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,   44,    0,    0,    0,    0,    0,    0,    0,
   15,    0,    2,    0,    7,    0,  104,    0,  100,    0,
   59,   29,    0,    0,    0,    0,   31,    0,   53,    0,
    0,   48,    0,   47,    0,    0,    5,    0,    0,  110,
  108,   49,    0,   51,   36,    0,   40,    0,   55,    0,
   17,    0,    0,  105,   24,   30,   42,    0,    0,    0,
   16,  112,    0,  106,
};
static const YYINT yydgoto[] = {                          2,
   28,    7,   17,  150,  146,  151,  110,  111,  112,  113,
  114,  171,    8,    9,   10,   11,   51,  131,  158,   95,
   52,  162,   91,  160,   56,   57,   99,  136,  102,  139,
  168,   30,  155,   31,   32,   33,   70,   34,   35,   36,
   75,   37,   80,   38,   81,   39,   86,   40,   41,   42,
   43,   44,  121,  153,   45,   46,  149,  213,
};
static const YYINT yysindex[] = {                      -254,
 -222,    0,    0, -266, -223, -219, -246,    0,    0,    0,
    0, -155, -138, -263, -255, -222, -213,    0,    0,    0,
 -155, -155, -193,    0, -155,    0,    0,    0, -218, -216,
    0,    0, -214, -190,    0, -285, -141, -248,    0,    0,
 -155,    0,    0,    0,    0,    0,    0, -217, -270,  -99,
    0,    0, -187, -155, -161, -177,    0, -169, -246, -242,
 -203, -167,    0, -179, -187,    0, -136, -155, -155, -155,
 -155, -155,    0,    0, -155,    0,    0,    0,    0, -155,
 -155,    0,    0,    0,    0, -155, -189,    0, -155, -187,
    0,    0, -171,    0,    0,    0,    0, -163, -158, -155,
 -123,    0,    0, -153, -144, -116, -110, -155, -142, -206,
    0,    0,    0,    0, -104, -242,    0,    0,    0,    0,
 -122, -121,    0, -190,    0,    0, -221, -248,    0, -117,
 -118, -112, -111, -187, -161, -127,    0, -115, -109,    0,
    0,  -91,    0,  -83, -242,  -84,    0,    0, -100, -142,
 -180, -155, -105, -155, -106, -155, -155, -102, -187, -103,
 -111,  -95,    0, -158, -197, -187, -123,  -78, -155, -242,
    0, -142,    0, -242,    0, -242,    0, -122,    0, -121,
    0,    0, -118,  -67, -112,  -85,    0,  -75,    0, -155,
  -74,    0, -109,    0,  -80,  -53,    0,  -70,  -46,    0,
    0,    0, -187,    0,    0, -187,    0, -155,    0, -155,
    0, -242,  -44,    0,    0,    0,    0,  -83,  -70, -242,
    0,    0,  -42,    0,
};
static const YYINT yyrindex[] = {                         0,
    0,    0,    0,    0,    0,    0,  -39,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,  -49,
    0,    0,  229,  169,    0,  139,   79,   -5,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0, -162,    0,
    0,    0,    0,    0,    0,    0,    0,    0,  -39,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,  -49,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,  -71,    0,
    0,    0,    0,    0,  -93,    0,    0,    0,  -41,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
  -62,  -63,    0,  199,    0,    0,  109,   37,    0,    0,
  -59,  -60,  -58,    0,    0,    0,    0,    0,  -28,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0, -265,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
  -58,    0,    0,  -71,    0,    0,    0,    0,    0,    0,
    0, -265,    0,    0,    0,    0,    0,  -62,    0,  -63,
    0,    0,  -59,    0,  -60, -160,    0,    0,    0,    0,
    0,    0,  -28,    0,    0,    0,    0,  -25,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,  -25,    0,
    0,    0,    0,    0,
};
static const YYINT yygindex[] = {                         0,
  249,  235,  193,  -56, -148, -129,    0,  152,  -12,    0,
    0,   46,    0,    0,    0,    0,  -47,  108,   86,    0,
    0,  110,    0,   85,  -48,    0,  137,  111,    0,  106,
   81,   83,   96,    0,    0,    0,    0,  208,  209,  205,
    0,  204,    0,  210,    0,  -36,    0,    0,    0,    0,
    0,  170,  141,  117,    0,    0,    0,   70,
};
#define YYTABLESIZE 528
static const YYINT yytable[] = {                         29,
   92,  175,   94,  109,   88,   96,    6,    6,   61,   62,
    1,   12,   64,  104,   18,   19,  105,  118,   73,   74,
   53,   82,    1,  197,   13,   90,   21,   53,   54,    6,
   83,  106,   55,  107,   22,   14,    4,   23,   24,   15,
  196,   97,  132,   66,  198,   16,  199,  108,   58,  129,
   18,   19,   20,   25,   60,  120,  122,  123,    1,   84,
   85,    5,   21,   26,   27,   63,    6,  106,   71,  107,
   22,   47,   65,   23,   24,   72,  130,   67,  115,   68,
   89,   69,  219,  108,   78,   79,  163,  137,  172,   25,
  223,  176,  177,   53,  190,  144,   49,   98,   50,   26,
   27,   18,   19,   20,   67,   37,   68,   34,   69,    1,
   37,  185,   34,   21,  100,  101,  191,  117,  192,  116,
   47,   22,  119,   87,   23,   24,  133,  134,   48,   37,
   37,   34,   34,  135,   37,  138,   34,  205,  140,  120,
   25,  180,  142,  182,  130,   49,  141,   50,  143,  145,
   26,   27,   18,   87,   87,  215,  195,   87,  216,   47,
   76,   77,   87,   87,   78,   79,   57,   93,   87,  165,
  152,  154,   57,  156,  157,  166,   57,  207,   57,   57,
  159,  161,  167,  169,   49,   57,   50,  170,  173,   57,
  174,  179,  181,  186,  194,  217,  184,  218,   57,  203,
   57,   57,   57,  188,   57,   53,  206,  210,   57,   57,
   57,   57,   57,   57,   57,   57,   94,  208,   94,  211,
   94,   94,   94,   94,  212,   54,  214,  220,    4,   94,
  224,    6,   94,   94,  111,  109,   52,   94,   94,   50,
   32,   94,   94,   94,   56,   94,  113,   94,    3,   94,
   59,  103,   94,   94,   94,   94,   94,   94,   94,   94,
   78,  147,   78,  221,  183,   78,   78,   78,  202,  204,
  187,  164,  193,  209,  189,  201,   78,   78,  124,  126,
  125,   78,   78,  127,  148,   78,   78,   78,  222,   78,
  128,   78,  178,   78,  200,    0,   78,   78,   78,   78,
   78,   78,   79,    0,   79,    0,    0,   79,   79,   79,
    0,    0,    0,    0,    0,    0,    0,    0,   79,   79,
    0,    0,    0,   79,   79,    0,    0,   79,   79,   79,
    0,   79,    0,   79,    0,   79,    0,    0,   79,   79,
   79,   79,   79,   79,   75,    0,   75,    0,    0,   75,
   75,   75,    0,    0,    0,    0,    0,    0,    0,    0,
   75,   75,    0,    0,    0,   75,   75,    0,    0,   75,
   75,   75,    0,   75,   74,   75,   74,   75,    0,   74,
   74,   74,   75,   75,    0,    0,    0,    0,    0,    0,
   74,   74,    0,    0,    0,   74,   74,    0,    0,   74,
   74,   74,    0,   74,   70,   74,   70,   74,    0,   70,
   70,   70,   74,   74,    0,    0,    0,    0,    0,    0,
   70,   70,    0,    0,    0,   70,   70,    0,    0,   70,
   70,   70,    0,   70,    0,   70,   66,   70,    0,   66,
   66,   66,    0,    0,    0,    0,    0,    0,    0,    0,
   66,   66,    0,    0,    0,   66,   66,    0,    0,   66,
   66,   66,    0,   66,    0,   66,   67,   66,    0,   67,
   67,   67,    0,    0,    0,    0,    0,    0,    0,    0,
   67,   67,    0,    0,    0,   67,   67,    0,    0,   67,
   67,   67,    0,   67,    0,   67,   63,   67,    0,   63,
   63,   63,    0,    0,    0,    0,    0,    0,    0,    0,
   63,    0,    0,    0,    0,   63,   63,    0,    0,   63,
   63,   63,    0,   63,    0,   63,    0,   63,
};
static const YYINT yycheck[] = {                         12,
   49,  150,   50,   60,   41,   53,  272,  273,   21,   22,
  265,  278,   25,  256,  257,  258,  259,   65,  304,  305,
  291,  270,  265,  172,  291,  296,  269,  291,  292,  295,
  279,  274,  296,  276,  277,  259,  259,  280,  281,  259,
  170,   54,   90,  260,  174,  292,  176,  290,  304,   86,
  257,  258,  259,  296,  268,   68,   69,   70,  265,  308,
  309,  284,  269,  306,  307,  259,  289,  274,  283,  276,
  277,  259,  291,  280,  281,  266,   89,  294,  282,  296,
  298,  298,  212,  290,  306,  307,  134,  100,  145,  296,
  220,  272,  273,  291,  292,  108,  284,  259,  286,  306,
  307,  257,  258,  259,  294,  268,  296,  268,  298,  265,
  273,  159,  273,  269,  292,  285,  165,  297,  166,  287,
  259,  277,  259,   41,  280,  281,  298,  291,  267,  292,
  293,  292,  293,  292,  297,  259,  297,  186,  292,  152,
  296,  154,  259,  156,  157,  284,  291,  286,  259,  292,
  306,  307,  257,   71,   72,  203,  169,   75,  206,  259,
  302,  303,   80,   81,  306,  307,  260,  267,   86,  297,
  293,  293,  266,  291,  293,  291,  270,  190,  272,  273,
  293,  293,  292,  275,  284,  279,  286,  271,  273,  283,
  291,  297,  299,  297,  273,  208,  299,  210,  292,  267,
  294,  295,  296,  299,  298,  291,  282,  288,  302,  303,
  304,  305,  306,  307,  308,  309,  266,  292,  268,  273,
  270,  271,  272,  273,  295,  297,  273,  272,  268,  279,
  273,  273,  282,  283,  297,  299,  297,  287,  288,  299,
  299,  291,  292,  293,  273,  295,  272,  297,    0,  299,
   16,   59,  302,  303,  304,  305,  306,  307,  308,  309,
  266,  110,  268,  218,  157,  271,  272,  273,  183,  185,
  161,  135,  167,  193,  164,  180,  282,  283,   71,   75,
   72,  287,  288,   80,  115,  291,  292,  293,  219,  295,
   81,  297,  152,  299,  178,   -1,  302,  303,  304,  305,
  306,  307,  266,   -1,  268,   -1,   -1,  271,  272,  273,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  282,  283,
   -1,   -1,   -1,  287,  288,   -1,   -1,  291,  292,  293,
   -1,  295,   -1,  297,   -1,  299,   -1,   -1,  302,  303,
  304,  305,  306,  307,  266,   -1,  268,   -1,   -1,  271,
  272,  273,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
  282,  283,   -1,   -1,   -1,  287,  288,   -1,   -1,  291,
  292,  293,   -1,  295,  266,  297,  268,  299,   -1,  271,
  272,  273,  304,  305,   -1,   -1,   -1,   -1,   -1,   -1,
  282,  283,   -1,   -1,   -1,  287,  288,   -1,   -1,  291,
  292,  293,   -1,  295,  266,  297,  268,  299,   -1,  271,
  272,  273,  304,  305,   -1,   -1,   -1,   -1,   -1,   -1,
  282,  283,   -1,   -1,   -1,  287,  288,   -1,   -1,  291,
  292,  293,   -1,  295,   -1,  297,  268,  299,   -1,  271,
  272,  273,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
  282,  283,   -1,   -1,   -1,  287,  288,   -1,   -1,  291,
  292,  293,   -1,  295,   -1,  297,  268,  299,   -1,  271,
  272,  273,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
  282,  283,   -1,   -1,   -1,  287,  288,   -1,   -1,  291,
  292,  293,   -1,  295,   -1,  297,  268,  299,   -1,  271,
  272,  273,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
  282,   -1,   -1,   -1,   -1,  287,  288,   -1,   -1,  291,
  292,  293,   -1,  295,   -1,  297,   -1,  299,
};
#define YYFINAL 2
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 309
#define YYUNDFTOKEN 370
#define YYTRANSLATE(a) ((a) > YYMAXTOKEN ? YYUNDFTOKEN : (a))
#if YYDEBUG
static const char *const yyname[] = {

"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"INTEGER","FLOAT","IDENTIFIER",
"ASSIGNMENT","RELATIONAL","ARITHMETIC","LOGICAL","UNRECOGNISED","DECLARE","AND",
"ARRAY","BEGIN","CASE","DIV","DO","ELSE","END","FOR","FROM","GOTO","IF","IS",
"MOD","NEW","NOT","OF","OR","PROCEDURE","RECORD","REF","THEN","TO","TYPE",
"WHILE","COLON","SEMICOLON","COMMA","DOT","DOUBLESLASH","LEFTPAR","RIGHTPAR",
"LEFTSQUARE","RIGHTSQUARE","LE","GE","LT","GT","EQ","ET","PLUS","MINUS","MULTI",
"DIVIDE",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"illegal-symbol",
};
static const char *const yyrule[] = {
"$accept : program",
"program : block",
"block : DECLARE declaration block_alpha BEGIN statement statement_alpha END",
"block_alpha : SEMICOLON declaration block_alpha",
"block_alpha :",
"statement_alpha : SEMICOLON statement statement_alpha",
"statement_alpha :",
"statement_list : statement statement_alpha",
"statement : label_definition statement_1",
"statement : statement_1",
"statement : error SEMICOLON",
"statement_1 : expression",
"statement_1 : iteration",
"statement_1 : jump",
"label_definition : IDENTIFIER COLON",
"iteration : WHILE expression loop",
"iteration : FOR IDENTIFIER FROM expression TO expression loop",
"loop : DO statement_list END",
"jump : GOTO IDENTIFIER",
"declaration : variable_declaration",
"declaration : identity_declaration",
"declaration : procedure_declaration",
"declaration : type_declaration",
"variable_declaration : IDENTIFIER COLON type_specification",
"variable_declaration : IDENTIFIER COLON ARRAY LEFTSQUARE bound_pair bound_pair_alpha RIGHTSQUARE ARRAY type_specification",
"type_specification : IDENTIFIER",
"type_specification : REF type_specification",
"type_specification : REF array_type",
"type_specification : procedure_type",
"bound_pair : expression COLON expression",
"array_type : ARRAY LEFTSQUARE special RIGHTSQUARE OF type_specification",
"special : COMMA special",
"special :",
"procedure_type : PROCEDURE procedure_nonempty",
"procedure_nonempty : LEFTPAR type_specification type_specification_alpha RIGHTPAR",
"procedure_nonempty : result_type",
"procedure_nonempty : LEFTPAR type_specification type_specification_alpha RIGHTPAR result_type",
"procedure_nonempty :",
"identity_declaration : IDENTIFIER IS expression COLON type_specification",
"procedure_declaration : PROCEDURE IDENTIFIER procedure",
"procedure : LEFTPAR parameter parameter_alpha RIGHTPAR SEMICOLON expression",
"procedure : result_type SEMICOLON expression",
"procedure : LEFTPAR parameter parameter_alpha RIGHTPAR result_type SEMICOLON expression",
"procedure : SEMICOLON expression",
"parameter : IDENTIFIER COLON type_specification",
"result_type : COLON type_specification",
"type_declaration : TYPE IDENTIFIER EQ record_type",
"record_type : RECORD field field_alpha END",
"field : IDENTIFIER COLON type_specification",
"bound_pair_alpha : COMMA bound_pair bound_pair_alpha",
"bound_pair_alpha :",
"type_specification_alpha : COMMA type_specification type_specification_alpha",
"type_specification_alpha :",
"parameter_alpha : SEMICOLON parameter parameter_alpha",
"parameter_alpha :",
"field_alpha : SEMICOLON field field_alpha",
"field_alpha :",
"name : IDENTIFIER",
"name : name DOT IDENTIFIER",
"name : name LEFTSQUARE expression expression_alpha RIGHTSQUARE",
"name : NEW IDENTIFIER",
"name : procedure_call",
"expression : assignment",
"expression : disjunction",
"assign : ASSIGNMENT",
"assignment : name assign expression",
"disjunction : conjunction",
"disjunction : disjunction OR conjunction",
"conjunction : comparison",
"conjunction : conjunction AND comparison",
"comparison : relation",
"comparison : relation eqop relation",
"eqop : EQ",
"eqop : ET",
"relation : sum relop sum",
"relation : sum",
"relop : LT",
"relop : GT",
"sum : term",
"sum : sum addop term",
"addop : PLUS",
"addop : MINUS",
"term : factor",
"term : term mulop factor",
"mulop : MULTI",
"mulop : DIVIDE",
"mulop : DIV",
"mulop : MOD",
"factor : primary",
"factor : unop factor",
"unop : PLUS",
"unop : MINUS",
"unop : NOT",
"primary : denotation",
"primary : name",
"primary : LEFTPAR expression RIGHTPAR",
"primary : block",
"primary : clause",
"denotation : integer",
"denotation : FLOAT",
"procedure_call : name LEFTPAR argument argument_alpha RIGHTPAR",
"argument : expression",
"clause : conditional_clause",
"clause : case_clause",
"conditional_clause : IF expression THEN statement_list END",
"conditional_clause : IF expression THEN statement_list ELSE statement_list END",
"case_clause : CASE expression OF case_label COLON statement_list statement_list_alpha ELSE statement_list END",
"case_label : integer",
"expression_alpha : COMMA expression expression_alpha",
"expression_alpha :",
"argument_alpha : COMMA argument argument_alpha",
"argument_alpha :",
"statement_list_alpha : DOUBLESLASH statement_list statement_list_alpha",
"statement_list_alpha :",
"integer : INTEGER",

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
#line 594 "parser.y"

int main()
{
    // UNCOMMENT THE BELOW LINES TO PRINT THE RESPECTIVE STATES AND GOTO
    // DEBUG DRIVER
    /*#if YYDEBUG
	yydebug = 1;
    #endif*/
    init_symtable();
    printf("\n\n----------------------------------------Parsing Begins Here:----------------------------------------\n\n");
    yyparse();
    if(success)
    	printf("\nParsing Successful\n\n");
    print_table();
    return 0;
}

int yyerror(const char *msg)
{
	extern int yylineno;
	printf("Parsing Failed\nLine Number: %d %s\n",yylineno,msg);
	success = 0;
	return 0;
}

void print(char *s){
	printf("Reduction:  %s\n", s);
}


#line 561 "y.tab.c"

#if YYDEBUG
#include <stdio.h>		/* needed for printf */
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
        if ((yychar = YYLEX) < 0) yychar = YYEOF;
#if YYDEBUG
        if (yydebug)
        {
            yys = yyname[YYTRANSLATE(yychar)];
            printf("%sdebug: state %d, reading %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
    }
    if ((yyn = yysindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: state %d, shifting to state %d\n",
                    YYPREFIX, yystate, yytable[yyn]);
#endif
        if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM)
        {
            goto yyoverflow;
        }
        yystate = yytable[yyn];
        *++yystack.s_mark = yytable[yyn];
        *++yystack.l_mark = yylval;
        yychar = YYEMPTY;
        if (yyerrflag > 0)  --yyerrflag;
        goto yyloop;
    }
    if ((yyn = yyrindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
        yyn = yytable[yyn];
        goto yyreduce;
    }
    if (yyerrflag) goto yyinrecovery;

    YYERROR_CALL("syntax error");

    goto yyerrlab;

yyerrlab:
    ++yynerrs;

yyinrecovery:
    if (yyerrflag < 3)
    {
        yyerrflag = 3;
        for (;;)
        {
            if ((yyn = yysindex[*yystack.s_mark]) && (yyn += YYERRCODE) >= 0 &&
                    yyn <= YYTABLESIZE && yycheck[yyn] == YYERRCODE)
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: state %d, error recovery shifting\
 to state %d\n", YYPREFIX, *yystack.s_mark, yytable[yyn]);
#endif
                if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM)
                {
                    goto yyoverflow;
                }
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
            yys = yyname[YYTRANSLATE(yychar)];
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
    if (yym)
        yyval = yystack.l_mark[1-yym];
    else
        memset(&yyval, 0, sizeof yyval);
    switch (yyn)
    {
case 1:
#line 17 "parser.y"
	{
	print("program -> block");
	}
break;
case 2:
#line 43 "parser.y"
	{
	print("block -> DECLARE declaration block_alpha BEGIN statement statement_alpha END");
	}
break;
case 3:
#line 48 "parser.y"
	{
	print("block_alpha -> SEMICOLON declaration block_alpha");
	}
break;
case 5:
#line 54 "parser.y"
	{
	print("statement_alpha -> SEMICOLON statement statement_alpha");
	}
break;
case 7:
#line 60 "parser.y"
	{
	print("statement_list -> statement statement_alpha");
	}
break;
case 8:
#line 65 "parser.y"
	{
	print("statement -> label_definition1 statement_1");
	}
break;
case 9:
#line 70 "parser.y"
	{
	print("statement -> statement_1");
	}
break;
case 10:
#line 74 "parser.y"
	{
	print("statement -> error");
	}
break;
case 11:
#line 89 "parser.y"
	{
	print("statement_1 -> expression ");
	}
break;
case 12:
#line 93 "parser.y"
	{
	print("statement_1 -> iteration ");
	}
break;
case 13:
#line 97 "parser.y"
	{
	print("statement_1 -> jump");
	}
break;
case 14:
#line 102 "parser.y"
	{
	print("label_definition -> IDENTIFIER COLON");
	}
break;
case 15:
#line 107 "parser.y"
	{
	print("iteration -> WHILE expression loop");
	}
break;
case 16:
#line 111 "parser.y"
	{
	print("iteration -> FOR IDENTIFIER FROM expression TO expression loop");
	}
break;
case 17:
#line 116 "parser.y"
	{
	print("loop -> DO statement_list END");
	}
break;
case 18:
#line 121 "parser.y"
	{
	print("jump -> GOTO IDENTIFIER");
	}
break;
case 19:
#line 129 "parser.y"
	{
	print("declaration -> variable_declaration");
	}
break;
case 20:
#line 133 "parser.y"
	{
	print("declaration -> identity_declaration");
	}
break;
case 21:
#line 137 "parser.y"
	{
	print("declaration -> procedure_declaration");
	}
break;
case 22:
#line 141 "parser.y"
	{
	print("declaration -> type_declaration");
	}
break;
case 23:
#line 146 "parser.y"
	{
	print("variable_declaration -> IDENTIFIER COLON type_specification");
	}
break;
case 24:
#line 150 "parser.y"
	{
	print("variable_declaration -> IDENTIFIER COLON ARRAY LEFTSQUARE bound_pair bound_pair_alpha RIGHTSQUARE ARRAY type_specification");
	}
break;
case 25:
#line 155 "parser.y"
	{
	print("type_specification -> IDENTIFIER");
	}
break;
case 26:
#line 159 "parser.y"
	{
	print("type_specification -> REF type_specification");
	}
break;
case 27:
#line 163 "parser.y"
	{
	print("type_specification -> REF array_type");
	}
break;
case 28:
#line 167 "parser.y"
	{
	print("type_specification -> procedure_type");
	}
break;
case 29:
#line 172 "parser.y"
	{
	print("bound_pair -> expression COLON expression");
	}
break;
case 30:
#line 177 "parser.y"
	{
	print("array_type -> ARRAY LEFTSQUARE special RIGHTSQUARE OF type_specification");
	}
break;
case 31:
#line 182 "parser.y"
	{
	print("special -> COMMA special");
	}
break;
case 33:
#line 188 "parser.y"
	{
	print("procedure_type -> PROCEDURE");
	}
break;
case 34:
#line 193 "parser.y"
	{
	print("procedure_nonempty -> LEFTPAR type_specification type_specification_alpha RIGHTPAR");
	}
break;
case 35:
#line 197 "parser.y"
	{
	print("procedure_nonempty -> PROCEDURE result_type");
	}
break;
case 36:
#line 201 "parser.y"
	{
	print("procedure_nonempty -> LEFTPAR type_specification type_specification_alpha RIGHTPAR result_type");
	}
break;
case 38:
#line 219 "parser.y"
	{
	print("identity_declaration -> IDENTIFIER IS expression COLON type_specification");
	}
break;
case 39:
#line 224 "parser.y"
	{
	print("procedure_declaration -> PROCEDURE IDENTIFIER procedure");
	}
break;
case 40:
#line 229 "parser.y"
	{
	print("procedure -> LEFTPAR parameter parameter_alpha RIGHTPAR SEMICOLON expression");
	}
break;
case 41:
#line 233 "parser.y"
	{
	print("procedure -> result_type SEMICOLON expression");
	}
break;
case 42:
#line 237 "parser.y"
	{
	print("procedure -> LEFTPAR parameter parameter_alpha RIGHTPAR result_type SEMICOLON expression");
	}
break;
case 43:
#line 241 "parser.y"
	{
	print("procedure -> SEMICOLON expression");
	}
break;
case 44:
#line 252 "parser.y"
	{
	print("parameter -> IDENTIFIER COLON type_specification");
	}
break;
case 45:
#line 257 "parser.y"
	{
	print("result_type -> COLON type_specification");
	}
break;
case 46:
#line 262 "parser.y"
	{
	print("type_declaration -> TYPE IDENTIFIER EQ record_type");
	}
break;
case 47:
#line 267 "parser.y"
	{
	print("record_type -> RECORD field field_alpha END");
	}
break;
case 48:
#line 272 "parser.y"
	{
	print("field -> IDENTIFIER COLON type_specification");
	}
break;
case 49:
#line 292 "parser.y"
	{
	print("bound_pair_alpha -> COMMA bound_pair bound_pair_alpha");
	}
break;
case 51:
#line 298 "parser.y"
	{
	print("type_specification_alpha -> SCOMMA type_specification type_specification_alpha");
	}
break;
case 53:
#line 304 "parser.y"
	{
	print("parameter_alpha -> SEMICOLON parameter parameter_alpha");
	}
break;
case 55:
#line 310 "parser.y"
	{
	print("field_alpha -> SEMICOLON field field_alpha");
	}
break;
case 57:
#line 318 "parser.y"
	{
	print("name -> IDENTIFIER");
	}
break;
case 58:
#line 322 "parser.y"
	{
	print("name -> name DOT IDENTIFIER");
	}
break;
case 59:
#line 326 "parser.y"
	{
	print("name -> name LEFTSQUARE expression expression_alpha RIGHTSQUARE");
	}
break;
case 60:
#line 331 "parser.y"
	{
	print("name -> NEW IDENTIFIER");
	}
break;
case 61:
#line 335 "parser.y"
	{
	print("name -> procedure_call");
	}
break;
case 62:
#line 340 "parser.y"
	{
	print("expression -> assignment");
	}
break;
case 63:
#line 344 "parser.y"
	{
	print("expression -> disjunction");
	}
break;
case 64:
#line 349 "parser.y"
	{
	print("assign -> ASSIGNMENT");	
	}
break;
case 65:
#line 354 "parser.y"
	{
	print("assignment -> name assign expression");
	}
break;
case 66:
#line 359 "parser.y"
	{
	print("disjunction -> conjunction");
	}
break;
case 67:
#line 363 "parser.y"
	{
	print("disjunction -> disjunction OR conjunction");
	}
break;
case 68:
#line 368 "parser.y"
	{
	print("conjunction -> comparison ");
	}
break;
case 69:
#line 372 "parser.y"
	{
	print("conjunction -> conjunction AND comparison ");
	}
break;
case 70:
#line 377 "parser.y"
	{
	print("comparison -> relation");
	}
break;
case 71:
#line 381 "parser.y"
	{
	print("comparison -> relation eqop relation");
	}
break;
case 72:
#line 392 "parser.y"
	{
	print("eqop -> EQ ");
	}
break;
case 73:
#line 396 "parser.y"
	{
	print("eqop -> ET ");
	}
break;
case 74:
#line 401 "parser.y"
	{
	print("relation -> sum relop sum");
	}
break;
case 75:
#line 405 "parser.y"
	{
	print("relation -> sum");
	}
break;
case 76:
#line 416 "parser.y"
	{
	print("relop -> LT ");
	}
break;
case 77:
#line 420 "parser.y"
	{
	print("relop -> GT ");
	}
break;
case 78:
#line 425 "parser.y"
	{
	print("sum -> term ");
	}
break;
case 79:
#line 429 "parser.y"
	{
	print("sum -> sum addop term ");
	}
break;
case 80:
#line 434 "parser.y"
	{
	print("addop -> PLUS");
	}
break;
case 81:
#line 438 "parser.y"
	{
	print("addop -> MINUS");
	}
break;
case 82:
#line 443 "parser.y"
	{
	print("term -> factor");
	}
break;
case 83:
#line 447 "parser.y"
	{
	print("term -> term mulop factor");
	}
break;
case 84:
#line 452 "parser.y"
	{
	print("mulop -> MULTI");
	}
break;
case 85:
#line 456 "parser.y"
	{
	print("mulop -> DIVIDE");
	}
break;
case 86:
#line 460 "parser.y"
	{
	print("mulop -> DIV");
	}
break;
case 87:
#line 464 "parser.y"
	{
	print("mulop -> MOD");
	}
break;
case 88:
#line 469 "parser.y"
	{
	print("factor -> primary ");
	}
break;
case 89:
#line 473 "parser.y"
	{
	print("factor -> unop factor");
	}
break;
case 90:
#line 478 "parser.y"
	{
	print("unop -> PLUS");
	}
break;
case 91:
#line 482 "parser.y"
	{
	print("unop -> MINUS");
	}
break;
case 92:
#line 486 "parser.y"
	{
	print("unop -> NOT");
	}
break;
case 93:
#line 491 "parser.y"
	{
	print("primary -> denotation");
	}
break;
case 94:
#line 495 "parser.y"
	{
	print("primary -> name");
	}
break;
case 95:
#line 499 "parser.y"
	{
	print("primary -> LEFTPAR expression RIGHTPAR");
	}
break;
case 96:
#line 503 "parser.y"
	{
	print("primary -> block");
	}
break;
case 97:
#line 507 "parser.y"
	{
	print("primary -> clause");
	}
break;
case 98:
#line 513 "parser.y"
	{
	print("denotation -> integer");	
	}
break;
case 99:
#line 518 "parser.y"
	{
	print("denotation -> FLOAT");	
	}
break;
case 100:
#line 524 "parser.y"
	{
	print("procedure_call -> name LEFTPAR argument argument_alpha RIGHTPAR");
	}
break;
case 101:
#line 529 "parser.y"
	{
	print("argument -> expression");
	}
break;
case 102:
#line 534 "parser.y"
	{
	print("clause -> conditional_clause");
	}
break;
case 103:
#line 538 "parser.y"
	{
	print("clause -> case_clause");
	}
break;
case 104:
#line 543 "parser.y"
	{
	print("conditional_clause -> IF expression THEN statement_list END");
	}
break;
case 105:
#line 547 "parser.y"
	{
	print("conditional_clause -> IF expression THEN statement_list ELSE statement_list END");
	}
break;
case 106:
#line 553 "parser.y"
	{
	print("case_clause -> CASE expression OF  case_label COLON statement_list statement_list_alpha ELSE statement_list END");
	}
break;
case 107:
#line 558 "parser.y"
	{
	print("case_label -> integer");
	}
break;
case 108:
#line 566 "parser.y"
	{
	print("expression_alpha -> COMMA expression expression_alpha ");
	}
break;
case 110:
#line 572 "parser.y"
	{
	print("argument_alpha -> COMMA argument argument_alpha ");
	}
break;
case 112:
#line 578 "parser.y"
	{
	print("statement_list_alpha -> DOUBLESLASH statement_list statement_list_alpha");
	}
break;
case 114:
#line 589 "parser.y"
	{
	print("integer -> INTEGER");
	}
break;
#line 1381 "y.tab.c"
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
            if ((yychar = YYLEX) < 0) yychar = YYEOF;
#if YYDEBUG
            if (yydebug)
            {
                yys = yyname[YYTRANSLATE(yychar)];
                printf("%sdebug: state %d, reading %d (%s)\n",
                        YYPREFIX, YYFINAL, yychar, yys);
            }
#endif
        }
        if (yychar == YYEOF) goto yyaccept;
        goto yyloop;
    }
    if ((yyn = yygindex[yym]) && (yyn += yystate) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yystate)
        yystate = yytable[yyn];
    else
        yystate = yydgoto[yym];
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: after reduction, shifting from state %d \
to state %d\n", YYPREFIX, *yystack.s_mark, yystate);
#endif
    if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM)
    {
        goto yyoverflow;
    }
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
