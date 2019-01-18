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
    sMasIgual = 273,
    sMenosIgual = 274,
    sPorIgual = 275,
    sDivIgual = 276,
    sAbreParent = 277,
    sCierraParent = 278,
    sAbreLlave = 279,
    sCierraLlave = 280,
    sAbreCorchete = 281,
    sCierraCorchete = 282,
    sPunto = 283,
    sComa = 284,
    sPuntoComa = 285,
    sArroba = 286,
    sIgual = 287,
    sCierraInterrogante = 288,
    sDosPuntos = 289,
    tImport = 290,
    tClase = 291,
    tExtender = 292,
    tPadre = 293,
    tPrincipal = 294,
    tOverride = 295,
    tNuevo = 296,
    tEste = 297,
    tImprimir = 298,
    tConcatenar = 299,
    tConvertirCadena = 300,
    tRetorno = 301,
    tSi = 302,
    tSino = 303,
    tCaso = 304,
    tDe = 305,
    tDefecto = 306,
    tRomper = 307,
    tMientras = 308,
    tContinuar = 309,
    tPara = 310,
    tHacer = 311,
    tRepetir = 312,
    tHasta = 313,
    tMensaje = 314,
    tSubCad = 315,
    tPosCad = 316,
    tRandom = 317,
    tTamanio = 318,
    tSuper = 319,
    tNada = 320,
    tVacio = 321,
    tNulo = 322,
    tEntero = 323,
    tCaracter = 324,
    tDecimal = 325,
    tBooleano = 326,
    tPublico = 327,
    tPrivado = 328,
    tProtegido = 329,
    valBoolean = 330,
    valId = 331,
    valNumero = 332,
    valDecimal = 333,
    valCaracter = 334,
    valCadena = 335
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

#line 250 "parser.cpp" /* yacc.c:355  */
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

#line 281 "parser.cpp" /* yacc.c:358  */

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
#define YYLAST   1069

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  81
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  49
/* YYNRULES -- Number of rules.  */
#define YYNRULES  144
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  312

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   335

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
      75,    76,    77,    78,    79,    80
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   299,   299,   314,   330,   343,   358,   381,   395,   411,
     439,   465,   478,   492,   506,   520,   534,   551,   569,   582,
     596,   610,   622,   639,   646,   660,   673,   687,   700,   717,
     730,   746,   758,   771,   784,   801,   823,   843,   865,   889,
     908,   932,   946,   964,   979,   998,  1015,  1033,  1047,  1061,
    1074,  1092,  1106,  1126,  1133,  1149,  1161,  1179,  1188,  1205,
    1219,  1233,  1247,  1265,  1283,  1301,  1320,  1339,  1362,  1376,
    1395,  1413,  1436,  1450,  1463,  1476,  1490,  1504,  1518,  1535,
    1550,  1571,  1584,  1597,  1611,  1624,  1638,  1651,  1664,  1677,
    1693,  1706,  1739,  1760,  1781,  1798,  1818,  1835,  1850,  1870,
    1886,  1903,  1916,  1929,  1948,  1968,  1992,  2013,  2031,  2052,
    2074,  2093,  2111,  2133,  2154,  2188,  2201,  2218,  2234,  2252,
    2270,  2288,  2306,  2325,  2345,  2367,  2386,  2405,  2423,  2442,
    2461,  2480,  2501,  2520,  2540,  2558,  2571,  2586,  2599,  2613,
    2628,  2642,  2656,  2670,  2683
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
  "sMasIgual", "sMenosIgual", "sPorIgual", "sDivIgual", "sAbreParent",
  "sCierraParent", "sAbreLlave", "sCierraLlave", "sAbreCorchete",
  "sCierraCorchete", "sPunto", "sComa", "sPuntoComa", "sArroba", "sIgual",
  "sCierraInterrogante", "sDosPuntos", "tImport", "tClase", "tExtender",
  "tPadre", "tPrincipal", "tOverride", "tNuevo", "tEste", "tImprimir",
  "tConcatenar", "tConvertirCadena", "tRetorno", "tSi", "tSino", "tCaso",
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
  "FUNCIONES_NATIVAS", "CONVERTIR_CADENA", "CONCATENAR", "IMPRIMIR",
  "SUPER", "RETORNO", "ROMPER", "CONTINUAR", "SENTENCIAS", "FOR", "WHILE",
  "SI", "SINO_SI", "SINO", "VALOR", "TAMANIO", "E", YY_NULLPTR
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
     335
};
# endif

#define YYPACT_NINF -171

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-171)))

#define YYTABLE_NINF -16

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       8,     9,   -43,    42,     8,  -171,    18,  -171,   -21,   -34,
    -171,  -171,    18,  -171,    47,    -6,  -171,  -171,  -171,    53,
      40,     4,  -171,   743,    71,    74,    77,  -171,  -171,  -171,
    -171,  -171,    78,   -16,   415,   225,  -171,  -171,  -171,  -171,
      82,  -171,   743,   101,   116,   415,   125,   153,   121,    -7,
    -171,  -171,    -5,  -171,  -171,  -171,  -171,   338,  -171,   134,
      84,     7,  -171,  -171,   415,   354,  -171,   135,   308,  -171,
     145,  -171,   178,    -4,  -171,   778,   135,  -171,   149,   415,
      22,   354,   354,   354,   154,   161,  -171,  -171,  -171,   188,
    -171,  -171,  -171,  -171,   160,  -171,  -171,   899,  -171,   315,
     113,  -171,  -171,  1026,   415,   415,   168,   177,   179,   239,
     180,   181,   196,   193,   198,   199,   -15,    84,   197,   144,
     207,   393,  -171,   208,  -171,  -171,  -171,  -171,  -171,  -171,
    -171,  -171,  -171,  -171,   778,  -171,   215,  1052,   216,   921,
     169,   354,   308,   135,   -35,  -171,   354,   354,   354,   354,
     354,   354,   354,   354,   354,   354,   354,   354,   354,   354,
    -171,  -171,    27,  1026,   224,    30,    34,   415,   266,   308,
    -171,   218,   354,  -171,   354,  -171,   384,   308,  -171,   237,
     238,   354,   354,   354,   354,   182,  -171,  -171,  -171,  -171,
    -171,  -171,   424,   778,  -171,   190,   939,    45,  -171,  -171,
     191,  1040,  1052,   133,   133,   133,   133,   133,   133,   216,
     216,   236,   236,   236,  -171,  -171,   315,   308,   233,   235,
      50,  -171,   242,    73,  -171,   957,   975,   230,   999,   232,
     106,  -171,  -171,  1026,  1026,  1026,  1026,  -171,   455,   308,
     135,  -171,   135,   308,   308,   135,  -171,  1026,   107,   778,
     778,   243,  -171,  -171,   244,   246,   354,   354,   252,  -171,
     109,   135,  -171,   111,  -171,   486,   517,   778,   778,   778,
     849,   874,  -171,   135,   135,  -171,  -171,   548,   579,   610,
     -28,   -28,   135,   135,  -171,   226,  -171,   249,   250,     3,
    -171,  -171,   259,   262,   778,   254,   778,   778,   641,   354,
     672,   703,  -171,   993,  -171,  -171,   263,   778,   734,   226,
    -171,  -171
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
       0,    42,     0,     0,     0,    21,     0,    51,    44,     0,
      54,    15,     0,    41,     9,    29,    32,     0,     6,     0,
       0,     0,    20,    55,    21,     0,    58,    52,     0,    43,
       0,    53,    51,     0,    10,     0,    51,    22,     0,     0,
       0,     0,     0,     0,     0,     0,   142,   141,   136,    61,
     140,   139,   138,   137,   135,   143,   144,     0,    57,     0,
       0,   115,    45,   116,    21,    21,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    61,     0,     0,     0,
       0,     0,    80,     0,    91,    90,    85,    88,    86,    87,
      84,   103,   102,   101,     0,    19,     0,   133,   118,     0,
       0,     0,    25,    65,     0,    59,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      56,    50,     0,    49,     0,     0,     0,    21,     0,    25,
      97,     0,     0,    99,     0,   100,     0,    25,    81,     0,
       0,     0,     0,     0,     0,     0,    82,    72,    83,    39,
      79,    89,     0,     0,   134,    60,     0,     0,    24,   117,
      68,   132,   131,   129,   127,   130,   128,   125,   126,   122,
     123,   121,   120,   124,   119,    46,     0,    25,     0,     0,
       0,    95,     0,     0,    98,     0,     0,     0,     0,     0,
       0,    73,    74,    75,    76,    77,    78,    40,     0,    25,
      64,    92,    63,     0,    25,    70,    48,    47,     0,     0,
       0,     0,    94,    93,     0,     0,     0,     0,     0,    36,
       0,    67,    23,     0,   114,     0,     0,     0,     0,     0,
       0,     0,    96,    62,    69,    38,    35,     0,     0,     0,
       0,     0,    66,    71,    37,   107,   106,     0,     0,     0,
     108,   109,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   113,     0,   104,   105,     0,     0,     0,   111,
     110,   112
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -171,  -171,  -171,   288,   296,    20,    80,   282,   -40,   187,
    -111,   294,   267,   -20,  -171,  -171,  -171,  -171,   -22,   257,
     -90,  -171,   264,   258,   -26,   -42,   -87,   -72,  -171,  -170,
    -126,   -23,  -171,  -171,  -171,  -171,  -171,  -171,  -171,  -171,
    -171,  -171,  -171,  -171,    13,    14,   -63,  -171,   -65
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,     5,     6,     7,   117,    19,    61,    62,
     197,    34,    35,    36,    37,    38,    39,    40,   118,   187,
     101,   162,    48,    49,    50,    66,    67,    94,   145,   120,
     121,   122,   123,    95,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   290,   291,   198,    96,   103
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      97,    41,   143,   119,    15,   102,   229,   142,   192,   161,
      46,    65,    53,    41,    84,    55,   137,   138,   139,    46,
      41,    46,    46,    71,    80,    98,    13,   294,   199,   143,
      78,     8,    13,     9,   163,    41,    79,    55,    16,    17,
      18,   200,    10,     1,     2,   136,   171,    71,    89,   119,
     295,    79,   215,   218,     2,    14,   216,   219,   223,    79,
      47,   -15,   119,    79,   165,   166,   230,   238,   242,    70,
      22,    72,   106,   251,   243,    21,   196,    23,    15,    79,
      25,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,    42,   253,    43,   190,    44,
      45,    98,   243,    33,   228,   222,   248,   225,   240,   226,
     287,   288,    56,   245,    52,    33,   233,   234,   235,   236,
     119,   119,    33,   265,   266,    60,   246,   220,   260,   258,
     264,    58,   273,   263,   274,   243,   243,    33,   243,    59,
     243,   277,   278,   279,    60,   154,   155,   156,   157,   158,
     159,   247,    63,    68,   227,   261,   179,   180,    75,    60,
      76,    65,   181,   182,   183,   184,   119,   104,   298,   190,
     300,   301,   185,   134,   186,    64,    68,   119,   119,    65,
     262,   308,   140,   141,    60,    60,   282,   283,   144,   164,
     167,   270,   271,   119,   119,   119,   119,   119,    98,   168,
     105,   169,   172,    98,    65,   119,   119,   119,   228,   228,
     142,   173,   239,   244,    65,   190,    65,    65,   174,    98,
     176,   177,   119,   175,   119,   119,   119,   178,   119,   119,
     156,   157,   158,   159,   303,   119,   119,   188,   191,   193,
      98,    98,   190,   190,    81,   195,   217,    60,   224,   231,
      54,   232,    82,   159,   190,   190,   190,   249,   200,   250,
     256,    83,   257,    99,    26,   252,   135,   267,   268,   170,
     269,    81,   292,   293,   289,   190,   299,   190,   190,    82,
     100,    84,   272,   296,    85,   190,   297,   307,    83,   221,
      99,    27,    11,    28,    29,    30,    31,    16,    17,    18,
      12,    32,    24,    20,    86,    69,    87,   100,    84,    57,
      73,    85,     0,    81,    88,    89,    90,    91,    92,    93,
      81,    82,   310,   311,    77,     0,     0,     0,    82,     0,
      83,    86,    99,    87,     0,     0,     0,    83,     0,    99,
       0,    88,    89,    90,    91,    92,    93,     0,     0,   100,
      84,     0,     0,    85,     0,     0,     0,    84,     0,    81,
      85,     0,     0,    74,     0,     0,     0,    82,     0,     0,
       0,     0,     0,    86,     0,    87,    83,    26,     0,     0,
      86,     0,    87,    88,    89,    90,    91,    92,    93,     0,
      88,    89,    90,    91,    92,    93,    84,     0,     0,    85,
       0,     0,     0,     0,    27,     0,    28,    29,    30,    31,
      16,    17,    18,     0,    32,     0,     0,     0,   189,    86,
       0,    87,     0,     0,     0,     0,    84,     0,     0,    88,
      89,    90,    91,    92,    93,    84,   107,   108,     0,   109,
     110,     0,     0,     0,     0,   111,   112,   113,   114,   237,
      27,     0,    28,    29,    30,    31,     0,   115,     0,    27,
     116,    28,    29,    30,    31,     0,    84,   107,   108,   116,
     109,   110,     0,     0,     0,     0,   111,   112,   113,   114,
     259,    27,     0,    28,    29,    30,    31,     0,   115,     0,
      27,    51,    28,    29,    30,    31,     0,    84,   107,   108,
     116,   109,   110,     0,     0,     0,     0,   111,   112,   113,
     114,   275,     0,     0,     0,     0,     0,     0,     0,   115,
       0,    27,     0,    28,    29,    30,    31,     0,    84,   107,
     108,   116,   109,   110,     0,     0,     0,     0,   111,   112,
     113,   114,   276,     0,     0,     0,     0,     0,     0,     0,
     115,     0,    27,     0,    28,    29,    30,    31,     0,    84,
     107,   108,   116,   109,   110,     0,     0,     0,     0,   111,
     112,   113,   114,   284,     0,     0,     0,     0,     0,     0,
       0,   115,     0,    27,     0,    28,    29,    30,    31,     0,
      84,   107,   108,   116,   109,   110,     0,     0,     0,     0,
     111,   112,   113,   114,   285,     0,     0,     0,     0,     0,
       0,     0,   115,     0,    27,     0,    28,    29,    30,    31,
       0,    84,   107,   108,   116,   109,   110,     0,     0,     0,
       0,   111,   112,   113,   114,   286,     0,     0,     0,     0,
       0,     0,     0,   115,     0,    27,     0,    28,    29,    30,
      31,     0,    84,   107,   108,   116,   109,   110,     0,     0,
       0,     0,   111,   112,   113,   114,   302,     0,     0,     0,
       0,     0,     0,     0,   115,     0,    27,     0,    28,    29,
      30,    31,     0,    84,   107,   108,   116,   109,   110,     0,
       0,     0,     0,   111,   112,   113,   114,   304,     0,     0,
       0,     0,     0,     0,     0,   115,     0,    27,     0,    28,
      29,    30,    31,     0,    84,   107,   108,   116,   109,   110,
       0,     0,     0,     0,   111,   112,   113,   114,   305,     0,
       0,     0,     0,     0,     0,     0,   115,     0,    27,     0,
      28,    29,    30,    31,     0,    84,   107,   108,   116,   109,
     110,     0,     0,     0,     0,   111,   112,   113,   114,   309,
       0,     0,     0,     0,     0,     0,     0,   115,     0,    27,
       0,    28,    29,    30,    31,     0,    84,   107,   108,   116,
     109,   110,    26,     0,     0,     0,   111,   112,   113,   114,
       0,     0,     0,     0,     0,     0,     0,     0,   115,     0,
      27,     0,    28,    29,    30,    31,     0,     0,     0,    27,
     116,    28,    29,    30,    31,    16,    17,    18,     0,    32,
      84,   107,   108,     0,   109,   110,     0,     0,     0,     0,
     111,   112,   113,   114,     0,     0,     0,     0,     0,     0,
       0,     0,   115,     0,    27,     0,    28,    29,    30,    31,
       0,     0,   146,   147,   116,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   146,   147,   280,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   146,   147,   281,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,     0,     0,     0,
       0,     0,     0,     0,   146,   147,   160,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,     0,
       0,     0,   146,   147,   194,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,     0,     0,     0,
     146,   147,   241,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,     0,     0,     0,   146,   147,
     254,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,     0,     0,     0,   146,   147,   255,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   179,   180,     0,     0,     0,   306,   181,   182,   183,
     184,     0,     0,     0,     0,     0,     0,   185,     0,   146,
     147,    68,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   147,     0,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159
};

static const yytype_int16 yycheck[] =
{
      65,    23,    89,    75,    38,    68,   176,    22,   134,    99,
      26,    26,    34,    35,    42,    35,    81,    82,    83,    26,
      42,    26,    26,    49,    64,    67,     6,    24,    63,   116,
      23,    22,    12,    76,    99,    57,    29,    57,    72,    73,
      74,    76,     0,    35,    36,    23,   109,    73,    76,   121,
      47,    29,    25,    23,    36,    76,    29,    23,   169,    29,
      76,    76,   134,    29,   104,   105,   177,   193,    23,    76,
      76,    76,    76,    23,    29,    28,   141,    24,    38,    29,
      76,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,    24,    23,    23,   121,    22,
      22,   143,    29,    23,   176,   168,   217,   172,   195,   174,
     280,   281,    30,   200,    34,    35,   181,   182,   183,   184,
     192,   193,    42,   249,   250,    45,   216,   167,   239,    23,
      23,    30,    23,   244,    23,    29,    29,    57,    29,    23,
      29,   267,   268,   269,    64,    12,    13,    14,    15,    16,
      17,   216,    27,    32,   176,   242,    12,    13,    24,    79,
      76,    26,    18,    19,    20,    21,   238,    22,   294,   192,
     296,   297,    28,    24,    30,    22,    32,   249,   250,    26,
     243,   307,    28,    22,   104,   105,   273,   274,    28,    76,
      22,   256,   257,   265,   266,   267,   268,   269,   240,    22,
      22,    22,    22,   245,    26,   277,   278,   279,   280,   281,
      22,    30,    22,    22,    26,   238,    26,    26,    22,   261,
      22,    22,   294,    30,   296,   297,   298,    30,   300,   301,
      14,    15,    16,    17,   299,   307,   308,    30,    30,    24,
     282,   283,   265,   266,     5,    76,    22,   167,    30,    12,
      25,    13,    13,    17,   277,   278,   279,    24,    76,    24,
      30,    22,    30,    24,    39,    23,    79,    24,    24,    30,
      24,     5,    23,    23,    48,   298,    22,   300,   301,    13,
      41,    42,    30,    24,    45,   308,    24,    24,    22,    23,
      24,    66,     4,    68,    69,    70,    71,    72,    73,    74,
       4,    76,    20,     9,    65,    48,    67,    41,    42,    42,
      52,    45,    -1,     5,    75,    76,    77,    78,    79,    80,
       5,    13,   309,   309,    60,    -1,    -1,    -1,    13,    -1,
      22,    65,    24,    67,    -1,    -1,    -1,    22,    -1,    24,
      -1,    75,    76,    77,    78,    79,    80,    -1,    -1,    41,
      42,    -1,    -1,    45,    -1,    -1,    -1,    42,    -1,     5,
      45,    -1,    -1,    25,    -1,    -1,    -1,    13,    -1,    -1,
      -1,    -1,    -1,    65,    -1,    67,    22,    39,    -1,    -1,
      65,    -1,    67,    75,    76,    77,    78,    79,    80,    -1,
      75,    76,    77,    78,    79,    80,    42,    -1,    -1,    45,
      -1,    -1,    -1,    -1,    66,    -1,    68,    69,    70,    71,
      72,    73,    74,    -1,    76,    -1,    -1,    -1,    25,    65,
      -1,    67,    -1,    -1,    -1,    -1,    42,    -1,    -1,    75,
      76,    77,    78,    79,    80,    42,    43,    44,    -1,    46,
      47,    -1,    -1,    -1,    -1,    52,    53,    54,    55,    25,
      66,    -1,    68,    69,    70,    71,    -1,    64,    -1,    66,
      76,    68,    69,    70,    71,    -1,    42,    43,    44,    76,
      46,    47,    -1,    -1,    -1,    -1,    52,    53,    54,    55,
      25,    66,    -1,    68,    69,    70,    71,    -1,    64,    -1,
      66,    76,    68,    69,    70,    71,    -1,    42,    43,    44,
      76,    46,    47,    -1,    -1,    -1,    -1,    52,    53,    54,
      55,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,
      -1,    66,    -1,    68,    69,    70,    71,    -1,    42,    43,
      44,    76,    46,    47,    -1,    -1,    -1,    -1,    52,    53,
      54,    55,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      64,    -1,    66,    -1,    68,    69,    70,    71,    -1,    42,
      43,    44,    76,    46,    47,    -1,    -1,    -1,    -1,    52,
      53,    54,    55,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    64,    -1,    66,    -1,    68,    69,    70,    71,    -1,
      42,    43,    44,    76,    46,    47,    -1,    -1,    -1,    -1,
      52,    53,    54,    55,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    64,    -1,    66,    -1,    68,    69,    70,    71,
      -1,    42,    43,    44,    76,    46,    47,    -1,    -1,    -1,
      -1,    52,    53,    54,    55,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    64,    -1,    66,    -1,    68,    69,    70,
      71,    -1,    42,    43,    44,    76,    46,    47,    -1,    -1,
      -1,    -1,    52,    53,    54,    55,    25,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    64,    -1,    66,    -1,    68,    69,
      70,    71,    -1,    42,    43,    44,    76,    46,    47,    -1,
      -1,    -1,    -1,    52,    53,    54,    55,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    64,    -1,    66,    -1,    68,
      69,    70,    71,    -1,    42,    43,    44,    76,    46,    47,
      -1,    -1,    -1,    -1,    52,    53,    54,    55,    25,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,    66,    -1,
      68,    69,    70,    71,    -1,    42,    43,    44,    76,    46,
      47,    -1,    -1,    -1,    -1,    52,    53,    54,    55,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,    66,
      -1,    68,    69,    70,    71,    -1,    42,    43,    44,    76,
      46,    47,    39,    -1,    -1,    -1,    52,    53,    54,    55,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,
      66,    -1,    68,    69,    70,    71,    -1,    -1,    -1,    66,
      76,    68,    69,    70,    71,    72,    73,    74,    -1,    76,
      42,    43,    44,    -1,    46,    47,    -1,    -1,    -1,    -1,
      52,    53,    54,    55,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    64,    -1,    66,    -1,    68,    69,    70,    71,
      -1,    -1,     3,     4,    76,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,    30,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,    30,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,    27,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    -1,
      -1,    -1,     3,     4,    23,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    -1,    -1,    -1,
       3,     4,    23,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    -1,    -1,    -1,     3,     4,
      23,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    -1,    -1,    -1,     3,     4,    23,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    12,    13,    -1,    -1,    -1,    23,    18,    19,    20,
      21,    -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,     3,
       4,    32,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,     4,    -1,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    35,    36,    82,    83,    84,    85,    86,    22,    76,
       0,    84,    85,    86,    76,    38,    72,    73,    74,    88,
      92,    28,    76,    24,    88,    76,    39,    66,    68,    69,
      70,    71,    76,    87,    92,    93,    94,    95,    96,    97,
      98,    99,    24,    23,    22,    22,    26,    76,   103,   104,
     105,    76,    87,    99,    25,    94,    30,    93,    30,    23,
      87,    89,    90,    27,    22,    26,   106,   107,    32,   100,
      76,   105,    76,   104,    25,    24,    76,   103,    23,    29,
      89,     5,    13,    22,    42,    45,    65,    67,    75,    76,
      77,    78,    79,    80,   108,   114,   128,   129,   106,    24,
      41,   101,   127,   129,    22,    22,    76,    43,    44,    46,
      47,    52,    53,    54,    55,    64,    76,    87,    99,   108,
     110,   111,   112,   113,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,    24,    90,    23,   129,   129,   129,
      28,    22,    22,   107,    28,   109,     3,     4,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      27,   101,   102,   129,    76,    89,    89,    22,    22,    22,
      30,   127,    22,    30,    22,    30,    22,    22,    30,    12,
      13,    18,    19,    20,    21,    28,    30,   100,    30,    25,
     112,    30,   111,    24,    23,    76,   129,    91,   127,    63,
      76,   129,   129,   129,   129,   129,   129,   129,   129,   129,
     129,   129,   129,   129,   129,    25,    29,    22,    23,    23,
      89,    23,   127,    91,    30,   129,   129,    99,   108,   110,
      91,    12,    13,   129,   129,   129,   129,    25,   111,    22,
     107,    23,    23,    29,    22,   107,   101,   129,    91,    24,
      24,    23,    23,    23,    23,    23,    30,    30,    23,    25,
      91,   107,   127,    91,    23,   111,   111,    24,    24,    24,
     129,   129,    30,    23,    23,    25,    25,   111,   111,   111,
      30,    30,   107,   107,    25,    25,    25,   110,   110,    48,
     125,   126,    23,    23,    24,    47,    24,    24,   111,    22,
     111,   111,    25,   129,    25,    25,    23,    24,   111,    25,
     125,   126
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    81,    82,    82,    83,    83,    84,    85,    85,    86,
      86,    87,    87,    87,    87,    87,    87,    88,    88,    89,
      89,    89,    90,    91,    91,    91,    92,    92,    92,    93,
      93,    94,    94,    94,    94,    95,    95,    95,    95,    96,
      97,    98,    98,    99,    99,   100,   101,   102,   102,   102,
     102,   103,   103,   104,   104,   105,   106,   107,   107,   108,
     108,   108,   108,   108,   108,   108,   108,   108,   109,   109,
     109,   109,   110,   110,   110,   110,   110,   110,   110,   111,
     111,   112,   112,   112,   112,   112,   112,   112,   112,   112,
     113,   113,   114,   115,   116,   116,   117,   118,   118,   119,
     120,   121,   121,   121,   122,   122,   123,   124,   124,   124,
     125,   125,   125,   126,   127,   127,   127,   128,   129,   129,
     129,   129,   129,   129,   129,   129,   129,   129,   129,   129,
     129,   129,   129,   129,   129,   129,   129,   129,   129,   129,
     129,   129,   129,   129,   129
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     2,     1,     7,     2,     1,     6,
       7,     1,     1,     1,     1,     1,     1,     2,     0,     3,
       1,     0,     2,     3,     1,     0,     1,     1,     1,     2,
       1,     1,     2,     1,     1,     9,     8,    10,     9,     6,
       7,     2,     1,     3,     2,     2,     3,     3,     3,     1,
       1,     1,     2,     2,     1,     2,     3,     2,     1,     2,
       3,     1,     6,     4,     4,     2,     7,     5,     2,     5,
       3,     6,     2,     3,     3,     3,     3,     3,     3,     2,
       1,     2,     2,     2,     1,     1,     1,     1,     1,     2,
       1,     1,     4,     4,     4,     3,     5,     2,     3,     2,
       2,     1,     1,     1,    11,    11,     7,     7,     8,     8,
       9,     8,     9,     4,     5,     1,     1,     3,     2,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     2,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1
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
#line 300 "sintactico.y" /* yacc.c:1646  */
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
#line 1847 "parser.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 315 "sintactico.y" /* yacc.c:1646  */
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
#line 1864 "parser.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 331 "sintactico.y" /* yacc.c:1646  */
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
#line 1881 "parser.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 344 "sintactico.y" /* yacc.c:1646  */
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
#line 1897 "parser.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 359 "sintactico.y" /* yacc.c:1646  */
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
#line 1921 "parser.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 382 "sintactico.y" /* yacc.c:1646  */
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
#line 1939 "parser.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 396 "sintactico.y" /* yacc.c:1646  */
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
#line 1955 "parser.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 412 "sintactico.y" /* yacc.c:1646  */
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
#line 1987 "parser.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 440 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _CLASE *padre=new _CLASE("CLASE",tabla); 
                        padre->nivel=2;
                        padre->nLinea=nLinea;

                                //asignando atributos  

                                token *tok2=new token(QString::fromStdString((yyvsp[-5].TEXT)),(yylsp[-5]).first_line,3,archivo);
                                padre->lst_Atributos->insertar("valId",tok2);


                                //hijos
                                padre->hijos.append((yyvsp[-4].VAL)->Padre);
                                padre->hijos.append((yyvsp[-3].VAL)->Padre);
                                padre->hijos.append((yyvsp[-1].VAL)->Padre);

                        (yyval.VAL)->Padre=padre;
                }
#line 2012 "parser.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 466 "sintactico.y" /* yacc.c:1646  */
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
#line 2029 "parser.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 479 "sintactico.y" /* yacc.c:1646  */
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
#line 2047 "parser.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 493 "sintactico.y" /* yacc.c:1646  */
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
#line 2065 "parser.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 507 "sintactico.y" /* yacc.c:1646  */
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
#line 2083 "parser.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 521 "sintactico.y" /* yacc.c:1646  */
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
#line 2101 "parser.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 535 "sintactico.y" /* yacc.c:1646  */
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
#line 2119 "parser.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 552 "sintactico.y" /* yacc.c:1646  */
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
#line 2140 "parser.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 569 "sintactico.y" /* yacc.c:1646  */
    {
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _EXTENDER *padre=new _EXTENDER("EXTENDER",tabla);
                        padre->nivel=2;
                        padre->nLinea=-1;

                        (yyval.VAL)->Padre=padre;
                }
#line 2154 "parser.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 583 "sintactico.y" /* yacc.c:1646  */
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
#line 2172 "parser.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 597 "sintactico.y" /* yacc.c:1646  */
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
#line 2189 "parser.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 610 "sintactico.y" /* yacc.c:1646  */
    {
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _LST_PARAMETROS *padre=new _LST_PARAMETROS("LST_PARAMETROS",tabla); 
                        padre->nivel=3;
                        padre->nLinea=-1;
                        (yyval.VAL)->Padre=padre;
                        /*vacio*/
                }
#line 2203 "parser.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 623 "sintactico.y" /* yacc.c:1646  */
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
#line 2220 "parser.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 640 "sintactico.y" /* yacc.c:1646  */
    {   
                        
                        (yyvsp[-2].VAL)->Padre->hijos.append((yyvsp[0].VAL)->Padre);

                        (yyval.VAL)->Padre=(yyvsp[-2].VAL)->Padre;
                }
#line 2231 "parser.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 647 "sintactico.y" /* yacc.c:1646  */
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
#line 2248 "parser.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 660 "sintactico.y" /* yacc.c:1646  */
    {
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _LST_VAL *padre=new _LST_VAL("LST_VAL",tabla); 
                        padre->nivel=3;
                        padre->nLinea=-1;
                        (yyval.VAL)->Padre=padre;
                        /*vacio*/
                }
#line 2262 "parser.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 674 "sintactico.y" /* yacc.c:1646  */
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
#line 2280 "parser.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 688 "sintactico.y" /* yacc.c:1646  */
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
#line 2297 "parser.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 701 "sintactico.y" /* yacc.c:1646  */
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
#line 2314 "parser.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 718 "sintactico.y" /* yacc.c:1646  */
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
#line 2331 "parser.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 731 "sintactico.y" /* yacc.c:1646  */
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
#line 2347 "parser.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 747 "sintactico.y" /* yacc.c:1646  */
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
#line 2363 "parser.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 759 "sintactico.y" /* yacc.c:1646  */
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
#line 2380 "parser.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 772 "sintactico.y" /* yacc.c:1646  */
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
#line 2397 "parser.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 785 "sintactico.y" /* yacc.c:1646  */
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
#line 2414 "parser.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 802 "sintactico.y" /* yacc.c:1646  */
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
#line 2440 "parser.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 824 "sintactico.y" /* yacc.c:1646  */
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
#line 2464 "parser.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 844 "sintactico.y" /* yacc.c:1646  */
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
#line 2490 "parser.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 866 "sintactico.y" /* yacc.c:1646  */
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
#line 2514 "parser.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 890 "sintactico.y" /* yacc.c:1646  */
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
#line 2534 "parser.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 909 "sintactico.y" /* yacc.c:1646  */
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
#line 2557 "parser.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 933 "sintactico.y" /* yacc.c:1646  */
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
#line 2575 "parser.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 947 "sintactico.y" /* yacc.c:1646  */
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
#line 2592 "parser.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 965 "sintactico.y" /* yacc.c:1646  */
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
#line 2611 "parser.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 980 "sintactico.y" /* yacc.c:1646  */
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
#line 2629 "parser.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 999 "sintactico.y" /* yacc.c:1646  */
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
#line 2646 "parser.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 1016 "sintactico.y" /* yacc.c:1646  */
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
#line 2663 "parser.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 1034 "sintactico.y" /* yacc.c:1646  */
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
#line 2681 "parser.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 1048 "sintactico.y" /* yacc.c:1646  */
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
#line 2699 "parser.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 1062 "sintactico.y" /* yacc.c:1646  */
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
#line 2716 "parser.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 1075 "sintactico.y" /* yacc.c:1646  */
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
#line 2733 "parser.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 1093 "sintactico.y" /* yacc.c:1646  */
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
#line 2751 "parser.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 1107 "sintactico.y" /* yacc.c:1646  */
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
#line 2772 "parser.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 1127 "sintactico.y" /* yacc.c:1646  */
    {   
                        (yyvsp[-1].VAL)->Padre->hijos.append((yyvsp[0].VAL)->Padre);  


                        (yyval.VAL)=(yyvsp[-1].VAL);
                }
#line 2783 "parser.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 1134 "sintactico.y" /* yacc.c:1646  */
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
#line 2800 "parser.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 1150 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _PAR_CORCHETES_VACIOS *padre=new _PAR_CORCHETES_VACIOS("PAR_CORCHETES_VACIOS",tabla); 
                        padre->nivel=1;
                        padre->nLinea=nLinea;
                        (yyval.VAL)->Padre=padre;
                }
#line 2813 "parser.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 1162 "sintactico.y" /* yacc.c:1646  */
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
#line 2832 "parser.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 1180 "sintactico.y" /* yacc.c:1646  */
    {    
                        
                        
                        (yyvsp[-1].VAL)->Padre->hijos.append((yyvsp[0].VAL)->Padre);  


                        (yyval.VAL)=(yyvsp[-1].VAL);
                }
#line 2845 "parser.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 1189 "sintactico.y" /* yacc.c:1646  */
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
#line 2862 "parser.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 1206 "sintactico.y" /* yacc.c:1646  */
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
#line 2880 "parser.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 1220 "sintactico.y" /* yacc.c:1646  */
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
#line 2898 "parser.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 1234 "sintactico.y" /* yacc.c:1646  */
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
#line 2916 "parser.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 1248 "sintactico.y" /* yacc.c:1646  */
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
#line 2938 "parser.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 1266 "sintactico.y" /* yacc.c:1646  */
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
#line 2960 "parser.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 1284 "sintactico.y" /* yacc.c:1646  */
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
#line 2982 "parser.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 1302 "sintactico.y" /* yacc.c:1646  */
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
#line 3005 "parser.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 1321 "sintactico.y" /* yacc.c:1646  */
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
#line 3028 "parser.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 1340 "sintactico.y" /* yacc.c:1646  */
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
#line 3051 "parser.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 1363 "sintactico.y" /* yacc.c:1646  */
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
#line 3069 "parser.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 1377 "sintactico.y" /* yacc.c:1646  */
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
#line 3091 "parser.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 1396 "sintactico.y" /* yacc.c:1646  */
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
#line 3113 "parser.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 1414 "sintactico.y" /* yacc.c:1646  */
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
#line 3135 "parser.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 1437 "sintactico.y" /* yacc.c:1646  */
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
#line 3153 "parser.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 1451 "sintactico.y" /* yacc.c:1646  */
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
#line 3170 "parser.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 1464 "sintactico.y" /* yacc.c:1646  */
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
#line 3187 "parser.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 1477 "sintactico.y" /* yacc.c:1646  */
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
#line 3205 "parser.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 1491 "sintactico.y" /* yacc.c:1646  */
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
#line 3223 "parser.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 1505 "sintactico.y" /* yacc.c:1646  */
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
#line 3241 "parser.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 1519 "sintactico.y" /* yacc.c:1646  */
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
#line 3259 "parser.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 1536 "sintactico.y" /* yacc.c:1646  */
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
#line 3278 "parser.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 1551 "sintactico.y" /* yacc.c:1646  */
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
#line 3298 "parser.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 1572 "sintactico.y" /* yacc.c:1646  */
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
#line 3315 "parser.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 1585 "sintactico.y" /* yacc.c:1646  */
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
#line 3332 "parser.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 1598 "sintactico.y" /* yacc.c:1646  */
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
#line 3349 "parser.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 1612 "sintactico.y" /* yacc.c:1646  */
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
#line 3366 "parser.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 1625 "sintactico.y" /* yacc.c:1646  */
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
#line 3383 "parser.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 1639 "sintactico.y" /* yacc.c:1646  */
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
#line 3400 "parser.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 1652 "sintactico.y" /* yacc.c:1646  */
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
#line 3417 "parser.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 1665 "sintactico.y" /* yacc.c:1646  */
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
#line 3434 "parser.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 1678 "sintactico.y" /* yacc.c:1646  */
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
#line 3451 "parser.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 1694 "sintactico.y" /* yacc.c:1646  */
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
#line 3468 "parser.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 1707 "sintactico.y" /* yacc.c:1646  */
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
#line 3485 "parser.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 1740 "sintactico.y" /* yacc.c:1646  */
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
#line 3506 "parser.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 1761 "sintactico.y" /* yacc.c:1646  */
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
#line 3527 "parser.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 1782 "sintactico.y" /* yacc.c:1646  */
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
#line 3548 "parser.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 1799 "sintactico.y" /* yacc.c:1646  */
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
#line 3568 "parser.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 1819 "sintactico.y" /* yacc.c:1646  */
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
#line 3586 "parser.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 1836 "sintactico.y" /* yacc.c:1646  */
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
#line 3605 "parser.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 1851 "sintactico.y" /* yacc.c:1646  */
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
#line 3626 "parser.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 1871 "sintactico.y" /* yacc.c:1646  */
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
#line 3643 "parser.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 1887 "sintactico.y" /* yacc.c:1646  */
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
#line 3660 "parser.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 1904 "sintactico.y" /* yacc.c:1646  */
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
#line 3677 "parser.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 1917 "sintactico.y" /* yacc.c:1646  */
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
#line 3694 "parser.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 1930 "sintactico.y" /* yacc.c:1646  */
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
#line 3711 "parser.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 1949 "sintactico.y" /* yacc.c:1646  */
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
#line 3735 "parser.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 1969 "sintactico.y" /* yacc.c:1646  */
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
#line 3759 "parser.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 1993 "sintactico.y" /* yacc.c:1646  */
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
#line 3781 "parser.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 2014 "sintactico.y" /* yacc.c:1646  */
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
#line 3803 "parser.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 2032 "sintactico.y" /* yacc.c:1646  */
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
#line 3828 "parser.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 2053 "sintactico.y" /* yacc.c:1646  */
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
#line 3851 "parser.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 2075 "sintactico.y" /* yacc.c:1646  */
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
#line 3874 "parser.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 2094 "sintactico.y" /* yacc.c:1646  */
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
#line 3896 "parser.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 2112 "sintactico.y" /* yacc.c:1646  */
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
#line 3919 "parser.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 2134 "sintactico.y" /* yacc.c:1646  */
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
#line 3940 "parser.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 2155 "sintactico.y" /* yacc.c:1646  */
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
#line 3961 "parser.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 2189 "sintactico.y" /* yacc.c:1646  */
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
#line 3978 "parser.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 2202 "sintactico.y" /* yacc.c:1646  */
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
#line 3995 "parser.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 2219 "sintactico.y" /* yacc.c:1646  */
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
#line 4012 "parser.cpp" /* yacc.c:1646  */
    break;

  case 118:
#line 2235 "sintactico.y" /* yacc.c:1646  */
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
#line 4033 "parser.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 2253 "sintactico.y" /* yacc.c:1646  */
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
#line 4055 "parser.cpp" /* yacc.c:1646  */
    break;

  case 120:
#line 2271 "sintactico.y" /* yacc.c:1646  */
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
#line 4077 "parser.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 2289 "sintactico.y" /* yacc.c:1646  */
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
#line 4099 "parser.cpp" /* yacc.c:1646  */
    break;

  case 122:
#line 2307 "sintactico.y" /* yacc.c:1646  */
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
#line 4122 "parser.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 2326 "sintactico.y" /* yacc.c:1646  */
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
#line 4145 "parser.cpp" /* yacc.c:1646  */
    break;

  case 124:
#line 2346 "sintactico.y" /* yacc.c:1646  */
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
#line 4168 "parser.cpp" /* yacc.c:1646  */
    break;

  case 125:
#line 2368 "sintactico.y" /* yacc.c:1646  */
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
#line 4191 "parser.cpp" /* yacc.c:1646  */
    break;

  case 126:
#line 2387 "sintactico.y" /* yacc.c:1646  */
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
#line 4214 "parser.cpp" /* yacc.c:1646  */
    break;

  case 127:
#line 2406 "sintactico.y" /* yacc.c:1646  */
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
#line 4236 "parser.cpp" /* yacc.c:1646  */
    break;

  case 128:
#line 2424 "sintactico.y" /* yacc.c:1646  */
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
#line 4259 "parser.cpp" /* yacc.c:1646  */
    break;

  case 129:
#line 2443 "sintactico.y" /* yacc.c:1646  */
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
#line 4282 "parser.cpp" /* yacc.c:1646  */
    break;

  case 130:
#line 2462 "sintactico.y" /* yacc.c:1646  */
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
#line 4305 "parser.cpp" /* yacc.c:1646  */
    break;

  case 131:
#line 2481 "sintactico.y" /* yacc.c:1646  */
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
#line 4328 "parser.cpp" /* yacc.c:1646  */
    break;

  case 132:
#line 2502 "sintactico.y" /* yacc.c:1646  */
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
#line 4351 "parser.cpp" /* yacc.c:1646  */
    break;

  case 133:
#line 2521 "sintactico.y" /* yacc.c:1646  */
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
#line 4373 "parser.cpp" /* yacc.c:1646  */
    break;

  case 134:
#line 2541 "sintactico.y" /* yacc.c:1646  */
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
#line 4394 "parser.cpp" /* yacc.c:1646  */
    break;

  case 135:
#line 2559 "sintactico.y" /* yacc.c:1646  */
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
#line 4411 "parser.cpp" /* yacc.c:1646  */
    break;

  case 136:
#line 2572 "sintactico.y" /* yacc.c:1646  */
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
#line 4430 "parser.cpp" /* yacc.c:1646  */
    break;

  case 137:
#line 2587 "sintactico.y" /* yacc.c:1646  */
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
#line 4447 "parser.cpp" /* yacc.c:1646  */
    break;

  case 138:
#line 2600 "sintactico.y" /* yacc.c:1646  */
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
#line 4465 "parser.cpp" /* yacc.c:1646  */
    break;

  case 139:
#line 2614 "sintactico.y" /* yacc.c:1646  */
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
#line 4483 "parser.cpp" /* yacc.c:1646  */
    break;

  case 140:
#line 2629 "sintactico.y" /* yacc.c:1646  */
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
#line 4501 "parser.cpp" /* yacc.c:1646  */
    break;

  case 141:
#line 2643 "sintactico.y" /* yacc.c:1646  */
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
#line 4519 "parser.cpp" /* yacc.c:1646  */
    break;

  case 142:
#line 2657 "sintactico.y" /* yacc.c:1646  */
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
#line 4537 "parser.cpp" /* yacc.c:1646  */
    break;

  case 143:
#line 2671 "sintactico.y" /* yacc.c:1646  */
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
#line 4554 "parser.cpp" /* yacc.c:1646  */
    break;

  case 144:
#line 2684 "sintactico.y" /* yacc.c:1646  */
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
#line 4571 "parser.cpp" /* yacc.c:1646  */
    break;


#line 4575 "parser.cpp" /* yacc.c:1646  */
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
