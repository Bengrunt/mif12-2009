/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

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
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     KW_TYPE = 258,
     KW_PROGRAM = 259,
     KW_PROCEDURE = 260,
     KW_FUNCTION = 261,
     KW_VAR = 262,
     KW_CONST = 263,
     KW_BEGIN = 264,
     KW_END = 265,
     KW_INTEGER = 266,
     KW_REAL = 267,
     KW_BOOLEAN = 268,
     KW_CHAR = 269,
     KW_STRING = 270,
     KW_ARRAY = 271,
     KW_PTR = 272,
     KW_OF = 273,
     KW_RECORD = 274,
     KW_DIV = 275,
     KW_MOD = 276,
     KW_AND = 277,
     KW_OR = 278,
     KW_XOR = 279,
     KW_NOT = 280,
     KW_FOR = 281,
     KW_TO = 282,
     KW_REPEAT = 283,
     KW_UNTIL = 284,
     KW_WHILE = 285,
     KW_DO = 286,
     KW_ELSE = 287,
     KW_IF = 288,
     KW_THEN = 289,
     KW_DOWNTO = 290,
     SEP_SCOL = 291,
     SEP_DOT = 292,
     SEP_COL = 293,
     SEP_COMMA = 294,
     SEP_DOTDOT = 295,
     SEP_CO = 296,
     SEP_CF = 297,
     SEP_PO = 298,
     SEP_PF = 299,
     OP_EQ = 300,
     OP_NEQ = 301,
     OP_LT = 302,
     OP_LTE = 303,
     OP_GT = 304,
     OP_GTE = 305,
     OP_ADD = 306,
     OP_SUB = 307,
     OP_MUL = 308,
     OP_SLASH = 309,
     OP_EXP = 310,
     OP_PTR = 311,
     OP_AFFECT = 312,
     TOK_IDENT = 313,
     TOK_INTEGER = 314,
     TOK_REAL = 315,
     TOK_PTR = 316,
     TOK_STRING = 317,
     TOK_CHAR = 318
   };
#endif
/* Tokens.  */
#define KW_TYPE 258
#define KW_PROGRAM 259
#define KW_PROCEDURE 260
#define KW_FUNCTION 261
#define KW_VAR 262
#define KW_CONST 263
#define KW_BEGIN 264
#define KW_END 265
#define KW_INTEGER 266
#define KW_REAL 267
#define KW_BOOLEAN 268
#define KW_CHAR 269
#define KW_STRING 270
#define KW_ARRAY 271
#define KW_PTR 272
#define KW_OF 273
#define KW_RECORD 274
#define KW_DIV 275
#define KW_MOD 276
#define KW_AND 277
#define KW_OR 278
#define KW_XOR 279
#define KW_NOT 280
#define KW_FOR 281
#define KW_TO 282
#define KW_REPEAT 283
#define KW_UNTIL 284
#define KW_WHILE 285
#define KW_DO 286
#define KW_ELSE 287
#define KW_IF 288
#define KW_THEN 289
#define KW_DOWNTO 290
#define SEP_SCOL 291
#define SEP_DOT 292
#define SEP_COL 293
#define SEP_COMMA 294
#define SEP_DOTDOT 295
#define SEP_CO 296
#define SEP_CF 297
#define SEP_PO 298
#define SEP_PF 299
#define OP_EQ 300
#define OP_NEQ 301
#define OP_LT 302
#define OP_LTE 303
#define OP_GT 304
#define OP_GTE 305
#define OP_ADD 306
#define OP_SUB 307
#define OP_MUL 308
#define OP_SLASH 309
#define OP_EXP 310
#define OP_PTR 311
#define OP_AFFECT 312
#define TOK_IDENT 313
#define TOK_INTEGER 314
#define TOK_REAL 315
#define TOK_PTR 316
#define TOK_STRING 317
#define TOK_CHAR 318




/* Copy the first part of user declarations.  */
#line 1 "src/parser.ypp"

#include "globals.hpp"

/* Ressources internes. */
TableDesIdentificateurs ti; /**< Table des indentificateurs. */
TableDesSymboles ts; /**< Table des symboles. */


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 81 "src/parser.ypp"
{
  Type* type;
  ListeIdentificateurs* li;
  TypeInterval::Boundary bound;
  std::vector<TypeInterval*>* lti;
  TypeInterval* ti;
  TypePointer* tp;
  TypeArray* ta;
}
/* Line 187 of yacc.c.  */
#line 240 "src/parser.cpp"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 253 "src/parser.cpp"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
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
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   353

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  64
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  34
/* YYNRULES -- Number of rules.  */
#define YYNRULES  93
/* YYNRULES -- Number of states.  */
#define YYNSTATES  165

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   318

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      55,    56,    57,    58,    59,    60,    61,    62,    63
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     8,    11,    14,    17,    18,    21,    23,
      26,    27,    30,    32,    37,    41,    43,    45,    47,    49,
      51,    53,    55,    57,    59,    61,    63,    65,    67,    71,
      75,    77,    80,    82,    84,    91,    95,    97,    99,   101,
     105,   109,   111,   115,   118,   122,   126,   128,   133,   138,
     147,   152,   159,   163,   165,   167,   169,   171,   173,   175,
     177,   179,   181,   185,   189,   193,   197,   201,   205,   208,
     211,   215,   219,   223,   227,   231,   235,   239,   243,   247,
     250,   254,   256,   258,   260,   262,   264,   266,   271,   275,
     278,   281,   285,   289
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      65,     0,    -1,    66,    36,    67,    37,    -1,     4,    58,
      -1,    68,    85,    -1,     7,    69,    -1,    -1,    69,    70,
      -1,    70,    -1,     7,    69,    -1,    -1,    69,    70,    -1,
      70,    -1,    71,    38,    72,    36,    -1,    71,    39,    58,
      -1,    58,    -1,    74,    -1,    73,    -1,    11,    -1,    12,
      -1,    13,    -1,    14,    -1,    15,    -1,    75,    -1,    76,
      -1,    78,    -1,    81,    -1,    84,    -1,    43,    71,    44,
      -1,    77,    40,    77,    -1,    59,    -1,    52,    59,    -1,
      63,    -1,    58,    -1,    16,    41,    79,    42,    18,    72,
      -1,    79,    39,    80,    -1,    80,    -1,    58,    -1,    76,
      -1,    19,    82,    10,    -1,    82,    36,    83,    -1,    83,
      -1,    71,    38,    72,    -1,    56,    72,    -1,     9,    86,
      10,    -1,    86,    36,    87,    -1,    87,    -1,    30,    89,
      31,    87,    -1,    28,    86,    29,    89,    -1,    26,    58,
      57,    89,    88,    89,    31,    87,    -1,    33,    89,    34,
      87,    -1,    33,    89,    34,    87,    32,    87,    -1,    94,
      57,    89,    -1,    95,    -1,    85,    -1,    27,    -1,    35,
      -1,    90,    -1,    91,    -1,    92,    -1,    93,    -1,    94,
      -1,    89,    51,    89,    -1,    89,    52,    89,    -1,    89,
      53,    89,    -1,    89,    54,    89,    -1,    89,    20,    89,
      -1,    89,    21,    89,    -1,    52,    89,    -1,    51,    89,
      -1,    89,    45,    89,    -1,    89,    46,    89,    -1,    89,
      47,    89,    -1,    89,    48,    89,    -1,    89,    49,    89,
      -1,    89,    50,    89,    -1,    89,    22,    89,    -1,    89,
      23,    89,    -1,    89,    24,    89,    -1,    25,    89,    -1,
      43,    89,    44,    -1,    95,    -1,    59,    -1,    60,    -1,
      17,    -1,    62,    -1,    58,    -1,    94,    41,    89,    42,
      -1,    94,    37,    58,    -1,    94,    56,    -1,    58,    96,
      -1,    43,    97,    44,    -1,    97,    39,    89,    -1,    89,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   104,   104,   108,   119,   134,   135,   139,   140,   156,
     157,   159,   160,   162,   181,   189,   255,   256,   259,   260,
     261,   262,   263,   266,   267,   268,   269,   270,   274,   278,
     280,   281,   282,   283,   286,   291,   295,   302,   303,   306,
     309,   310,   313,   317,   321,   324,   325,   328,   329,   330,
     331,   332,   333,   334,   335,   338,   339,   343,   344,   345,
     346,   347,   350,   351,   352,   353,   354,   355,   356,   357,
     360,   361,   362,   363,   364,   365,   368,   369,   370,   371,
     374,   375,   376,   377,   378,   379,   382,   383,   384,   385,
     388,   391,   394,   395
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "KW_TYPE", "KW_PROGRAM", "KW_PROCEDURE",
  "KW_FUNCTION", "KW_VAR", "KW_CONST", "KW_BEGIN", "KW_END", "KW_INTEGER",
  "KW_REAL", "KW_BOOLEAN", "KW_CHAR", "KW_STRING", "KW_ARRAY", "KW_PTR",
  "KW_OF", "KW_RECORD", "KW_DIV", "KW_MOD", "KW_AND", "KW_OR", "KW_XOR",
  "KW_NOT", "KW_FOR", "KW_TO", "KW_REPEAT", "KW_UNTIL", "KW_WHILE",
  "KW_DO", "KW_ELSE", "KW_IF", "KW_THEN", "KW_DOWNTO", "SEP_SCOL",
  "SEP_DOT", "SEP_COL", "SEP_COMMA", "SEP_DOTDOT", "SEP_CO", "SEP_CF",
  "SEP_PO", "SEP_PF", "OP_EQ", "OP_NEQ", "OP_LT", "OP_LTE", "OP_GT",
  "OP_GTE", "OP_ADD", "OP_SUB", "OP_MUL", "OP_SLASH", "OP_EXP", "OP_PTR",
  "OP_AFFECT", "TOK_IDENT", "TOK_INTEGER", "TOK_REAL", "TOK_PTR",
  "TOK_STRING", "TOK_CHAR", "$accept", "Program", "ProgramHeader", "Block",
  "BlockDeclVar", "ListDeclVar", "DeclVar", "ListIdent", "Type",
  "BaseType", "UserType", "EnumType", "InterType", "InterBase",
  "ArrayType", "ListArrayIndex", "ArrayIndex", "RecordType",
  "RecordFields", "RecordField", "PointerType", "BlockCode", "ListInstr",
  "Instr", "ForDirection", "Expression", "MathExpr", "CompExpr",
  "BoolExpr", "AtomExpr", "VarExpr", "Call", "Parameters",
  "ListParameters", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    64,    65,    66,    67,    68,    68,    69,    69,    68,
      68,    69,    69,    70,    71,    71,    72,    72,    73,    73,
      73,    73,    73,    74,    74,    74,    74,    74,    75,    76,
      77,    77,    77,    77,    78,    79,    79,    80,    80,    81,
      82,    82,    83,    84,    85,    86,    86,    87,    87,    87,
      87,    87,    87,    87,    87,    88,    88,    89,    89,    89,
      89,    89,    90,    90,    90,    90,    90,    90,    90,    90,
      91,    91,    91,    91,    91,    91,    92,    92,    92,    92,
      93,    93,    93,    93,    93,    93,    94,    94,    94,    94,
      95,    96,    97,    97
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     4,     2,     2,     2,     0,     2,     1,     2,
       0,     2,     1,     4,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     3,
       1,     2,     1,     1,     6,     3,     1,     1,     1,     3,
       3,     1,     3,     2,     3,     3,     1,     4,     4,     8,
       4,     6,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     3,     3,     3,     3,     3,     2,     2,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     2,
       3,     1,     1,     1,     1,     1,     1,     4,     3,     2,
       2,     3,     3,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     3,     1,     6,     0,     0,     0,
      15,     5,     8,     0,     2,     0,     4,     7,     0,     0,
       0,     0,     0,     0,    86,    54,     0,    46,     0,    53,
      18,    19,    20,    21,    22,     0,     0,     0,     0,     0,
      33,    30,    32,     0,    17,    16,    23,    24,     0,    25,
      26,    27,    14,     0,     0,    84,     0,     0,     0,     0,
      82,    83,    85,     0,    57,    58,    59,    60,    61,    81,
       0,     0,    90,    44,     0,     0,     0,    89,     0,     0,
       0,     0,    41,     0,    31,    43,    13,     0,     0,     0,
      79,     0,    69,    68,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    93,     0,    45,    88,     0,    52,    37,    38,     0,
      36,     0,    39,     0,    28,    29,     0,    48,    80,    66,
      67,    76,    77,    78,    47,    70,    71,    72,    73,    74,
      75,    62,    63,    64,    65,    50,     0,    91,    87,     0,
       0,    42,    40,    55,    56,     0,     0,    92,    35,     0,
       0,    51,    34,     0,    49
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     8,     9,    11,    12,    13,    43,    44,
      45,    46,    47,    48,    49,   119,   120,    50,    81,    82,
      51,    25,    26,    27,   155,    63,    64,    65,    66,    67,
      68,    69,    72,   112
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -75
static const yytype_int16 yypact[] =
{
      20,   -18,    42,    29,   -75,   -75,    40,    -7,    18,    59,
     -75,    -7,   -75,    11,   -75,     8,   -75,   -75,   107,    12,
      13,     8,    -6,    -6,    26,   -75,    -1,   -75,   -27,   -75,
     -75,   -75,   -75,   -75,   -75,    31,    -7,    -7,    21,   107,
     -75,   -75,   -75,    41,   -75,   -75,   -75,   -75,    39,   -75,
     -75,   -75,   -75,    25,   -11,   -75,    -6,    -6,    -6,    -6,
     -75,   -75,   -75,   169,   -75,   -75,   -75,   -75,   -25,   -75,
     204,    -6,   -75,   -75,     8,    30,    -6,   -75,    -6,   -37,
      19,     3,   -75,   -12,   -75,   -75,   -75,    15,    -6,    -6,
     299,   219,   299,   299,    -6,    -6,    -6,    -6,    -6,     8,
      -6,    -6,    -6,    -6,    -6,    -6,    -6,    -6,    -6,    -6,
       8,   299,     4,   -75,   -75,   254,   299,    47,   -75,   -19,
     -75,   107,   -75,    -7,   -75,   -75,   134,   299,   -75,   299,
     299,   299,   299,   299,   -75,   299,   299,   299,   299,   299,
     299,   299,   299,   299,   299,    60,    -6,   -75,   -75,   -37,
      73,   -75,   -75,   -75,   -75,    -6,     8,   299,   -75,   107,
     264,   -75,   -75,     8,   -75
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -75,   -75,   -75,   -75,   -75,   -75,    87,   -34,   -35,   -75,
     -75,   -75,   -74,    17,   -75,   -75,   -33,   -75,   -75,    -8,
     -75,   108,   104,   -66,   -75,     5,   -75,   -75,   -75,   -75,
     -15,   -14,   -75,   -75
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -34
static const yytype_int16 yytable[] =
{
      28,    29,    80,    83,    85,   118,    28,    29,   113,    73,
      75,    55,    75,   122,    76,    38,    76,    15,    89,    56,
     149,   117,    41,   150,     1,    74,    42,    19,    70,    77,
      78,    77,   124,   134,    20,    74,    21,    57,    22,   123,
       4,    23,     5,   146,   145,    58,    59,     7,   147,    18,
      19,    10,    24,    60,    61,    14,    62,   121,    19,    28,
      29,    90,    91,    92,    93,     6,    24,    38,    15,    71,
      52,    53,    79,    40,    41,   118,   111,    86,    42,    87,
      84,   115,    88,   116,    28,    29,   151,   -33,   114,    80,
     161,   159,   156,   126,   127,    28,    29,   164,    17,   129,
     130,   131,   132,   133,   125,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   152,   158,    16,    30,    31,
      32,    33,    34,    35,   162,    54,    36,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    28,    29,     0,     0,     0,     0,     0,    28,    29,
      37,   157,     0,     0,    94,    95,    96,    97,    98,    38,
     160,   153,     0,    39,     0,    40,    41,     0,     0,   154,
      42,     0,     0,     0,     0,     0,     0,     0,     0,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,    94,
      95,    96,    97,    98,     0,     0,     0,     0,     0,     0,
      99,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,    94,    95,    96,    97,    98,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   110,    94,
      95,    96,    97,    98,     0,     0,     0,     0,     0,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,     0,
       0,     0,     0,   128,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,    94,    95,    96,    97,    98,     0,
       0,     0,     0,     0,    94,    95,    96,    97,    98,     0,
       0,     0,     0,     0,     0,   163,   148,     0,     0,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,    94,
      95,    96,    97,    98,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109
};

static const yytype_int16 yycheck[] =
{
      15,    15,    36,    37,    39,    79,    21,    21,    74,    10,
      37,    17,    37,    10,    41,    52,    41,     9,    29,    25,
      39,    58,    59,    42,     4,    36,    63,    39,    23,    56,
      57,    56,    44,    99,    26,    36,    28,    43,    30,    36,
      58,    33,     0,    39,   110,    51,    52,     7,    44,    38,
      39,    58,    58,    59,    60,    37,    62,    38,    39,    74,
      74,    56,    57,    58,    59,    36,    58,    52,     9,    43,
      58,    58,    41,    58,    59,   149,    71,    36,    63,    40,
      59,    76,    57,    78,    99,    99,   121,    40,    58,   123,
     156,    18,    32,    88,    89,   110,   110,   163,    11,    94,
      95,    96,    97,    98,    87,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   123,   149,     9,    11,    12,
      13,    14,    15,    16,   159,    21,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   156,   156,    -1,    -1,    -1,    -1,    -1,   163,   163,
      43,   146,    -1,    -1,    20,    21,    22,    23,    24,    52,
     155,    27,    -1,    56,    -1,    58,    59,    -1,    -1,    35,
      63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    20,
      21,    22,    23,    24,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    20,    21,    22,    23,    24,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    20,
      21,    22,    23,    24,    -1,    -1,    -1,    -1,    -1,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    -1,
      -1,    -1,    -1,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    20,    21,    22,    23,    24,    -1,
      -1,    -1,    -1,    -1,    20,    21,    22,    23,    24,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    42,    -1,    -1,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    20,
      21,    22,    23,    24,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     4,    65,    66,    58,     0,    36,     7,    67,    68,
      58,    69,    70,    71,    37,     9,    85,    70,    38,    39,
      26,    28,    30,    33,    58,    85,    86,    87,    94,    95,
      11,    12,    13,    14,    15,    16,    19,    43,    52,    56,
      58,    59,    63,    72,    73,    74,    75,    76,    77,    78,
      81,    84,    58,    58,    86,    17,    25,    43,    51,    52,
      59,    60,    62,    89,    90,    91,    92,    93,    94,    95,
      89,    43,    96,    10,    36,    37,    41,    56,    57,    41,
      71,    82,    83,    71,    59,    72,    36,    40,    57,    29,
      89,    89,    89,    89,    20,    21,    22,    23,    24,    31,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      34,    89,    97,    87,    58,    89,    89,    58,    76,    79,
      80,    38,    10,    36,    44,    77,    89,    89,    44,    89,
      89,    89,    89,    89,    87,    89,    89,    89,    89,    89,
      89,    89,    89,    89,    89,    87,    39,    44,    42,    39,
      42,    72,    83,    27,    35,    88,    32,    89,    80,    18,
      89,    87,    72,    31,    87
};

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
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
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
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

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
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
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

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
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
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
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

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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
        case 3:
#line 108 "src/parser.ypp"
    {
						try{ti.add(yytext);}
						catch(AllocationException e) {
							std::cerr << e.what() << std::endl;
							exit(EXIT_FAILURE);
						}
						ts.add(new Program());
					}
    break;

  case 13:
#line 162 "src/parser.ypp"
    {
						for(
							unsigned int i = 0;
							i < (yyvsp[(1) - (4)].li)->size();
							i++
						) {
							try{ti.add((yyvsp[(1) - (4)].li)->get(i));}
							catch(AllocationException e) {
								std::cerr << e.what() << std::endl;
								exit(EXIT_FAILURE);
							}
							ts.add(new Variable((yyvsp[(3) - (4)].type)));
						}
						delete (yyvsp[(1) - (4)].li);
						(yyvsp[(1) - (4)].li) = NULL;
					}
    break;

  case 14:
#line 181 "src/parser.ypp"
    {
						(yyval.li) = (yyvsp[(1) - (3)].li);
						try{(yyval.li)->add(yytext);}
						catch(AllocationException e) {
							std::cerr << e.what() << std::endl;
							exit(EXIT_FAILURE);
						}
					}
    break;

  case 15:
#line 189 "src/parser.ypp"
    {
						(yyval.li) = new ListeIdentificateurs();
						try{(yyval.li)->add(yytext);}
						catch(AllocationException e) {
							std::cerr << e.what() << std::endl;
							exit(EXIT_FAILURE);
						}
					}
    break;

  case 16:
#line 255 "src/parser.ypp"
    {(yyval.type) = (yyvsp[(1) - (1)].type);}
    break;

  case 17:
#line 256 "src/parser.ypp"
    {(yyval.type) = (yyvsp[(1) - (1)].type);}
    break;

  case 18:
#line 259 "src/parser.ypp"
    {(yyval.type) = new TypeInteger();}
    break;

  case 19:
#line 260 "src/parser.ypp"
    {(yyval.type) = new TypeReal();}
    break;

  case 20:
#line 261 "src/parser.ypp"
    {(yyval.type) = new TypeBoolean();}
    break;

  case 21:
#line 262 "src/parser.ypp"
    {(yyval.type) = new TypeChar();}
    break;

  case 22:
#line 263 "src/parser.ypp"
    {(yyval.type) = new TypeString();}
    break;

  case 24:
#line 267 "src/parser.ypp"
    {(yyval.type) = (yyvsp[(1) - (1)].ti);}
    break;

  case 25:
#line 268 "src/parser.ypp"
    {(yyval.type) = (yyvsp[(1) - (1)].ta);}
    break;

  case 27:
#line 270 "src/parser.ypp"
    {(yyval.type) = (yyvsp[(1) - (1)].tp);}
    break;

  case 29:
#line 278 "src/parser.ypp"
    {(yyval.ti) = new TypeInterval((yyvsp[(1) - (3)].bound), (yyvsp[(3) - (3)].bound));}
    break;

  case 30:
#line 280 "src/parser.ypp"
    {(yyval.bound).id = false; (yyval.bound).data.iVal = atoi(yytext);}
    break;

  case 31:
#line 281 "src/parser.ypp"
    {(yyval.bound).id = false; (yyval.bound).data.iVal = -atoi(yytext);}
    break;

  case 32:
#line 282 "src/parser.ypp"
    {(yyval.bound).id = false; (yyval.bound).data.iVal = (int) yytext[1];}
    break;

  case 33:
#line 283 "src/parser.ypp"
    {(yyval.bound).id = true; (yyval.bound).data.id = ti.getId(yytext);}
    break;

  case 34:
#line 286 "src/parser.ypp"
    {
					(yyval.ta) = new TypeArray((yyvsp[(6) - (6)].type), (yyvsp[(3) - (6)].lti));
				}
    break;

  case 35:
#line 291 "src/parser.ypp"
    {
						(yyvsp[(1) - (3)].lti)->push_back((yyvsp[(3) - (3)].ti));
						(yyval.lti) = (yyvsp[(1) - (3)].lti);
					}
    break;

  case 36:
#line 295 "src/parser.ypp"
    {
						std::vector<TypeInterval*>* intervals = new std::vector<TypeInterval*>;
						intervals->push_back((yyvsp[(1) - (1)].ti));
						(yyval.lti) = intervals;
					}
    break;

  case 38:
#line 303 "src/parser.ypp"
    {(yyval.ti) = (yyvsp[(1) - (1)].ti);}
    break;

  case 43:
#line 317 "src/parser.ypp"
    {(yyval.tp) = new TypePointer((yyvsp[(2) - (2)].type));}
    break;


/* Line 1267 of yacc.c.  */
#line 1814 "src/parser.cpp"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
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
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
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


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

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
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 397 "src/parser.ypp"

