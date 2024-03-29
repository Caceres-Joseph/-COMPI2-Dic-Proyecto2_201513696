/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Substitute the type names.  */
#define YYSTYPE         ZZSTYPE
#define YYLTYPE         ZZLTYPE
/* Substitute the variable and function names.  */
#define yyparse         zzparse
#define yylex           zzlex
#define yyerror         zzerror
#define yydebug         zzdebug
#define yynerrs         zznerrs

#define yylval          zzlval
#define yychar          zzchar
#define yylloc          zzlloc

/* Copy the first part of user declarations.  */
#line 4 "sintactico1.y" /* yacc.c:339  */

#include "scanner1.h"
#include <iostream>
#include <string>
#include "Gramatica/inclusionnodos.h"
#include "Gramatica/Entorno/entorno3d.h"
#include "Gramatica/Estructuras/TablaSimbolos/tablatemporales.h"
#include "Gramatica/Estructuras/Etiquetas/tablaetiquetas.h" 
#include "Coline/Elementos/Tablas/tablasimbolos.h"
//class tablaSimbolos;
/*
#include "Gramatica/Arbol/Abstraccion/nodoast.h"
#include "Arbol/Abstraccion/astlist.h"
*/
extern int zzlineno; //linea actual donde se encuentra el parser (analisis lexico) lo maneja BISON
extern int columna; //columna actual donde se encuentra el parser (analisis lexico) lo maneja BISON
extern char *zztext; //lexema actual donde esta el parser (analisis lexico) lo maneja BISON
extern int nLine;
tablaSimbolos *tabla3;

int zzerror(const char* mens){
//metodo que se llama al haber un error sintactico
//SE IMPRIME EN CONSOLA EL ERROR
std::cout <<mens<<" "<<zztext<< std::endl;
return 0;
}
void setSalida3(tablaSimbolos *tabla2) { 
 tabla3=tabla2; 
 nLine=1;
}


static Entorno3D *entorno;

#line 112 "parser1.cpp" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* In a future release of Bison, this section will be replaced
   by #include "parser1.h".  */
#ifndef YY_ZZ_PARSER1_H_INCLUDED
# define YY_ZZ_PARSER1_H_INCLUDED
/* Debug traces.  */
#ifndef ZZDEBUG
# if defined YYDEBUG
#if YYDEBUG
#   define ZZDEBUG 1
#  else
#   define ZZDEBUG 0
#  endif
# else /* ! defined YYDEBUG */
#  define ZZDEBUG 0
# endif /* ! defined YYDEBUG */
#endif  /* ! defined ZZDEBUG */
#if ZZDEBUG
extern int zzdebug;
#endif

/* Token type.  */
#ifndef ZZTOKENTYPE
# define ZZTOKENTYPE
  enum zztokentype
  {
    mas = 258,
    menos = 259,
    mult = 260,
    pot = 261,
    divi = 262,
    mod = 263,
    coma = 264,
    eql = 265,
    nequal = 266,
    gtr = 267,
    lwr = 268,
    grequal = 269,
    lrequal = 270,
    ptcoma = 271,
    dpts = 272,
    okey = 273,
    ckey = 274,
    oparent = 275,
    cparent = 276,
    asignacion = 277,
    obracket = 278,
    cbracket = 279,
    gto = 280,
    vacio = 281,
    si = 282,
    imprimir = 283,
    charvalue = 284,
    intvalue = 285,
    floatvalue = 286,
    getbool = 287,
    getnum = 288,
    outstr = 289,
    outnum = 290,
    instr = 291,
    innum = 292,
    show = 293,
    getrandom = 294,
    getarrlength = 295,
    getstrlength = 296,
    pila = 297,
    monticulo = 298,
    pool = 299,
    cleanFunc = 300,
    ente = 301,
    flota = 302,
    etiqueta = 303,
    identi = 304
  };
#endif

/* Value type.  */
#if ! defined ZZSTYPE && ! defined ZZSTYPE_IS_DECLARED

union ZZSTYPE
{
#line 41 "sintactico1.y" /* yacc.c:355  */

//se especifican los tipo de valores para los no terminales y lo terminales
ASTList *Listado;
NodoAST *ASTNode;
int OPERADOR;
char TEXT[256];//NO PUEDO METER UN STRING AQUI!!!!

#line 218 "parser1.cpp" /* yacc.c:355  */
};

typedef union ZZSTYPE ZZSTYPE;
# define ZZSTYPE_IS_TRIVIAL 1
# define ZZSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined ZZLTYPE && ! defined ZZLTYPE_IS_DECLARED
typedef struct ZZLTYPE ZZLTYPE;
struct ZZLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define ZZLTYPE_IS_DECLARED 1
# define ZZLTYPE_IS_TRIVIAL 1
#endif


extern ZZSTYPE zzlval;
extern ZZLTYPE zzlloc;
int zzparse (void);

#endif /* !YY_ZZ_PARSER1_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 249 "parser1.cpp" /* yacc.c:358  */

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
#else
typedef signed char yytype_int8;
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
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined ZZLTYPE_IS_TRIVIAL && ZZLTYPE_IS_TRIVIAL \
             && defined ZZSTYPE_IS_TRIVIAL && ZZSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   166

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  50
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  19
/* YYNRULES -- Number of rules.  */
#define YYNRULES  77
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  165

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   304

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
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
      45,    46,    47,    48,    49
};

#if ZZDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   127,   127,   127,   138,   144,   149,   155,   161,   167,
     173,   179,   185,   191,   197,   203,   209,   215,   221,   227,
     233,   239,   248,   253,   261,   267,   273,   279,   285,   291,
     297,   303,   309,   315,   321,   327,   333,   339,   345,   351,
     360,   369,   378,   387,   396,   403,   409,   419,   427,   435,
     443,   454,   464,   472,   480,   486,   491,   497,   503,   508,
     513,   518,   523,   528,   533,   540,   544,   548,   552,   556,
     560,   567,   577,   581,   585,   589,   593,   597
};
#endif

#if ZZDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "mas", "menos", "mult", "pot", "divi",
  "mod", "coma", "eql", "nequal", "gtr", "lwr", "grequal", "lrequal",
  "ptcoma", "dpts", "okey", "ckey", "oparent", "cparent", "asignacion",
  "obracket", "cbracket", "gto", "vacio", "si", "imprimir", "charvalue",
  "intvalue", "floatvalue", "getbool", "getnum", "outstr", "outnum",
  "instr", "innum", "show", "getrandom", "getarrlength", "getstrlength",
  "pila", "monticulo", "pool", "cleanFunc", "ente", "flota", "etiqueta",
  "identi", "$accept", "INICIO", "$@1", "INSTRUCCIONES", "METODO",
  "SENTENCIAS", "ETQ", "LLAMADA", "SALTO_NO_COND", "FUN_CLEAN",
  "PRINT_FUN", "ASIGNA", "SALTO_COND", "PRINT_STR", "EXPRESION", "VALOR",
  "ARITMETICO", "EXP_REL", "RELACIONAL", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304
};
# endif

#define YYPACT_NINF -103

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-103)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -103,     9,    37,  -103,   -29,   -24,    17,    22,    23,     6,
      29,    38,    40,    50,     0,    37,  -103,  -103,  -103,  -103,
    -103,  -103,  -103,  -103,  -103,    56,    53,   112,    -3,   112,
     112,   112,   112,   112,  -103,    55,   112,  -103,  -103,  -103,
    -103,  -103,  -103,  -103,  -103,  -103,  -103,    57,    54,    63,
      67,    68,    74,    75,    76,  -103,  -103,  -103,    21,    79,
      92,    93,    94,    83,    81,    82,    84,   109,    61,    91,
      43,   101,   112,   112,   112,   112,   112,   112,   112,  -103,
    -103,  -103,  -103,  -103,  -103,   112,    95,   112,   112,   112,
     105,   100,   102,   106,   112,  -103,  -103,  -103,  -103,  -103,
    -103,  -103,  -103,   112,    -4,   108,   110,   113,   114,   103,
     115,   126,  -103,    85,   116,   117,   130,  -103,   112,   112,
     112,   131,  -103,  -103,    98,  -103,  -103,  -103,  -103,  -103,
    -103,  -103,  -103,  -103,  -103,  -103,  -103,  -103,  -103,  -103,
     120,   137,   141,   144,   146,   147,   148,   149,  -103,  -103,
    -103,  -103,  -103,  -103,  -103,  -103,  -103,  -103,  -103,  -103,
    -103,  -103,  -103,  -103,  -103
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     0,     1,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     3,    17,    18,    16,    15,
      19,    20,    14,    13,    21,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    40,     0,     0,     5,     4,     6,
       7,    10,    11,     8,     9,    12,    42,     0,     0,     0,
       0,     0,     0,     0,     0,    56,    57,    55,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      54,     0,     0,     0,     0,     0,     0,     0,     0,    72,
      73,    74,    75,    76,    77,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    41,    47,    65,    66,    68,
      70,    67,    69,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    71,     0,     0,     0,     0,    52,     0,     0,
       0,     0,    53,    22,     0,    32,    33,    35,    37,    38,
      36,    34,    39,    61,    62,    63,    64,    58,    59,    60,
       0,     0,     0,     0,     0,     0,     0,     0,    23,    24,
      25,    26,    29,    30,    28,    27,    31,    51,    44,    45,
      46,    48,    49,    50,    43
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -103,  -103,  -103,  -103,   151,  -103,   -15,   -14,   -13,   -12,
     -11,   -10,    -9,    -8,  -102,   -19,  -103,  -103,  -103
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     1,     2,    15,    16,   124,    17,    18,    19,    20,
      21,    22,    23,    24,    69,    70,   103,    59,    85
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      38,    39,    40,    41,    42,    43,    44,    45,    58,     3,
      63,    64,    65,    66,    67,   123,   144,   145,   146,    25,
      35,     4,    36,     6,     7,    26,    60,    61,    62,    30,
       8,    79,    80,    81,    82,    83,    84,    27,     9,    10,
      11,    12,    28,    29,    13,    14,    97,    98,    99,   100,
     101,   102,    31,   105,   106,   107,   108,   109,   110,   111,
      33,    32,     4,     5,     6,     7,   112,    34,   114,   115,
     116,     8,    46,    47,    72,   121,    68,    95,    71,     9,
      10,    11,    12,    73,   122,    13,    14,    74,    75,   125,
     126,   127,   128,   129,   130,   131,   132,    76,    77,    78,
      86,    87,    88,    89,    90,    91,    92,    96,    93,   149,
     150,   151,   152,   153,   154,   155,   156,   148,    94,   104,
     113,   117,   118,     4,   119,     6,     7,   137,   120,   133,
       0,   134,     8,   140,   135,   136,   157,   141,   142,   138,
       9,    10,    11,    12,    48,    49,    13,    14,    50,    51,
     139,   143,   147,   158,    52,    53,    54,   159,    55,    56,
     160,    57,   161,   162,   163,   164,    37
};

static const yytype_int8 yycheck[] =
{
      15,    15,    15,    15,    15,    15,    15,    15,    27,     0,
      29,    30,    31,    32,    33,    19,   118,   119,   120,    48,
      20,    25,    22,    27,    28,    49,    29,    30,    31,    23,
      34,    10,    11,    12,    13,    14,    15,    20,    42,    43,
      44,    45,    20,    20,    48,    49,     3,     4,     5,     6,
       7,     8,    23,    72,    73,    74,    75,    76,    77,    78,
      20,    23,    25,    26,    27,    28,    85,    17,    87,    88,
      89,    34,    16,    20,    20,    94,    21,    16,    21,    42,
      43,    44,    45,    20,   103,    48,    49,    20,    20,   104,
     104,   104,   104,   104,   104,   104,   104,    23,    23,    23,
      21,     9,     9,     9,    21,    24,    24,    16,    24,   124,
     124,   124,   124,   124,   124,   124,   124,    19,     9,    18,
      25,    16,    22,    25,    22,    27,    28,    24,    22,    21,
      -1,    21,    34,    48,    21,    21,    16,    21,    21,    24,
      42,    43,    44,    45,    32,    33,    48,    49,    36,    37,
      24,    21,    21,    16,    42,    43,    44,    16,    46,    47,
      16,    49,    16,    16,    16,    16,    15
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    51,    52,     0,    25,    26,    27,    28,    34,    42,
      43,    44,    45,    48,    49,    53,    54,    56,    57,    58,
      59,    60,    61,    62,    63,    48,    49,    20,    20,    20,
      23,    23,    23,    20,    17,    20,    22,    54,    56,    57,
      58,    59,    60,    61,    62,    63,    16,    20,    32,    33,
      36,    37,    42,    43,    44,    46,    47,    49,    65,    67,
      29,    30,    31,    65,    65,    65,    65,    65,    21,    64,
      65,    21,    20,    20,    20,    20,    23,    23,    23,    10,
      11,    12,    13,    14,    15,    68,    21,     9,     9,     9,
      21,    24,    24,    24,     9,    16,    16,     3,     4,     5,
       6,     7,     8,    66,    18,    65,    65,    65,    65,    65,
      65,    65,    65,    25,    65,    65,    65,    16,    22,    22,
      22,    65,    65,    19,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    21,    21,    21,    21,    24,    24,    24,
      48,    21,    21,    21,    64,    64,    64,    21,    19,    56,
      57,    58,    59,    60,    61,    62,    63,    16,    16,    16,
      16,    16,    16,    16,    16
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    50,    52,    51,    53,    53,    53,    53,    53,    53,
      53,    53,    53,    53,    53,    53,    53,    53,    53,    53,
      53,    53,    54,    54,    55,    55,    55,    55,    55,    55,
      55,    55,    55,    55,    55,    55,    55,    55,    55,    55,
      56,    57,    58,    59,    60,    60,    60,    61,    61,    61,
      61,    62,    63,    64,    64,    65,    65,    65,    65,    65,
      65,    65,    65,    65,    65,    66,    66,    66,    66,    66,
      66,    67,    68,    68,    68,    68,    68,    68
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     6,     7,     2,     2,     2,     2,     2,     2,
       2,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     4,     3,     7,     7,     7,     7,     4,     7,     7,
       7,     7,     5,     3,     1,     1,     1,     1,     4,     4,
       4,     4,     4,     4,     4,     1,     1,     1,     1,     1,
       1,     3,     1,     1,     1,     1,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


/* Enable debugging if requested.  */
#if ZZDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined ZZLTYPE_IS_TRIVIAL && ZZLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static unsigned
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  unsigned res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
 }

#  define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value, Location); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  YYUSE (yylocationp);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                       , &(yylsp[(yyi + 1) - (yynrhs)])                       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !ZZDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !ZZDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
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
static YYSIZE_T
yystrlen (const char *yystr)
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Location data for the lookahead symbol.  */
YYLTYPE yylloc
# if defined ZZLTYPE_IS_TRIVIAL && ZZLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.
       'yyls': related to locations.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[3];

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yylsp = yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  yylsp[0] = yylloc;
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
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yyls1, yysize * sizeof (*yylsp),
                    &yystacksize);

        yyls = yyls1;
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
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
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
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
  *++yylsp = yylloc;
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
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 127 "sintactico1.y" /* yacc.c:1646  */
    { entorno = new Entorno3D(); }
#line 1530 "parser1.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 128 "sintactico1.y" /* yacc.c:1646  */
    {
            
            ASTList *l = (yyvsp[0].Listado);
            entorno->metodos["inicio"] = l;
            Llamada *m = new Llamada(nLine,0, "entrada", tabla3 , "inicio");
            m->Ejecutar(entorno, new TablaTemporales(), new TablaEtiquetas());
            (yyval.ASTNode) = new NodoAST(0,0, "", tabla3);
        }
#line 1543 "parser1.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 139 "sintactico1.y" /* yacc.c:1646  */
    {
            ASTList *l = (yyvsp[-1].Listado);
            l->addToList((yyvsp[0].ASTNode));
            (yyval.Listado) = l;
        }
#line 1553 "parser1.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 145 "sintactico1.y" /* yacc.c:1646  */
    {
            ASTList *l = (yyvsp[-1].Listado);
            (yyval.Listado) = l;
        }
#line 1562 "parser1.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 150 "sintactico1.y" /* yacc.c:1646  */
    {
            ASTList *l = (yyvsp[-1].Listado);
            l->addToList((yyvsp[0].ASTNode));
            (yyval.Listado) = l;
        }
#line 1572 "parser1.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 156 "sintactico1.y" /* yacc.c:1646  */
    {
            ASTList *l = (yyvsp[-1].Listado);
            l->addToList((yyvsp[0].ASTNode));
            (yyval.Listado) = l;
        }
#line 1582 "parser1.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 162 "sintactico1.y" /* yacc.c:1646  */
    {
            ASTList *l = (yyvsp[-1].Listado);
            l->addToList((yyvsp[0].ASTNode));
            (yyval.Listado) = l;
        }
#line 1592 "parser1.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 168 "sintactico1.y" /* yacc.c:1646  */
    {
            ASTList *l = (yyvsp[-1].Listado);
            l->addToList((yyvsp[0].ASTNode));
            (yyval.Listado) = l;
        }
#line 1602 "parser1.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 174 "sintactico1.y" /* yacc.c:1646  */
    {
            ASTList *l = (yyvsp[-1].Listado);
            l->addToList((yyvsp[0].ASTNode));
            (yyval.Listado) = l;
        }
#line 1612 "parser1.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 180 "sintactico1.y" /* yacc.c:1646  */
    {
            ASTList *l = (yyvsp[-1].Listado);
            l->addToList((yyvsp[0].ASTNode));
            (yyval.Listado) = l;
        }
#line 1622 "parser1.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 186 "sintactico1.y" /* yacc.c:1646  */
    {
            ASTList *l = (yyvsp[-1].Listado);
            l->addToList((yyvsp[0].ASTNode));
            (yyval.Listado) = l;
        }
#line 1632 "parser1.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 192 "sintactico1.y" /* yacc.c:1646  */
    {
            ASTList *l = new ASTList();
            l->addToList((yyvsp[0].ASTNode));
            (yyval.Listado) = l;
        }
#line 1642 "parser1.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 198 "sintactico1.y" /* yacc.c:1646  */
    {
            ASTList *l = new ASTList();
            l->addToList((yyvsp[0].ASTNode));
            (yyval.Listado) = l;
        }
#line 1652 "parser1.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 204 "sintactico1.y" /* yacc.c:1646  */
    {
            ASTList *l = new ASTList();
            l->addToList((yyvsp[0].ASTNode));
            (yyval.Listado) = l;
        }
#line 1662 "parser1.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 210 "sintactico1.y" /* yacc.c:1646  */
    {
            ASTList *l = new ASTList();
            l->addToList((yyvsp[0].ASTNode));
            (yyval.Listado) = l;
        }
#line 1672 "parser1.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 216 "sintactico1.y" /* yacc.c:1646  */
    {
            ASTList *l = new ASTList();
            (yyval.Listado) = l;
            
        }
#line 1682 "parser1.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 222 "sintactico1.y" /* yacc.c:1646  */
    {
            ASTList *l = new ASTList();
            l->addToList((yyvsp[0].ASTNode));
            (yyval.Listado) = l;
        }
#line 1692 "parser1.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 228 "sintactico1.y" /* yacc.c:1646  */
    {
            ASTList *l = new ASTList();
            l->addToList((yyvsp[0].ASTNode));
            (yyval.Listado) = l;
        }
#line 1702 "parser1.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 234 "sintactico1.y" /* yacc.c:1646  */
    {
            ASTList *l = new ASTList();
            l->addToList((yyvsp[0].ASTNode));
            (yyval.Listado) = l;
        }
#line 1712 "parser1.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 240 "sintactico1.y" /* yacc.c:1646  */
    {
            ASTList *l = new ASTList();
            l->addToList((yyvsp[0].ASTNode));
            (yyval.Listado) = l;
        }
#line 1722 "parser1.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 249 "sintactico1.y" /* yacc.c:1646  */
    {
           metodo *m = new metodo((yylsp[-5]).first_line, 0, "entrada", tabla3,  (yyvsp[-4].TEXT));
           entorno->metodos[(yyvsp[-4].TEXT)] = new ASTList();
       }
#line 1731 "parser1.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 254 "sintactico1.y" /* yacc.c:1646  */
    {
           ASTList *l = (yyvsp[-1].Listado);
           metodo *m = new metodo((yylsp[-6]).first_line, 0, "entrada", tabla3, (yyvsp[-5].TEXT), l->instrucciones);
           entorno->metodos[(yyvsp[-5].TEXT)] = (yyvsp[-1].Listado);
       }
#line 1741 "parser1.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 262 "sintactico1.y" /* yacc.c:1646  */
    {
                ASTList *l = (yyvsp[-1].Listado);
                l->addToList((yyvsp[0].ASTNode));
                (yyval.Listado) = l;
            }
#line 1751 "parser1.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 268 "sintactico1.y" /* yacc.c:1646  */
    {
               ASTList *l = (yyvsp[-1].Listado);
               l->addToList((yyvsp[0].ASTNode));
               (yyval.Listado) = l;
           }
#line 1761 "parser1.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 274 "sintactico1.y" /* yacc.c:1646  */
    {
               ASTList *l = (yyvsp[-1].Listado);
               l->addToList((yyvsp[0].ASTNode));
               (yyval.Listado) = l;
           }
#line 1771 "parser1.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 280 "sintactico1.y" /* yacc.c:1646  */
    {
               ASTList *l = (yyvsp[-1].Listado);
               l->addToList((yyvsp[0].ASTNode));
               (yyval.Listado) = l;
           }
#line 1781 "parser1.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 286 "sintactico1.y" /* yacc.c:1646  */
    {
               ASTList *l = (yyvsp[-1].Listado);
               l->addToList((yyvsp[0].ASTNode));
               (yyval.Listado) = l;
           }
#line 1791 "parser1.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 292 "sintactico1.y" /* yacc.c:1646  */
    {
               ASTList *l = (yyvsp[-1].Listado);
               l->addToList((yyvsp[0].ASTNode));
               (yyval.Listado) = l;
           }
#line 1801 "parser1.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 298 "sintactico1.y" /* yacc.c:1646  */
    {
               ASTList *l = (yyvsp[-1].Listado);
               l->addToList((yyvsp[0].ASTNode));
               (yyval.Listado) = l;
           }
#line 1811 "parser1.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 304 "sintactico1.y" /* yacc.c:1646  */
    {
               ASTList *l = (yyvsp[-1].Listado);
               l->addToList((yyvsp[0].ASTNode));
               (yyval.Listado) = l;
           }
#line 1821 "parser1.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 310 "sintactico1.y" /* yacc.c:1646  */
    {
               ASTList *l = new ASTList();
               l->addToList((yyvsp[0].ASTNode));
               (yyval.Listado) = l;
           }
#line 1831 "parser1.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 316 "sintactico1.y" /* yacc.c:1646  */
    {
               ASTList *l = new ASTList();
               l->addToList((yyvsp[0].ASTNode));
               (yyval.Listado) = l;
           }
#line 1841 "parser1.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 322 "sintactico1.y" /* yacc.c:1646  */
    {
               ASTList *l = new ASTList();
               l->addToList((yyvsp[0].ASTNode));
               (yyval.Listado) = l;
           }
#line 1851 "parser1.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 328 "sintactico1.y" /* yacc.c:1646  */
    {
               ASTList *l = new ASTList();
               l->addToList((yyvsp[0].ASTNode));
               (yyval.Listado) = l;
           }
#line 1861 "parser1.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 334 "sintactico1.y" /* yacc.c:1646  */
    {
               ASTList *l = new ASTList();
               l->addToList((yyvsp[0].ASTNode));
               (yyval.Listado) = l;
           }
#line 1871 "parser1.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 340 "sintactico1.y" /* yacc.c:1646  */
    {
               ASTList *l = new ASTList();
               l->addToList((yyvsp[0].ASTNode));
               (yyval.Listado) = l;
           }
#line 1881 "parser1.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 346 "sintactico1.y" /* yacc.c:1646  */
    {
               ASTList *l = new ASTList();
               l->addToList((yyvsp[0].ASTNode));
               (yyval.Listado) = l;
           }
#line 1891 "parser1.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 352 "sintactico1.y" /* yacc.c:1646  */
    {
               ASTList *l = new ASTList();
               l->addToList((yyvsp[0].ASTNode));
               (yyval.Listado) = l;
           }
#line 1901 "parser1.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 361 "sintactico1.y" /* yacc.c:1646  */
    {
        Etiqueta *e = new Etiqueta(nLine, 0, "entrada",tabla3, (yyvsp[-1].TEXT));
        //e->Ejecutar(new Entorno3D(), new TablaTemporales(), new TablaEtiquetas());
        (yyval.ASTNode) = e;
    }
#line 1911 "parser1.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 370 "sintactico1.y" /* yacc.c:1646  */
    {
            Llamada *l = new Llamada(nLine, 0, "entrada",tabla3, (yyvsp[-3].TEXT));
            //l->Ejecutar(new Entorno3D(), new TablaTemporales(), new TablaEtiquetas());
            (yyval.ASTNode) = l;
        }
#line 1921 "parser1.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 379 "sintactico1.y" /* yacc.c:1646  */
    {
            NoCondicional *n = new NoCondicional(nLine, 0, "entrada",tabla3, (yyvsp[-1].TEXT));
            //n->Ejecutar(new Entorno3D(), new TablaTemporales(), new TablaEtiquetas());
            (yyval.ASTNode) = n;
        }
#line 1931 "parser1.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 388 "sintactico1.y" /* yacc.c:1646  */
    {
            // AUN SIN IMPLEMENTAR
            printf("FUNCION DE LIMPIRA MEMORIA AUN NO IMPLEMENTADA");
            (yyval.ASTNode) = new NodoAST(0,0,"", tabla3);
        }
#line 1941 "parser1.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 397 "sintactico1.y" /* yacc.c:1646  */
    {
             
             ImprimirFun *i = new ImprimirFun(nLine, 0, "entrada", tabla3, 0, (yyvsp[-2].ASTNode));
             //i->Ejecutar(new Entorno3D(), new TablaTemporales(), new TablaEtiquetas());
             (yyval.ASTNode) = i;
         }
#line 1952 "parser1.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 404 "sintactico1.y" /* yacc.c:1646  */
    { 
             ImprimirFun *i = new ImprimirFun(nLine, 1, "entrada",tabla3,1, (yyvsp[-2].ASTNode));
             //i->Ejecutar(new Entorno3D(), new TablaTemporales(), new TablaEtiquetas());
             (yyval.ASTNode) = i;
         }
#line 1962 "parser1.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 410 "sintactico1.y" /* yacc.c:1646  */
    {
             
             ImprimirFun *i = new ImprimirFun(nLine, 2, "entrada",tabla3,2, (yyvsp[-2].ASTNode));
             //i->Ejecutar(new Entorno3D(), new TablaTemporales(), new TablaEtiquetas());
             (yyval.ASTNode) = i;
         }
#line 1973 "parser1.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 420 "sintactico1.y" /* yacc.c:1646  */
    {
            NodoAST *valor = (yyvsp[-1].ASTNode);
            std::string id((yyvsp[-3].TEXT));
            Asignacion *a = new Asignacion(nLine, 0, "entrada", tabla3, id, valor);
            //a->Ejecutar(new Entorno3D(), new TablaTemporales(), new TablaEtiquetas());
            (yyval.ASTNode) = a;
        }
#line 1985 "parser1.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 428 "sintactico1.y" /* yacc.c:1646  */
    {
            NodoAST *valor = (yyvsp[-4].ASTNode);
            NodoAST *asignado = (yyvsp[-1].ASTNode);
            AsignacionStack *a = new AsignacionStack(nLine, 0, "entrada", tabla3, valor, asignado);
            //a->Ejecutar(new Entorno3D(), new TablaTemporales(), new TablaEtiquetas());
            (yyval.ASTNode) = a;
        }
#line 1997 "parser1.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 436 "sintactico1.y" /* yacc.c:1646  */
    {
            NodoAST *valor = (yyvsp[-4].ASTNode);
            NodoAST *asignado = (yyvsp[-1].ASTNode);
            AsignacionHeap *a = new AsignacionHeap(nLine, 0, "entrada", tabla3, valor, asignado);
            //a->Ejecutar(new Entorno3D(), new TablaTemporales(), new TablaEtiquetas());
            (yyval.ASTNode) = a;
        }
#line 2009 "parser1.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 444 "sintactico1.y" /* yacc.c:1646  */
    {
            NodoAST *valor = (yyvsp[-4].ASTNode);
            NodoAST *asignado = (yyvsp[-1].ASTNode);
            AsignacionPool *a = new AsignacionPool(nLine, 0, "entrada", tabla3, valor, asignado);
            //a->Ejecutar(new Entorno3D(), new TablaTemporales(), new TablaEtiquetas());
            (yyval.ASTNode) = a;
        }
#line 2021 "parser1.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 455 "sintactico1.y" /* yacc.c:1646  */
    {
            NodoAST *exp = (yyvsp[-4].ASTNode);
            Condicional *c = new Condicional(nLine, 0, "entrada",tabla3 , exp, (yyvsp[-1].TEXT));
            //c->Ejecutar(new Entorno3D(), new TablaTemporales(), new TablaEtiquetas());
            (yyval.ASTNode) = c;
        }
#line 2032 "parser1.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 465 "sintactico1.y" /* yacc.c:1646  */
    {
            OutStr *o = new OutStr(nLine, 0, "entrada",tabla3, (yyvsp[-2].ASTNode));
            (yyval.ASTNode) = o;
        }
#line 2041 "parser1.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 473 "sintactico1.y" /* yacc.c:1646  */
    {
                NodoAST *val1 = (yyvsp[-2].ASTNode);
                NodoAST *val2 = (yyvsp[0].ASTNode);
                int oper = (yyvsp[-1].OPERADOR);
                Aritmetica *a = new Aritmetica((yylsp[-2]).first_line, 0, "entrada", tabla3, val1, val2, oper);
                (yyval.ASTNode) = a;
          }
#line 2053 "parser1.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 481 "sintactico1.y" /* yacc.c:1646  */
    {
              (yyval.ASTNode) = (yyvsp[0].ASTNode);
          }
#line 2061 "parser1.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 487 "sintactico1.y" /* yacc.c:1646  */
    {
          identificador *ide = new identificador((yylsp[0]).first_line, 0, "entrada", tabla3, (yyvsp[0].TEXT));
          (yyval.ASTNode) = ide;
      }
#line 2070 "parser1.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 492 "sintactico1.y" /* yacc.c:1646  */
    {
            int val = std::stoi((yyvsp[0].TEXT));
            Entero *ent = new Entero((yylsp[0]).first_line, 0, "entrada", tabla3, val);
            (yyval.ASTNode) = ent;
      }
#line 2080 "parser1.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 498 "sintactico1.y" /* yacc.c:1646  */
    {
            double val = atof((yyvsp[0].TEXT));
            flotante *f = new flotante((yylsp[0]).first_line, 0, "entrada", tabla3, val);
            (yyval.ASTNode) = f;
      }
#line 2090 "parser1.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 504 "sintactico1.y" /* yacc.c:1646  */
    {
          AccesoStack *v = new AccesoStack((yylsp[-3]).first_line, 0, "entrada", tabla3, (yyvsp[-1].ASTNode));
          (yyval.ASTNode) = v;
      }
#line 2099 "parser1.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 509 "sintactico1.y" /* yacc.c:1646  */
    {
          AccesoHeap *v = new AccesoHeap((yylsp[-3]).first_line, 0, "entrada", tabla3, (yyvsp[-1].ASTNode));
          (yyval.ASTNode) = v;
      }
#line 2108 "parser1.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 514 "sintactico1.y" /* yacc.c:1646  */
    {
          AccesoPool *v = new AccesoPool((yylsp[-3]).first_line, 0, "entrada", tabla3, (yyvsp[-1].ASTNode));
          (yyval.ASTNode) = v;
      }
#line 2117 "parser1.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 519 "sintactico1.y" /* yacc.c:1646  */
    {
          GetBool *b = new GetBool((yylsp[-3]).first_line, 0, "entrada", tabla3, (yyvsp[-1].ASTNode));
          (yyval.ASTNode) = b;
      }
#line 2126 "parser1.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 524 "sintactico1.y" /* yacc.c:1646  */
    {
          GetNum *g = new GetNum((yylsp[-3]).first_line, 0, "entrada", tabla3, (yyvsp[-1].ASTNode));
          (yyval.ASTNode) = g;
      }
#line 2135 "parser1.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 529 "sintactico1.y" /* yacc.c:1646  */
    {
          InStr *in = new InStr((yylsp[-3]).first_line, 0, "entrada",tabla3, (yyvsp[-1].ASTNode));
          (yyval.ASTNode) = in;
      }
#line 2144 "parser1.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 534 "sintactico1.y" /* yacc.c:1646  */
    {
          InNum *in = new InNum((yylsp[-3]).first_line, 0, "entrada", tabla3, (yyvsp[-1].ASTNode));
          (yyval.ASTNode) = in;
      }
#line 2153 "parser1.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 541 "sintactico1.y" /* yacc.c:1646  */
    {
               (yyval.OPERADOR) = 1; 
           }
#line 2161 "parser1.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 545 "sintactico1.y" /* yacc.c:1646  */
    {
               (yyval.OPERADOR) = 2; 
           }
#line 2169 "parser1.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 549 "sintactico1.y" /* yacc.c:1646  */
    {
               (yyval.OPERADOR) = 4;
           }
#line 2177 "parser1.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 553 "sintactico1.y" /* yacc.c:1646  */
    {
               (yyval.OPERADOR) = 5;
           }
#line 2185 "parser1.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 557 "sintactico1.y" /* yacc.c:1646  */
    {
               (yyval.OPERADOR) = 6;
           }
#line 2193 "parser1.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 561 "sintactico1.y" /* yacc.c:1646  */
    {
               (yyval.OPERADOR) = 7;
           }
#line 2201 "parser1.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 568 "sintactico1.y" /* yacc.c:1646  */
    {
            NodoAST *val1 = (yyvsp[-2].ASTNode);
            NodoAST *val2 = (yyvsp[0].ASTNode);
            int oper = (yyvsp[-1].OPERADOR);
            Relacional *r = new Relacional((yylsp[-2]).first_line, 0, "entrada", tabla3, val1, val2, oper);
            (yyval.ASTNode) = r;
        }
#line 2213 "parser1.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 578 "sintactico1.y" /* yacc.c:1646  */
    {
             (yyval.OPERADOR) = 7;
         }
#line 2221 "parser1.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 582 "sintactico1.y" /* yacc.c:1646  */
    {
             (yyval.OPERADOR) = 8;
         }
#line 2229 "parser1.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 586 "sintactico1.y" /* yacc.c:1646  */
    {
             (yyval.OPERADOR) = 9;
         }
#line 2237 "parser1.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 590 "sintactico1.y" /* yacc.c:1646  */
    {
             (yyval.OPERADOR) = 10;
         }
#line 2245 "parser1.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 594 "sintactico1.y" /* yacc.c:1646  */
    {
             (yyval.OPERADOR) = 11;
         }
#line 2253 "parser1.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 598 "sintactico1.y" /* yacc.c:1646  */
    {
             (yyval.OPERADOR) = 12;
         }
#line 2261 "parser1.cpp" /* yacc.c:1646  */
    break;


#line 2265 "parser1.cpp" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;
  *++yylsp = yyloc;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }

  yyerror_range[1] = yylloc;

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
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
                      yytoken, &yylval, &yylloc);
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  yyerror_range[1] = yylsp[1-yylen];
  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
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

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, yyerror_range, 2);
  *++yylsp = yyloc;

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

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp, yylsp);
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
  return yyresult;
}
