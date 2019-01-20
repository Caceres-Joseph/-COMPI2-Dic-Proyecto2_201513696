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
    sOr = 258,
    sAnd = 259,
    sNot = 260,
    sMayorQue = 261,
    sMenorQue = 262,
    sMayorIgualQue = 263,
    sMenorIgualQue = 264,
    sIgualacion = 265,
    sDiferenciacion = 266,
    sMas = 267,
    sMenos = 268,
    sPor = 269,
    sDiv = 270,
    sMod = 271,
    sPot = 272,
    sCierraInterrogante = 273,
    sMasIgual = 274,
    sMenosIgual = 275,
    sPorIgual = 276,
    sDivIgual = 277,
    sAbreParent = 278,
    sCierraParent = 279,
    sAbreLlave = 280,
    sCierraLlave = 281,
    sAbreCorchete = 282,
    sCierraCorchete = 283,
    sPunto = 284,
    sComa = 285,
    sPuntoComa = 286,
    sArroba = 287,
    sIgual = 288,
    sDosPuntos = 289,
    tLeerTeclado = 290,
    tImport = 291,
    tClase = 292,
    tExtender = 293,
    tPadre = 294,
    tPrincipal = 295,
    tOverride = 296,
    tNuevo = 297,
    tEste = 298,
    tImprimir = 299,
    tConcatenar = 300,
    tConvertirCadena = 301,
    tConvertirNumero = 302,
    tRetorno = 303,
    tSi = 304,
    tSino = 305,
    tCaso = 306,
    tSelecciona = 307,
    tDe = 308,
    tDefecto = 309,
    tRomper = 310,
    tMientras = 311,
    tContinuar = 312,
    tPara = 313,
    tHacer = 314,
    tRepetir = 315,
    tHasta = 316,
    tMensaje = 317,
    tSubCad = 318,
    tPosCad = 319,
    tRandom = 320,
    tTamanio = 321,
    tSuper = 322,
    tNada = 323,
    tVacio = 324,
    tNulo = 325,
    tEntero = 326,
    tCaracter = 327,
    tDecimal = 328,
    tBooleano = 329,
    tPublico = 330,
    tPrivado = 331,
    tProtegido = 332,
    valBoolean = 333,
    valId = 334,
    valNumero = 335,
    valDecimal = 336,
    valCaracter = 337,
    valCadena = 338
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

#line 253 "parser.cpp" /* yacc.c:355  */
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

#line 284 "parser.cpp" /* yacc.c:358  */

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
#define YYFINAL  14
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1515

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  84
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  55
/* YYNRULES -- Number of rules.  */
#define YYNRULES  160
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  378

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   338

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
      75,    76,    77,    78,    79,    80,    81,    82,    83
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   301,   301,   316,   332,   345,   360,   383,   397,   413,
     441,   467,   480,   494,   508,   522,   536,   553,   571,   584,
     598,   612,   624,   641,   648,   662,   675,   689,   702,   719,
     732,   748,   760,   772,   785,   798,   811,   828,   850,   870,
     892,   916,   935,   959,   973,   991,  1006,  1025,  1042,  1060,
    1074,  1088,  1101,  1119,  1133,  1153,  1160,  1176,  1188,  1206,
    1215,  1232,  1246,  1260,  1274,  1292,  1310,  1328,  1347,  1366,
    1389,  1403,  1422,  1440,  1463,  1477,  1490,  1503,  1517,  1531,
    1545,  1562,  1577,  1598,  1611,  1624,  1638,  1651,  1665,  1678,
    1691,  1704,  1717,  1733,  1756,  1769,  1785,  1806,  1827,  1848,
    1865,  1885,  1902,  1917,  1937,  1953,  1970,  1983,  1996,  2009,
    2022,  2039,  2063,  2083,  2101,  2122,  2145,  2165,  2189,  2210,
    2228,  2249,  2271,  2290,  2308,  2330,  2351,  2385,  2398,  2411,
    2428,  2444,  2464,  2487,  2505,  2523,  2541,  2559,  2578,  2598,
    2620,  2639,  2658,  2676,  2695,  2714,  2733,  2754,  2773,  2793,
    2811,  2824,  2839,  2852,  2866,  2881,  2895,  2909,  2923,  2936,
    2949
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "sOr", "sAnd", "sNot", "sMayorQue",
  "sMenorQue", "sMayorIgualQue", "sMenorIgualQue", "sIgualacion",
  "sDiferenciacion", "sMas", "sMenos", "sPor", "sDiv", "sMod", "sPot",
  "sCierraInterrogante", "sMasIgual", "sMenosIgual", "sPorIgual",
  "sDivIgual", "sAbreParent", "sCierraParent", "sAbreLlave",
  "sCierraLlave", "sAbreCorchete", "sCierraCorchete", "sPunto", "sComa",
  "sPuntoComa", "sArroba", "sIgual", "sDosPuntos", "tLeerTeclado",
  "tImport", "tClase", "tExtender", "tPadre", "tPrincipal", "tOverride",
  "tNuevo", "tEste", "tImprimir", "tConcatenar", "tConvertirCadena",
  "tConvertirNumero", "tRetorno", "tSi", "tSino", "tCaso", "tSelecciona",
  "tDe", "tDefecto", "tRomper", "tMientras", "tContinuar", "tPara",
  "tHacer", "tRepetir", "tHasta", "tMensaje", "tSubCad", "tPosCad",
  "tRandom", "tTamanio", "tSuper", "tNada", "tVacio", "tNulo", "tEntero",
  "tCaracter", "tDecimal", "tBooleano", "tPublico", "tPrivado",
  "tProtegido", "valBoolean", "valId", "valNumero", "valDecimal",
  "valCaracter", "valCadena", "$accept", "S", "LST_IMPORT", "IMPORT",
  "LST_CLASE", "CLASE", "TIPO", "EXTENDER", "LST_PARAMETROS", "PARAMETRO",
  "LST_VAL", "VISIBILIDAD", "CP_CLASE", "CUERPO_CLASE", "METODO", "MAIN",
  "CONSTRUCTOR", "DECLARAR_VARIABLE_GLOBAL", "DECLARAR_VARIABLE_SINVISIBI",
  "VAL", "LST_LLAVES_VAL", "LLAVES_VAL_P", "VAR_ARREGLO", "LST_CORCHETES",
  "PAR_CORCHETES_VACIOS", "PAR_CORCHETES_VAL", "LST_CORCHETES_VAL",
  "ID_VAR_FUNC", "LST_PUNTOSP", "ASIG_VALOR", "LST_CUERPO", "CUERPO",
  "COSENO", "FUNCIONES_NATIVAS", "CONVERTIR_NUMERO", "CONVERTIR_CADENA",
  "CONCATENAR", "IMPRIMIR", "SUPER", "RETORNO", "ROMPER", "CONTINUAR",
  "SENTENCIAS", "CASO", "CUERPO_CASE", "DOWHILE", "FOR", "WHILE", "SI",
  "SINO_SI", "SINO", "VALOR", "TAMANIO", "SI_SIMPLIFICADO", "E", YY_NULLPTR
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
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338
};
# endif

#define YYPACT_NINF -201

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-201)))

#define YYTABLE_NINF -16

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -24,   -16,   -61,  -201,  -201,  -201,    26,   -24,  -201,    -9,
    -201,   -10,   -32,    53,  -201,  -201,    -9,  -201,   -30,    64,
      22,    75,    53,    32,  -201,  1035,    98,    90,    92,   120,
    -201,  -201,  -201,  -201,  -201,   131,    -8,   232,    33,  -201,
    -201,  -201,  -201,   113,  -201,  1035,   115,   363,   147,   452,
     145,    99,   141,    -7,  -201,     4,  -201,  -201,  -201,  -201,
    -201,   258,  -201,  -201,     5,   452,  -201,   156,   114,    66,
    -201,  -201,   452,   420,  -201,   164,   377,  -201,   169,  -201,
     167,     6,  -201,   184,     9,  1078,   164,  -201,   203,   452,
      73,   420,   420,   420,   200,   217,   218,  -201,  -201,  -201,
     179,  -201,  -201,  -201,  -201,   202,  -201,  -201,  -201,  1244,
    -201,   420,   403,   170,  -201,  -201,  -201,  1456,   452,   452,
     227,   228,   231,   234,   237,   315,   238,   239,   236,   240,
     243,   253,   260,   255,     2,   114,   252,  1425,   256,   461,
    -201,  -201,   262,  -201,  -201,  -201,  -201,  -201,  -201,  -201,
    -201,  -201,  -201,  -201,  -201,  1078,  -201,   261,  1498,    60,
    1286,   216,   420,   420,   377,   164,   -42,  -201,   420,   420,
     420,   420,   420,   420,   420,   420,   420,   420,   420,   420,
     420,   420,  -201,  1267,  -201,   189,  1472,   271,   377,    89,
      97,   452,   420,   331,   377,  -201,   265,   420,   420,  -201,
     420,  -201,   139,  1078,   377,  -201,   285,   289,   420,   420,
     420,   420,   229,  -201,  -201,  -201,  -201,  -201,  -201,   501,
    1078,  -201,   215,  1305,  1324,   112,  -201,  -201,   225,  1486,
    1498,   462,   462,   462,   462,   462,   462,    60,    60,   293,
     293,   293,  -201,   377,  -201,   403,   377,   280,   290,   291,
     121,  1219,  -201,   295,   123,  -201,  1343,  1362,  1381,   286,
     119,   292,   541,   148,  -201,  -201,  1472,  1472,  1472,  1472,
    -201,   581,   377,   164,  -201,  -201,   164,   377,   377,   164,
     287,  -201,  1472,   159,   377,  1078,  1078,   300,   -38,  -201,
    -201,   314,   317,   318,   420,   420,   296,   320,  -201,   190,
     164,  -201,   206,   377,  -201,  -201,   621,   661,  1078,    21,
    1078,    10,  1078,  1167,  1193,   330,  -201,   164,   164,   336,
    -201,  -201,   701,   333,   741,   420,   332,   339,   781,   -38,
     -38,   420,   164,   164,  -201,  -201,  -201,   325,  1152,   343,
    -201,  -201,   346,   352,  1400,   -19,  -201,  -201,   354,  1078,
     355,   356,   353,  1078,   365,  1078,   821,  1078,  1078,  -201,
     861,   420,   901,  -201,   941,   981,  -201,  1419,    10,  -201,
    -201,   361,  -201,  1078,  1021,   325,  -201,  -201
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,    26,    27,    28,     0,     0,     5,     3,
       8,     0,     0,    18,     1,     4,     2,     7,     0,     0,
       0,     0,    18,     0,    17,     0,     0,     0,     0,     0,
      16,    11,    12,    14,    13,    15,     0,     0,     0,    30,
      34,    36,    31,     0,    44,     0,     0,     0,     0,    21,
       0,    53,    46,     0,    56,     0,    32,    43,     9,    29,
      33,     0,     6,    15,     0,     0,    35,     0,     0,     0,
      20,    57,    21,     0,    60,    54,     0,    45,     0,    55,
      53,     0,    10,     0,     0,     0,    53,    22,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   157,   156,   151,
      63,   155,   154,   153,   152,   150,   160,   158,   159,     0,
      59,     0,     0,     0,   127,    47,   129,   128,    21,    21,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    63,     0,     0,     0,     0,     0,
      82,    92,     0,    95,    94,    87,    90,    88,    89,    86,
     110,   109,   108,   107,   106,     0,    19,     0,   148,   133,
       0,     0,     0,     0,    25,    67,     0,    61,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    58,     0,    52,     0,    51,     0,     0,     0,
       0,    21,     0,     0,    25,   102,     0,     0,     0,   104,
       0,   105,     0,     0,    25,    83,     0,     0,     0,     0,
       0,     0,     0,    84,    74,    85,    41,    81,    91,     0,
       0,   149,    62,     0,     0,     0,    24,   130,    70,   147,
     146,   144,   142,   145,   143,   140,   141,   137,   138,   136,
     135,   139,   134,     0,    48,     0,    25,     0,     0,     0,
       0,     0,   100,     0,     0,   103,     0,     0,     0,     0,
       0,     0,     0,     0,    75,    76,    77,    78,    79,    80,
      42,     0,    25,    66,    97,    96,    65,     0,    25,    72,
       0,    50,    49,     0,     0,     0,     0,     0,     0,    99,
      98,     0,     0,     0,     0,     0,     0,     0,    38,     0,
      69,    23,     0,     0,   126,   131,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   101,    64,    71,     0,
      40,    37,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    68,    73,   132,    39,    93,   119,     0,     0,
     111,   118,     0,     0,     0,     0,   120,   121,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   115,
       0,     0,     0,   114,     0,     0,   125,     0,   113,   116,
     117,     0,   112,     0,     0,   123,   122,   124
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -201,  -201,  -201,   382,   384,    78,    -3,   370,   -63,   316,
    -183,   208,   358,   -21,   357,  -201,   369,  -201,   -22,   366,
    -108,  -201,   347,   -41,   -43,   -74,   -52,   -85,  -201,  -200,
      14,   -15,  -201,  -201,  -201,  -201,  -201,  -201,  -201,  -201,
    -201,  -201,  -201,  -201,    39,  -201,  -201,  -201,  -201,    42,
      46,   -68,  -201,  -201,   -13
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     6,     7,     8,     9,    10,   135,    21,    69,    70,
     225,    11,    38,    39,    40,    41,    42,    43,   136,   214,
     114,   185,    52,    53,    54,    74,    75,   105,   167,   138,
     139,   140,   141,   142,   106,   107,   143,   144,   145,   146,
     147,   148,   149,   150,   327,   151,   152,   153,   154,   346,
     347,   226,   108,   116,   117
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     137,   110,   261,    44,   184,    94,   353,    12,   115,    90,
      79,   254,     1,     2,    81,    57,    44,    59,    13,    50,
      50,   263,    36,    44,   227,   164,    14,    18,     2,    73,
     354,    50,    50,    50,    55,    36,    50,   228,    79,    44,
      59,   100,    36,    81,    64,   323,    68,    19,   165,    22,
     212,     3,     4,     5,   137,   189,   190,   196,    36,    58,
     109,   325,    84,   283,   326,    28,     3,     4,     5,    68,
     137,    51,    78,    29,   178,   179,   180,   181,   158,   159,
     160,   -15,   165,    80,    83,   120,    68,    17,   121,   299,
      88,   110,    20,    23,    17,   302,    89,   157,   183,   186,
      25,    24,    30,    89,    31,    32,    33,    34,     3,     4,
       5,    27,    35,   248,    46,    68,    68,   260,   137,    89,
     247,   249,    72,    45,   217,   253,    73,    89,   250,   342,
     343,   206,   207,    47,   137,   137,   276,   281,   208,   209,
     210,   211,   277,    48,    60,   287,    62,   290,   212,   223,
     224,    89,    76,   277,    49,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   219,
     273,    67,   297,    71,    76,   280,   279,   137,   277,   251,
     259,    85,    94,   304,   256,   257,   137,   258,    68,   277,
     119,    73,   118,    86,    73,   266,   267,   268,   269,   110,
     137,   137,   164,   309,   217,   110,    73,    72,    30,   301,
      31,    32,    33,    34,   317,   244,   305,   262,   134,   245,
     277,   137,   137,   137,   300,   137,   110,   137,   155,   161,
     318,   166,   282,    37,   271,   319,   277,   137,   272,   137,
     162,   163,    73,   137,   260,   260,    37,   217,   278,   187,
     191,   119,    73,    37,   192,    65,   217,   193,   110,   110,
     194,   197,   198,   200,   137,   332,   333,   199,   137,    37,
     137,   137,   137,   137,   201,   137,   202,   137,   204,   137,
     137,   313,   314,   205,    82,   203,   220,   215,   137,   137,
      28,   217,   217,   218,   246,   222,   255,   264,    29,   306,
     307,    30,   265,    31,    32,    33,    34,   217,   228,   217,
     181,    35,   338,   217,   284,   285,   286,   294,   344,   289,
      91,   303,   322,   295,   324,   308,   328,    30,    92,    31,
      32,    33,    34,     3,     4,     5,    91,    35,   111,   310,
     112,   217,   311,   312,    92,   217,   195,   217,   367,   217,
     217,   316,   315,   331,   111,   252,   112,   113,    94,   217,
     334,    95,    96,   356,   336,   340,   339,   360,   349,   362,
     350,   364,   365,   113,    94,   345,   351,    95,    96,   355,
     357,   358,    91,    97,   359,    98,   373,   374,   361,    15,
      92,    16,    26,    99,   100,   101,   102,   103,   104,    97,
     111,    98,   112,    61,    66,   156,    56,   372,    91,    99,
     100,   101,   102,   103,   104,    87,    92,   376,    77,   113,
      94,   377,     0,    95,    96,    91,    93,     0,   112,     0,
       0,     0,    30,    92,    31,    32,    33,    34,     3,     4,
       5,     0,    63,    93,     0,    97,    94,    98,     0,    95,
      96,     0,     0,     0,     0,    99,   100,   101,   102,   103,
     104,     0,     0,    94,     0,     0,    95,    96,     0,     0,
       0,    97,     0,    98,   176,   177,   178,   179,   180,   181,
       0,    99,   100,   101,   102,   103,   104,   216,    97,     0,
      98,     0,     0,     0,     0,     0,   122,     0,    99,   100,
     101,   102,   103,   104,    94,   123,   124,     0,     0,   125,
     126,     0,     0,   127,     0,     0,   128,   129,   130,   131,
     132,    30,     0,    31,    32,    33,    34,   270,   133,     0,
      30,    63,    31,    32,    33,    34,   122,     0,     0,     0,
     134,     0,     0,     0,    94,   123,   124,     0,     0,   125,
     126,     0,     0,   127,     0,     0,   128,   129,   130,   131,
     132,     0,     0,     0,     0,     0,     0,   296,   133,     0,
      30,     0,    31,    32,    33,    34,   122,     0,     0,     0,
     134,     0,     0,     0,    94,   123,   124,     0,     0,   125,
     126,     0,     0,   127,     0,     0,   128,   129,   130,   131,
     132,     0,     0,     0,     0,     0,     0,   298,   133,     0,
      30,     0,    31,    32,    33,    34,   122,     0,     0,     0,
     134,     0,     0,     0,    94,   123,   124,     0,     0,   125,
     126,     0,     0,   127,     0,     0,   128,   129,   130,   131,
     132,     0,     0,     0,     0,     0,     0,   320,   133,     0,
      30,     0,    31,    32,    33,    34,   122,     0,     0,     0,
     134,     0,     0,     0,    94,   123,   124,     0,     0,   125,
     126,     0,     0,   127,     0,     0,   128,   129,   130,   131,
     132,     0,     0,     0,     0,     0,     0,   321,   133,     0,
      30,     0,    31,    32,    33,    34,   122,     0,     0,     0,
     134,     0,     0,     0,    94,   123,   124,     0,     0,   125,
     126,     0,     0,   127,     0,     0,   128,   129,   130,   131,
     132,     0,     0,     0,     0,     0,     0,   335,   133,     0,
      30,     0,    31,    32,    33,    34,   122,     0,     0,     0,
     134,     0,     0,     0,    94,   123,   124,     0,     0,   125,
     126,     0,     0,   127,     0,     0,   128,   129,   130,   131,
     132,     0,     0,     0,     0,     0,     0,   337,   133,     0,
      30,     0,    31,    32,    33,    34,   122,     0,     0,     0,
     134,     0,     0,     0,    94,   123,   124,     0,     0,   125,
     126,     0,     0,   127,     0,     0,   128,   129,   130,   131,
     132,     0,     0,     0,     0,     0,     0,   341,   133,     0,
      30,     0,    31,    32,    33,    34,   122,     0,     0,     0,
     134,     0,     0,     0,    94,   123,   124,     0,     0,   125,
     126,     0,     0,   127,     0,     0,   128,   129,   130,   131,
     132,     0,     0,     0,     0,     0,     0,   363,   133,     0,
      30,     0,    31,    32,    33,    34,   122,     0,     0,     0,
     134,     0,     0,     0,    94,   123,   124,     0,     0,   125,
     126,     0,     0,   127,     0,     0,   128,   129,   130,   131,
     132,     0,     0,     0,     0,     0,     0,   366,   133,     0,
      30,     0,    31,    32,    33,    34,   122,     0,     0,     0,
     134,     0,     0,     0,    94,   123,   124,     0,     0,   125,
     126,     0,     0,   127,     0,     0,   128,   129,   130,   131,
     132,     0,     0,     0,     0,     0,     0,   368,   133,     0,
      30,     0,    31,    32,    33,    34,   122,     0,     0,     0,
     134,     0,     0,     0,    94,   123,   124,     0,     0,   125,
     126,     0,     0,   127,     0,     0,   128,   129,   130,   131,
     132,     0,     0,     0,     0,     0,     0,   369,   133,     0,
      30,     0,    31,    32,    33,    34,   122,     0,     0,     0,
     134,     0,     0,     0,    94,   123,   124,     0,     0,   125,
     126,     0,     0,   127,     0,     0,   128,   129,   130,   131,
     132,     0,     0,     0,     0,     0,     0,   370,   133,     0,
      30,     0,    31,    32,    33,    34,   122,     0,     0,     0,
     134,     0,     0,     0,    94,   123,   124,     0,     0,   125,
     126,     0,     0,   127,     0,     0,   128,   129,   130,   131,
     132,     0,     0,     0,     0,     0,     0,   375,   133,     0,
      30,     0,    31,    32,    33,    34,   122,     0,     0,     0,
     134,     0,     0,     0,    94,   123,   124,    28,     0,   125,
     126,     0,     0,   127,     0,    29,   128,   129,   130,   131,
     132,     0,     0,     0,     0,     0,     0,     0,   133,     0,
      30,     0,    31,    32,    33,    34,     0,     0,     0,     0,
     134,     0,     0,     0,    30,     0,    31,    32,    33,    34,
       3,     4,     5,   122,    35,     0,     0,     0,     0,     0,
       0,    94,   123,   124,     0,     0,   125,   126,     0,     0,
     127,     0,     0,   128,   129,   130,   131,   132,     0,     0,
       0,     0,     0,     0,     0,   133,     0,    30,     0,    31,
      32,    33,    34,     0,     0,   168,   169,   134,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     168,   169,     0,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,     0,   348,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   168,   169,   329,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   168,   169,   330,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   168,   169,   288,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,     0,     0,     0,     0,     0,     0,     0,     0,
     168,   169,   182,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   243,     0,     0,     0,   168,
     169,   221,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,     0,     0,     0,     0,   168,   169,
     221,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,     0,     0,     0,     0,   168,   169,   274,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,     0,     0,     0,     0,   168,   169,   275,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,     0,     0,     0,     0,   168,   169,   291,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
       0,     0,     0,     0,   168,   169,   292,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,     0,
       0,     0,     0,   168,   169,   293,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,     0,     0,
       0,     0,   168,   169,   352,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   206,   207,     0,
       0,     0,     0,   371,   208,   209,   210,   211,     0,     0,
       0,     0,     0,     0,   212,     0,   213,     0,    76,   168,
     169,     0,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   188,   168,   169,     0,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     169,     0,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181
};

static const yytype_int16 yycheck[] =
{
      85,    75,   202,    25,   112,    43,    25,    23,    76,    72,
      53,   194,    36,    37,    55,    37,    38,    38,    79,    27,
      27,   204,    25,    45,    66,    23,     0,    37,    37,    27,
      49,    27,    27,    27,    37,    38,    27,    79,    81,    61,
      61,    79,    45,    84,    47,    24,    49,    79,   100,    79,
      29,    75,    76,    77,   139,   118,   119,   125,    61,    26,
      73,    51,    65,   246,    54,    32,    75,    76,    77,    72,
     155,    79,    79,    40,    14,    15,    16,    17,    91,    92,
      93,    79,   134,    79,    79,    79,    89,     9,    79,   272,
      24,   165,    39,    29,    16,   278,    30,    24,   111,   112,
      25,    79,    69,    30,    71,    72,    73,    74,    75,    76,
      77,    79,    79,    24,    24,   118,   119,   202,   203,    30,
     188,    24,    23,    25,   139,   193,    27,    30,   191,   329,
     330,    12,    13,    41,   219,   220,    24,   245,    19,    20,
      21,    22,    30,    23,    31,    24,    31,    24,    29,   162,
     163,    30,    33,    30,    23,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   155,
     222,    24,    24,    28,    33,   243,   228,   262,    30,   192,
     202,    25,    43,    24,   197,   198,   271,   200,   191,    30,
      23,    27,    23,    79,    27,   208,   209,   210,   211,   273,
     285,   286,    23,   288,   219,   279,    27,    23,    69,   277,
      71,    72,    73,    74,    24,    26,   284,   203,    79,    30,
      30,   306,   307,   308,   276,   310,   300,   312,    25,    29,
      24,    29,   245,    25,   220,   303,    30,   322,    23,   324,
      23,    23,    27,   328,   329,   330,    38,   262,    23,    79,
      23,    23,    27,    45,    23,    47,   271,    23,   332,   333,
      23,    23,    23,    23,   349,   317,   318,    31,   353,    61,
     355,   356,   357,   358,    31,   360,    23,   362,    23,   364,
     365,   294,   295,    31,    26,    25,    25,    31,   373,   374,
      32,   306,   307,    31,    23,    79,    31,    12,    40,   285,
     286,    69,    13,    71,    72,    73,    74,   322,    79,   324,
      17,    79,   325,   328,    34,    25,    25,    31,   331,    24,
       5,    34,   308,    31,   310,    25,   312,    69,    13,    71,
      72,    73,    74,    75,    76,    77,     5,    79,    23,    25,
      25,   356,    25,    25,    13,   360,    31,   362,   361,   364,
     365,    31,    56,    23,    23,    24,    25,    42,    43,   374,
      24,    46,    47,   349,    31,    26,    34,   353,    25,   355,
      24,   357,   358,    42,    43,    50,    24,    46,    47,    25,
      25,    25,     5,    68,    31,    70,    25,   373,    23,     7,
      13,     7,    22,    78,    79,    80,    81,    82,    83,    68,
      23,    70,    25,    45,    47,    89,    37,   368,     5,    78,
      79,    80,    81,    82,    83,    68,    13,   375,    52,    42,
      43,   375,    -1,    46,    47,     5,    23,    -1,    25,    -1,
      -1,    -1,    69,    13,    71,    72,    73,    74,    75,    76,
      77,    -1,    79,    23,    -1,    68,    43,    70,    -1,    46,
      47,    -1,    -1,    -1,    -1,    78,    79,    80,    81,    82,
      83,    -1,    -1,    43,    -1,    -1,    46,    47,    -1,    -1,
      -1,    68,    -1,    70,    12,    13,    14,    15,    16,    17,
      -1,    78,    79,    80,    81,    82,    83,    26,    68,    -1,
      70,    -1,    -1,    -1,    -1,    -1,    35,    -1,    78,    79,
      80,    81,    82,    83,    43,    44,    45,    -1,    -1,    48,
      49,    -1,    -1,    52,    -1,    -1,    55,    56,    57,    58,
      59,    69,    -1,    71,    72,    73,    74,    26,    67,    -1,
      69,    79,    71,    72,    73,    74,    35,    -1,    -1,    -1,
      79,    -1,    -1,    -1,    43,    44,    45,    -1,    -1,    48,
      49,    -1,    -1,    52,    -1,    -1,    55,    56,    57,    58,
      59,    -1,    -1,    -1,    -1,    -1,    -1,    26,    67,    -1,
      69,    -1,    71,    72,    73,    74,    35,    -1,    -1,    -1,
      79,    -1,    -1,    -1,    43,    44,    45,    -1,    -1,    48,
      49,    -1,    -1,    52,    -1,    -1,    55,    56,    57,    58,
      59,    -1,    -1,    -1,    -1,    -1,    -1,    26,    67,    -1,
      69,    -1,    71,    72,    73,    74,    35,    -1,    -1,    -1,
      79,    -1,    -1,    -1,    43,    44,    45,    -1,    -1,    48,
      49,    -1,    -1,    52,    -1,    -1,    55,    56,    57,    58,
      59,    -1,    -1,    -1,    -1,    -1,    -1,    26,    67,    -1,
      69,    -1,    71,    72,    73,    74,    35,    -1,    -1,    -1,
      79,    -1,    -1,    -1,    43,    44,    45,    -1,    -1,    48,
      49,    -1,    -1,    52,    -1,    -1,    55,    56,    57,    58,
      59,    -1,    -1,    -1,    -1,    -1,    -1,    26,    67,    -1,
      69,    -1,    71,    72,    73,    74,    35,    -1,    -1,    -1,
      79,    -1,    -1,    -1,    43,    44,    45,    -1,    -1,    48,
      49,    -1,    -1,    52,    -1,    -1,    55,    56,    57,    58,
      59,    -1,    -1,    -1,    -1,    -1,    -1,    26,    67,    -1,
      69,    -1,    71,    72,    73,    74,    35,    -1,    -1,    -1,
      79,    -1,    -1,    -1,    43,    44,    45,    -1,    -1,    48,
      49,    -1,    -1,    52,    -1,    -1,    55,    56,    57,    58,
      59,    -1,    -1,    -1,    -1,    -1,    -1,    26,    67,    -1,
      69,    -1,    71,    72,    73,    74,    35,    -1,    -1,    -1,
      79,    -1,    -1,    -1,    43,    44,    45,    -1,    -1,    48,
      49,    -1,    -1,    52,    -1,    -1,    55,    56,    57,    58,
      59,    -1,    -1,    -1,    -1,    -1,    -1,    26,    67,    -1,
      69,    -1,    71,    72,    73,    74,    35,    -1,    -1,    -1,
      79,    -1,    -1,    -1,    43,    44,    45,    -1,    -1,    48,
      49,    -1,    -1,    52,    -1,    -1,    55,    56,    57,    58,
      59,    -1,    -1,    -1,    -1,    -1,    -1,    26,    67,    -1,
      69,    -1,    71,    72,    73,    74,    35,    -1,    -1,    -1,
      79,    -1,    -1,    -1,    43,    44,    45,    -1,    -1,    48,
      49,    -1,    -1,    52,    -1,    -1,    55,    56,    57,    58,
      59,    -1,    -1,    -1,    -1,    -1,    -1,    26,    67,    -1,
      69,    -1,    71,    72,    73,    74,    35,    -1,    -1,    -1,
      79,    -1,    -1,    -1,    43,    44,    45,    -1,    -1,    48,
      49,    -1,    -1,    52,    -1,    -1,    55,    56,    57,    58,
      59,    -1,    -1,    -1,    -1,    -1,    -1,    26,    67,    -1,
      69,    -1,    71,    72,    73,    74,    35,    -1,    -1,    -1,
      79,    -1,    -1,    -1,    43,    44,    45,    -1,    -1,    48,
      49,    -1,    -1,    52,    -1,    -1,    55,    56,    57,    58,
      59,    -1,    -1,    -1,    -1,    -1,    -1,    26,    67,    -1,
      69,    -1,    71,    72,    73,    74,    35,    -1,    -1,    -1,
      79,    -1,    -1,    -1,    43,    44,    45,    -1,    -1,    48,
      49,    -1,    -1,    52,    -1,    -1,    55,    56,    57,    58,
      59,    -1,    -1,    -1,    -1,    -1,    -1,    26,    67,    -1,
      69,    -1,    71,    72,    73,    74,    35,    -1,    -1,    -1,
      79,    -1,    -1,    -1,    43,    44,    45,    -1,    -1,    48,
      49,    -1,    -1,    52,    -1,    -1,    55,    56,    57,    58,
      59,    -1,    -1,    -1,    -1,    -1,    -1,    26,    67,    -1,
      69,    -1,    71,    72,    73,    74,    35,    -1,    -1,    -1,
      79,    -1,    -1,    -1,    43,    44,    45,    32,    -1,    48,
      49,    -1,    -1,    52,    -1,    40,    55,    56,    57,    58,
      59,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    -1,
      69,    -1,    71,    72,    73,    74,    -1,    -1,    -1,    -1,
      79,    -1,    -1,    -1,    69,    -1,    71,    72,    73,    74,
      75,    76,    77,    35,    79,    -1,    -1,    -1,    -1,    -1,
      -1,    43,    44,    45,    -1,    -1,    48,    49,    -1,    -1,
      52,    -1,    -1,    55,    56,    57,    58,    59,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    67,    -1,    69,    -1,    71,
      72,    73,    74,    -1,    -1,     3,     4,    79,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
       3,     4,    -1,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    -1,    34,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,    31,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,    31,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,    30,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,    28,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    -1,    -1,    -1,     3,
       4,    24,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    -1,    -1,    -1,    -1,     3,     4,
      24,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    -1,    -1,    -1,    -1,     3,     4,    24,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    -1,    -1,    -1,    -1,     3,     4,    24,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    -1,    -1,    -1,    -1,     3,     4,    24,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      -1,    -1,    -1,    -1,     3,     4,    24,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    -1,
      -1,    -1,    -1,     3,     4,    24,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    -1,    -1,
      -1,    -1,     3,     4,    24,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    12,    13,    -1,
      -1,    -1,    -1,    24,    19,    20,    21,    22,    -1,    -1,
      -1,    -1,    -1,    -1,    29,    -1,    31,    -1,    33,     3,
       4,    -1,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,     3,     4,    -1,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
       4,    -1,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    36,    37,    75,    76,    77,    85,    86,    87,    88,
      89,    95,    23,    79,     0,    87,    88,    89,    37,    79,
      39,    91,    79,    29,    79,    25,    91,    79,    32,    40,
      69,    71,    72,    73,    74,    79,    90,    95,    96,    97,
      98,    99,   100,   101,   102,    25,    24,    41,    23,    23,
      27,    79,   106,   107,   108,    90,   100,   102,    26,    97,
      31,    96,    31,    79,    90,    95,    98,    24,    90,    92,
      93,    28,    23,    27,   109,   110,    33,   103,    79,   108,
      79,   107,    26,    79,    90,    25,    79,   106,    24,    30,
      92,     5,    13,    23,    43,    46,    47,    68,    70,    78,
      79,    80,    81,    82,    83,   111,   118,   119,   136,   138,
     109,    23,    25,    42,   104,   135,   137,   138,    23,    23,
      79,    79,    35,    44,    45,    48,    49,    52,    55,    56,
      57,    58,    59,    67,    79,    90,   102,   111,   113,   114,
     115,   116,   117,   120,   121,   122,   123,   124,   125,   126,
     127,   129,   130,   131,   132,    25,    93,    24,   138,   138,
     138,    29,    23,    23,    23,   110,    29,   112,     3,     4,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    28,   138,   104,   105,   138,    79,    18,    92,
      92,    23,    23,    23,    23,    31,   135,    23,    23,    31,
      23,    31,    23,    25,    23,    31,    12,    13,    19,    20,
      21,    22,    29,    31,   103,    31,    26,   115,    31,   114,
      25,    24,    79,   138,   138,    94,   135,    66,    79,   138,
     138,   138,   138,   138,   138,   138,   138,   138,   138,   138,
     138,   138,   138,    18,    26,    30,    23,   135,    24,    24,
      92,   138,    24,   135,    94,    31,   138,   138,   138,   102,
     111,   113,   114,    94,    12,    13,   138,   138,   138,   138,
      26,   114,    23,   110,    24,    24,    24,    30,    23,   110,
     135,   104,   138,    94,    34,    25,    25,    24,    30,    24,
      24,    24,    24,    24,    31,    31,    26,    24,    26,    94,
     110,   135,    94,    34,    24,   135,   114,   114,    25,   111,
      25,    25,    25,   138,   138,    56,    31,    24,    24,   135,
      26,    26,   114,    24,   114,    51,    54,   128,   114,    31,
      31,    23,   110,   110,    24,    26,    31,    26,   138,    34,
      26,    26,   113,   113,   138,    50,   133,   134,    34,    25,
      24,    24,    24,    25,    49,    25,   114,    25,    25,    31,
     114,    23,   114,    26,   114,   114,    26,   138,    26,    26,
      26,    24,   128,    25,   114,    26,   133,   134
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    84,    85,    85,    86,    86,    87,    88,    88,    89,
      89,    90,    90,    90,    90,    90,    90,    91,    91,    92,
      92,    92,    93,    94,    94,    94,    95,    95,    95,    96,
      96,    97,    97,    97,    97,    97,    97,    98,    98,    98,
      98,    99,   100,   101,   101,   102,   102,   103,   104,   105,
     105,   105,   105,   106,   106,   107,   107,   108,   109,   110,
     110,   111,   111,   111,   111,   111,   111,   111,   111,   111,
     112,   112,   112,   112,   113,   113,   113,   113,   113,   113,
     113,   114,   114,   115,   115,   115,   115,   115,   115,   115,
     115,   115,   115,   116,   117,   117,   118,   119,   120,   121,
     121,   122,   123,   123,   124,   125,   126,   126,   126,   126,
     126,   127,   128,   128,   128,   129,   130,   130,   131,   132,
     132,   132,   133,   133,   133,   134,   135,   135,   135,   135,
     136,   137,   137,   138,   138,   138,   138,   138,   138,   138,
     138,   138,   138,   138,   138,   138,   138,   138,   138,   138,
     138,   138,   138,   138,   138,   138,   138,   138,   138,   138,
     138
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     2,     1,     7,     2,     1,     6,
       7,     1,     1,     1,     1,     1,     1,     2,     0,     3,
       1,     0,     2,     3,     1,     0,     1,     1,     1,     2,
       1,     1,     2,     2,     1,     3,     1,     9,     8,    10,
       9,     6,     7,     2,     1,     3,     2,     2,     3,     3,
       3,     1,     1,     1,     2,     2,     1,     2,     3,     2,
       1,     2,     3,     1,     6,     4,     4,     2,     7,     5,
       2,     5,     3,     6,     2,     3,     3,     3,     3,     3,
       3,     2,     1,     2,     2,     2,     1,     1,     1,     1,
       1,     2,     1,     7,     1,     1,     4,     4,     4,     4,
       3,     5,     2,     3,     2,     2,     1,     1,     1,     1,
       1,     7,     7,     6,     5,     9,    11,    11,     7,     7,
       8,     8,     9,     8,     9,     4,     5,     1,     1,     1,
       3,     5,     7,     2,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     2,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1
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
#line 302 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _S *padre=new _S("S",tabla); 
                        padre->nivel=1;
                         padre->nLinea=-1;


                                //hijos
                                padre->hijos.append((yyvsp[-1].VAL)->Padre);
                                padre->hijos.append((yyvsp[0].VAL)->Padre);
                        
                        raiz->hijos.append(padre);
                }
#line 1968 "parser.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 317 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _S *padre=new _S("S",tabla); 
                        padre->nivel=2;
                         padre->nLinea=-1;

                                //hijos
                                padre->hijos.append((yyvsp[0].VAL)->Padre);

                        raiz->hijos.append(padre);
                }
#line 1985 "parser.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 333 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _LST_IMPORT *padre=new _LST_IMPORT("LST_IMPORT",tabla); 
                        padre->nivel=1;
                        padre->nLinea=nLinea;
                                //hijos
                                padre->hijos.append((yyvsp[-1].VAL)->Padre);
                                padre->hijos.append((yyvsp[0].VAL)->Padre);

                        (yyval.VAL)->Padre=padre;
                }
#line 2002 "parser.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 346 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _LST_IMPORT *padre=new _LST_IMPORT("LST_IMPORT",tabla); 
                        padre->nivel=2;
                        padre->nLinea=nLinea;
                                //hijos
                                padre->hijos.append((yyvsp[0].VAL)->Padre);

                        (yyval.VAL)->Padre=padre;
                }
#line 2018 "parser.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 361 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _IMPORT *padre=new _IMPORT("IMPORT",tabla); 
                        padre->nivel=1;
                        padre->nLinea=nLinea;
                                

                                //asignando atributos  

                                token *tok3=new token(QString::fromStdString((yyvsp[-4].TEXT)),(yylsp[-4]).first_line,3,archivo);
                                padre->lst_Atributos->insertar("valId",tok3);
 

                                token *tok5=new token(QString::fromStdString((yyvsp[-2].TEXT)),(yylsp[-2]).first_line,3,archivo);
                                padre->lst_Atributos->insertar("valId",tok5);
                                
                        (yyval.VAL)->Padre=padre;
                }
#line 2042 "parser.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 384 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _LST_CLASE *padre=new _LST_CLASE("LST_CLASE",tabla); 
                        padre->nivel=1;
                        padre->nLinea=nLinea;

                                //hijos
                                padre->hijos.append((yyvsp[-1].VAL)->Padre);
                                padre->hijos.append((yyvsp[0].VAL)->Padre);

                        (yyval.VAL)->Padre=padre;
                }
#line 2060 "parser.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 398 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _LST_CLASE *padre=new _LST_CLASE("LST_CLASE",tabla); 
                        padre->nivel=2;
                        padre->nLinea=nLinea;
                                //hijos
                                padre->hijos.append((yyvsp[0].VAL)->Padre);

                        (yyval.VAL)->Padre=padre;
                }
#line 2076 "parser.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 414 "sintactico.y" /* yacc.c:1646  */
    {   

                        //std::cout<<padre->nombre.toStdString()<<std::endl;
                        //std::cout<<$2<<" linea:"<<@2.first_line<<std::endl;

                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _CLASE *padre=new _CLASE("CLASE",tabla);
                        padre->nivel=1;
                        padre->nLinea=nLinea;
                                //asignando atributos  

                                token *tok2=new token(QString::fromStdString((yyvsp[-4].TEXT)),(yylsp[-4]).first_line,3,archivo);
                                padre->lst_Atributos->insertar("valId",tok2);


                                //hijos
                                padre->hijos.append((yyvsp[-3].VAL)->Padre);
                                padre->hijos.append((yyvsp[-1].VAL)->Padre);



 

                        (yyval.VAL)->Padre=padre;

                }
#line 2108 "parser.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 442 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _CLASE *padre=new _CLASE("CLASE",tabla); 
                        padre->nivel=2;
                        padre->nLinea=nLinea;

                                //asignando atributos  

                                token *tok2=new token(QString::fromStdString((yyvsp[-4].TEXT)),(yylsp[-4]).first_line,3,archivo);
                                padre->lst_Atributos->insertar("valId",tok2);


                                //hijos
                                padre->hijos.append((yyvsp[-6].VAL)->Padre);
                                padre->hijos.append((yyvsp[-3].VAL)->Padre);
                                padre->hijos.append((yyvsp[-1].VAL)->Padre);

                        (yyval.VAL)->Padre=padre;
                }
#line 2133 "parser.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 468 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _TIPO *padre=new _TIPO("TIPO",tabla); 
                        padre->nivel=1;
                        padre->nLinea=nLinea;
                                //asignando atributos 
                                token *tok1=new token(QString::fromStdString((yyvsp[0].TEXT)),(yylsp[0]).first_line,3,archivo);
                                padre->lst_Atributos->insertar("tEntero",tok1);

                        (yyval.VAL)->Padre=padre;
                }
#line 2150 "parser.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 481 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _TIPO *padre=new _TIPO("TIPO",tabla); 
                        padre->nivel=2;
                        padre->nLinea=nLinea;

                                //asignando atributos 
                                token *tok1=new token(QString::fromStdString((yyvsp[0].TEXT)),(yylsp[0]).first_line,3,archivo);
                                padre->lst_Atributos->insertar("tCaracter",tok1);

                        (yyval.VAL)->Padre=padre;
                }
#line 2168 "parser.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 495 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _TIPO *padre=new _TIPO("TIPO",tabla); 
                        padre->nivel=3;
                        padre->nLinea=nLinea;

                                //asignando atributos 
                                token *tok1=new token(QString::fromStdString((yyvsp[0].TEXT)),(yylsp[0]).first_line,3,archivo);
                                padre->lst_Atributos->insertar("tBooleano",tok1);

                        (yyval.VAL)->Padre=padre;
                }
#line 2186 "parser.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 509 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _TIPO *padre=new _TIPO("TIPO",tabla); 
                        padre->nivel=4;
                        padre->nLinea=nLinea;

                                //asignando atributos 
                                token *tok1=new token(QString::fromStdString((yyvsp[0].TEXT)),(yylsp[0]).first_line,3,archivo);
                                padre->lst_Atributos->insertar("tDecimal",tok1);

                        (yyval.VAL)->Padre=padre;
                }
#line 2204 "parser.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 523 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _TIPO *padre=new _TIPO("TIPO",tabla); 
                        padre->nivel=5;
                        padre->nLinea=nLinea;

                                //asignando atributos 
                                token *tok1=new token(QString::fromStdString((yyvsp[0].TEXT)),(yylsp[0]).first_line,3,archivo);
                                padre->lst_Atributos->insertar("valId",tok1);

                        (yyval.VAL)->Padre=padre;
                }
#line 2222 "parser.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 537 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _TIPO *padre=new _TIPO("TIPO",tabla); 
                        padre->nivel=6;
                        padre->nLinea=nLinea;

                                //asignando atributos 
                                token *tok1=new token(QString::fromStdString((yyvsp[0].TEXT)),(yylsp[0]).first_line,3,archivo);
                                padre->lst_Atributos->insertar("tVacio",tok1);

                        (yyval.VAL)->Padre=padre;
                }
#line 2240 "parser.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 554 "sintactico.y" /* yacc.c:1646  */
    {   


                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _EXTENDER *padre=new _EXTENDER("EXTENDER",tabla);
                        padre->nivel=1;
                        padre->nLinea=nLinea;

                                //atributos  
                                token *tok2=new token(QString::fromStdString((yyvsp[0].TEXT)),(yylsp[0]).first_line,3,archivo);
                                padre->lst_Atributos->insertar("valId",tok2);


                        (yyval.VAL)->Padre=padre;
                }
#line 2261 "parser.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 571 "sintactico.y" /* yacc.c:1646  */
    {
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _EXTENDER *padre=new _EXTENDER("EXTENDER",tabla);
                        padre->nivel=2;
                        padre->nLinea=-1;

                        (yyval.VAL)->Padre=padre;
                }
#line 2275 "parser.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 585 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _LST_PARAMETROS *padre=new _LST_PARAMETROS("LST_PARAMETROS",tabla); 
                        padre->nivel=1;
                        padre->nLinea=nLinea;

                                //hijos
                                padre->hijos.append((yyvsp[-2].VAL)->Padre);
                                padre->hijos.append((yyvsp[0].VAL)->Padre);

                        (yyval.VAL)->Padre=padre; 
                }
#line 2293 "parser.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 599 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _LST_PARAMETROS *padre=new _LST_PARAMETROS("LST_PARAMETROS",tabla); 
                        padre->nivel=2;
                        padre->nLinea=nLinea;

                                //hijos
                                padre->hijos.append((yyvsp[0].VAL)->Padre);

                        (yyval.VAL)->Padre=padre;
                }
#line 2310 "parser.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 612 "sintactico.y" /* yacc.c:1646  */
    {
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _LST_PARAMETROS *padre=new _LST_PARAMETROS("LST_PARAMETROS",tabla); 
                        padre->nivel=3;
                        padre->nLinea=-1;
                        (yyval.VAL)->Padre=padre;
                        /*vacio*/
                }
#line 2324 "parser.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 625 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _PARAMETRO *padre=new _PARAMETRO("PARAMETRO",tabla); 
                        padre->nivel=1;
                        padre->nLinea=nLinea;
                                //hijos
                                padre->hijos.append((yyvsp[-1].VAL)->Padre);
                                padre->hijos.append((yyvsp[0].VAL)->Padre);

                        (yyval.VAL)->Padre=padre;
                }
#line 2341 "parser.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 642 "sintactico.y" /* yacc.c:1646  */
    {   
                        
                        (yyvsp[-2].VAL)->Padre->hijos.append((yyvsp[0].VAL)->Padre);

                        (yyval.VAL)->Padre=(yyvsp[-2].VAL)->Padre;
                }
#line 2352 "parser.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 649 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _LST_VAL *padre=new _LST_VAL("LST_VAL",tabla); 
                        padre->nivel=2;
                        padre->nLinea=nLinea;

                                //hijos
                                padre->hijos.append((yyvsp[0].VAL)->Padre); 

                        (yyval.VAL)->Padre=padre;
                }
#line 2369 "parser.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 662 "sintactico.y" /* yacc.c:1646  */
    {
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _LST_VAL *padre=new _LST_VAL("LST_VAL",tabla); 
                        padre->nivel=3;
                        padre->nLinea=-1;
                        (yyval.VAL)->Padre=padre;
                        /*vacio*/
                }
#line 2383 "parser.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 676 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _VISIBILIDAD *padre=new _VISIBILIDAD("VISIBILIDAD",tabla); 
                        padre->nivel=1;
                        padre->nLinea=nLinea;
                        
                                //asignando atributos 
                                token *tok1=new token(QString::fromStdString((yyvsp[0].TEXT)),(yylsp[0]).first_line,3,archivo);
                                padre->lst_Atributos->insertar("tPublico",tok1);
                                
                        (yyval.VAL)->Padre=padre;
                }
#line 2401 "parser.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 690 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _VISIBILIDAD *padre=new _VISIBILIDAD("VISIBILIDAD",tabla); 
                        padre->nivel=2;
                        padre->nLinea=nLinea;
                                //asignando atributos 
                                token *tok1=new token(QString::fromStdString((yyvsp[0].TEXT)),(yylsp[0]).first_line,3,archivo);
                                padre->lst_Atributos->insertar("tPrivado",tok1);

                        (yyval.VAL)->Padre=padre;
                }
#line 2418 "parser.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 703 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _VISIBILIDAD *padre=new _VISIBILIDAD("VISIBILIDAD",tabla); 
                        padre->nivel=3;
                        padre->nLinea=nLinea;
                                //asignando atributos 
                                token *tok1=new token(QString::fromStdString((yyvsp[0].TEXT)),(yylsp[0]).first_line,3,archivo);
                                padre->lst_Atributos->insertar("tProtegido",tok1);

                        (yyval.VAL)->Padre=padre;
                }
#line 2435 "parser.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 720 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _CP_CLASE *padre=new _CP_CLASE("CP_CLASE",tabla); 
                        padre->nivel=1;
                        padre->nLinea=nLinea;
                                //hijos
                                padre->hijos.append((yyvsp[-1].VAL)->Padre);
                                padre->hijos.append((yyvsp[0].VAL)->Padre);

                        (yyval.VAL)->Padre=padre;
                }
#line 2452 "parser.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 733 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _CP_CLASE *padre=new _CP_CLASE("CP_CLASE",tabla); 
                        padre->nivel=2;
                        padre->nLinea=nLinea;
                                //hijos
                                padre->hijos.append((yyvsp[0].VAL)->Padre);
                                
                        (yyval.VAL)->Padre=padre;
                }
#line 2468 "parser.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 749 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _CUERPO_CLASE *padre=new _CUERPO_CLASE("CUERPO_CLASE",tabla); 
                        padre->nivel=1;
                        padre->nLinea=nLinea;
                                //hijos
                                padre->hijos.append((yyvsp[0].VAL)->Padre);

                        (yyval.VAL)->Padre=padre;
                }
#line 2484 "parser.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 761 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _CUERPO_CLASE *padre=new _CUERPO_CLASE("CUERPO_CLASE",tabla); 
                        padre->nivel=6;
                        padre->nLinea=nLinea;
                                //hijos
                                padre->hijos.append((yyvsp[0].VAL)->Padre);

                        (yyval.VAL)->Padre=padre;
                }
#line 2500 "parser.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 773 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _CUERPO_CLASE *padre=new _CUERPO_CLASE("CUERPO_CLASE",tabla); 
                        padre->nivel=2;
                        padre->nLinea=nLinea;

                                //hijos
                                padre->hijos.append((yyvsp[-1].VAL)->Padre);

                        (yyval.VAL)->Padre=padre;
                }
#line 2517 "parser.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 786 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _CUERPO_CLASE *padre=new _CUERPO_CLASE("CUERPO_CLASE",tabla); 
                        padre->nivel=3;
                        padre->nLinea=nLinea;

                                //hijos
                                padre->hijos.append((yyvsp[0].VAL)->Padre);

                        (yyval.VAL)->Padre=padre;
                }
#line 2534 "parser.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 799 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _CUERPO_CLASE *padre=new _CUERPO_CLASE("CUERPO_CLASE",tabla); 
                        padre->nivel=5;
                        padre->nLinea=nLinea;

                                //hijos
                                padre->hijos.append((yyvsp[0].VAL)->Padre);

                        (yyval.VAL)->Padre=padre;
                }
#line 2551 "parser.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 812 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _CUERPO_CLASE *padre=new _CUERPO_CLASE("CUERPO_CLASE",tabla); 
                        padre->nivel=4;
                        padre->nLinea=nLinea;

                                //hijos
                                padre->hijos.append((yyvsp[0].VAL)->Padre);

                        (yyval.VAL)->Padre=padre;
                }
#line 2568 "parser.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 829 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _METODO *padre=new _METODO("METODO",tabla); 
                        padre->nivel=1;
                        padre->nLinea=nLinea;

                                //asignando atributos 
                                token *tok3=new token(QString::fromStdString((yyvsp[-6].TEXT)),(yylsp[-6]).first_line,3,archivo);
                                padre->lst_Atributos->insertar("valId",tok3);


                                //hijos
                                padre->hijos.append((yyvsp[-8].VAL)->Padre);
                                padre->hijos.append((yyvsp[-7].VAL)->Padre);
                                //padre->hijos.append($3->Padre);
                                padre->hijos.append((yyvsp[-4].VAL)->Padre);
                                padre->hijos.append((yyvsp[-1].VAL)->Padre);

                        (yyval.VAL)->Padre=padre;
                }
#line 2594 "parser.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 851 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _METODO *padre=new _METODO("METODO",tabla); 
                        padre->nivel=2;
                        padre->nLinea=nLinea;

                                //asignando atributos 
                                token *tok2=new token(QString::fromStdString((yyvsp[-6].TEXT)),(yylsp[-6]).first_line,3,archivo);
                                padre->lst_Atributos->insertar("valId",tok2);

                                //hijos
                                padre->hijos.append((yyvsp[-7].VAL)->Padre);
                                //padre->hijos.append($2->Padre);
                                padre->hijos.append((yyvsp[-4].VAL)->Padre);
                                padre->hijos.append((yyvsp[-1].VAL)->Padre); 

                        (yyval.VAL)->Padre=padre;
                }
#line 2618 "parser.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 871 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _METODO *padre=new _METODO("METODO",tabla); 
                        padre->nivel=3;
                        padre->nLinea=nLinea;
 
                                //asignando atributos 
                                token *tok4=new token(QString::fromStdString((yyvsp[-6].TEXT)),(yylsp[-6]).first_line,3,archivo);
                                padre->lst_Atributos->insertar("valId",tok4);

                                //hijos
                                padre->hijos.append((yyvsp[-9].VAL)->Padre);
                                padre->hijos.append((yyvsp[-8].VAL)->Padre);
                                padre->hijos.append((yyvsp[-7].VAL)->Padre);
                                padre->hijos.append((yyvsp[-4].VAL)->Padre);
                                padre->hijos.append((yyvsp[-1].VAL)->Padre);


                        (yyval.VAL)->Padre=padre;
                }
#line 2644 "parser.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 893 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _METODO *padre=new _METODO("METODO",tabla); 
                        padre->nivel=4;
                        padre->nLinea=nLinea;

                                //asignando atributos 
                                token *tok3=new token(QString::fromStdString((yyvsp[-6].TEXT)),(yylsp[-6]).first_line,3,archivo);
                                padre->lst_Atributos->insertar("valId",tok3);

                                //hijos
                                padre->hijos.append((yyvsp[-8].VAL)->Padre);
                                padre->hijos.append((yyvsp[-7].VAL)->Padre); 
                                padre->hijos.append((yyvsp[-4].VAL)->Padre);
                                padre->hijos.append((yyvsp[-1].VAL)->Padre);

                        (yyval.VAL)->Padre=padre;
                }
#line 2668 "parser.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 917 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _MAIN *padre=new _MAIN("MAIN",tabla); 
                        padre->nivel=1;
                        padre->nLinea=nLinea;
                                //asignando atributos 
                                token *tok1=new token(QString::fromStdString((yyvsp[-5].TEXT)),(yylsp[-5]).first_line,3,archivo);
                                padre->lst_Atributos->insertar("tPrincipal",tok1);
                        
                                //hijos
                                padre->hijos.append((yyvsp[-1].VAL)->Padre);

                        (yyval.VAL)->Padre=padre;
                }
#line 2688 "parser.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 936 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _CONSTRUCTOR *padre=new _CONSTRUCTOR("CONSTRUCTOR",tabla); 
                        padre->nivel=1;
                        padre->nLinea=nLinea;
                        
                                //asignando atributos 
                                token *tok1=new token(QString::fromStdString((yyvsp[-6].TEXT)),(yylsp[-6]).first_line,3,archivo);
                                padre->lst_Atributos->insertar("valId",tok1);

                                //hijos
                                padre->hijos.append((yyvsp[-4].VAL)->Padre);
                                padre->hijos.append((yyvsp[-1].VAL)->Padre); 


                        (yyval.VAL)->Padre=padre;
                }
#line 2711 "parser.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 960 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _DECLARAR_VARIABLE_GLOBAL *padre=new _DECLARAR_VARIABLE_GLOBAL("DECLARAR_VARIABLE_GLOBAL",tabla); 
                        padre->nivel=1;
                        padre->nLinea=nLinea;

                                //hijos
                                //padre->hijos.append($1->Padre);
                                padre->hijos.append((yyvsp[0].VAL)->Padre);

                        (yyval.VAL)->Padre=padre;
                }
#line 2729 "parser.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 974 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _DECLARAR_VARIABLE_GLOBAL *padre=new _DECLARAR_VARIABLE_GLOBAL("DECLARAR_VARIABLE_GLOBAL",tabla); 
                        padre->nivel=2;
                        padre->nLinea=nLinea;

                                //hijos
                                padre->hijos.append((yyvsp[0].VAL)->Padre);

                        (yyval.VAL)->Padre=padre;
                }
#line 2746 "parser.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 992 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _DECLARAR_VARIABLE_SINVISIBI *padre=new _DECLARAR_VARIABLE_SINVISIBI("DECLARAR_VARIABLE_SINVISIBI",tabla); 
                        padre->nivel=1;
                        padre->nLinea=nLinea;

                                //hijos
                                padre->hijos.append((yyvsp[-2].VAL)->Padre);
                                padre->hijos.append((yyvsp[-1].VAL)->Padre); 
                                padre->hijos.append((yyvsp[0].VAL)->Padre); 

                        (yyval.VAL)->Padre=padre;
                }
#line 2765 "parser.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 1007 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _DECLARAR_VARIABLE_SINVISIBI *padre=new _DECLARAR_VARIABLE_SINVISIBI("DECLARAR_VARIABLE_SINVISIBI",tabla);
                        padre->nivel=2;
                        padre->nLinea=nLinea;

                                //hijos
                                padre->hijos.append((yyvsp[-1].VAL)->Padre);
                                padre->hijos.append((yyvsp[0].VAL)->Padre);  

                        (yyval.VAL)->Padre=padre;
                }
#line 2783 "parser.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 1026 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _VAL *padre=new _VAL("VAL",tabla); 
                        padre->nivel=1;
                        padre->nLinea=nLinea;

                                //hijos 
                                padre->hijos.append((yyvsp[0].VAL)->Padre);  

                        (yyval.VAL)->Padre=padre;
                }
#line 2800 "parser.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 1043 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _LST_LLAVES_VAL *padre=new _LST_LLAVES_VAL("LST_LLAVES_VAL",tabla); 
                        padre->nivel=1;
                        padre->nLinea=nLinea;

                                //hijos 
                                padre->hijos.append((yyvsp[-1].VAL)->Padre);  

                        (yyval.VAL)->Padre=padre;
                }
#line 2817 "parser.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 1061 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _LLAVES_VAL_P *padre=new _LLAVES_VAL_P("LLAVES_VAL_P",tabla); 
                        padre->nivel=1;
                        padre->nLinea=nLinea;

                                //hijos 
                                padre->hijos.append((yyvsp[-2].VAL)->Padre);
                                padre->hijos.append((yyvsp[0].VAL)->Padre);  

                        (yyval.VAL)->Padre=padre;
                }
#line 2835 "parser.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 1075 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _LLAVES_VAL_P *padre=new _LLAVES_VAL_P("LLAVES_VAL_P",tabla); 
                        padre->nivel=2;
                        padre->nLinea=nLinea;

                                //hijos 
                                padre->hijos.append((yyvsp[-2].VAL)->Padre);
                                padre->hijos.append((yyvsp[0].VAL)->Padre);  

                        (yyval.VAL)->Padre=padre;
                }
#line 2853 "parser.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 1089 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _LLAVES_VAL_P *padre=new _LLAVES_VAL_P("LLAVES_VAL_P",tabla); 
                        padre->nivel=3;
                        padre->nLinea=nLinea;

                                //hijos 
                                padre->hijos.append((yyvsp[0].VAL)->Padre); 

                        (yyval.VAL)->Padre=padre;
                }
#line 2870 "parser.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 1102 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _LLAVES_VAL_P *padre=new _LLAVES_VAL_P("LLAVES_VAL_P",tabla); 
                        padre->nivel=4;
                        padre->nLinea=nLinea;

                                //hijos 
                                padre->hijos.append((yyvsp[0].VAL)->Padre); 

                        (yyval.VAL)->Padre=padre;
                }
#line 2887 "parser.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 1120 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _VAR_ARREGLO *padre=new _VAR_ARREGLO("VAR_ARREGLO",tabla); 
                        padre->nivel=1;
                        padre->nLinea=nLinea;

                                //asignando atributos 
                                token *tok1=new token(QString::fromStdString((yyvsp[0].TEXT)),(yylsp[0]).first_line,3,archivo);
                                padre->lst_Atributos->insertar("valId",tok1);

                        (yyval.VAL)->Padre=padre;
                }
#line 2905 "parser.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 1134 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _VAR_ARREGLO *padre=new _VAR_ARREGLO("VAR_ARREGLO",tabla); 
                        padre->nivel=2;
                        padre->nLinea=nLinea;

                                //asignando atributos 
                                token *tok1=new token(QString::fromStdString((yyvsp[-1].TEXT)),(yylsp[-1]).first_line,3,archivo);
                                padre->lst_Atributos->insertar("valId",tok1);

                                //hijos 
                                padre->hijos.append((yyvsp[0].VAL)->Padre);  

                        (yyval.VAL)->Padre=padre;
                }
#line 2926 "parser.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 1154 "sintactico.y" /* yacc.c:1646  */
    {   
                        (yyvsp[-1].VAL)->Padre->hijos.append((yyvsp[0].VAL)->Padre);  


                        (yyval.VAL)=(yyvsp[-1].VAL);
                }
#line 2937 "parser.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 1161 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _LST_CORCHETES *padre=new _LST_CORCHETES("LST_CORCHETES",tabla); 
                        padre->nivel=2;
                        padre->nLinea=nLinea;

                                //hijos
                                padre->hijos.append((yyvsp[0].VAL)->Padre); 

                        (yyval.VAL)->Padre=padre;
                }
#line 2954 "parser.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 1177 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _PAR_CORCHETES_VACIOS *padre=new _PAR_CORCHETES_VACIOS("PAR_CORCHETES_VACIOS",tabla); 
                        padre->nivel=1;
                        padre->nLinea=nLinea;
                        (yyval.VAL)->Padre=padre;
                }
#line 2967 "parser.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 1189 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _PAR_CORCHETES_VAL *padre=new _PAR_CORCHETES_VAL("PAR_CORCHETES_VAL",tabla); 
                        padre->nivel=1;
                        padre->nLinea=nLinea;


                                //hijos 
                                padre->hijos.append((yyvsp[-1].VAL)->Padre);  


                        (yyval.VAL)->Padre=padre;
                }
#line 2986 "parser.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 1207 "sintactico.y" /* yacc.c:1646  */
    {    
                        
                        
                        (yyvsp[-1].VAL)->Padre->hijos.append((yyvsp[0].VAL)->Padre);  


                        (yyval.VAL)=(yyvsp[-1].VAL);
                }
#line 2999 "parser.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 1216 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _LST_CORCHETES_VAL *padre=new _LST_CORCHETES_VAL("LST_CORCHETES_VAL",tabla); 
                        padre->nivel=2;
                        padre->nLinea=nLinea;

                                //hijos
                                padre->hijos.append((yyvsp[0].VAL)->Padre); 

                        (yyval.VAL)->Padre=padre;
                }
#line 3016 "parser.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 1233 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _ID_VAR_FUNC *padre=new _ID_VAR_FUNC("ID_VAR_FUNC",tabla); 
                        padre->nivel=1;
                        padre->nLinea=nLinea;

                                //hijos
                                padre->hijos.append((yyvsp[-1].VAL)->Padre);
                                padre->hijos.append((yyvsp[0].VAL)->Padre);  

                        (yyval.VAL)->Padre=padre;
                }
#line 3034 "parser.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 1247 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _ID_VAR_FUNC *padre=new _ID_VAR_FUNC("ID_VAR_FUNC",tabla); 
                        padre->nivel=2;
                        padre->nLinea=nLinea;
                        
                                //asignando atributos 
                                token *tok3=new token(QString::fromStdString((yyvsp[0].TEXT)),(yylsp[0]).first_line,3,archivo);
                                padre->lst_Atributos->insertar("valId",tok3);

                        (yyval.VAL)->Padre=padre;
                }
#line 3052 "parser.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 1261 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _ID_VAR_FUNC *padre=new _ID_VAR_FUNC("ID_VAR_FUNC",tabla); 
                        padre->nivel=3;
                        padre->nLinea=nLinea;

                                //asignando atributos 
                                token *tok1=new token(QString::fromStdString((yyvsp[0].TEXT)),(yylsp[0]).first_line,3,archivo);
                                padre->lst_Atributos->insertar("valId",tok1);

                        (yyval.VAL)->Padre=padre;
                }
#line 3070 "parser.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 1275 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _ID_VAR_FUNC *padre=new _ID_VAR_FUNC("ID_VAR_FUNC",tabla); 
                        padre->nivel=4;
                        padre->nLinea=nLinea;

                                //asignando atributos 
                                token *tok3=new token(QString::fromStdString((yyvsp[-3].TEXT)),(yylsp[-3]).first_line,3,archivo);
                                padre->lst_Atributos->insertar("valId",tok3);

                                //hijos
                                padre->hijos.append((yyvsp[-1].VAL)->Padre); 


                        (yyval.VAL)->Padre=padre;
                }
#line 3092 "parser.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 1293 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _ID_VAR_FUNC *padre=new _ID_VAR_FUNC("ID_VAR_FUNC",tabla); 
                        padre->nivel=5;
                        padre->nLinea=nLinea;


                                //asignando atributos 
                                token *tok1=new token(QString::fromStdString((yyvsp[-3].TEXT)),(yylsp[-3]).first_line,3,archivo);
                                padre->lst_Atributos->insertar("valId",tok1);

                                //hijos 
                                padre->hijos.append((yyvsp[-1].VAL)->Padre); 

                        (yyval.VAL)->Padre=padre;
                }
#line 3114 "parser.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 1311 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _ID_VAR_FUNC *padre=new _ID_VAR_FUNC("ID_VAR_FUNC",tabla); 
                        padre->nivel=6;
                        padre->nLinea=nLinea;

                                //asignando atributos 
                                token *tok3=new token(QString::fromStdString((yyvsp[-1].TEXT)),(yylsp[-1]).first_line,3,archivo);
                                padre->lst_Atributos->insertar("valId",tok3);

                                //hijos 
                                padre->hijos.append((yyvsp[0].VAL)->Padre); 


                        (yyval.VAL)->Padre=padre;
                }
#line 3136 "parser.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 1329 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _ID_VAR_FUNC *padre=new _ID_VAR_FUNC("ID_VAR_FUNC",tabla); 
                        padre->nivel=7;
                        padre->nLinea=nLinea;


                                //asignando atributos 
                                token *tok1=new token(QString::fromStdString((yyvsp[-1].TEXT)),(yylsp[-1]).first_line,3,archivo);
                                padre->lst_Atributos->insertar("valId",tok1);

                                //hijos 
                                padre->hijos.append((yyvsp[0].VAL)->Padre);  


                        (yyval.VAL)->Padre=padre;
                }
#line 3159 "parser.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 1348 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _ID_VAR_FUNC *padre=new _ID_VAR_FUNC("ID_VAR_FUNC",tabla); 
                        padre->nivel=8;
                        padre->nLinea=nLinea;

                                //asignando atributos 
                                token *tok3=new token(QString::fromStdString((yyvsp[-4].TEXT)),(yylsp[-4]).first_line,3,archivo);
                                padre->lst_Atributos->insertar("valId",tok3);

                                //hijos
                                padre->hijos.append((yyvsp[-2].VAL)->Padre);
                                padre->hijos.append((yyvsp[0].VAL)->Padre);  


                        (yyval.VAL)->Padre=padre;
                }
#line 3182 "parser.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 1367 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _ID_VAR_FUNC *padre=new _ID_VAR_FUNC("ID_VAR_FUNC",tabla); 
                        padre->nivel=9;
                        padre->nLinea=nLinea;

                                //asignando atributos 
                                token *tok1=new token(QString::fromStdString((yyvsp[-4].TEXT)),(yylsp[-4]).first_line,3,archivo);
                                padre->lst_Atributos->insertar("valId",tok1);


                                //hijos 
                                padre->hijos.append((yyvsp[-2].VAL)->Padre);
                                padre->hijos.append((yyvsp[0].VAL)->Padre); 

                        (yyval.VAL)->Padre=padre;
                }
#line 3205 "parser.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 1390 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _LST_PUNTOSP *padre=new _LST_PUNTOSP("LST_PUNTOSP",tabla); 
                        padre->nivel=1;
                        padre->nLinea=nLinea;

                                //asignando atributos 
                                token *tok2=new token(QString::fromStdString((yyvsp[0].TEXT)),(yylsp[0]).first_line,3,archivo);
                                padre->lst_Atributos->insertar("valId",tok2);

                        (yyval.VAL)->Padre=padre;
                }
#line 3223 "parser.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 1404 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _LST_PUNTOSP *padre=new _LST_PUNTOSP("LST_PUNTOSP",tabla); 
                        padre->nivel=2;
                        padre->nLinea=nLinea;

                                //asignando atributos 
                                token *tok2=new token(QString::fromStdString((yyvsp[-3].TEXT)),(yylsp[-3]).first_line,3,archivo);
                                padre->lst_Atributos->insertar("valId",tok2);

                                //hijos 
                                padre->hijos.append((yyvsp[-1].VAL)->Padre); 


                        (yyval.VAL)->Padre=padre;
                }
#line 3245 "parser.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 1423 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _LST_PUNTOSP *padre=new _LST_PUNTOSP("LST_PUNTOSP",tabla); 
                        padre->nivel=3;
                        padre->nLinea=nLinea;

                                //asignando atributos 
                                token *tok2=new token(QString::fromStdString((yyvsp[-1].TEXT)),(yylsp[-1]).first_line,3,archivo);
                                padre->lst_Atributos->insertar("valId",tok2);


                                //hijos 
                                padre->hijos.append((yyvsp[0].VAL)->Padre); 

                        (yyval.VAL)->Padre=padre;
                }
#line 3267 "parser.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 1441 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _LST_PUNTOSP *padre=new _LST_PUNTOSP("LST_PUNTOSP",tabla); 
                        padre->nivel=4;
                        padre->nLinea=nLinea;

                                //asignando atributos 
                                token *tok2=new token(QString::fromStdString((yyvsp[-4].TEXT)),(yylsp[-4]).first_line,3,archivo);
                                padre->lst_Atributos->insertar("valId",tok2);

                                //hijos 
                                padre->hijos.append((yyvsp[-2].VAL)->Padre);
                                padre->hijos.append((yyvsp[0].VAL)->Padre); 
                                
                        (yyval.VAL)->Padre=padre;
                }
#line 3289 "parser.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 1464 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _ASIG_VALOR *padre=new _ASIG_VALOR("ASIG_VALOR",tabla); 
                        padre->nivel=1;
                        padre->nLinea=nLinea;

                                //hijos
                                padre->hijos.append((yyvsp[-1].VAL)->Padre);
                                padre->hijos.append((yyvsp[0].VAL)->Padre);  

                        (yyval.VAL)->Padre=padre;
                }
#line 3307 "parser.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 1478 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _ASIG_VALOR *padre=new _ASIG_VALOR("ASIG_VALOR",tabla); 
                        padre->nivel=2;
                        padre->nLinea=nLinea;

                                //hijos
                                padre->hijos.append((yyvsp[-2].VAL)->Padre); 

                        (yyval.VAL)->Padre=padre;
                }
#line 3324 "parser.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 1491 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _ASIG_VALOR *padre=new _ASIG_VALOR("ASIG_VALOR",tabla); 
                        padre->nivel=3;
                        padre->nLinea=nLinea;

                                //hijos
                                padre->hijos.append((yyvsp[-2].VAL)->Padre); 

                        (yyval.VAL)->Padre=padre;
                }
#line 3341 "parser.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 1504 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _ASIG_VALOR *padre=new _ASIG_VALOR("ASIG_VALOR",tabla); 
                        padre->nivel=4;
                        padre->nLinea=nLinea;

                                //hijos
                                padre->hijos.append((yyvsp[-2].VAL)->Padre); 
                                padre->hijos.append((yyvsp[0].VAL)->Padre); 

                        (yyval.VAL)->Padre=padre;
                }
#line 3359 "parser.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 1518 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _ASIG_VALOR *padre=new _ASIG_VALOR("ASIG_VALOR",tabla); 
                        padre->nivel=5;
                        padre->nLinea=nLinea;

                                //hijos
                                padre->hijos.append((yyvsp[-2].VAL)->Padre); 
                                padre->hijos.append((yyvsp[0].VAL)->Padre); 

                        (yyval.VAL)->Padre=padre;
                }
#line 3377 "parser.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 1532 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _ASIG_VALOR *padre=new _ASIG_VALOR("ASIG_VALOR",tabla); 
                        padre->nivel=6;
                        padre->nLinea=nLinea;

                                //hijos
                                padre->hijos.append((yyvsp[-2].VAL)->Padre); 
                                padre->hijos.append((yyvsp[0].VAL)->Padre); 

                        (yyval.VAL)->Padre=padre;
                }
#line 3395 "parser.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 1546 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _ASIG_VALOR *padre=new _ASIG_VALOR("ASIG_VALOR",tabla); 
                        padre->nivel=7;
                        padre->nLinea=nLinea;

                                //hijos
                                padre->hijos.append((yyvsp[-2].VAL)->Padre); 
                                padre->hijos.append((yyvsp[0].VAL)->Padre); 

                        (yyval.VAL)->Padre=padre;
                }
#line 3413 "parser.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 1563 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _LST_CUERPO *padre=new _LST_CUERPO("LST_CUERPO",tabla); 
                        padre->nivel=1;
                        padre->nLinea=nLinea;
                        padre->nLinea2=nLinea; 
 
                                //hijos
                                padre->hijos.append((yyvsp[-1].VAL)->Padre);
                                padre->hijos.append((yyvsp[0].VAL)->Padre);  

                        (yyval.VAL)->Padre=padre;
                }
#line 3432 "parser.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 1578 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _LST_CUERPO *padre=new _LST_CUERPO("LST_CUERPO",tabla); 
                        padre->nivel=2;

                        padre->nLinea=nLinea;
                        padre->nLinea2=nLinea; 
 

                                //hijos
                                padre->hijos.append((yyvsp[0].VAL)->Padre); 

                        (yyval.VAL)->Padre=padre;
                }
#line 3452 "parser.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 1599 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _CUERPO *padre=new _CUERPO("CUERPO",tabla); 
                        padre->nivel=1;
                        padre->nLinea=nLinea;

                                //hijos
                                padre->hijos.append((yyvsp[-1].VAL)->Padre); 

                        (yyval.VAL)->Padre=padre;
                }
#line 3469 "parser.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 1612 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _CUERPO *padre=new _CUERPO("CUERPO",tabla); 
                        padre->nivel=2;
                        padre->nLinea=nLinea;

                                //hijos
                                padre->hijos.append((yyvsp[-1].VAL)->Padre); 

                        (yyval.VAL)->Padre=padre;
                }
#line 3486 "parser.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 1625 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _CUERPO *padre=new _CUERPO("CUERPO",tabla); 
                        padre->nivel=3;
                        padre->nLinea=nLinea;

                                //hijos
                                padre->hijos.append((yyvsp[-1].VAL)->Padre); 

                        (yyval.VAL)->Padre=padre;
                }
#line 3503 "parser.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 1639 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _CUERPO *padre=new _CUERPO("CUERPO",tabla); 
                        padre->nivel=4;
                        padre->nLinea=nLinea;

                                //hijos
                                padre->hijos.append((yyvsp[0].VAL)->Padre); 

                        (yyval.VAL)->Padre=padre;
                }
#line 3520 "parser.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 1652 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _CUERPO *padre=new _CUERPO("CUERPO",tabla); 
                        padre->nivel=5;
                        padre->nLinea=nLinea;

                                //hijos
                                padre->hijos.append((yyvsp[0].VAL)->Padre);
                                
                        (yyval.VAL)->Padre=padre;
                }
#line 3537 "parser.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 1666 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _CUERPO *padre=new _CUERPO("CUERPO",tabla); 
                        padre->nivel=6;
                        padre->nLinea=nLinea;
                                //hijos
                                padre->hijos.append((yyvsp[0].VAL)->Padre);
                                

                        (yyval.VAL)->Padre=padre; 
                }
#line 3554 "parser.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 1679 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _CUERPO *padre=new _CUERPO("CUERPO",tabla); 
                        padre->nivel=7;
                        padre->nLinea=nLinea;

                                //hijos
                                padre->hijos.append((yyvsp[0].VAL)->Padre);
                                
                        (yyval.VAL)->Padre=padre;
                }
#line 3571 "parser.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 1692 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _CUERPO *padre=new _CUERPO("CUERPO",tabla); 
                        padre->nivel=8;
                        padre->nLinea=nLinea;
                                //hijos
                                padre->hijos.append((yyvsp[0].VAL)->Padre);
                                

                        (yyval.VAL)->Padre=padre;
                }
#line 3588 "parser.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 1705 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _CUERPO *padre=new _CUERPO("CUERPO",tabla); 
                        padre->nivel=9;
                        padre->nLinea=nLinea;

                                //hijos
                                padre->hijos.append((yyvsp[-1].VAL)->Padre); 

                        (yyval.VAL)->Padre=padre;
                }
#line 3605 "parser.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 1718 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _CUERPO *padre=new _CUERPO("CUERPO",tabla); 
                        padre->nivel=9;
                        padre->nLinea=nLinea;

                                //hijos
                                padre->hijos.append((yyvsp[0].VAL)->Padre); 

                        (yyval.VAL)->Padre=padre;
                }
#line 3622 "parser.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 1734 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _COSENO *padre=new _COSENO("LEER_TECLADO",tabla); 
                        padre->nivel=1;
                        padre->nLinea=nLinea;


                                //asignando atributos 
                                token *tok1=new token(QString::fromStdString((yyvsp[-6].TEXT)),(yylsp[-6]).first_line,3,archivo);
                                padre->lst_Atributos->insertar("tLeerTeclado",tok1);

                                //hijos
                                padre->hijos.append((yyvsp[-4].VAL)->Padre);
                                padre->hijos.append((yyvsp[-2].VAL)->Padre); 

                        (yyval.VAL)->Padre=padre;
                }
#line 3645 "parser.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 1757 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _FUNCIONES_NATIVAS *padre=new _FUNCIONES_NATIVAS("FUNCIONES_NATIVAS",tabla); 
                        padre->nivel=1;
                        padre->nLinea=nLinea;

                                //hijos
                                padre->hijos.append((yyvsp[0].VAL)->Padre); 

                        (yyval.VAL)->Padre=padre;
                }
#line 3662 "parser.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 1770 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _FUNCIONES_NATIVAS *padre=new _FUNCIONES_NATIVAS("FUNCIONES_NATIVAS",tabla); 
                        padre->nivel=2;
                        padre->nLinea=nLinea;

                                //hijos
                                padre->hijos.append((yyvsp[0].VAL)->Padre); 

                        (yyval.VAL)->Padre=padre;
                }
#line 3679 "parser.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 1786 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _CONVERTIR_NUMERO *padre=new _CONVERTIR_NUMERO("CONVERTIR_NUMERO",tabla); 
                        padre->nivel=1;
                        padre->nLinea=nLinea;

                                //asignando atributos 
                                token *tok1=new token(QString::fromStdString((yyvsp[-3].TEXT)),(yylsp[-3]).first_line,3,archivo);
                                padre->lst_Atributos->insertar("tConvertirNumero",tok1);

                                //hijos
                                padre->hijos.append((yyvsp[-1].VAL)->Padre); 

                        (yyval.VAL)->Padre=padre;
                }
#line 3700 "parser.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 1807 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _CONVERTIR_CADENA *padre=new _CONVERTIR_CADENA("CONVERTIR_CADENA",tabla); 
                        padre->nivel=1;
                        padre->nLinea=nLinea;

                                //asignando atributos 
                                token *tok1=new token(QString::fromStdString((yyvsp[-3].TEXT)),(yylsp[-3]).first_line,3,archivo);
                                padre->lst_Atributos->insertar("tConvertirCadena",tok1);

                                //hijos
                                padre->hijos.append((yyvsp[-1].VAL)->Padre); 

                        (yyval.VAL)->Padre=padre;
                }
#line 3721 "parser.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 1828 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _CONCATENAR *padre=new _CONCATENAR("CONCATENAR",tabla); 
                        padre->nivel=1;
                        padre->nLinea=nLinea;

                                //asignando atributos 
                                token *tok1=new token(QString::fromStdString((yyvsp[-3].TEXT)),(yylsp[-3]).first_line,3,archivo);
                                padre->lst_Atributos->insertar("tConcatenar",tok1);

                                //hijos
                                padre->hijos.append((yyvsp[-1].VAL)->Padre); 

                        (yyval.VAL)->Padre=padre;
                }
#line 3742 "parser.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 1849 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _IMPRIMIR *padre=new _IMPRIMIR("IMPRIMIR",tabla); 
                        padre->nivel=1;
                        padre->nLinea=nLinea;

                                //asignando atributos 
                                token *tok1=new token(QString::fromStdString((yyvsp[-3].TEXT)),(yylsp[-3]).first_line,3,archivo);
                                padre->lst_Atributos->insertar("tImprimir",tok1);

                                //hijos
                                padre->hijos.append((yyvsp[-1].VAL)->Padre); 

                        (yyval.VAL)->Padre=padre;
                }
#line 3763 "parser.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 1866 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _IMPRIMIR *padre=new _IMPRIMIR("IMPRIMIR",tabla); 
                        padre->nivel=2;
                        padre->nLinea=nLinea;

                                //asignando atributos 
                                token *tok1=new token(QString::fromStdString((yyvsp[-2].TEXT)),(yylsp[-2]).first_line,3,archivo);
                                padre->lst_Atributos->insertar("tImprimir",tok1);

                                //hijos 

                        (yyval.VAL)->Padre=padre;
                }
#line 3783 "parser.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 1886 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _SUPER *padre=new _SUPER("SUPER",tabla); 
                        padre->nivel=1;
                        padre->nLinea=nLinea;

                                //hijos
                                padre->hijos.append((yyvsp[-2].VAL)->Padre);
                                

                        (yyval.VAL)->Padre=padre;
                }
#line 3801 "parser.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 1903 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _RETORNO *padre=new _RETORNO("RETORNO",tabla); 
                         padre->nivel=1;
                        padre->nLinea=nLinea;

                                //asignando atributos 
                                token *tok1=new token(QString::fromStdString((yyvsp[-1].TEXT)),(yylsp[-1]).first_line,3,archivo);
                                padre->lst_Atributos->insertar("tRetorno",tok1);


                        (yyval.VAL)->Padre=padre;
                }
#line 3820 "parser.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 1918 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _RETORNO *padre=new _RETORNO("RETORNO",tabla); 
                        padre->nivel=2;
                        padre->nLinea=nLinea;

                                //asignando atributos 
                                token *tok1=new token(QString::fromStdString((yyvsp[-2].TEXT)),(yylsp[-2]).first_line,3,archivo);
                                padre->lst_Atributos->insertar("tRetorno",tok1);

                                //hijos 
                                padre->hijos.append((yyvsp[-1].VAL)->Padre);  

                        (yyval.VAL)->Padre=padre;
                }
#line 3841 "parser.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 1938 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _ROMPER *padre=new _ROMPER("ROMPER",tabla); 
                        padre->nivel=1;
                        padre->nLinea=nLinea;
                                //asignando atributos 
                                token *tok1=new token(QString::fromStdString((yyvsp[-1].TEXT)),(yylsp[-1]).first_line,3,archivo);
                                padre->lst_Atributos->insertar("tRomper",tok1);

                        (yyval.VAL)->Padre=padre;
                }
#line 3858 "parser.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 1954 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _CONTINUAR *padre=new _CONTINUAR("CONTINUAR",tabla); 
                        padre->nivel=1;
                        padre->nLinea=nLinea;
                                //asignando atributos 
                                token *tok1=new token(QString::fromStdString((yyvsp[-1].TEXT)),(yylsp[-1]).first_line,3,archivo);
                                padre->lst_Atributos->insertar("tContinuar",tok1);

                        (yyval.VAL)->Padre=padre;
                }
#line 3875 "parser.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 1971 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _SENTENCIAS *padre=new _SENTENCIAS("SENTENCIAS",tabla); 
                        padre->nivel=1;
                        padre->nLinea=nLinea;

                                //hijos
                                padre->hijos.append((yyvsp[0].VAL)->Padre); 

                        (yyval.VAL)->Padre=padre;
                }
#line 3892 "parser.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 1984 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _SENTENCIAS *padre=new _SENTENCIAS("SENTENCIAS",tabla); 
                        padre->nivel=1;
                        padre->nLinea=nLinea;

                                //hijos
                                padre->hijos.append((yyvsp[0].VAL)->Padre); 

                        (yyval.VAL)->Padre=padre;
                }
#line 3909 "parser.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 1997 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _SENTENCIAS *padre=new _SENTENCIAS("SENTENCIAS",tabla); 
                        padre->nivel=1;
                        padre->nLinea=nLinea;

                                //hijos
                                padre->hijos.append((yyvsp[0].VAL)->Padre); 

                        (yyval.VAL)->Padre=padre;
                }
#line 3926 "parser.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 2010 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _SENTENCIAS *padre=new _SENTENCIAS("SENTENCIAS",tabla); 
                        padre->nivel=4;
                        padre->nLinea=nLinea;

                                //hijos
                                padre->hijos.append((yyvsp[0].VAL)->Padre); 

                        (yyval.VAL)->Padre=padre;
                }
#line 3943 "parser.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 2023 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _SENTENCIAS *padre=new _SENTENCIAS("SENTENCIAS",tabla); 
                        padre->nivel=4;
                        padre->nLinea=nLinea;

                                //hijos
                                padre->hijos.append((yyvsp[0].VAL)->Padre); 

                        (yyval.VAL)->Padre=padre;
                }
#line 3960 "parser.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 2040 "sintactico.y" /* yacc.c:1646  */
    {
        
                //creando el padre
                (yyval.VAL)=new Nod(); 
                _CASO *padre=new _CASO("CASO",tabla); 
                padre->nivel=1;
                padre->nLinea=nLinea;

                        //asignando atributos 
                        token *tok1=new token(QString::fromStdString((yyvsp[-5].TEXT)),(yylsp[-5]).first_line,3,archivo);
                        padre->lst_Atributos->insertar("sAbreParent",tok1);

                        //hijos
                        padre->hijos.append((yyvsp[-4].VAL)->Padre); 
                        padre->hijos.append((yyvsp[-1].VAL)->Padre);  

                (yyval.VAL)->Padre=padre;
        

        }
#line 3985 "parser.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 2064 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _CUERPO_CASE *padre=new _CUERPO_CASE("CUERPO_CASE",tabla); 
                        padre->nivel=1;
                        padre->nLinea=nLinea;

                                //asignando atributos 
                                token *tok1=new token(QString::fromStdString((yyvsp[-6].TEXT)),(yylsp[-6]).first_line,3,archivo);
                                padre->lst_Atributos->insertar("tCaso",tok1);

                                //hijos
                                padre->hijos.append((yyvsp[-5].VAL)->Padre);
                                padre->hijos.append((yyvsp[-2].VAL)->Padre);
                                padre->hijos.append((yyvsp[0].VAL)->Padre);  

                        (yyval.VAL)->Padre=padre;
                }
#line 4008 "parser.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 2084 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _CUERPO_CASE *padre=new _CUERPO_CASE("CUERPO_CASE",tabla); 
                        padre->nivel=2;
                        padre->nLinea=nLinea;

                                //asignando atributos 
                                token *tok1=new token(QString::fromStdString((yyvsp[-5].TEXT)),(yylsp[-5]).first_line,3,archivo);
                                padre->lst_Atributos->insertar("tCaso",tok1);

                                //hijos 
                                padre->hijos.append((yyvsp[-4].VAL)->Padre);  
                                padre->hijos.append((yyvsp[-1].VAL)->Padre);  

                        (yyval.VAL)->Padre=padre;
                }
#line 4030 "parser.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 2102 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _CUERPO_CASE *padre=new _CUERPO_CASE("CUERPO_CASE",tabla); 
                        padre->nivel=3;
                        padre->nLinea=nLinea;

                                //asignando atributos 
                                token *tok1=new token(QString::fromStdString((yyvsp[-3].TEXT)),(yylsp[-3]).first_line,3,archivo);
                                padre->lst_Atributos->insertar("sDosPuntos",tok1);

                                //hijos 
                                padre->hijos.append((yyvsp[-1].VAL)->Padre); 

                        (yyval.VAL)->Padre=padre;
                }
#line 4051 "parser.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 2123 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _DOWHILE *padre=new _DOWHILE("WHILE",tabla); 
                        padre->nivel=1;
                        padre->nLinea=nLinea;

                                //asignando atributos 
                                token *tok1=new token(QString::fromStdString((yyvsp[-8].TEXT)),(yylsp[-8]).first_line,3,archivo);
                                padre->lst_Atributos->insertar("tHacer",tok1);

                                //hijos
                                padre->hijos.append((yyvsp[-2].VAL)->Padre);
                                padre->hijos.append((yyvsp[-6].VAL)->Padre);  

                        (yyval.VAL)->Padre=padre;
                }
#line 4073 "parser.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 2146 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _FOR *padre=new _FOR("FOR",tabla); 
                        padre->nivel=1;
                        padre->nLinea=nLinea;

                                //asignando atributos 
                                token *tok1=new token(QString::fromStdString((yyvsp[-10].TEXT)),(yylsp[-10]).first_line,3,archivo);
                                padre->lst_Atributos->insertar("tPara",tok1);

                                //hijos
                                padre->hijos.append((yyvsp[-8].VAL)->Padre);
                                padre->hijos.append((yyvsp[-6].VAL)->Padre);
                                padre->hijos.append((yyvsp[-4].VAL)->Padre);
                                padre->hijos.append((yyvsp[-1].VAL)->Padre);  

                        (yyval.VAL)->Padre=padre;
                }
#line 4097 "parser.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 2166 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _FOR *padre=new _FOR("FOR",tabla); 
                        padre->nivel=2;
                        padre->nLinea=nLinea;

                                //asignando atributos 
                                token *tok1=new token(QString::fromStdString((yyvsp[-10].TEXT)),(yylsp[-10]).first_line,3,archivo);
                                padre->lst_Atributos->insertar("tPara",tok1);

                                //hijos
                                padre->hijos.append((yyvsp[-8].VAL)->Padre);
                                padre->hijos.append((yyvsp[-6].VAL)->Padre);
                                padre->hijos.append((yyvsp[-4].VAL)->Padre);
                                padre->hijos.append((yyvsp[-1].VAL)->Padre);  

                        (yyval.VAL)->Padre=padre;
                }
#line 4121 "parser.cpp" /* yacc.c:1646  */
    break;

  case 118:
#line 2190 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _WHILE *padre=new _WHILE("WHILE",tabla); 
                        padre->nivel=1;
                        padre->nLinea=nLinea;

                                //asignando atributos 
                                token *tok1=new token(QString::fromStdString((yyvsp[-6].TEXT)),(yylsp[-6]).first_line,3,archivo);
                                padre->lst_Atributos->insertar("tMientras",tok1);

                                //hijos
                                padre->hijos.append((yyvsp[-4].VAL)->Padre);
                                padre->hijos.append((yyvsp[-1].VAL)->Padre);  

                        (yyval.VAL)->Padre=padre;
                }
#line 4143 "parser.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 2211 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _SI *padre=new _SI("SI",tabla); 
                        padre->nivel=1;
                        padre->nLinea=nLinea;

                                //asignando atributos 
                                token *tok1=new token(QString::fromStdString((yyvsp[-6].TEXT)),(yylsp[-6]).first_line,3,archivo);
                                padre->lst_Atributos->insertar("tSi",tok1);

                                //hijos
                                padre->hijos.append((yyvsp[-4].VAL)->Padre);
                                padre->hijos.append((yyvsp[-1].VAL)->Padre);  

                        (yyval.VAL)->Padre=padre;
                }
#line 4165 "parser.cpp" /* yacc.c:1646  */
    break;

  case 120:
#line 2229 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _SI *padre=new _SI("SI",tabla); 
                        padre->nivel=2;
                        padre->nLinea=nLinea;
                        

                                //asignando atributos 
                                token *tok1=new token(QString::fromStdString((yyvsp[-7].TEXT)),(yylsp[-7]).first_line,3,archivo);
                                padre->lst_Atributos->insertar("tSi",tok1);

                                //hijos
                                padre->hijos.append((yyvsp[-5].VAL)->Padre);
                                padre->hijos.append((yyvsp[-2].VAL)->Padre); 
                                padre->hijos.append((yyvsp[0].VAL)->Padre);
                                

                        (yyval.VAL)->Padre=padre;
                }
#line 4190 "parser.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 2250 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _SI *padre=new _SI("SI",tabla); 
                        padre->nivel=3;
                        padre->nLinea=nLinea;

                                //asignando atributos 
                                token *tok1=new token(QString::fromStdString((yyvsp[-7].TEXT)),(yylsp[-7]).first_line,3,archivo);
                                padre->lst_Atributos->insertar("tSi",tok1);

                                //hijos
                                padre->hijos.append((yyvsp[-5].VAL)->Padre);
                                padre->hijos.append((yyvsp[-2].VAL)->Padre); 
                                padre->hijos.append((yyvsp[0].VAL)->Padre); 

                        (yyval.VAL)->Padre=padre;
                }
#line 4213 "parser.cpp" /* yacc.c:1646  */
    break;

  case 122:
#line 2272 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _SINO_SI *padre=new _SINO_SI("SINO_SI",tabla); 
                        padre->nivel=1;
                        padre->nLinea=nLinea;

                                //asignando atributos 
                                token *tok1=new token(QString::fromStdString((yyvsp[-8].TEXT)),(yylsp[-8]).first_line,3,archivo);
                                padre->lst_Atributos->insertar("tSino",tok1);

                                //hijos
                                padre->hijos.append((yyvsp[-5].VAL)->Padre);
                                padre->hijos.append((yyvsp[-2].VAL)->Padre); 
                                padre->hijos.append((yyvsp[0].VAL)->Padre);  

                        (yyval.VAL)->Padre=padre;
                }
#line 4236 "parser.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 2291 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _SINO_SI *padre=new _SINO_SI("SINO_SI",tabla); 
                        padre->nivel=2;
                        padre->nLinea=nLinea;

                                //asignando atributos 
                                token *tok1=new token(QString::fromStdString((yyvsp[-7].TEXT)),(yylsp[-7]).first_line,3,archivo);
                                padre->lst_Atributos->insertar("tSino",tok1);

                                //hijos
                                padre->hijos.append((yyvsp[-4].VAL)->Padre);
                                padre->hijos.append((yyvsp[-1].VAL)->Padre);  

                        (yyval.VAL)->Padre=padre;
                }
#line 4258 "parser.cpp" /* yacc.c:1646  */
    break;

  case 124:
#line 2309 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _SINO_SI *padre=new _SINO_SI("SINO_SI",tabla); 
                        padre->nivel=3;
                        padre->nLinea=nLinea;

                                //asignando atributos 
                                token *tok1=new token(QString::fromStdString((yyvsp[-8].TEXT)),(yylsp[-8]).first_line,3,archivo);
                                padre->lst_Atributos->insertar("tSino",tok1);

                                //hijos
                                padre->hijos.append((yyvsp[-5].VAL)->Padre);
                                padre->hijos.append((yyvsp[-2].VAL)->Padre); 
                                padre->hijos.append((yyvsp[0].VAL)->Padre); 

                        (yyval.VAL)->Padre=padre;
                }
#line 4281 "parser.cpp" /* yacc.c:1646  */
    break;

  case 125:
#line 2331 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _SINO *padre=new _SINO("SINO",tabla); 
                        padre->nivel=1;
                        padre->nLinea=nLinea;

                                //asignando atributos 
                                token *tok1=new token(QString::fromStdString((yyvsp[-3].TEXT)),(yylsp[-3]).first_line,3,archivo);
                                padre->lst_Atributos->insertar("tSino",tok1);

                                //hijos 
                                padre->hijos.append((yyvsp[-1].VAL)->Padre); 

                        (yyval.VAL)->Padre=padre;
                }
#line 4302 "parser.cpp" /* yacc.c:1646  */
    break;

  case 126:
#line 2352 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _VALOR *padre=new _VALOR("VALOR",tabla); 
                        padre->nivel=1;
                        padre->nLinea=nLinea;

                                //asignando atributos 
                                token *tok2=new token(QString::fromStdString((yyvsp[-3].TEXT)),(yylsp[-3]).first_line,3,archivo);
                                padre->lst_Atributos->insertar("valId",tok2);

                                //hijos 
                                padre->hijos.append((yyvsp[-1].VAL)->Padre); 

                        (yyval.VAL)->Padre=padre;
                }
#line 4323 "parser.cpp" /* yacc.c:1646  */
    break;

  case 127:
#line 2386 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _VALOR *padre=new _VALOR("VALOR",tabla); 
                        padre->nivel=3;
                        padre->nLinea=nLinea;

                                //hijos
                                padre->hijos.append((yyvsp[0].VAL)->Padre); 

                        (yyval.VAL)->Padre=padre;
                }
#line 4340 "parser.cpp" /* yacc.c:1646  */
    break;

  case 128:
#line 2399 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _VALOR *padre=new _VALOR("VALOR",tabla); 
                        padre->nivel=4;
                        padre->nLinea=nLinea;

                                //hijos
                                padre->hijos.append((yyvsp[0].VAL)->Padre); 

                        (yyval.VAL)->Padre=padre;
                }
#line 4357 "parser.cpp" /* yacc.c:1646  */
    break;

  case 129:
#line 2412 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _VALOR *padre=new _VALOR("VALOR",tabla); 
                        padre->nivel=5;
                        padre->nLinea=nLinea;

                                //hijos
                                padre->hijos.append((yyvsp[0].VAL)->Padre); 

                        (yyval.VAL)->Padre=padre;
                }
#line 4374 "parser.cpp" /* yacc.c:1646  */
    break;

  case 130:
#line 2429 "sintactico.y" /* yacc.c:1646  */
    {
                //creando el padre
                (yyval.VAL)=new Nod(); 
                _TAMANIO *padre=new _TAMANIO("TAMANIO",tabla); 
                padre->nivel=1;
                padre->nLinea=nLinea;

                        //hijos
                        padre->hijos.append((yyvsp[-2].VAL)->Padre); 

                (yyval.VAL)->Padre=padre;
        }
#line 4391 "parser.cpp" /* yacc.c:1646  */
    break;

  case 131:
#line 2445 "sintactico.y" /* yacc.c:1646  */
    {
                //creando el padre
                (yyval.VAL)=new Nod(); 
                _SI_SIMPLIFICADO *padre=new _SI_SIMPLIFICADO("SI_SIMPLIFICADO",tabla); 
                padre->nivel=1;
                padre->nLinea=nLinea;

                                //asignando atributos 
                                token *tok2=new token(QString::fromStdString((yyvsp[-3].TEXT)),(yylsp[-3]).first_line,3,archivo);
                                padre->lst_Atributos->insertar("sCierraInterrogante",tok2);


                        //hijos
                        padre->hijos.append((yyvsp[-4].VAL)->Padre); 
                        padre->hijos.append((yyvsp[-2].VAL)->Padre); 
                        padre->hijos.append((yyvsp[0].VAL)->Padre); 

                (yyval.VAL)->Padre=padre;
        }
#line 4415 "parser.cpp" /* yacc.c:1646  */
    break;

  case 132:
#line 2465 "sintactico.y" /* yacc.c:1646  */
    {
                //creando el padre
                (yyval.VAL)=new Nod(); 
                _SI_SIMPLIFICADO *padre=new _SI_SIMPLIFICADO("SI_SIMPLIFICADO",tabla); 
                padre->nivel=1;
                padre->nLinea=nLinea;

                                //asignando atributos 
                                token *tok2=new token(QString::fromStdString((yyvsp[-6].TEXT)),(yylsp[-6]).first_line,3,archivo);
                                padre->lst_Atributos->insertar("sCierraInterrogante",tok2);


                        //hijos
                        padre->hijos.append((yyvsp[-5].VAL)->Padre); 
                        padre->hijos.append((yyvsp[-3].VAL)->Padre); 
                        padre->hijos.append((yyvsp[-1].VAL)->Padre); 

                (yyval.VAL)->Padre=padre;
        }
#line 4439 "parser.cpp" /* yacc.c:1646  */
    break;

  case 133:
#line 2488 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _E *padre=new _E("E",tabla); 
                        padre->nivel=1;
                        padre->nLinea=nLinea;

                                //asignando atributos 
                                token *tok1=new token(QString::fromStdString((yyvsp[-1].TEXT)),(yylsp[-1]).first_line,3,archivo);
                                padre->lst_Atributos->insertar("sMenos",tok1);

                                //hijos 
                                padre->hijos.append((yyvsp[0].VAL)->Padre);  

                        (yyval.VAL)->Padre=padre;
                }
#line 4460 "parser.cpp" /* yacc.c:1646  */
    break;

  case 134:
#line 2506 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _E *padre=new _E("E",tabla); 
                        padre->nivel=2;
                        padre->nLinea=nLinea;

                                //asignando atributos 
                                token *tok2=new token(QString::fromStdString((yyvsp[-1].TEXT)),(yylsp[-1]).first_line,3,archivo);
                                padre->lst_Atributos->insertar("sPot",tok2);

                                //hijos
                                padre->hijos.append((yyvsp[-2].VAL)->Padre); 
                                padre->hijos.append((yyvsp[0].VAL)->Padre); 

                        (yyval.VAL)->Padre=padre;
                }
#line 4482 "parser.cpp" /* yacc.c:1646  */
    break;

  case 135:
#line 2524 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _E *padre=new _E("E",tabla); 
                        padre->nivel=3;
                        padre->nLinea=nLinea;

                                //asignando atributos 
                                token *tok2=new token(QString::fromStdString((yyvsp[-1].TEXT)),(yylsp[-1]).first_line,3,archivo);
                                padre->lst_Atributos->insertar("sDiv",tok2);

                                //hijos
                                padre->hijos.append((yyvsp[-2].VAL)->Padre); 
                                padre->hijos.append((yyvsp[0].VAL)->Padre); 

                        (yyval.VAL)->Padre=padre;
                }
#line 4504 "parser.cpp" /* yacc.c:1646  */
    break;

  case 136:
#line 2542 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _E *padre=new _E("E",tabla); 
                        padre->nivel=4;
                        padre->nLinea=nLinea;

                                //asignando atributos 
                                token *tok2=new token(QString::fromStdString((yyvsp[-1].TEXT)),(yylsp[-1]).first_line,3,archivo);
                                padre->lst_Atributos->insertar("sPor",tok2);

                                //hijos
                                padre->hijos.append((yyvsp[-2].VAL)->Padre); 
                                padre->hijos.append((yyvsp[0].VAL)->Padre); 

                        (yyval.VAL)->Padre=padre;
                }
#line 4526 "parser.cpp" /* yacc.c:1646  */
    break;

  case 137:
#line 2560 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _E *padre=new _E("E",tabla); 
                        padre->nivel=5;
                        padre->nLinea=nLinea;


                                //asignando atributos 
                                token *tok2=new token(QString::fromStdString((yyvsp[-1].TEXT)),(yylsp[-1]).first_line,3,archivo);
                                padre->lst_Atributos->insertar("sMas",tok2);

                                //hijos
                                padre->hijos.append((yyvsp[-2].VAL)->Padre); 
                                padre->hijos.append((yyvsp[0].VAL)->Padre); 

                        (yyval.VAL)->Padre=padre;
                }
#line 4549 "parser.cpp" /* yacc.c:1646  */
    break;

  case 138:
#line 2579 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _E *padre=new _E("E",tabla); 
                        padre->nivel=6;
                        padre->nLinea=nLinea;


                                //asignando atributos 
                                token *tok2=new token(QString::fromStdString((yyvsp[-1].TEXT)),(yylsp[-1]).first_line,3,archivo);
                                padre->lst_Atributos->insertar("sMenos",tok2);

                                //hijos
                                padre->hijos.append((yyvsp[-2].VAL)->Padre); 
                                padre->hijos.append((yyvsp[0].VAL)->Padre); 

                        (yyval.VAL)->Padre=padre;
                }
#line 4572 "parser.cpp" /* yacc.c:1646  */
    break;

  case 139:
#line 2599 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _E *padre=new _E("E",tabla); 
                        padre->nivel=7;
                        padre->nLinea=nLinea;


                                //asignando atributos 
                                token *tok2=new token(QString::fromStdString((yyvsp[-1].TEXT)),(yylsp[-1]).first_line,3,archivo);
                                padre->lst_Atributos->insertar("sMod",tok2);

                                //hijos
                                padre->hijos.append((yyvsp[-2].VAL)->Padre); 
                                padre->hijos.append((yyvsp[0].VAL)->Padre); 

                        (yyval.VAL)->Padre=padre;
                }
#line 4595 "parser.cpp" /* yacc.c:1646  */
    break;

  case 140:
#line 2621 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _E *padre=new _E("E",tabla); 
                        padre->nivel=8;
                        padre->nLinea=nLinea;


                                //asignando atributos 
                                token *tok2=new token(QString::fromStdString((yyvsp[-1].TEXT)),(yylsp[-1]).first_line,3,archivo);
                                padre->lst_Atributos->insertar("sIgualacion",tok2);

                                //hijos
                                padre->hijos.append((yyvsp[-2].VAL)->Padre); 
                                padre->hijos.append((yyvsp[0].VAL)->Padre); 

                        (yyval.VAL)->Padre=padre;
                }
#line 4618 "parser.cpp" /* yacc.c:1646  */
    break;

  case 141:
#line 2640 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _E *padre=new _E("E",tabla); 
                        padre->nivel=9;
                        padre->nLinea=nLinea;

                                //asignando atributos 
                                token *tok2=new token(QString::fromStdString((yyvsp[-1].TEXT)),(yylsp[-1]).first_line,3,archivo);
                                padre->lst_Atributos->insertar("sDiferenciacion",tok2);


                                //hijos
                                padre->hijos.append((yyvsp[-2].VAL)->Padre); 
                                padre->hijos.append((yyvsp[0].VAL)->Padre); 

                        (yyval.VAL)->Padre=padre;
                }
#line 4641 "parser.cpp" /* yacc.c:1646  */
    break;

  case 142:
#line 2659 "sintactico.y" /* yacc.c:1646  */
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
#line 4663 "parser.cpp" /* yacc.c:1646  */
    break;

  case 143:
#line 2677 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _E *padre=new _E("E",tabla); 
                        padre->nivel=11;
                        padre->nLinea=nLinea;


                                //asignando atributos 
                                token *tok2=new token(QString::fromStdString((yyvsp[-1].TEXT)),(yylsp[-1]).first_line,3,archivo);
                                padre->lst_Atributos->insertar("sMenorIgualQue",tok2);

                                //hijos
                                padre->hijos.append((yyvsp[-2].VAL)->Padre); 
                                padre->hijos.append((yyvsp[0].VAL)->Padre); 

                        (yyval.VAL)->Padre=padre;
                }
#line 4686 "parser.cpp" /* yacc.c:1646  */
    break;

  case 144:
#line 2696 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _E *padre=new _E("E",tabla); 
                        padre->nivel=12;
                        padre->nLinea=nLinea;


                                //asignando atributos 
                                token *tok2=new token(QString::fromStdString((yyvsp[-1].TEXT)),(yylsp[-1]).first_line,3,archivo);
                                padre->lst_Atributos->insertar("sMayorQue",tok2);

                                //hijos
                                padre->hijos.append((yyvsp[-2].VAL)->Padre); 
                                padre->hijos.append((yyvsp[0].VAL)->Padre); 

                        (yyval.VAL)->Padre=padre;
                }
#line 4709 "parser.cpp" /* yacc.c:1646  */
    break;

  case 145:
#line 2715 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _E *padre=new _E("E",tabla); 
                        padre->nivel=13;
                        padre->nLinea=nLinea;

                                //asignando atributos 
                                token *tok2=new token(QString::fromStdString((yyvsp[-1].TEXT)),(yylsp[-1]).first_line,3,archivo);
                                padre->lst_Atributos->insertar("sMayorIgualQue",tok2);


                                //hijos
                                padre->hijos.append((yyvsp[-2].VAL)->Padre); 
                                padre->hijos.append((yyvsp[0].VAL)->Padre); 

                        (yyval.VAL)->Padre=padre;
                }
#line 4732 "parser.cpp" /* yacc.c:1646  */
    break;

  case 146:
#line 2734 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _E *padre=new _E("E",tabla); 
                        padre->nivel=14;
                        padre->nLinea=nLinea;


                                //asignando atributos 
                                token *tok2=new token(QString::fromStdString((yyvsp[-1].TEXT)),(yylsp[-1]).first_line,3,archivo);
                                padre->lst_Atributos->insertar("sAnd",tok2);

                                //hijos
                                padre->hijos.append((yyvsp[-2].VAL)->Padre); 
                                padre->hijos.append((yyvsp[0].VAL)->Padre); 

                        (yyval.VAL)->Padre=padre;
                }
#line 4755 "parser.cpp" /* yacc.c:1646  */
    break;

  case 147:
#line 2755 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _E *padre=new _E("E",tabla); 
                        padre->nivel=15;
                        padre->nLinea=nLinea;

                                //asignando atributos 
                                token *tok2=new token(QString::fromStdString((yyvsp[-1].TEXT)),(yylsp[-1]).first_line,3,archivo);
                                padre->lst_Atributos->insertar("sOr",tok2);


                                //hijos
                                padre->hijos.append((yyvsp[-2].VAL)->Padre); 
                                padre->hijos.append((yyvsp[0].VAL)->Padre); 

                        (yyval.VAL)->Padre=padre;
                }
#line 4778 "parser.cpp" /* yacc.c:1646  */
    break;

  case 148:
#line 2774 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _E *padre=new _E("E",tabla); 
                        padre->nivel=16;
                        padre->nLinea=nLinea;

                                //asignando atributos 
                                token *tok1=new token(QString::fromStdString((yyvsp[-1].TEXT)),(yylsp[-1]).first_line,3,archivo);
                                padre->lst_Atributos->insertar("sNot",tok1);


                                //hijos
                                padre->hijos.append((yyvsp[0].VAL)->Padre);  

                        (yyval.VAL)->Padre=padre;
                }
#line 4800 "parser.cpp" /* yacc.c:1646  */
    break;

  case 149:
#line 2794 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _E *padre=new _E("E",tabla); 
                        padre->nivel=17;
                        padre->nLinea=nLinea;

                                //asignando atributos 
                                token *tok1=new token(QString::fromStdString((yyvsp[-2].TEXT)),(yylsp[-2]).first_line,3,archivo);
                                padre->lst_Atributos->insertar("sAbreParent",tok1);

                                //hijos
                                padre->hijos.append((yyvsp[-1].VAL)->Padre);  

                        (yyval.VAL)->Padre=padre;
                }
#line 4821 "parser.cpp" /* yacc.c:1646  */
    break;

  case 150:
#line 2812 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _E *padre=new _E("E",tabla); 
                        padre->nivel=18;
                        padre->nLinea=nLinea;

                                //hijos
                                padre->hijos.append((yyvsp[0].VAL)->Padre);  

                        (yyval.VAL)->Padre=padre;
                }
#line 4838 "parser.cpp" /* yacc.c:1646  */
    break;

  case 151:
#line 2825 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _E *padre=new _E("E",tabla); 
                        padre->nivel=19;
                        padre->nLinea=nLinea;

                                //asignando atributos 
                                token *tok1=new token(QString::fromStdString((yyvsp[0].TEXT)),(yylsp[0]).first_line,3,archivo);
                                padre->lst_Atributos->insertar("valBoolean",tok1);


                        (yyval.VAL)->Padre=padre;
                }
#line 4857 "parser.cpp" /* yacc.c:1646  */
    break;

  case 152:
#line 2840 "sintactico.y" /* yacc.c:1646  */
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
#line 4874 "parser.cpp" /* yacc.c:1646  */
    break;

  case 153:
#line 2853 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _E *padre=new _E("E",tabla); 
                        padre->nivel=21;
                        padre->nLinea=nLinea;

                                //asignando atributos 
                                token *tok1=new token(QString::fromStdString((yyvsp[0].TEXT)),(yylsp[0]).first_line,3,archivo);
                                padre->lst_Atributos->insertar("valCaracter",tok1);

                        (yyval.VAL)->Padre=padre;
                }
#line 4892 "parser.cpp" /* yacc.c:1646  */
    break;

  case 154:
#line 2867 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _E *padre=new _E("E",tabla); 
                        padre->nivel=22;
                        padre->nLinea=nLinea;

                                //asignando atributos 
                                token *tok1=new token(QString::fromStdString((yyvsp[0].TEXT)),(yylsp[0]).first_line,3,archivo);
                                padre->lst_Atributos->insertar("valDecimal",tok1);

                        (yyval.VAL)->Padre=padre;
                }
#line 4910 "parser.cpp" /* yacc.c:1646  */
    break;

  case 155:
#line 2882 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _E *padre=new _E("E",tabla); 
                        padre->nivel=23;
                        padre->nLinea=nLinea;

                                //asignando atributos 
                                token *tok1=new token(QString::fromStdString((yyvsp[0].TEXT)),(yylsp[0]).first_line,3,archivo);
                                padre->lst_Atributos->insertar("valNumero",tok1);

                        (yyval.VAL)->Padre=padre;
                }
#line 4928 "parser.cpp" /* yacc.c:1646  */
    break;

  case 156:
#line 2896 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _E *padre=new _E("E",tabla); 
                        padre->nivel=24;
                        padre->nLinea=nLinea;

                                //asignando atributos 
                                token *tok1=new token(QString::fromStdString((yyvsp[0].TEXT)),(yylsp[0]).first_line,3,archivo);
                                padre->lst_Atributos->insertar("tNulo",tok1);

                        (yyval.VAL)->Padre=padre;
                }
#line 4946 "parser.cpp" /* yacc.c:1646  */
    break;

  case 157:
#line 2910 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _E *padre=new _E("E",tabla); 
                        padre->nivel=25;
                        padre->nLinea=nLinea;

                                //asignando atributos 
                                token *tok1=new token(QString::fromStdString((yyvsp[0].TEXT)),(yylsp[0]).first_line,3,archivo);
                                padre->lst_Atributos->insertar("tNada",tok1);

                        (yyval.VAL)->Padre=padre;
                }
#line 4964 "parser.cpp" /* yacc.c:1646  */
    break;

  case 158:
#line 2924 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _E *padre=new _E("E",tabla); 
                        padre->nivel=26;
                        padre->nLinea=nLinea;

                                //hijos
                                padre->hijos.append((yyvsp[0].VAL)->Padre);  

                        (yyval.VAL)->Padre=padre;
                }
#line 4981 "parser.cpp" /* yacc.c:1646  */
    break;

  case 159:
#line 2937 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _E *padre=new _E("E",tabla); 
                        padre->nivel=27;
                        padre->nLinea=nLinea;

                                //hijos
                                padre->hijos.append((yyvsp[0].VAL)->Padre);  

                        (yyval.VAL)->Padre=padre;
                }
#line 4998 "parser.cpp" /* yacc.c:1646  */
    break;

  case 160:
#line 2950 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _E *padre=new _E("E",tabla); 
                        padre->nivel=28;
                        padre->nLinea=nLinea;

                                //hijos
                                padre->hijos.append((yyvsp[0].VAL)->Padre);  

                        (yyval.VAL)->Padre=padre;
                }
#line 5015 "parser.cpp" /* yacc.c:1646  */
    break;


#line 5019 "parser.cpp" /* yacc.c:1646  */
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
