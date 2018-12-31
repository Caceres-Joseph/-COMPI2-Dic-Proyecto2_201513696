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




/* Copy the first part of user declarations.  */
#line 1 "sintactico.y" /* yacc.c:339  */

#include "../Lexico/scanner.h"//se importa el header del analisis sintactico
#include <math.h>
#include <stdlib.h>
#include <QTextEdit>
#include <iostream>
#include <qstring.h>
#import "Coline/Elementos/Tablas/tablasimbolos.h"
#include "Coline/Elementos/Global/importar.h"
#include "Coline/Elementos/Global/nodosimport.h"



extern int nLinea; //linea actual donde se encuentra el parser (analisis lexico) lo maneja BISON
extern int columna; //columna actual donde se encuentra el parser (analisis lexico) lo maneja BISON
extern char *yytext; //lexema actual donde esta el parser (analisis lexico) lo maneja BISON
extern void iniciarLineaL(tablaSimbolos *tabla2);
typedef struct Operador operador;
 
tablaSimbolos *tabla;
nodoModelo *raiz;

QString archivo="--";

int contador=0;
int yyerror(const char* mens){
//metodo que se llama al haber un error sintactico
//SE IMPRIME EN CONSOLA EL ERROR

//std::cout <<mens<<" "<<yytext<<"linea:" <<nLinea <<std::endl;
 
tabla->tablaError->insertErrorSyntax(QString::fromUtf8(yytext),nLinea,23,QString::fromUtf8(mens));

return 0;
}

void iniciarLinea(){
        iniciarLineaL(tabla);
}

void setSalida(tablaSimbolos *tabla2,nodoModelo *raizArbol) { 
tabla=tabla2; 
raiz=raizArbol;
}

struct Operador{
//ESTRUCTURA LA CUAL CONTENDRA LOS TIPOS DE LOS NO TERMINALES PARA HEREDAR VALORES
QString valor;
QString operacion;
};
struct Nod{
 nodoModelo *Padre;
};


#line 122 "parser.cpp" /* yacc.c:339  */

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
   by #include "parser.h".  */
#ifndef YY_YY_PARSER_H_INCLUDED
# define YY_YY_PARSER_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    sMas = 258,
    sMenos = 259,
    sPor = 260,
    sDiv = 261,
    sPot = 262,
    sMod = 263,
    sIgualacion = 264,
    sDiferenciacion = 265,
    sMenorQue = 266,
    sMayorQue = 267,
    sMenorIgualQue = 268,
    sMayorIgualQue = 269,
    sAnd = 270,
    sOr = 271,
    sNot = 272,
    sAbreParent = 273,
    sCierraParent = 274,
    sAbreLlave = 275,
    sCierraLlave = 276,
    sAbreCorchete = 277,
    sCierraCorchete = 278,
    sPunto = 279,
    sComa = 280,
    sPuntoComa = 281,
    sArroba = 282,
    sIgual = 283,
    sCierraInterrogante = 284,
    sDosPuntos = 285,
    tImport = 286,
    tClase = 287,
    tExtender = 288,
    tPadre = 289,
    tPrincipal = 290,
    tOverride = 291,
    tNuevo = 292,
    tEste = 293,
    tImprimir = 294,
    tRetorno = 295,
    tSi = 296,
    tSino = 297,
    tCaso = 298,
    tDe = 299,
    tDefecto = 300,
    tRomper = 301,
    tMientras = 302,
    tContinuar = 303,
    tPara = 304,
    tHacer = 305,
    tRepetir = 306,
    tHasta = 307,
    tMensaje = 308,
    tSubCad = 309,
    tPosCad = 310,
    tRandom = 311,
    tTam = 312,
    tSuper = 313,
    tNada = 314,
    tVacio = 315,
    tNulo = 316,
    tEntero = 317,
    tCaracter = 318,
    tDecimal = 319,
    tBooleano = 320,
    tPublico = 321,
    tPrivado = 322,
    tProtegido = 323,
    valBoolean = 324,
    valId = 325,
    valNumero = 326,
    valDecimal = 327,
    valCaracter = 328,
    valCadena = 329,
    MayorQue = 330
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 60 "sintactico.y" /* yacc.c:355  */

//se especifican los tipo de valores para los no terminales y lo terminales
char TEXT [256];
struct Nod *VAL;
//extern nodo *NODO;

#line 245 "parser.cpp" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


extern YYSTYPE yylval;
extern YYLTYPE yylloc;
int yyparse (void);

#endif /* !YY_YY_PARSER_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 276 "parser.cpp" /* yacc.c:358  */

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
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

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
#define YYFINAL  10
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   606

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  76
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  40
/* YYNRULES -- Number of rules.  */
#define YYNRULES  121
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  237

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   330

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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   278,   278,   292,   307,   319,   333,   355,   368,   383,
     410,   435,   447,   460,   473,   486,   499,   515,   532,   544,
     557,   570,   581,   597,   609,   622,   634,   647,   659,   675,
     687,   702,   713,   725,   737,   753,   769,   788,   806,   829,
     845,   858,   875,   889,   907,   923,   937,   953,   965,   982,
     995,  1053,  1070,  1084,  1100,  1113,  1126,  1139,  1156,  1173,
    1190,  1208,  1226,  1248,  1261,  1279,  1296,  1318,  1331,  1343,
    1358,  1371,  1388,  1400,  1412,  1426,  1438,  1451,  1463,  1475,
    1490,  1506,  1520,  1539,  1554,  1570,  1590,  1607,  1627,  1648,
    1666,  1683,  1704,  1724,  1740,  1753,  1765,  1782,  1799,  1816,
    1833,  1850,  1868,  1887,  1908,  1926,  1944,  1962,  1980,  1998,
    2018,  2036,  2054,  2073,  2090,  2102,  2116,  2129,  2142,  2156,
    2169,  2182
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "sMas", "sMenos", "sPor", "sDiv", "sPot",
  "sMod", "sIgualacion", "sDiferenciacion", "sMenorQue", "sMayorQue",
  "sMenorIgualQue", "sMayorIgualQue", "sAnd", "sOr", "sNot", "sAbreParent",
  "sCierraParent", "sAbreLlave", "sCierraLlave", "sAbreCorchete",
  "sCierraCorchete", "sPunto", "sComa", "sPuntoComa", "sArroba", "sIgual",
  "sCierraInterrogante", "sDosPuntos", "tImport", "tClase", "tExtender",
  "tPadre", "tPrincipal", "tOverride", "tNuevo", "tEste", "tImprimir",
  "tRetorno", "tSi", "tSino", "tCaso", "tDe", "tDefecto", "tRomper",
  "tMientras", "tContinuar", "tPara", "tHacer", "tRepetir", "tHasta",
  "tMensaje", "tSubCad", "tPosCad", "tRandom", "tTam", "tSuper", "tNada",
  "tVacio", "tNulo", "tEntero", "tCaracter", "tDecimal", "tBooleano",
  "tPublico", "tPrivado", "tProtegido", "valBoolean", "valId", "valNumero",
  "valDecimal", "valCaracter", "valCadena", "MayorQue", "$accept", "S",
  "LST_IMPORT", "IMPORT", "LST_CLASE", "CLASE", "TIPO", "EXTENDER",
  "LST_PARAMETROS", "PARAMETRO", "LST_VAL", "VISIBILIDAD", "CP_CLASE",
  "CUERPO_CLASE", "METODO", "MAIN", "CONSTRUCTOR",
  "DECLARAR_VARIABLE_GLOBAL", "DECLARAR_VARIABLE_SINVISIBI", "VAL",
  "LST_LLAVES_VAL", "LLAVES_VAL_P", "VAR_ARREGLO", "PAR_CORCHETES_VAL",
  "LST_CORCHETES_VAL", "ID_VAR_FUNC", "LST_PUNTOSP", "ASIG_VALOR",
  "LST_CUERPO", "CUERPO", "SUPER", "RETORNO", "ROMPER", "CONTINUAR",
  "SENTENCIAS", "SI", "SINO_SI", "SINO", "VALOR", "E", YY_NULLPTR
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
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330
};
# endif

#define YYPACT_NINF -125

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-125)))

#define YYTABLE_NINF -16

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     100,   -11,   -54,    27,   100,  -125,    13,  -125,    -6,     0,
    -125,  -125,    13,  -125,    47,    20,  -125,  -125,  -125,    73,
      61,    30,  -125,   175,    82,    91,    99,  -125,  -125,  -125,
    -125,  -125,   115,    90,    80,   382,  -125,  -125,  -125,  -125,
      93,  -125,   175,   113,   129,    80,   127,    85,     1,  -125,
      85,  -125,  -125,  -125,   394,  -125,   148,    85,    37,  -125,
     209,  -125,   141,    80,   185,  -125,   152,  -125,   425,  -125,
     151,    80,   209,   209,   209,   167,  -125,  -125,  -125,    51,
    -125,  -125,  -125,  -125,   171,   493,  -125,    38,   185,   144,
     156,  -125,  -125,   565,    80,   159,   176,   172,   173,   182,
      -9,    85,   186,    18,   189,   -10,  -125,  -125,  -125,  -125,
    -125,  -125,  -125,   425,  -125,   331,   592,   514,   146,   185,
    -125,   127,   147,  -125,   209,   209,   209,   209,   209,   209,
     209,   209,   209,   209,   209,   209,   209,   209,  -125,   191,
     157,   162,  -125,   203,   127,   205,    79,  -125,   208,   209,
    -125,  -125,   185,   141,  -125,   233,   244,  -125,  -125,  -125,
    -125,  -125,   246,  -125,   168,    86,  -125,   170,   331,   331,
      11,    11,   237,    11,   257,   257,   257,   565,   257,   257,
     592,   579,   425,  -125,   185,  -125,   185,   127,  -125,   230,
    -125,   531,    88,  -125,  -125,  -125,   185,   127,   127,   185,
     127,   255,  -125,   101,   425,   231,   226,   102,   127,   109,
    -125,  -125,   286,   425,  -125,   127,   127,  -125,   314,   127,
     127,   211,    29,  -125,  -125,   425,   248,   342,   209,  -125,
     548,   251,   425,   370,   211,  -125,  -125
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     5,     3,     8,     0,    18,
       1,     4,     2,     7,     0,     0,    26,    27,    28,     0,
      18,     0,    17,     0,     0,     0,     0,    16,    11,    12,
      14,    13,    15,     0,     0,     0,    30,    33,    34,    31,
       0,    41,     0,     0,     0,    21,    49,     0,    43,    15,
       0,     9,    29,    32,     0,     6,     0,     0,     0,    20,
       0,    50,    40,    21,     0,    42,     0,    10,     0,    22,
       0,     0,     0,     0,     0,     0,   121,   120,   115,    56,
     119,   118,   117,   116,   114,     0,    39,     0,    25,     0,
      95,    46,    44,    96,    21,     0,     0,     0,     0,     0,
      56,     0,     0,     0,     0,     0,    71,    76,    79,    77,
      78,    75,    85,     0,    19,    97,   112,     0,     0,    25,
      53,    60,     0,    54,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    51,     0,
       0,     0,    24,    15,     0,     0,     0,    81,     0,     0,
      83,    84,    25,    43,    72,     0,     0,    73,    67,    74,
      37,    70,     0,   113,    55,     0,    52,    63,   101,   102,
     100,    99,    98,   103,   104,   105,   106,   108,   107,   109,
     110,   111,     0,    48,     0,    47,    25,    94,    45,     0,
      82,     0,     0,    68,    69,    38,    25,    59,    58,    25,
      65,     0,    23,     0,     0,     0,     0,     0,    62,     0,
      36,    93,     0,     0,    80,    57,    64,    35,     0,    61,
      66,    86,     0,    87,    88,     0,     0,     0,     0,    92,
       0,     0,     0,     0,    90,    89,    91
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -125,  -125,  -125,   268,   269,   124,   130,   254,   -57,   204,
     -87,     8,   235,   -21,  -125,  -125,  -125,  -125,    83,   -52,
     197,   143,   -42,   -46,  -124,   -66,  -125,  -125,  -110,  -104,
    -125,  -125,  -125,  -125,  -125,  -125,    55,    56,   -60,   -48
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,     5,     6,     7,   101,    19,    58,    59,
     140,    34,    35,    36,    37,    38,    39,    40,   102,    65,
      90,    91,    48,   120,   121,    84,   123,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   223,   224,   142,    93
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      61,   161,   103,   162,    92,    62,    87,     8,    66,   119,
      86,   160,    85,    60,    52,    69,     9,    20,   128,    63,
     187,   155,   156,   133,   115,   116,   117,    10,    75,    64,
      95,    96,   165,    52,    15,   148,    97,   146,    98,   103,
     197,    47,   122,   200,   157,     2,    64,   103,    99,   225,
      27,   158,    28,    29,    30,    31,    70,   139,   161,   153,
     100,   -15,    71,    71,    14,   192,    16,    17,    18,   119,
     226,    21,   201,    60,   208,   166,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
      22,   219,   220,    23,   212,    15,   103,   161,   189,   203,
      25,   191,    42,   218,    71,   198,    41,   206,   161,   207,
      43,   184,   209,   184,   161,   227,   103,    44,    41,    53,
     211,   215,   233,   161,   202,    41,   184,   184,   216,   161,
      13,     1,     2,    45,   184,   103,    13,    41,   103,    55,
      27,   166,    28,    29,    30,    31,   103,   103,    56,    60,
      49,   166,   103,    33,   166,    46,    16,    17,    18,   103,
      46,   103,   166,    72,    50,    33,   103,   103,    68,    64,
      94,   113,    33,   166,   166,    57,    73,    74,   183,    88,
     230,   145,   184,   185,    33,   147,   196,   145,   199,    72,
      60,   118,    60,    57,   149,   122,    89,    75,   150,   151,
     152,    57,    73,    74,    27,    88,    28,    29,    30,    31,
      26,   182,   154,    72,   143,   159,   164,   167,    76,   144,
      77,   186,    89,    75,    57,    88,    73,    74,    78,    79,
      80,    81,    82,    83,   190,    27,   193,    28,    29,    30,
      31,    16,    17,    18,    76,    32,    77,    75,   194,   133,
     204,   213,   214,   222,    78,    79,    80,    81,    82,    83,
     124,   125,   126,   127,   128,   129,   228,   195,    76,   133,
      77,   232,    11,    12,    24,   114,   210,    54,    78,    79,
      80,    81,    82,    83,    75,   141,    95,    96,   188,   235,
     236,     0,    97,    75,    98,    95,    96,     0,     0,     0,
       0,    97,     0,    98,    99,     0,    27,   217,    28,    29,
      30,    31,     0,    99,     0,    27,   100,    28,    29,    30,
      31,     0,     0,     0,    75,   100,    95,    96,     0,     0,
       0,     0,    97,     0,    98,   221,   126,   127,   128,   129,
       0,     0,     0,   133,    99,     0,    27,     0,    28,    29,
      30,    31,    75,     0,    95,    96,   100,     0,     0,     0,
      97,     0,    98,   229,     0,     0,     0,     0,     0,     0,
       0,     0,    99,     0,    27,     0,    28,    29,    30,    31,
      75,     0,    95,    96,   100,     0,     0,     0,    97,     0,
      98,   234,     0,     0,     0,     0,     0,     0,     0,     0,
      99,     0,    27,    51,    28,    29,    30,    31,    75,     0,
      95,    96,   100,     0,     0,    67,    97,    26,    98,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    99,    26,
      27,     0,    28,    29,    30,    31,     0,     0,     0,     0,
     100,     0,    27,     0,    28,    29,    30,    31,    16,    17,
      18,     0,    32,     0,    27,     0,    28,    29,    30,    31,
      16,    17,    18,    75,    32,    95,    96,     0,     0,     0,
       0,    97,     0,    98,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    99,     0,    27,     0,    28,    29,    30,
      31,     0,     0,     0,     0,   100,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
       0,     0,     0,     0,     0,     0,   138,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,     0,     0,   163,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,     0,     0,
     205,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,     0,     0,   231,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135
};

static const yytype_int16 yycheck[] =
{
      46,   105,    68,   113,    64,    47,    63,    18,    50,    18,
      62,    21,    60,    22,    35,    57,    70,     9,     7,    18,
     144,     3,     4,    12,    72,    73,    74,     0,    38,    28,
      40,    41,   119,    54,    34,    95,    46,    94,    48,   105,
     164,    33,    24,   167,    26,    32,    28,   113,    58,    20,
      60,   103,    62,    63,    64,    65,    19,    19,   162,   101,
      70,    70,    25,    25,    70,   152,    66,    67,    68,    18,
      41,    24,   182,    22,   198,   121,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
      70,   215,   216,    20,   204,    34,   162,   201,    19,   186,
      70,   149,    20,   213,    25,    19,    23,    19,   212,   196,
      19,    25,   199,    25,   218,   225,   182,    18,    35,    26,
      19,    19,   232,   227,   184,    42,    25,    25,    19,   233,
       6,    31,    32,    18,    25,   201,    12,    54,   204,    26,
      60,   187,    62,    63,    64,    65,   212,   213,    19,    22,
      70,   197,   218,    23,   200,    70,    66,    67,    68,   225,
      70,   227,   208,     4,    34,    35,   232,   233,    20,    28,
      18,    20,    42,   219,   220,    45,    17,    18,    21,    20,
     228,    25,    25,    21,    54,    26,    18,    25,    18,     4,
      22,    24,    22,    63,    18,    24,    37,    38,    26,    26,
      18,    71,    17,    18,    60,    20,    62,    63,    64,    65,
      35,    20,    26,     4,    70,    26,    70,    70,    59,    89,
      61,    18,    37,    38,    94,    20,    17,    18,    69,    70,
      71,    72,    73,    74,    26,    60,     3,    62,    63,    64,
      65,    66,    67,    68,    59,    70,    61,    38,     4,    12,
      20,    20,    26,    42,    69,    70,    71,    72,    73,    74,
       3,     4,     5,     6,     7,     8,    18,    21,    59,    12,
      61,    20,     4,     4,    20,    71,    21,    42,    69,    70,
      71,    72,    73,    74,    38,    88,    40,    41,   145,   234,
     234,    -1,    46,    38,    48,    40,    41,    -1,    -1,    -1,
      -1,    46,    -1,    48,    58,    -1,    60,    21,    62,    63,
      64,    65,    -1,    58,    -1,    60,    70,    62,    63,    64,
      65,    -1,    -1,    -1,    38,    70,    40,    41,    -1,    -1,
      -1,    -1,    46,    -1,    48,    21,     5,     6,     7,     8,
      -1,    -1,    -1,    12,    58,    -1,    60,    -1,    62,    63,
      64,    65,    38,    -1,    40,    41,    70,    -1,    -1,    -1,
      46,    -1,    48,    21,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    58,    -1,    60,    -1,    62,    63,    64,    65,
      38,    -1,    40,    41,    70,    -1,    -1,    -1,    46,    -1,
      48,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      58,    -1,    60,    21,    62,    63,    64,    65,    38,    -1,
      40,    41,    70,    -1,    -1,    21,    46,    35,    48,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    58,    35,
      60,    -1,    62,    63,    64,    65,    -1,    -1,    -1,    -1,
      70,    -1,    60,    -1,    62,    63,    64,    65,    66,    67,
      68,    -1,    70,    -1,    60,    -1,    62,    63,    64,    65,
      66,    67,    68,    38,    70,    40,    41,    -1,    -1,    -1,
      -1,    46,    -1,    48,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    58,    -1,    60,    -1,    62,    63,    64,
      65,    -1,    -1,    -1,    -1,    70,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      -1,    -1,    -1,    -1,    -1,    -1,    23,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    -1,    -1,    19,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    -1,    -1,
      19,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    -1,    -1,    19,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    31,    32,    77,    78,    79,    80,    81,    18,    70,
       0,    79,    80,    81,    70,    34,    66,    67,    68,    83,
      87,    24,    70,    20,    83,    70,    35,    60,    62,    63,
      64,    65,    70,    82,    87,    88,    89,    90,    91,    92,
      93,    94,    20,    19,    18,    18,    70,    87,    98,    70,
      82,    21,    89,    26,    88,    26,    19,    82,    84,    85,
      22,    99,    98,    18,    28,    95,    98,    21,    20,    98,
      19,    25,     4,    17,    18,    38,    59,    61,    69,    70,
      71,    72,    73,    74,   101,   115,    95,    84,    20,    37,
      96,    97,   114,   115,    18,    40,    41,    46,    48,    58,
      70,    82,    94,   101,   103,   104,   105,   106,   107,   108,
     109,   110,   111,    20,    85,   115,   115,   115,    24,    18,
      99,   100,    24,   102,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    23,    19,
      86,    96,   114,    70,    82,    25,    84,    26,   114,    18,
      26,    26,    18,    98,    26,     3,     4,    26,    95,    26,
      21,   105,   104,    19,    70,    86,    99,    70,   115,   115,
     115,   115,   115,   115,   115,   115,   115,   115,   115,   115,
     115,   115,    20,    21,    25,    21,    18,   100,    97,    19,
      26,   115,    86,     3,     4,    21,    18,   100,    19,    18,
     100,   104,   114,    86,    20,    19,    19,    86,   100,    86,
      21,    19,   104,    20,    26,    19,    19,    21,   104,   100,
     100,    21,    42,   112,   113,    20,    41,   104,    18,    21,
     115,    19,    20,   104,    21,   112,   113
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    76,    77,    77,    78,    78,    79,    80,    80,    81,
      81,    82,    82,    82,    82,    82,    82,    83,    83,    84,
      84,    84,    85,    86,    86,    86,    87,    87,    87,    88,
      88,    89,    89,    89,    89,    90,    90,    91,    92,    93,
      93,    93,    94,    94,    95,    96,    96,    97,    97,    98,
      98,    99,   100,   100,   101,   101,   101,   101,   101,   101,
     101,   101,   101,   102,   102,   102,   102,   103,   103,   103,
     104,   104,   105,   105,   105,   105,   105,   105,   105,   105,
     106,   107,   107,   108,   109,   110,   111,   111,   111,   112,
     112,   112,   113,   114,   114,   114,   114,   115,   115,   115,
     115,   115,   115,   115,   115,   115,   115,   115,   115,   115,
     115,   115,   115,   115,   115,   115,   115,   115,   115,   115,
     115,   115
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     2,     1,     7,     2,     1,     6,
       7,     1,     1,     1,     1,     1,     1,     2,     0,     3,
       1,     0,     2,     3,     1,     0,     1,     1,     1,     2,
       1,     1,     2,     1,     1,     9,     8,     6,     7,     4,
       3,     1,     3,     2,     2,     3,     1,     3,     3,     1,
       2,     3,     2,     1,     2,     3,     1,     6,     4,     4,
       2,     7,     5,     2,     5,     3,     6,     2,     3,     3,
       2,     1,     2,     2,     2,     1,     1,     1,     1,     1,
       5,     2,     3,     2,     2,     1,     7,     8,     8,     9,
       8,     9,     4,     5,     3,     1,     1,     2,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     2,     3,     1,     1,     1,     1,     1,     1,
       1,     1
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
#if YYDEBUG

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
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

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
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


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
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
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
#line 279 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _S *padre=new _S("S",tabla); 
                        padre->nivel=1;


                                //hijos
                                padre->hijos.append((yyvsp[-1].VAL)->Padre);
                                padre->hijos.append((yyvsp[0].VAL)->Padre);
                        
                        raiz->hijos.append(padre);
                }
#line 1713 "parser.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 293 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _S *padre=new _S("S",tabla); 
                        padre->nivel=2;

                                //hijos
                                padre->hijos.append((yyvsp[0].VAL)->Padre);

                        raiz->hijos.append(padre);
                }
#line 1729 "parser.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 308 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _LST_IMPORT *padre=new _LST_IMPORT("LST_IMPORT",tabla); 
                        padre->nivel=1;
                                //hijos
                                padre->hijos.append((yyvsp[-1].VAL)->Padre);
                                padre->hijos.append((yyvsp[0].VAL)->Padre);

                        (yyval.VAL)->Padre=padre;
                }
#line 1745 "parser.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 320 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _LST_IMPORT *padre=new _LST_IMPORT("LST_IMPORT",tabla); 
                        padre->nivel=2;
                                //hijos
                                padre->hijos.append((yyvsp[0].VAL)->Padre);

                        (yyval.VAL)->Padre=padre;
                }
#line 1760 "parser.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 334 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _IMPORT *padre=new _IMPORT("IMPORT",tabla); 
                        padre->nivel=1;
                                

                                //asignando atributos  

                                token *tok3=new token(QString::fromStdString((yyvsp[-4].TEXT)),(yylsp[-4]).first_line,3,archivo);
                                padre->lst_Atributos->insertar("valId",tok3);
 

                                token *tok5=new token(QString::fromStdString((yyvsp[-2].TEXT)),(yylsp[-2]).first_line,3,archivo);
                                padre->lst_Atributos->insertar("valId",tok5);
                                
                        (yyval.VAL)->Padre=padre;
                }
#line 1783 "parser.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 356 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _LST_CLASE *padre=new _LST_CLASE("LST_CLASE",tabla); 
                        padre->nivel=1;

                                //hijos
                                padre->hijos.append((yyvsp[-1].VAL)->Padre);
                                padre->hijos.append((yyvsp[0].VAL)->Padre);

                        (yyval.VAL)->Padre=padre;
                }
#line 1800 "parser.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 369 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _LST_CLASE *padre=new _LST_CLASE("LST_CLASE",tabla); 
                        padre->nivel=2;
                                //hijos
                                padre->hijos.append((yyvsp[0].VAL)->Padre);

                        (yyval.VAL)->Padre=padre;
                }
#line 1815 "parser.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 384 "sintactico.y" /* yacc.c:1646  */
    {   

                        //std::cout<<padre->nombre.toStdString()<<std::endl;
                        //std::cout<<$2<<" linea:"<<@2.first_line<<std::endl;

                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _CLASE *padre=new _CLASE("CLASE",tabla);
                        padre->nivel=1;
                                //asignando atributos  

                                token *tok2=new token(QString::fromStdString((yyvsp[-4].TEXT)),(yylsp[-4]).first_line,3,archivo);
                                padre->lst_Atributos->insertar("valId",tok2);


                                //hijos
                                padre->hijos.append((yyvsp[-3].VAL)->Padre);
                                padre->hijos.append((yyvsp[-1].VAL)->Padre);



 

                        (yyval.VAL)->Padre=padre;

                }
#line 1846 "parser.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 411 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _CLASE *padre=new _CLASE("CLASE",tabla); 
                        padre->nivel=2;

                                //asignando atributos  

                                token *tok2=new token(QString::fromStdString((yyvsp[-5].TEXT)),(yylsp[-5]).first_line,3,archivo);
                                padre->lst_Atributos->insertar("valId",tok2);


                                //hijos
                                padre->hijos.append((yyvsp[-4].VAL)->Padre);
                                padre->hijos.append((yyvsp[-3].VAL)->Padre);
                                padre->hijos.append((yyvsp[-1].VAL)->Padre);

                        (yyval.VAL)->Padre=padre;
                }
#line 1870 "parser.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 436 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _TIPO *padre=new _TIPO("TIPO",tabla); 
                        padre->nivel=1;
                                //asignando atributos 
                                token *tok1=new token(QString::fromStdString((yyvsp[0].TEXT)),(yylsp[0]).first_line,3,archivo);
                                padre->lst_Atributos->insertar("tEntero",tok1);

                        (yyval.VAL)->Padre=padre;
                }
#line 1886 "parser.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 448 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _TIPO *padre=new _TIPO("TIPO",tabla); 
                        padre->nivel=2;

                                //asignando atributos 
                                token *tok1=new token(QString::fromStdString((yyvsp[0].TEXT)),(yylsp[0]).first_line,3,archivo);
                                padre->lst_Atributos->insertar("tCaracter",tok1);

                        (yyval.VAL)->Padre=padre;
                }
#line 1903 "parser.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 461 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _TIPO *padre=new _TIPO("TIPO",tabla); 
                        padre->nivel=3;

                                //asignando atributos 
                                token *tok1=new token(QString::fromStdString((yyvsp[0].TEXT)),(yylsp[0]).first_line,3,archivo);
                                padre->lst_Atributos->insertar("tBooleano",tok1);

                        (yyval.VAL)->Padre=padre;
                }
#line 1920 "parser.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 474 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _TIPO *padre=new _TIPO("TIPO",tabla); 
                        padre->nivel=4;

                                //asignando atributos 
                                token *tok1=new token(QString::fromStdString((yyvsp[0].TEXT)),(yylsp[0]).first_line,3,archivo);
                                padre->lst_Atributos->insertar("tDecimal",tok1);

                        (yyval.VAL)->Padre=padre;
                }
#line 1937 "parser.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 487 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _TIPO *padre=new _TIPO("TIPO",tabla); 
                        padre->nivel=5;

                                //asignando atributos 
                                token *tok1=new token(QString::fromStdString((yyvsp[0].TEXT)),(yylsp[0]).first_line,3,archivo);
                                padre->lst_Atributos->insertar("valId",tok1);

                        (yyval.VAL)->Padre=padre;
                }
#line 1954 "parser.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 500 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _TIPO *padre=new _TIPO("TIPO",tabla); 
                        padre->nivel=6;

                                //asignando atributos 
                                token *tok1=new token(QString::fromStdString((yyvsp[0].TEXT)),(yylsp[0]).first_line,3,archivo);
                                padre->lst_Atributos->insertar("tVacio",tok1);

                        (yyval.VAL)->Padre=padre;
                }
#line 1971 "parser.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 516 "sintactico.y" /* yacc.c:1646  */
    {   


                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _EXTENDER *padre=new _EXTENDER("EXTENDER",tabla);
                        padre->nivel=1;

                                //atributos  
                                token *tok2=new token(QString::fromStdString((yyvsp[0].TEXT)),(yylsp[0]).first_line,3,archivo);
                                padre->lst_Atributos->insertar("valId",tok2);


                        (yyval.VAL)->Padre=padre;
                }
#line 1991 "parser.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 532 "sintactico.y" /* yacc.c:1646  */
    {
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _EXTENDER *padre=new _EXTENDER("EXTENDER",tabla);
                        padre->nivel=2;

                        (yyval.VAL)->Padre=padre;
                }
#line 2004 "parser.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 545 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _LST_PARAMETROS *padre=new _LST_PARAMETROS("LST_PARAMETROS",tabla); 
                        padre->nivel=1;

                                //hijos
                                padre->hijos.append((yyvsp[-2].VAL)->Padre);
                                padre->hijos.append((yyvsp[0].VAL)->Padre);

                        (yyval.VAL)->Padre=padre; 
                }
#line 2021 "parser.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 558 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _LST_PARAMETROS *padre=new _LST_PARAMETROS("LST_PARAMETROS",tabla); 
                        padre->nivel=2;

                                //hijos
                                padre->hijos.append((yyvsp[0].VAL)->Padre);

                        (yyval.VAL)->Padre=padre;
                }
#line 2037 "parser.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 570 "sintactico.y" /* yacc.c:1646  */
    {
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _LST_PARAMETROS *padre=new _LST_PARAMETROS("LST_PARAMETROS",tabla); 
                        padre->nivel=3;
                        (yyval.VAL)->Padre=padre;
                        /*vacio*/
                }
#line 2050 "parser.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 582 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _PARAMETRO *padre=new _PARAMETRO("PARAMETRO",tabla); 
                        padre->nivel=1;
                                //hijos
                                padre->hijos.append((yyvsp[-1].VAL)->Padre);
                                padre->hijos.append((yyvsp[0].VAL)->Padre);

                        (yyval.VAL)->Padre=padre;
                }
#line 2066 "parser.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 598 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _LST_VAL *padre=new _LST_VAL("LST_VAL",tabla); 
                        padre->nivel=1;
                                //hijos
                                padre->hijos.append((yyvsp[-2].VAL)->Padre);
                                padre->hijos.append((yyvsp[0].VAL)->Padre);

                        (yyval.VAL)->Padre=padre;
                }
#line 2082 "parser.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 610 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _LST_VAL *padre=new _LST_VAL("LST_VAL",tabla); 
                        padre->nivel=2;

                                //hijos
                                padre->hijos.append((yyvsp[0].VAL)->Padre); 

                        (yyval.VAL)->Padre=padre;
                }
#line 2098 "parser.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 622 "sintactico.y" /* yacc.c:1646  */
    {
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _LST_VAL *padre=new _LST_VAL("LST_VAL",tabla); 
                        padre->nivel=3;
                        (yyval.VAL)->Padre=padre;
                        /*vacio*/
                }
#line 2111 "parser.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 635 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _VISIBILIDAD *padre=new _VISIBILIDAD("VISIBILIDAD",tabla); 
                        padre->nivel=1;
                        
                                //asignando atributos 
                                token *tok1=new token(QString::fromStdString((yyvsp[0].TEXT)),(yylsp[0]).first_line,3,archivo);
                                padre->lst_Atributos->insertar("tPublico",tok1);
                                
                        (yyval.VAL)->Padre=padre;
                }
#line 2128 "parser.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 648 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _VISIBILIDAD *padre=new _VISIBILIDAD("VISIBILIDAD",tabla); 
                        padre->nivel=2;
                                //asignando atributos 
                                token *tok1=new token(QString::fromStdString((yyvsp[0].TEXT)),(yylsp[0]).first_line,3,archivo);
                                padre->lst_Atributos->insertar("tPrivado",tok1);

                        (yyval.VAL)->Padre=padre;
                }
#line 2144 "parser.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 660 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _VISIBILIDAD *padre=new _VISIBILIDAD("VISIBILIDAD",tabla); 
                        padre->nivel=3;
                                //asignando atributos 
                                token *tok1=new token(QString::fromStdString((yyvsp[0].TEXT)),(yylsp[0]).first_line,3,archivo);
                                padre->lst_Atributos->insertar("tProtegido",tok1);

                        (yyval.VAL)->Padre=padre;
                }
#line 2160 "parser.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 676 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _CP_CLASE *padre=new _CP_CLASE("CP_CLASE",tabla); 
                        padre->nivel=1;
                                //hijos
                                padre->hijos.append((yyvsp[-1].VAL)->Padre);
                                padre->hijos.append((yyvsp[0].VAL)->Padre);

                        (yyval.VAL)->Padre=padre;
                }
#line 2176 "parser.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 688 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _CP_CLASE *padre=new _CP_CLASE("CP_CLASE",tabla); 
                        padre->nivel=2;
                                //hijos
                                padre->hijos.append((yyvsp[0].VAL)->Padre);
                                
                        (yyval.VAL)->Padre=padre;
                }
#line 2191 "parser.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 703 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _CUERPO_CLASE *padre=new _CUERPO_CLASE("CUERPO_CLASE",tabla); 
                        padre->nivel=1;
                                //hijos
                                padre->hijos.append((yyvsp[0].VAL)->Padre);

                        (yyval.VAL)->Padre=padre;
                }
#line 2206 "parser.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 714 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _CUERPO_CLASE *padre=new _CUERPO_CLASE("CUERPO_CLASE",tabla); 
                        padre->nivel=2;

                                //hijos
                                padre->hijos.append((yyvsp[-1].VAL)->Padre);

                        (yyval.VAL)->Padre=padre;
                }
#line 2222 "parser.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 726 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _CUERPO_CLASE *padre=new _CUERPO_CLASE("CUERPO_CLASE",tabla); 
                        padre->nivel=3;

                                //hijos
                                padre->hijos.append((yyvsp[0].VAL)->Padre);

                        (yyval.VAL)->Padre=padre;
                }
#line 2238 "parser.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 738 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _CUERPO_CLASE *padre=new _CUERPO_CLASE("CUERPO_CLASE",tabla); 
                        padre->nivel=4;

                                //hijos
                                padre->hijos.append((yyvsp[0].VAL)->Padre);

                        (yyval.VAL)->Padre=padre;
                }
#line 2254 "parser.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 754 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _METODO *padre=new _METODO("METODO",tabla); 
                        padre->nivel=1;

                                //hijos
                                padre->hijos.append((yyvsp[-8].VAL)->Padre);
                                padre->hijos.append((yyvsp[-7].VAL)->Padre);
                                padre->hijos.append((yyvsp[-6].VAL)->Padre);
                                padre->hijos.append((yyvsp[-4].VAL)->Padre);
                                padre->hijos.append((yyvsp[-1].VAL)->Padre);

                        (yyval.VAL)->Padre=padre;
                }
#line 2274 "parser.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 770 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _METODO *padre=new _METODO("METODO",tabla); 
                        padre->nivel=2;

                                //hijos
                                padre->hijos.append((yyvsp[-7].VAL)->Padre);
                                padre->hijos.append((yyvsp[-6].VAL)->Padre);
                                padre->hijos.append((yyvsp[-4].VAL)->Padre);
                                padre->hijos.append((yyvsp[-1].VAL)->Padre); 

                        (yyval.VAL)->Padre=padre;
                }
#line 2293 "parser.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 789 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _MAIN *padre=new _MAIN("MAIN",tabla); 
                        padre->nivel=1;
                                //asignando atributos 
                                token *tok1=new token(QString::fromStdString((yyvsp[-5].TEXT)),(yylsp[-5]).first_line,3,archivo);
                                padre->lst_Atributos->insertar("tPrincipal",tok1);
                        
                                //hijos
                                padre->hijos.append((yyvsp[-1].VAL)->Padre);

                        (yyval.VAL)->Padre=padre;
                }
#line 2312 "parser.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 807 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _CONSTRUCTOR *padre=new _CONSTRUCTOR("CONSTRUCTOR",tabla); 
                        padre->nivel=1;
                        
                                //asignando atributos 
                                token *tok1=new token(QString::fromStdString((yyvsp[-6].TEXT)),(yylsp[-6]).first_line,3,archivo);
                                padre->lst_Atributos->insertar("valId",tok1);

                                //hijos
                                padre->hijos.append((yyvsp[-4].VAL)->Padre);
                                padre->hijos.append((yyvsp[-1].VAL)->Padre); 


                        (yyval.VAL)->Padre=padre;
                }
#line 2334 "parser.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 830 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _DECLARAR_VARIABLE_GLOBAL *padre=new _DECLARAR_VARIABLE_GLOBAL("DECLARAR_VARIABLE_GLOBAL",tabla); 
                        padre->nivel=1;

                                //hijos
                                padre->hijos.append((yyvsp[-3].VAL)->Padre);
                                padre->hijos.append((yyvsp[-2].VAL)->Padre); 
                                padre->hijos.append((yyvsp[-1].VAL)->Padre);
                                padre->hijos.append((yyvsp[0].VAL)->Padre); 

                                
                        (yyval.VAL)->Padre=padre;
                }
#line 2354 "parser.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 846 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _DECLARAR_VARIABLE_GLOBAL *padre=new _DECLARAR_VARIABLE_GLOBAL("DECLARAR_VARIABLE_GLOBAL",tabla); 
                        padre->nivel=2;
                                //hijos
                                padre->hijos.append((yyvsp[-2].VAL)->Padre);
                                padre->hijos.append((yyvsp[-1].VAL)->Padre); 
                                padre->hijos.append((yyvsp[0].VAL)->Padre); 

                        (yyval.VAL)->Padre=padre;
                }
#line 2371 "parser.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 859 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _DECLARAR_VARIABLE_GLOBAL *padre=new _DECLARAR_VARIABLE_GLOBAL("DECLARAR_VARIABLE_GLOBAL",tabla); 
                        padre->nivel=3;

                                //hijos
                                padre->hijos.append((yyvsp[0].VAL)->Padre); 

                        (yyval.VAL)->Padre=padre;
                }
#line 2387 "parser.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 876 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _DECLARAR_VARIABLE_SINVISIBI *padre=new _DECLARAR_VARIABLE_SINVISIBI("DECLARAR_VARIABLE_SINVISIBI",tabla); 
                        padre->nivel=1;

                                //hijos
                                padre->hijos.append((yyvsp[-2].VAL)->Padre);
                                padre->hijos.append((yyvsp[-1].VAL)->Padre); 
                                padre->hijos.append((yyvsp[0].VAL)->Padre); 

                        (yyval.VAL)->Padre=padre;
                }
#line 2405 "parser.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 890 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _DECLARAR_VARIABLE_SINVISIBI *padre=new _DECLARAR_VARIABLE_SINVISIBI("DECLARAR_VARIABLE_SINVISIBI",tabla);
                        padre->nivel=2;

                                //hijos
                                padre->hijos.append((yyvsp[-1].VAL)->Padre);
                                padre->hijos.append((yyvsp[0].VAL)->Padre);  

                        (yyval.VAL)->Padre=padre;
                }
#line 2422 "parser.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 908 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _VAL *padre=new _VAL("VAL",tabla); 
                        padre->nivel=1;

                                //hijos 
                                padre->hijos.append((yyvsp[0].VAL)->Padre);  

                        (yyval.VAL)->Padre=padre;
                }
#line 2438 "parser.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 924 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _LST_LLAVES_VAL *padre=new _LST_LLAVES_VAL("LST_LLAVES_VAL",tabla); 
                        padre->nivel=1;

                                //hijos
                                padre->hijos.append((yyvsp[-2].VAL)->Padre); 
                                padre->hijos.append((yyvsp[0].VAL)->Padre); 


                        (yyval.VAL)->Padre=padre;
                }
#line 2456 "parser.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 938 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _LST_LLAVES_VAL *padre=new _LST_LLAVES_VAL("LST_LLAVES_VAL",tabla); 
                        padre->nivel=2;

                                //hijos
                                padre->hijos.append((yyvsp[0].VAL)->Padre); 

                        (yyval.VAL)->Padre=padre;
                }
#line 2472 "parser.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 954 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _LLAVES_VAL_P *padre=new _LLAVES_VAL_P("LLAVES_VAL_P",tabla); 
                        padre->nivel=1;

                                //hijos 
                                padre->hijos.append((yyvsp[-1].VAL)->Padre);  

                        (yyval.VAL)->Padre=padre;
                }
#line 2488 "parser.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 966 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _LLAVES_VAL_P *padre=new _LLAVES_VAL_P("LLAVES_VAL_P",tabla); 
                        padre->nivel=2;

                                //hijos 
                                padre->hijos.append((yyvsp[-1].VAL)->Padre);  

                        (yyval.VAL)->Padre=padre;
                }
#line 2504 "parser.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 983 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _VAR_ARREGLO *padre=new _VAR_ARREGLO("VAR_ARREGLO",tabla); 
                        padre->nivel=1;

                                //asignando atributos 
                                token *tok1=new token(QString::fromStdString((yyvsp[0].TEXT)),(yylsp[0]).first_line,3,archivo);
                                padre->lst_Atributos->insertar("valId",tok1);

                        (yyval.VAL)->Padre=padre;
                }
#line 2521 "parser.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 996 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _VAR_ARREGLO *padre=new _VAR_ARREGLO("VAR_ARREGLO",tabla); 
                        padre->nivel=2;

                                //asignando atributos 
                                token *tok1=new token(QString::fromStdString((yyvsp[-1].TEXT)),(yylsp[-1]).first_line,3,archivo);
                                padre->lst_Atributos->insertar("valId",tok1);

                                //hijos 
                                padre->hijos.append((yyvsp[0].VAL)->Padre);  

                        (yyval.VAL)->Padre=padre;
                }
#line 2541 "parser.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 1054 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _PAR_CORCHETES_VAL *padre=new _PAR_CORCHETES_VAL("PAR_CORCHETES_VAL",tabla); 
                        padre->nivel=1;


                                //hijos 
                                padre->hijos.append((yyvsp[-1].VAL)->Padre);  


                        (yyval.VAL)->Padre=padre;
                }
#line 2559 "parser.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 1071 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _LST_CORCHETES_VAL *padre=new _LST_CORCHETES_VAL("LST_CORCHETES_VAL",tabla); 
                        padre->nivel=1;

                                //hijos
                                padre->hijos.append((yyvsp[-1].VAL)->Padre);
                                padre->hijos.append((yyvsp[0].VAL)->Padre);  


                        (yyval.VAL)->Padre=padre;
                }
#line 2577 "parser.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 1085 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _LST_CORCHETES_VAL *padre=new _LST_CORCHETES_VAL("LST_CORCHETES_VAL",tabla); 
                        padre->nivel=2;

                                //hijos
                                padre->hijos.append((yyvsp[0].VAL)->Padre); 

                        (yyval.VAL)->Padre=padre;
                }
#line 2593 "parser.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 1101 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _ID_VAR_FUNC *padre=new _ID_VAR_FUNC("ID_VAR_FUNC",tabla); 
                        padre->nivel=1;

                                //hijos
                                padre->hijos.append((yyvsp[-1].VAL)->Padre);
                                padre->hijos.append((yyvsp[0].VAL)->Padre);  

                        (yyval.VAL)->Padre=padre;
                }
#line 2610 "parser.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 1114 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _ID_VAR_FUNC *padre=new _ID_VAR_FUNC("ID_VAR_FUNC",tabla); 
                        padre->nivel=2;
                        
                                //asignando atributos 
                                token *tok3=new token(QString::fromStdString((yyvsp[0].TEXT)),(yylsp[0]).first_line,3,archivo);
                                padre->lst_Atributos->insertar("valId",tok3);

                        (yyval.VAL)->Padre=padre;
                }
#line 2627 "parser.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 1127 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _ID_VAR_FUNC *padre=new _ID_VAR_FUNC("ID_VAR_FUNC",tabla); 
                        padre->nivel=3;

                                //asignando atributos 
                                token *tok1=new token(QString::fromStdString((yyvsp[0].TEXT)),(yylsp[0]).first_line,3,archivo);
                                padre->lst_Atributos->insertar("valId",tok1);

                        (yyval.VAL)->Padre=padre;
                }
#line 2644 "parser.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 1140 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _ID_VAR_FUNC *padre=new _ID_VAR_FUNC("ID_VAR_FUNC",tabla); 
                        padre->nivel=4;

                                //asignando atributos 
                                token *tok3=new token(QString::fromStdString((yyvsp[-3].TEXT)),(yylsp[-3]).first_line,3,archivo);
                                padre->lst_Atributos->insertar("valId",tok3);

                                //hijos
                                padre->hijos.append((yyvsp[-1].VAL)->Padre); 


                        (yyval.VAL)->Padre=padre;
                }
#line 2665 "parser.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 1157 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _ID_VAR_FUNC *padre=new _ID_VAR_FUNC("ID_VAR_FUNC",tabla); 
                        padre->nivel=5;


                                //asignando atributos 
                                token *tok1=new token(QString::fromStdString((yyvsp[-3].TEXT)),(yylsp[-3]).first_line,3,archivo);
                                padre->lst_Atributos->insertar("valId",tok1);

                                //hijos 
                                padre->hijos.append((yyvsp[-1].VAL)->Padre); 

                        (yyval.VAL)->Padre=padre;
                }
#line 2686 "parser.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 1174 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _ID_VAR_FUNC *padre=new _ID_VAR_FUNC("ID_VAR_FUNC",tabla); 
                        padre->nivel=6;

                                //asignando atributos 
                                token *tok3=new token(QString::fromStdString((yyvsp[-1].TEXT)),(yylsp[-1]).first_line,3,archivo);
                                padre->lst_Atributos->insertar("valId",tok3);

                                //hijos 
                                padre->hijos.append((yyvsp[0].VAL)->Padre); 


                        (yyval.VAL)->Padre=padre;
                }
#line 2707 "parser.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 1191 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _ID_VAR_FUNC *padre=new _ID_VAR_FUNC("ID_VAR_FUNC",tabla); 
                        padre->nivel=7;


                                //asignando atributos 
                                token *tok1=new token(QString::fromStdString((yyvsp[-1].TEXT)),(yylsp[-1]).first_line,3,archivo);
                                padre->lst_Atributos->insertar("valId",tok1);

                                //hijos 
                                padre->hijos.append((yyvsp[0].VAL)->Padre);  


                        (yyval.VAL)->Padre=padre;
                }
#line 2729 "parser.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 1209 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _ID_VAR_FUNC *padre=new _ID_VAR_FUNC("ID_VAR_FUNC",tabla); 
                        padre->nivel=8;

                                //asignando atributos 
                                token *tok3=new token(QString::fromStdString((yyvsp[-4].TEXT)),(yylsp[-4]).first_line,3,archivo);
                                padre->lst_Atributos->insertar("valId",tok3);

                                //hijos
                                padre->hijos.append((yyvsp[-2].VAL)->Padre);
                                padre->hijos.append((yyvsp[0].VAL)->Padre);  


                        (yyval.VAL)->Padre=padre;
                }
#line 2751 "parser.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 1227 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _ID_VAR_FUNC *padre=new _ID_VAR_FUNC("ID_VAR_FUNC",tabla); 
                        padre->nivel=9;

                                //asignando atributos 
                                token *tok1=new token(QString::fromStdString((yyvsp[-4].TEXT)),(yylsp[-4]).first_line,3,archivo);
                                padre->lst_Atributos->insertar("valId",tok1);


                                //hijos 
                                padre->hijos.append((yyvsp[-2].VAL)->Padre);
                                padre->hijos.append((yyvsp[0].VAL)->Padre); 

                        (yyval.VAL)->Padre=padre;
                }
#line 2773 "parser.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 1249 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _LST_PUNTOSP *padre=new _LST_PUNTOSP("LST_PUNTOSP",tabla); 
                        padre->nivel=1;

                                //asignando atributos 
                                token *tok2=new token(QString::fromStdString((yyvsp[0].TEXT)),(yylsp[0]).first_line,3,archivo);
                                padre->lst_Atributos->insertar("valId",tok2);

                        (yyval.VAL)->Padre=padre;
                }
#line 2790 "parser.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 1262 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _LST_PUNTOSP *padre=new _LST_PUNTOSP("LST_PUNTOSP",tabla); 
                        padre->nivel=2;

                                //asignando atributos 
                                token *tok2=new token(QString::fromStdString((yyvsp[-3].TEXT)),(yylsp[-3]).first_line,3,archivo);
                                padre->lst_Atributos->insertar("valId",tok2);

                                //hijos 
                                padre->hijos.append((yyvsp[-1].VAL)->Padre); 


                        (yyval.VAL)->Padre=padre;
                }
#line 2811 "parser.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 1280 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _LST_PUNTOSP *padre=new _LST_PUNTOSP("LST_PUNTOSP",tabla); 
                        padre->nivel=3;

                                //asignando atributos 
                                token *tok2=new token(QString::fromStdString((yyvsp[-1].TEXT)),(yylsp[-1]).first_line,3,archivo);
                                padre->lst_Atributos->insertar("valId",tok2);


                                //hijos 
                                padre->hijos.append((yyvsp[0].VAL)->Padre); 

                        (yyval.VAL)->Padre=padre;
                }
#line 2832 "parser.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 1297 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _LST_PUNTOSP *padre=new _LST_PUNTOSP("LST_PUNTOSP",tabla); 
                        padre->nivel=4;

                                //asignando atributos 
                                token *tok2=new token(QString::fromStdString((yyvsp[-4].TEXT)),(yylsp[-4]).first_line,3,archivo);
                                padre->lst_Atributos->insertar("valId",tok2);

                                //hijos 
                                padre->hijos.append((yyvsp[-2].VAL)->Padre);
                                padre->hijos.append((yyvsp[0].VAL)->Padre); 
                                
                        (yyval.VAL)->Padre=padre;
                }
#line 2853 "parser.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 1319 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _ASIG_VALOR *padre=new _ASIG_VALOR("ASIG_VALOR",tabla); 
                        padre->nivel=1;

                                //hijos
                                padre->hijos.append((yyvsp[-1].VAL)->Padre);
                                padre->hijos.append((yyvsp[0].VAL)->Padre);  

                        (yyval.VAL)->Padre=padre;
                }
#line 2870 "parser.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 1332 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _ASIG_VALOR *padre=new _ASIG_VALOR("ASIG_VALOR",tabla); 
                        padre->nivel=2;

                                //hijos
                                padre->hijos.append((yyvsp[-2].VAL)->Padre); 

                        (yyval.VAL)->Padre=padre;
                }
#line 2886 "parser.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 1344 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _ASIG_VALOR *padre=new _ASIG_VALOR("ASIG_VALOR",tabla); 
                        padre->nivel=3;

                                //hijos
                                padre->hijos.append((yyvsp[-2].VAL)->Padre); 

                        (yyval.VAL)->Padre=padre;
                }
#line 2902 "parser.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 1359 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _LST_CUERPO *padre=new _LST_CUERPO("LST_CUERPO",tabla); 
                        padre->nivel=1;

                                //hijos
                                padre->hijos.append((yyvsp[-1].VAL)->Padre);
                                padre->hijos.append((yyvsp[0].VAL)->Padre);  

                        (yyval.VAL)->Padre=padre;
                }
#line 2919 "parser.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 1372 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _LST_CUERPO *padre=new _LST_CUERPO("LST_CUERPO",tabla); 
                        padre->nivel=2;

                                //hijos
                                padre->hijos.append((yyvsp[0].VAL)->Padre); 

                        (yyval.VAL)->Padre=padre;
                }
#line 2935 "parser.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 1389 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _CUERPO *padre=new _CUERPO("CUERPO",tabla); 
                        padre->nivel=1;

                                //hijos
                                padre->hijos.append((yyvsp[-1].VAL)->Padre); 

                        (yyval.VAL)->Padre=padre;
                }
#line 2951 "parser.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 1401 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _CUERPO *padre=new _CUERPO("CUERPO",tabla); 
                        padre->nivel=2;

                                //hijos
                                padre->hijos.append((yyvsp[-1].VAL)->Padre); 

                        (yyval.VAL)->Padre=padre;
                }
#line 2967 "parser.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 1413 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _CUERPO *padre=new _CUERPO("CUERPO",tabla); 
                        padre->nivel=3;

                                //hijos
                                padre->hijos.append((yyvsp[-1].VAL)->Padre); 

                        (yyval.VAL)->Padre=padre;
                }
#line 2983 "parser.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 1427 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _CUERPO *padre=new _CUERPO("CUERPO",tabla); 
                        padre->nivel=4;

                                //hijos
                                padre->hijos.append((yyvsp[0].VAL)->Padre); 

                        (yyval.VAL)->Padre=padre;
                }
#line 2999 "parser.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 1439 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _CUERPO *padre=new _CUERPO("CUERPO",tabla); 
                        padre->nivel=5;

                                //hijos
                                padre->hijos.append((yyvsp[0].VAL)->Padre);
                                
                        (yyval.VAL)->Padre=padre;
                }
#line 3015 "parser.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 1452 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _CUERPO *padre=new _CUERPO("CUERPO",tabla); 
                        padre->nivel=6;
                                //hijos
                                padre->hijos.append((yyvsp[0].VAL)->Padre);
                                

                        (yyval.VAL)->Padre=padre; 
                }
#line 3031 "parser.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 1464 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _CUERPO *padre=new _CUERPO("CUERPO",tabla); 
                        padre->nivel=7;

                                //hijos
                                padre->hijos.append((yyvsp[0].VAL)->Padre);
                                
                        (yyval.VAL)->Padre=padre;
                }
#line 3047 "parser.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 1476 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _CUERPO *padre=new _CUERPO("CUERPO",tabla); 
                        padre->nivel=8;
                                //hijos
                                padre->hijos.append((yyvsp[0].VAL)->Padre);
                                

                        (yyval.VAL)->Padre=padre;
                }
#line 3063 "parser.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 1491 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _SUPER *padre=new _SUPER("SUPER",tabla); 
                        padre->nivel=1;

                                //hijos
                                padre->hijos.append((yyvsp[-2].VAL)->Padre);
                                

                        (yyval.VAL)->Padre=padre;
                }
#line 3080 "parser.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 1507 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _RETORNO *padre=new _RETORNO("RETORNO",tabla); 
                         padre->nivel=1;

                                //asignando atributos 
                                token *tok1=new token(QString::fromStdString((yyvsp[-1].TEXT)),(yylsp[-1]).first_line,3,archivo);
                                padre->lst_Atributos->insertar("tRetorno",tok1);


                        (yyval.VAL)->Padre=padre;
                }
#line 3098 "parser.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 1521 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _RETORNO *padre=new _RETORNO("RETORNO",tabla); 
                        padre->nivel=2;

                                //asignando atributos 
                                token *tok1=new token(QString::fromStdString((yyvsp[-2].TEXT)),(yylsp[-2]).first_line,3,archivo);
                                padre->lst_Atributos->insertar("tRetorno",tok1);

                                //hijos 
                                padre->hijos.append((yyvsp[-1].VAL)->Padre);  

                        (yyval.VAL)->Padre=padre;
                }
#line 3118 "parser.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 1540 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _ROMPER *padre=new _ROMPER("ROMPER",tabla); 
                        padre->nivel=1;
                                //asignando atributos 
                                token *tok1=new token(QString::fromStdString((yyvsp[-1].TEXT)),(yylsp[-1]).first_line,3,archivo);
                                padre->lst_Atributos->insertar("tRomper",tok1);

                        (yyval.VAL)->Padre=padre;
                }
#line 3134 "parser.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 1555 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _CONTINUAR *padre=new _CONTINUAR("CONTINUAR",tabla); 
                        padre->nivel=1;
                                //asignando atributos 
                                token *tok1=new token(QString::fromStdString((yyvsp[-1].TEXT)),(yylsp[-1]).first_line,3,archivo);
                                padre->lst_Atributos->insertar("tContinuar",tok1);

                        (yyval.VAL)->Padre=padre;
                }
#line 3150 "parser.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 1571 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _SENTENCIAS *padre=new _SENTENCIAS("SENTENCIAS",tabla); 
                        padre->nivel=1;

                                //hijos
                                padre->hijos.append((yyvsp[0].VAL)->Padre); 

                        (yyval.VAL)->Padre=padre;
                }
#line 3166 "parser.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 1591 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _SI *padre=new _SI("SI",tabla); 
                        padre->nivel=1;

                                //asignando atributos 
                                token *tok1=new token(QString::fromStdString((yyvsp[-6].TEXT)),(yylsp[-6]).first_line,3,archivo);
                                padre->lst_Atributos->insertar("tSi",tok1);

                                //hijos
                                padre->hijos.append((yyvsp[-4].VAL)->Padre);
                                padre->hijos.append((yyvsp[-1].VAL)->Padre);  

                        (yyval.VAL)->Padre=padre;
                }
#line 3187 "parser.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 1608 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _SI *padre=new _SI("SI",tabla); 
                        padre->nivel=2;
                        

                                //asignando atributos 
                                token *tok1=new token(QString::fromStdString((yyvsp[-7].TEXT)),(yylsp[-7]).first_line,3,archivo);
                                padre->lst_Atributos->insertar("tSi",tok1);

                                //hijos
                                padre->hijos.append((yyvsp[-5].VAL)->Padre);
                                padre->hijos.append((yyvsp[-2].VAL)->Padre); 
                                padre->hijos.append((yyvsp[0].VAL)->Padre);
                                

                        (yyval.VAL)->Padre=padre;
                }
#line 3211 "parser.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 1628 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _SI *padre=new _SI("SI",tabla); 
                        padre->nivel=3;

                                //asignando atributos 
                                token *tok1=new token(QString::fromStdString((yyvsp[-7].TEXT)),(yylsp[-7]).first_line,3,archivo);
                                padre->lst_Atributos->insertar("tSi",tok1);

                                //hijos
                                padre->hijos.append((yyvsp[-5].VAL)->Padre);
                                padre->hijos.append((yyvsp[-2].VAL)->Padre); 
                                padre->hijos.append((yyvsp[0].VAL)->Padre); 

                        (yyval.VAL)->Padre=padre;
                }
#line 3233 "parser.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 1649 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _SINO_SI *padre=new _SINO_SI("SINO_SI",tabla); 
                        padre->nivel=1;

                                //asignando atributos 
                                token *tok1=new token(QString::fromStdString((yyvsp[-8].TEXT)),(yylsp[-8]).first_line,3,archivo);
                                padre->lst_Atributos->insertar("tSino",tok1);

                                //hijos
                                padre->hijos.append((yyvsp[-5].VAL)->Padre);
                                padre->hijos.append((yyvsp[-2].VAL)->Padre); 
                                padre->hijos.append((yyvsp[0].VAL)->Padre);  

                        (yyval.VAL)->Padre=padre;
                }
#line 3255 "parser.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 1667 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _SINO_SI *padre=new _SINO_SI("SINO_SI",tabla); 
                        padre->nivel=2;

                                //asignando atributos 
                                token *tok1=new token(QString::fromStdString((yyvsp[-7].TEXT)),(yylsp[-7]).first_line,3,archivo);
                                padre->lst_Atributos->insertar("tSino",tok1);

                                //hijos
                                padre->hijos.append((yyvsp[-4].VAL)->Padre);
                                padre->hijos.append((yyvsp[-1].VAL)->Padre);  

                        (yyval.VAL)->Padre=padre;
                }
#line 3276 "parser.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 1684 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _SINO_SI *padre=new _SINO_SI("SINO_SI",tabla); 
                        padre->nivel=3;

                                //asignando atributos 
                                token *tok1=new token(QString::fromStdString((yyvsp[-8].TEXT)),(yylsp[-8]).first_line,3,archivo);
                                padre->lst_Atributos->insertar("tSino",tok1);

                                //hijos
                                padre->hijos.append((yyvsp[-5].VAL)->Padre);
                                padre->hijos.append((yyvsp[-2].VAL)->Padre); 
                                padre->hijos.append((yyvsp[0].VAL)->Padre); 

                        (yyval.VAL)->Padre=padre;
                }
#line 3298 "parser.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 1705 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _SINO *padre=new _SINO("SINO",tabla); 
                        padre->nivel=1;

                                //asignando atributos 
                                token *tok1=new token(QString::fromStdString((yyvsp[-3].TEXT)),(yylsp[-3]).first_line,3,archivo);
                                padre->lst_Atributos->insertar("tSino",tok1);

                                //hijos 
                                padre->hijos.append((yyvsp[-1].VAL)->Padre); 

                        (yyval.VAL)->Padre=padre;
                }
#line 3318 "parser.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 1725 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _VALOR *padre=new _VALOR("VALOR",tabla); 
                        padre->nivel=1;

                                //asignando atributos 
                                token *tok2=new token(QString::fromStdString((yyvsp[-3].TEXT)),(yylsp[-3]).first_line,3,archivo);
                                padre->lst_Atributos->insertar("valId",tok2);

                                //hijos 
                                padre->hijos.append((yyvsp[-1].VAL)->Padre); 

                        (yyval.VAL)->Padre=padre;
                }
#line 3338 "parser.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 1741 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _VALOR *padre=new _VALOR("VALOR",tabla); 
                        padre->nivel=2;

                                //hijos 
                                padre->hijos.append((yyvsp[-1].VAL)->Padre); 
                                padre->hijos.append((yyvsp[0].VAL)->Padre); 

                        (yyval.VAL)->Padre=padre;
                }
#line 3355 "parser.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 1754 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _VALOR *padre=new _VALOR("VALOR",tabla); 
                        padre->nivel=3;

                                //hijos
                                padre->hijos.append((yyvsp[0].VAL)->Padre); 

                        (yyval.VAL)->Padre=padre;
                }
#line 3371 "parser.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 1766 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _VALOR *padre=new _VALOR("VALOR",tabla); 
                        padre->nivel=4;

                                //hijos
                                padre->hijos.append((yyvsp[0].VAL)->Padre); 

                        (yyval.VAL)->Padre=padre;
                }
#line 3387 "parser.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 1783 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _E *padre=new _E("E",tabla); 
                        padre->nivel=1;

                                //asignando atributos 
                                token *tok1=new token(QString::fromStdString((yyvsp[-1].TEXT)),(yylsp[-1]).first_line,3,archivo);
                                padre->lst_Atributos->insertar("sMenos",tok1);

                                //hijos 
                                padre->hijos.append((yyvsp[0].VAL)->Padre);  

                        (yyval.VAL)->Padre=padre;
                }
#line 3407 "parser.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 1800 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _E *padre=new _E("E",tabla); 
                        padre->nivel=2;

                                //asignando atributos 
                                token *tok2=new token(QString::fromStdString((yyvsp[-1].TEXT)),(yylsp[-1]).first_line,3,archivo);
                                padre->lst_Atributos->insertar("sPot",tok2);

                                //hijos
                                padre->hijos.append((yyvsp[-2].VAL)->Padre); 
                                padre->hijos.append((yyvsp[0].VAL)->Padre); 

                        (yyval.VAL)->Padre=padre;
                }
#line 3428 "parser.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 1817 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _E *padre=new _E("E",tabla); 
                        padre->nivel=3;

                                //asignando atributos 
                                token *tok2=new token(QString::fromStdString((yyvsp[-1].TEXT)),(yylsp[-1]).first_line,3,archivo);
                                padre->lst_Atributos->insertar("sDiv",tok2);

                                //hijos
                                padre->hijos.append((yyvsp[-2].VAL)->Padre); 
                                padre->hijos.append((yyvsp[0].VAL)->Padre); 

                        (yyval.VAL)->Padre=padre;
                }
#line 3449 "parser.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 1834 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _E *padre=new _E("E",tabla); 
                        padre->nivel=4;

                                //asignando atributos 
                                token *tok2=new token(QString::fromStdString((yyvsp[-1].TEXT)),(yylsp[-1]).first_line,3,archivo);
                                padre->lst_Atributos->insertar("sPor",tok2);

                                //hijos
                                padre->hijos.append((yyvsp[-2].VAL)->Padre); 
                                padre->hijos.append((yyvsp[0].VAL)->Padre); 

                        (yyval.VAL)->Padre=padre;
                }
#line 3470 "parser.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 1851 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _E *padre=new _E("E",tabla); 
                        padre->nivel=5;


                                //asignando atributos 
                                token *tok2=new token(QString::fromStdString((yyvsp[-1].TEXT)),(yylsp[-1]).first_line,3,archivo);
                                padre->lst_Atributos->insertar("sMas",tok2);

                                //hijos
                                padre->hijos.append((yyvsp[-2].VAL)->Padre); 
                                padre->hijos.append((yyvsp[0].VAL)->Padre); 

                        (yyval.VAL)->Padre=padre;
                }
#line 3492 "parser.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 1869 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _E *padre=new _E("E",tabla); 
                        padre->nivel=6;


                                //asignando atributos 
                                token *tok2=new token(QString::fromStdString((yyvsp[-1].TEXT)),(yylsp[-1]).first_line,3,archivo);
                                padre->lst_Atributos->insertar("sMenos",tok2);

                                //hijos
                                padre->hijos.append((yyvsp[-2].VAL)->Padre); 
                                padre->hijos.append((yyvsp[0].VAL)->Padre); 

                        (yyval.VAL)->Padre=padre;
                }
#line 3514 "parser.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 1888 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _E *padre=new _E("E",tabla); 
                        padre->nivel=7;


                                //asignando atributos 
                                token *tok2=new token(QString::fromStdString((yyvsp[-1].TEXT)),(yylsp[-1]).first_line,3,archivo);
                                padre->lst_Atributos->insertar("sMod",tok2);

                                //hijos
                                padre->hijos.append((yyvsp[-2].VAL)->Padre); 
                                padre->hijos.append((yyvsp[0].VAL)->Padre); 

                        (yyval.VAL)->Padre=padre;
                }
#line 3536 "parser.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 1909 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _E *padre=new _E("E",tabla); 
                        padre->nivel=8;


                                //asignando atributos 
                                token *tok2=new token(QString::fromStdString((yyvsp[-1].TEXT)),(yylsp[-1]).first_line,3,archivo);
                                padre->lst_Atributos->insertar("sIgualacion",tok2);

                                //hijos
                                padre->hijos.append((yyvsp[-2].VAL)->Padre); 
                                padre->hijos.append((yyvsp[0].VAL)->Padre); 

                        (yyval.VAL)->Padre=padre;
                }
#line 3558 "parser.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 1927 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _E *padre=new _E("E",tabla); 
                        padre->nivel=9;

                                //asignando atributos 
                                token *tok2=new token(QString::fromStdString((yyvsp[-1].TEXT)),(yylsp[-1]).first_line,3,archivo);
                                padre->lst_Atributos->insertar("sDiferenciacion",tok2);


                                //hijos
                                padre->hijos.append((yyvsp[-2].VAL)->Padre); 
                                padre->hijos.append((yyvsp[0].VAL)->Padre); 

                        (yyval.VAL)->Padre=padre;
                }
#line 3580 "parser.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 1945 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _E *padre=new _E("E",tabla); 
                        padre->nivel=10;

                                //asignando atributos 
                                token *tok2=new token(QString::fromStdString((yyvsp[-1].TEXT)),(yylsp[-1]).first_line,3,archivo);
                                padre->lst_Atributos->insertar("sMenorQue",tok2);


                                //hijos
                                padre->hijos.append((yyvsp[-2].VAL)->Padre); 
                                padre->hijos.append((yyvsp[0].VAL)->Padre); 

                        (yyval.VAL)->Padre=padre;
                }
#line 3602 "parser.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 1963 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _E *padre=new _E("E",tabla); 
                        padre->nivel=11;


                                //asignando atributos 
                                token *tok2=new token(QString::fromStdString((yyvsp[-1].TEXT)),(yylsp[-1]).first_line,3,archivo);
                                padre->lst_Atributos->insertar("sMenorIgualQue",tok2);

                                //hijos
                                padre->hijos.append((yyvsp[-2].VAL)->Padre); 
                                padre->hijos.append((yyvsp[0].VAL)->Padre); 

                        (yyval.VAL)->Padre=padre;
                }
#line 3624 "parser.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 1981 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _E *padre=new _E("E",tabla); 
                        padre->nivel=12;


                                //asignando atributos 
                                token *tok2=new token(QString::fromStdString((yyvsp[-1].TEXT)),(yylsp[-1]).first_line,3,archivo);
                                padre->lst_Atributos->insertar("sMayorQue",tok2);

                                //hijos
                                padre->hijos.append((yyvsp[-2].VAL)->Padre); 
                                padre->hijos.append((yyvsp[0].VAL)->Padre); 

                        (yyval.VAL)->Padre=padre;
                }
#line 3646 "parser.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 1999 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _E *padre=new _E("E",tabla); 
                        padre->nivel=13;

                                //asignando atributos 
                                token *tok2=new token(QString::fromStdString((yyvsp[-1].TEXT)),(yylsp[-1]).first_line,3,archivo);
                                padre->lst_Atributos->insertar("sMayorIgualQue",tok2);


                                //hijos
                                padre->hijos.append((yyvsp[-2].VAL)->Padre); 
                                padre->hijos.append((yyvsp[0].VAL)->Padre); 

                        (yyval.VAL)->Padre=padre;
                }
#line 3668 "parser.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 2019 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _E *padre=new _E("E",tabla); 
                        padre->nivel=14;


                                //asignando atributos 
                                token *tok2=new token(QString::fromStdString((yyvsp[-1].TEXT)),(yylsp[-1]).first_line,3,archivo);
                                padre->lst_Atributos->insertar("sAnd",tok2);

                                //hijos
                                padre->hijos.append((yyvsp[-2].VAL)->Padre); 
                                padre->hijos.append((yyvsp[0].VAL)->Padre); 

                        (yyval.VAL)->Padre=padre;
                }
#line 3690 "parser.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 2037 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _E *padre=new _E("E",tabla); 
                        padre->nivel=15;

                                //asignando atributos 
                                token *tok2=new token(QString::fromStdString((yyvsp[-1].TEXT)),(yylsp[-1]).first_line,3,archivo);
                                padre->lst_Atributos->insertar("sOr",tok2);


                                //hijos
                                padre->hijos.append((yyvsp[-2].VAL)->Padre); 
                                padre->hijos.append((yyvsp[0].VAL)->Padre); 

                        (yyval.VAL)->Padre=padre;
                }
#line 3712 "parser.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 2055 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _E *padre=new _E("E",tabla); 
                        padre->nivel=16;

                                //asignando atributos 
                                token *tok1=new token(QString::fromStdString((yyvsp[-1].TEXT)),(yylsp[-1]).first_line,3,archivo);
                                padre->lst_Atributos->insertar("sNot",tok1);


                                //hijos
                                padre->hijos.append((yyvsp[0].VAL)->Padre);  

                        (yyval.VAL)->Padre=padre;
                }
#line 3733 "parser.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 2074 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _E *padre=new _E("E",tabla); 
                        padre->nivel=17;

                                //asignando atributos 
                                token *tok1=new token(QString::fromStdString((yyvsp[-2].TEXT)),(yylsp[-2]).first_line,3,archivo);
                                padre->lst_Atributos->insertar("sAbreParent",tok1);

                                //hijos
                                padre->hijos.append((yyvsp[-1].VAL)->Padre);  

                        (yyval.VAL)->Padre=padre;
                }
#line 3753 "parser.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 2091 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _E *padre=new _E("E",tabla); 
                        padre->nivel=18;

                                //hijos
                                padre->hijos.append((yyvsp[0].VAL)->Padre);  

                        (yyval.VAL)->Padre=padre;
                }
#line 3769 "parser.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 2103 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _E *padre=new _E("E",tabla); 
                        padre->nivel=19;

                                //asignando atributos 
                                token *tok1=new token(QString::fromStdString((yyvsp[0].TEXT)),(yylsp[0]).first_line,3,archivo);
                                padre->lst_Atributos->insertar("valBoolean",tok1);


                        (yyval.VAL)->Padre=padre;
                }
#line 3787 "parser.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 2117 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _E *padre=new _E("E",tabla); 
                        padre->nivel=20;

                                //asignando atributos 
                                token *tok1=new token(QString::fromStdString((yyvsp[0].TEXT)),(yylsp[0]).first_line,3,archivo);
                                padre->lst_Atributos->insertar("valCadena",tok1);

                        (yyval.VAL)->Padre=padre;
                }
#line 3804 "parser.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 2130 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _E *padre=new _E("E",tabla); 
                        padre->nivel=21;

                                //asignando atributos 
                                token *tok1=new token(QString::fromStdString((yyvsp[0].TEXT)),(yylsp[0]).first_line,3,archivo);
                                padre->lst_Atributos->insertar("valCaracter",tok1);

                        (yyval.VAL)->Padre=padre;
                }
#line 3821 "parser.cpp" /* yacc.c:1646  */
    break;

  case 118:
#line 2143 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _E *padre=new _E("E",tabla); 
                        padre->nivel=22;

                                //asignando atributos 
                                token *tok1=new token(QString::fromStdString((yyvsp[0].TEXT)),(yylsp[0]).first_line,3,archivo);
                                padre->lst_Atributos->insertar("valDecimal",tok1);

                        (yyval.VAL)->Padre=padre;
                }
#line 3838 "parser.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 2157 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _E *padre=new _E("E",tabla); 
                        padre->nivel=23;

                                //asignando atributos 
                                token *tok1=new token(QString::fromStdString((yyvsp[0].TEXT)),(yylsp[0]).first_line,3,archivo);
                                padre->lst_Atributos->insertar("valNumero",tok1);

                        (yyval.VAL)->Padre=padre;
                }
#line 3855 "parser.cpp" /* yacc.c:1646  */
    break;

  case 120:
#line 2170 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _E *padre=new _E("E",tabla); 
                        padre->nivel=24;

                                //asignando atributos 
                                token *tok1=new token(QString::fromStdString((yyvsp[0].TEXT)),(yylsp[0]).first_line,3,archivo);
                                padre->lst_Atributos->insertar("tNulo",tok1);

                        (yyval.VAL)->Padre=padre;
                }
#line 3872 "parser.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 2183 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _E *padre=new _E("E",tabla); 
                        padre->nivel=25;

                                //asignando atributos 
                                token *tok1=new token(QString::fromStdString((yyvsp[0].TEXT)),(yylsp[0]).first_line,3,archivo);
                                padre->lst_Atributos->insertar("tNada",tok1);

                        (yyval.VAL)->Padre=padre;
                }
#line 3889 "parser.cpp" /* yacc.c:1646  */
    break;


#line 3893 "parser.cpp" /* yacc.c:1646  */
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
