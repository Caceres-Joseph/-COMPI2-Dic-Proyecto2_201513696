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
    tConvertirNumero = 301,
    tRetorno = 302,
    tSi = 303,
    tSino = 304,
    tCaso = 305,
    tDe = 306,
    tDefecto = 307,
    tRomper = 308,
    tMientras = 309,
    tContinuar = 310,
    tPara = 311,
    tHacer = 312,
    tRepetir = 313,
    tHasta = 314,
    tMensaje = 315,
    tSubCad = 316,
    tPosCad = 317,
    tRandom = 318,
    tTamanio = 319,
    tSuper = 320,
    tNada = 321,
    tVacio = 322,
    tNulo = 323,
    tEntero = 324,
    tCaracter = 325,
    tDecimal = 326,
    tBooleano = 327,
    tPublico = 328,
    tPrivado = 329,
    tProtegido = 330,
    valBoolean = 331,
    valId = 332,
    valNumero = 333,
    valDecimal = 334,
    valCaracter = 335,
    valCadena = 336
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

#line 251 "parser.cpp" /* yacc.c:355  */
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

#line 282 "parser.cpp" /* yacc.c:358  */

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
#define YYLAST   1129

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  82
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  51
/* YYNRULES -- Number of rules.  */
#define YYNRULES  149
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  329

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   336

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
      75,    76,    77,    78,    79,    80,    81
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   300,   300,   315,   331,   344,   359,   382,   396,   412,
     440,   466,   479,   493,   507,   521,   535,   552,   570,   583,
     597,   611,   623,   640,   647,   661,   674,   688,   701,   718,
     731,   747,   759,   772,   785,   802,   824,   844,   866,   890,
     909,   933,   947,   965,   980,   999,  1016,  1034,  1048,  1062,
    1075,  1093,  1107,  1127,  1134,  1150,  1162,  1180,  1189,  1206,
    1220,  1234,  1248,  1266,  1284,  1302,  1321,  1340,  1363,  1377,
    1396,  1414,  1437,  1451,  1464,  1477,  1491,  1505,  1519,  1536,
    1551,  1572,  1585,  1598,  1612,  1625,  1639,  1652,  1665,  1678,
    1694,  1707,  1723,  1744,  1765,  1786,  1803,  1823,  1840,  1855,
    1875,  1891,  1908,  1921,  1934,  1953,  1973,  1997,  2018,  2036,
    2057,  2079,  2098,  2116,  2138,  2159,  2193,  2206,  2219,  2236,
    2252,  2272,  2295,  2313,  2331,  2349,  2367,  2386,  2406,  2428,
    2447,  2466,  2484,  2503,  2522,  2541,  2562,  2581,  2601,  2619,
    2632,  2647,  2660,  2674,  2689,  2703,  2717,  2731,  2744,  2757
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
  "sPuntoComa", "sArroba", "sIgual", "sDosPuntos", "tImport", "tClase",
  "tExtender", "tPadre", "tPrincipal", "tOverride", "tNuevo", "tEste",
  "tImprimir", "tConcatenar", "tConvertirCadena", "tConvertirNumero",
  "tRetorno", "tSi", "tSino", "tCaso", "tDe", "tDefecto", "tRomper",
  "tMientras", "tContinuar", "tPara", "tHacer", "tRepetir", "tHasta",
  "tMensaje", "tSubCad", "tPosCad", "tRandom", "tTamanio", "tSuper",
  "tNada", "tVacio", "tNulo", "tEntero", "tCaracter", "tDecimal",
  "tBooleano", "tPublico", "tPrivado", "tProtegido", "valBoolean", "valId",
  "valNumero", "valDecimal", "valCaracter", "valCadena", "$accept", "S",
  "LST_IMPORT", "IMPORT", "LST_CLASE", "CLASE", "TIPO", "EXTENDER",
  "LST_PARAMETROS", "PARAMETRO", "LST_VAL", "VISIBILIDAD", "CP_CLASE",
  "CUERPO_CLASE", "METODO", "MAIN", "CONSTRUCTOR",
  "DECLARAR_VARIABLE_GLOBAL", "DECLARAR_VARIABLE_SINVISIBI", "VAL",
  "LST_LLAVES_VAL", "LLAVES_VAL_P", "VAR_ARREGLO", "LST_CORCHETES",
  "PAR_CORCHETES_VACIOS", "PAR_CORCHETES_VAL", "LST_CORCHETES_VAL",
  "ID_VAR_FUNC", "LST_PUNTOSP", "ASIG_VALOR", "LST_CUERPO", "CUERPO",
  "FUNCIONES_NATIVAS", "CONVERTIR_NUMERO", "CONVERTIR_CADENA",
  "CONCATENAR", "IMPRIMIR", "SUPER", "RETORNO", "ROMPER", "CONTINUAR",
  "SENTENCIAS", "FOR", "WHILE", "SI", "SINO_SI", "SINO", "VALOR",
  "TAMANIO", "SI_SIMPLIFICADO", "E", YY_NULLPTR
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
     335,   336
};
# endif

#define YYPACT_NINF -180

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-180)))

#define YYTABLE_NINF -16

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      21,    16,   -29,    59,    21,  -180,    47,  -180,     8,   -28,
    -180,  -180,    47,  -180,    53,    24,  -180,  -180,  -180,    85,
      65,    35,  -180,   198,    94,    96,    99,  -180,  -180,  -180,
    -180,  -180,   115,   -25,   108,   218,  -180,  -180,  -180,  -180,
     121,  -180,   198,   122,   135,   108,   143,   131,   155,   -13,
    -180,  -180,   -12,  -180,  -180,  -180,  -180,   351,  -180,   158,
     112,     5,  -180,  -180,   108,   371,  -180,   173,   323,  -180,
     178,  -180,   146,    -5,  -180,   760,   173,  -180,   181,   108,
      14,   371,   371,   371,   174,   191,   194,  -180,  -180,  -180,
     147,  -180,  -180,  -180,  -180,   204,  -180,  -180,  -180,   884,
    -180,   371,   329,   161,  -180,  -180,  -180,  1070,   108,   108,
     197,   212,   224,   235,   226,   196,   227,   223,   236,   251,
     -14,   112,   248,  1027,   252,   388,  -180,   253,  -180,  -180,
    -180,  -180,  -180,  -180,  -180,  -180,  -180,  -180,   760,  -180,
     257,  1112,   247,   926,   201,   371,   371,   323,   173,   -36,
    -180,   371,   371,   371,   371,   371,   371,   371,   371,   371,
     371,   371,   371,   371,   371,  -180,   907,  -180,   172,  1086,
     273,   323,    37,    44,   108,   281,   323,  -180,   266,   371,
    -180,   371,  -180,    62,   323,  -180,   286,   287,   371,   371,
     371,   371,   222,  -180,  -180,  -180,  -180,  -180,  -180,   419,
     760,  -180,   207,   945,   964,    45,  -180,  -180,   209,  1100,
    1112,   150,   150,   150,   150,   150,   150,   247,   247,   285,
     285,   285,  -180,   323,  -180,   329,   323,   274,   282,   284,
      46,  -180,   293,    54,  -180,   983,  1002,   279,  1042,   288,
      78,  -180,  -180,  1086,  1086,  1086,  1086,  -180,   450,   323,
     173,  -180,  -180,   173,   323,   323,   173,   290,  -180,  1086,
     113,   323,   760,   760,   295,  -180,  -180,   296,   300,   371,
     371,   298,  -180,   116,   173,  -180,   117,   323,  -180,  -180,
     481,   512,   760,   760,   760,   832,   858,  -180,   173,   173,
     294,  -180,  -180,   543,   574,   605,   -19,   -19,   173,   173,
    -180,  -180,   283,  -180,   306,   307,     6,  -180,  -180,   308,
     310,   760,   314,   760,   760,   636,   371,   667,   698,  -180,
    1021,  -180,  -180,   313,   760,   729,   283,  -180,  -180
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
       0,     0,     0,     0,     0,     0,     0,   146,   145,   140,
      61,   144,   143,   142,   141,   139,   149,   147,   148,     0,
      57,     0,     0,     0,   116,    45,   118,   117,    21,    21,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      61,     0,     0,     0,     0,     0,    80,     0,    91,    90,
      85,    88,    86,    87,    84,   104,   103,   102,     0,    19,
       0,   137,   122,     0,     0,     0,     0,    25,    65,     0,
      59,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    56,     0,    50,     0,    49,
       0,     0,     0,     0,    21,     0,    25,    98,     0,     0,
     100,     0,   101,     0,    25,    81,     0,     0,     0,     0,
       0,     0,     0,    82,    72,    83,    39,    79,    89,     0,
       0,   138,    60,     0,     0,     0,    24,   119,    68,   136,
     135,   133,   131,   134,   132,   129,   130,   126,   127,   125,
     124,   128,   123,     0,    46,     0,    25,     0,     0,     0,
       0,    96,     0,     0,    99,     0,     0,     0,     0,     0,
       0,    73,    74,    75,    76,    77,    78,    40,     0,    25,
      64,    93,    92,    63,     0,    25,    70,     0,    48,    47,
       0,     0,     0,     0,     0,    95,    94,     0,     0,     0,
       0,     0,    36,     0,    67,    23,     0,     0,   115,   120,
       0,     0,     0,     0,     0,     0,     0,    97,    62,    69,
       0,    38,    35,     0,     0,     0,     0,     0,    66,    71,
     121,    37,   108,   107,     0,     0,     0,   109,   110,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   114,
       0,   105,   106,     0,     0,     0,   112,   111,   113
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -180,  -180,  -180,   335,   336,   139,    -2,   321,   -59,   264,
    -105,   341,   302,   -23,  -180,  -180,  -180,  -180,   -15,   297,
     -95,  -180,   291,   301,   -48,   -43,   -60,   -72,  -180,  -179,
    -127,   -99,  -180,  -180,  -180,  -180,  -180,  -180,  -180,  -180,
    -180,  -180,  -180,  -180,  -180,    29,    30,   -62,  -180,  -180,
     -65
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,     5,     6,     7,   121,    19,    61,    62,
     205,    34,    35,    36,    37,    38,    39,    40,   122,   194,
     104,   168,    48,    49,    50,    66,    67,    95,   150,   124,
     125,   126,   127,    96,    97,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   307,   308,   206,    98,   106,
     107
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      99,    71,    46,   123,   239,    80,   105,   167,    41,   147,
      15,   199,    55,    65,    46,    46,   141,   142,   143,    53,
      41,    33,    46,    84,   100,    71,   197,    41,   207,    78,
     148,   311,    52,    33,    55,    79,   166,   169,   140,     8,
      33,   208,    41,    60,    79,    16,    17,    18,     9,   172,
     173,   178,    47,   123,   312,    33,     1,     2,    90,    10,
     148,   228,    60,   -15,    70,    72,   123,    79,   229,   253,
     264,   233,   110,   248,    79,   254,    79,    60,   266,   240,
     203,   204,    21,     2,   254,    14,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     197,    22,   271,    15,    84,   100,    60,    60,   254,   227,
      23,   238,    25,   232,   235,   230,   236,   304,   305,    42,
      43,   260,    44,   243,   244,   245,   246,   123,   123,    27,
     258,    28,    29,    30,    31,   280,   281,   278,    45,   120,
     288,   289,   250,   254,   273,    13,   254,   254,   256,   197,
     276,    13,    56,    58,    64,   293,   294,   295,    65,    59,
     259,   257,   159,   160,   161,   162,   163,   164,   237,   109,
     147,    63,    60,    65,    65,    27,   123,    28,    29,    30,
      31,   197,   197,    75,   315,    51,   317,   318,    68,    76,
     123,   123,   275,   274,   197,   197,   197,   325,   224,   279,
      65,   108,   225,   144,   285,   286,   138,   100,   123,   123,
     123,   123,   123,   100,   145,   290,   197,   146,   197,   197,
     174,   123,   123,   123,   238,   238,   197,   180,   298,   299,
     249,   100,   255,   149,    65,   175,    65,    26,   170,   123,
      81,   123,   123,   123,    54,   123,   123,   176,    82,   179,
     181,   320,   123,   123,   182,   100,   100,    26,   101,   183,
     102,   161,   162,   163,   164,    27,   177,    28,    29,    30,
      31,    16,    17,    18,   184,    32,   103,    84,   202,   185,
      85,    86,   200,   195,   198,    27,    81,    28,    29,    30,
      31,    16,    17,    18,    82,    32,   226,   234,   241,   208,
     242,    87,   164,    88,   101,   231,   102,   262,   261,   263,
     269,    89,    90,    91,    92,    93,    94,   265,   300,   270,
     282,   283,   103,    84,   277,   284,    85,    86,    81,   287,
     309,   310,   306,   313,    81,   314,    82,   316,   324,    11,
      12,    24,    82,   139,    57,    69,   101,    87,   102,    88,
      20,    77,    83,    73,   102,   327,   328,    89,    90,    91,
      92,    93,    94,     0,   103,    84,     0,     0,    85,    86,
       0,    84,     0,     0,    85,    86,    81,    74,     0,     0,
       0,     0,     0,     0,    82,     0,     0,     0,     0,    87,
      26,    88,     0,     0,    83,    87,     0,    88,     0,    89,
      90,    91,    92,    93,    94,    89,    90,    91,    92,    93,
      94,     0,     0,    84,   196,     0,    85,    86,    27,     0,
      28,    29,    30,    31,    16,    17,    18,     0,    32,     0,
      84,   111,   112,     0,     0,   113,   114,    87,     0,    88,
       0,   115,   116,   117,   118,   247,     0,    89,    90,    91,
      92,    93,    94,   119,     0,    27,     0,    28,    29,    30,
      31,    84,   111,   112,     0,   120,   113,   114,     0,     0,
       0,     0,   115,   116,   117,   118,   272,     0,     0,     0,
       0,     0,     0,     0,   119,     0,    27,     0,    28,    29,
      30,    31,    84,   111,   112,     0,   120,   113,   114,     0,
       0,     0,     0,   115,   116,   117,   118,   291,     0,     0,
       0,     0,     0,     0,     0,   119,     0,    27,     0,    28,
      29,    30,    31,    84,   111,   112,     0,   120,   113,   114,
       0,     0,     0,     0,   115,   116,   117,   118,   292,     0,
       0,     0,     0,     0,     0,     0,   119,     0,    27,     0,
      28,    29,    30,    31,    84,   111,   112,     0,   120,   113,
     114,     0,     0,     0,     0,   115,   116,   117,   118,   301,
       0,     0,     0,     0,     0,     0,     0,   119,     0,    27,
       0,    28,    29,    30,    31,    84,   111,   112,     0,   120,
     113,   114,     0,     0,     0,     0,   115,   116,   117,   118,
     302,     0,     0,     0,     0,     0,     0,     0,   119,     0,
      27,     0,    28,    29,    30,    31,    84,   111,   112,     0,
     120,   113,   114,     0,     0,     0,     0,   115,   116,   117,
     118,   303,     0,     0,     0,     0,     0,     0,     0,   119,
       0,    27,     0,    28,    29,    30,    31,    84,   111,   112,
       0,   120,   113,   114,     0,     0,     0,     0,   115,   116,
     117,   118,   319,     0,     0,     0,     0,     0,     0,     0,
     119,     0,    27,     0,    28,    29,    30,    31,    84,   111,
     112,     0,   120,   113,   114,     0,     0,     0,     0,   115,
     116,   117,   118,   321,     0,     0,     0,     0,     0,     0,
       0,   119,     0,    27,     0,    28,    29,    30,    31,    84,
     111,   112,     0,   120,   113,   114,     0,     0,     0,     0,
     115,   116,   117,   118,   322,     0,     0,     0,     0,     0,
       0,     0,   119,     0,    27,     0,    28,    29,    30,    31,
      84,   111,   112,     0,   120,   113,   114,     0,     0,     0,
       0,   115,   116,   117,   118,   326,     0,     0,     0,     0,
       0,     0,     0,   119,     0,    27,     0,    28,    29,    30,
      31,    84,   111,   112,     0,   120,   113,   114,     0,     0,
       0,     0,   115,   116,   117,   118,     0,     0,     0,     0,
       0,     0,     0,     0,   119,     0,    27,     0,    28,    29,
      30,    31,    84,   111,   112,     0,   120,   113,   114,     0,
       0,     0,     0,   115,   116,   117,   118,     0,     0,     0,
       0,     0,     0,     0,     0,   119,     0,    27,     0,    28,
      29,    30,    31,     0,     0,   151,   152,   120,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   151,   152,   296,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   151,   152,   297,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,     0,     0,     0,     0,     0,     0,     0,     0,
     151,   152,   165,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   223,     0,     0,     0,   151,
     152,   201,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,     0,     0,     0,     0,   151,   152,
     201,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,     0,     0,     0,     0,   151,   152,   251,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,     0,     0,     0,     0,   151,   152,   252,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,     0,     0,     0,     0,   151,   152,   267,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
       0,     0,     0,     0,   151,   152,   268,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   186,
     187,     0,     0,     0,     0,   323,   188,   189,   190,   191,
       0,     0,     0,     0,   186,   187,   192,     0,   193,     0,
      68,   188,   189,   190,   191,     0,     0,     0,     0,     0,
       0,   192,     0,   151,   152,    68,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   171,   151,
     152,     0,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   152,     0,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164
};

static const yytype_int16 yycheck[] =
{
      65,    49,    27,    75,   183,    64,    68,   102,    23,    23,
      38,   138,    35,    27,    27,    27,    81,    82,    83,    34,
      35,    23,    27,    42,    67,    73,   125,    42,    64,    24,
      90,    25,    34,    35,    57,    30,   101,   102,    24,    23,
      42,    77,    57,    45,    30,    73,    74,    75,    77,   108,
     109,   113,    77,   125,    48,    57,    35,    36,    77,     0,
     120,    24,    64,    77,    77,    77,   138,    30,    24,    24,
      24,   176,    77,   200,    30,    30,    30,    79,    24,   184,
     145,   146,    29,    36,    30,    77,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     199,    77,    24,    38,    42,   148,   108,   109,    30,   171,
      25,   183,    77,   175,   179,   174,   181,   296,   297,    25,
      24,   226,    23,   188,   189,   190,   191,   199,   200,    67,
     225,    69,    70,    71,    72,   262,   263,    24,    23,    77,
      24,    24,   202,    30,   249,     6,    30,    30,   208,   248,
     255,    12,    31,    31,    23,   282,   283,   284,    27,    24,
     225,   223,    12,    13,    14,    15,    16,    17,   183,    23,
      23,    28,   174,    27,    27,    67,   248,    69,    70,    71,
      72,   280,   281,    25,   311,    77,   313,   314,    33,    77,
     262,   263,   254,   253,   293,   294,   295,   324,    26,   261,
      27,    23,    30,    29,   269,   270,    25,   250,   280,   281,
     282,   283,   284,   256,    23,   277,   315,    23,   317,   318,
      23,   293,   294,   295,   296,   297,   325,    31,   288,   289,
      23,   274,    23,    29,    27,    23,    27,    39,    77,   311,
       5,   313,   314,   315,    26,   317,   318,    23,    13,    23,
      23,   316,   324,   325,    31,   298,   299,    39,    23,    23,
      25,    14,    15,    16,    17,    67,    31,    69,    70,    71,
      72,    73,    74,    75,    23,    77,    41,    42,    77,    31,
      45,    46,    25,    31,    31,    67,     5,    69,    70,    71,
      72,    73,    74,    75,    13,    77,    23,    31,    12,    77,
      13,    66,    17,    68,    23,    24,    25,    25,    34,    25,
      31,    76,    77,    78,    79,    80,    81,    24,    24,    31,
      25,    25,    41,    42,    34,    25,    45,    46,     5,    31,
      24,    24,    49,    25,     5,    25,    13,    23,    25,     4,
       4,    20,    13,    79,    42,    48,    23,    66,    25,    68,
       9,    60,    23,    52,    25,   326,   326,    76,    77,    78,
      79,    80,    81,    -1,    41,    42,    -1,    -1,    45,    46,
      -1,    42,    -1,    -1,    45,    46,     5,    26,    -1,    -1,
      -1,    -1,    -1,    -1,    13,    -1,    -1,    -1,    -1,    66,
      39,    68,    -1,    -1,    23,    66,    -1,    68,    -1,    76,
      77,    78,    79,    80,    81,    76,    77,    78,    79,    80,
      81,    -1,    -1,    42,    26,    -1,    45,    46,    67,    -1,
      69,    70,    71,    72,    73,    74,    75,    -1,    77,    -1,
      42,    43,    44,    -1,    -1,    47,    48,    66,    -1,    68,
      -1,    53,    54,    55,    56,    26,    -1,    76,    77,    78,
      79,    80,    81,    65,    -1,    67,    -1,    69,    70,    71,
      72,    42,    43,    44,    -1,    77,    47,    48,    -1,    -1,
      -1,    -1,    53,    54,    55,    56,    26,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    65,    -1,    67,    -1,    69,    70,
      71,    72,    42,    43,    44,    -1,    77,    47,    48,    -1,
      -1,    -1,    -1,    53,    54,    55,    56,    26,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    65,    -1,    67,    -1,    69,
      70,    71,    72,    42,    43,    44,    -1,    77,    47,    48,
      -1,    -1,    -1,    -1,    53,    54,    55,    56,    26,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    65,    -1,    67,    -1,
      69,    70,    71,    72,    42,    43,    44,    -1,    77,    47,
      48,    -1,    -1,    -1,    -1,    53,    54,    55,    56,    26,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    65,    -1,    67,
      -1,    69,    70,    71,    72,    42,    43,    44,    -1,    77,
      47,    48,    -1,    -1,    -1,    -1,    53,    54,    55,    56,
      26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    65,    -1,
      67,    -1,    69,    70,    71,    72,    42,    43,    44,    -1,
      77,    47,    48,    -1,    -1,    -1,    -1,    53,    54,    55,
      56,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    65,
      -1,    67,    -1,    69,    70,    71,    72,    42,    43,    44,
      -1,    77,    47,    48,    -1,    -1,    -1,    -1,    53,    54,
      55,    56,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      65,    -1,    67,    -1,    69,    70,    71,    72,    42,    43,
      44,    -1,    77,    47,    48,    -1,    -1,    -1,    -1,    53,
      54,    55,    56,    26,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    65,    -1,    67,    -1,    69,    70,    71,    72,    42,
      43,    44,    -1,    77,    47,    48,    -1,    -1,    -1,    -1,
      53,    54,    55,    56,    26,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    65,    -1,    67,    -1,    69,    70,    71,    72,
      42,    43,    44,    -1,    77,    47,    48,    -1,    -1,    -1,
      -1,    53,    54,    55,    56,    26,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    65,    -1,    67,    -1,    69,    70,    71,
      72,    42,    43,    44,    -1,    77,    47,    48,    -1,    -1,
      -1,    -1,    53,    54,    55,    56,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    65,    -1,    67,    -1,    69,    70,
      71,    72,    42,    43,    44,    -1,    77,    47,    48,    -1,
      -1,    -1,    -1,    53,    54,    55,    56,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    65,    -1,    67,    -1,    69,
      70,    71,    72,    -1,    -1,     3,     4,    77,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,    31,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,    31,
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
       9,    10,    11,    12,    13,    14,    15,    16,    17,    12,
      13,    -1,    -1,    -1,    -1,    24,    19,    20,    21,    22,
      -1,    -1,    -1,    -1,    12,    13,    29,    -1,    31,    -1,
      33,    19,    20,    21,    22,    -1,    -1,    -1,    -1,    -1,
      -1,    29,    -1,     3,     4,    33,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,     3,
       4,    -1,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,     4,    -1,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    35,    36,    83,    84,    85,    86,    87,    23,    77,
       0,    85,    86,    87,    77,    38,    73,    74,    75,    89,
      93,    29,    77,    25,    89,    77,    39,    67,    69,    70,
      71,    72,    77,    88,    93,    94,    95,    96,    97,    98,
      99,   100,    25,    24,    23,    23,    27,    77,   104,   105,
     106,    77,    88,   100,    26,    95,    31,    94,    31,    24,
      88,    90,    91,    28,    23,    27,   107,   108,    33,   101,
      77,   106,    77,   105,    26,    25,    77,   104,    24,    30,
      90,     5,    13,    23,    42,    45,    46,    66,    68,    76,
      77,    78,    79,    80,    81,   109,   115,   116,   130,   132,
     107,    23,    25,    41,   102,   129,   131,   132,    23,    23,
      77,    43,    44,    47,    48,    53,    54,    55,    56,    65,
      77,    88,   100,   109,   111,   112,   113,   114,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,    25,    91,
      24,   132,   132,   132,    29,    23,    23,    23,   108,    29,
     110,     3,     4,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    28,   132,   102,   103,   132,
      77,    18,    90,    90,    23,    23,    23,    31,   129,    23,
      31,    23,    31,    23,    23,    31,    12,    13,    19,    20,
      21,    22,    29,    31,   101,    31,    26,   113,    31,   112,
      25,    24,    77,   132,   132,    92,   129,    64,    77,   132,
     132,   132,   132,   132,   132,   132,   132,   132,   132,   132,
     132,   132,   132,    18,    26,    30,    23,   129,    24,    24,
      90,    24,   129,    92,    31,   132,   132,   100,   109,   111,
      92,    12,    13,   132,   132,   132,   132,    26,   112,    23,
     108,    24,    24,    24,    30,    23,   108,   129,   102,   132,
      92,    34,    25,    25,    24,    24,    24,    24,    24,    31,
      31,    24,    26,    92,   108,   129,    92,    34,    24,   129,
     112,   112,    25,    25,    25,   132,   132,    31,    24,    24,
     129,    26,    26,   112,   112,   112,    31,    31,   108,   108,
      24,    26,    26,    26,   111,   111,    49,   127,   128,    24,
      24,    25,    48,    25,    25,   112,    23,   112,   112,    26,
     132,    26,    26,    24,    25,   112,    26,   127,   128
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    82,    83,    83,    84,    84,    85,    86,    86,    87,
      87,    88,    88,    88,    88,    88,    88,    89,    89,    90,
      90,    90,    91,    92,    92,    92,    93,    93,    93,    94,
      94,    95,    95,    95,    95,    96,    96,    96,    96,    97,
      98,    99,    99,   100,   100,   101,   102,   103,   103,   103,
     103,   104,   104,   105,   105,   106,   107,   108,   108,   109,
     109,   109,   109,   109,   109,   109,   109,   109,   110,   110,
     110,   110,   111,   111,   111,   111,   111,   111,   111,   112,
     112,   113,   113,   113,   113,   113,   113,   113,   113,   113,
     114,   114,   115,   116,   117,   118,   118,   119,   120,   120,
     121,   122,   123,   123,   123,   124,   124,   125,   126,   126,
     126,   127,   127,   127,   128,   129,   129,   129,   129,   130,
     131,   131,   132,   132,   132,   132,   132,   132,   132,   132,
     132,   132,   132,   132,   132,   132,   132,   132,   132,   132,
     132,   132,   132,   132,   132,   132,   132,   132,   132,   132
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
       1,     1,     4,     4,     4,     4,     3,     5,     2,     3,
       2,     2,     1,     1,     1,    11,    11,     7,     7,     8,
       8,     9,     8,     9,     4,     5,     1,     1,     1,     3,
       5,     7,     2,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     2,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1
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
#line 301 "sintactico.y" /* yacc.c:1646  */
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
#line 1867 "parser.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 316 "sintactico.y" /* yacc.c:1646  */
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
#line 1884 "parser.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 332 "sintactico.y" /* yacc.c:1646  */
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
#line 1901 "parser.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 345 "sintactico.y" /* yacc.c:1646  */
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
#line 1917 "parser.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 360 "sintactico.y" /* yacc.c:1646  */
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
#line 1941 "parser.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 383 "sintactico.y" /* yacc.c:1646  */
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
#line 1959 "parser.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 397 "sintactico.y" /* yacc.c:1646  */
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
#line 1975 "parser.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 413 "sintactico.y" /* yacc.c:1646  */
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
#line 2007 "parser.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 441 "sintactico.y" /* yacc.c:1646  */
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
#line 2032 "parser.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 467 "sintactico.y" /* yacc.c:1646  */
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
#line 2049 "parser.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 480 "sintactico.y" /* yacc.c:1646  */
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
#line 2067 "parser.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 494 "sintactico.y" /* yacc.c:1646  */
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
#line 2085 "parser.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 508 "sintactico.y" /* yacc.c:1646  */
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
#line 2103 "parser.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 522 "sintactico.y" /* yacc.c:1646  */
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
#line 2121 "parser.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 536 "sintactico.y" /* yacc.c:1646  */
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
#line 2139 "parser.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 553 "sintactico.y" /* yacc.c:1646  */
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
#line 2160 "parser.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 570 "sintactico.y" /* yacc.c:1646  */
    {
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _EXTENDER *padre=new _EXTENDER("EXTENDER",tabla);
                        padre->nivel=2;
                        padre->nLinea=-1;

                        (yyval.VAL)->Padre=padre;
                }
#line 2174 "parser.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 584 "sintactico.y" /* yacc.c:1646  */
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
#line 2192 "parser.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 598 "sintactico.y" /* yacc.c:1646  */
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
#line 2209 "parser.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 611 "sintactico.y" /* yacc.c:1646  */
    {
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _LST_PARAMETROS *padre=new _LST_PARAMETROS("LST_PARAMETROS",tabla); 
                        padre->nivel=3;
                        padre->nLinea=-1;
                        (yyval.VAL)->Padre=padre;
                        /*vacio*/
                }
#line 2223 "parser.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 624 "sintactico.y" /* yacc.c:1646  */
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
#line 2240 "parser.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 641 "sintactico.y" /* yacc.c:1646  */
    {   
                        
                        (yyvsp[-2].VAL)->Padre->hijos.append((yyvsp[0].VAL)->Padre);

                        (yyval.VAL)->Padre=(yyvsp[-2].VAL)->Padre;
                }
#line 2251 "parser.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 648 "sintactico.y" /* yacc.c:1646  */
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
#line 2268 "parser.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 661 "sintactico.y" /* yacc.c:1646  */
    {
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _LST_VAL *padre=new _LST_VAL("LST_VAL",tabla); 
                        padre->nivel=3;
                        padre->nLinea=-1;
                        (yyval.VAL)->Padre=padre;
                        /*vacio*/
                }
#line 2282 "parser.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 675 "sintactico.y" /* yacc.c:1646  */
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
#line 2300 "parser.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 689 "sintactico.y" /* yacc.c:1646  */
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
#line 2317 "parser.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 702 "sintactico.y" /* yacc.c:1646  */
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
#line 2334 "parser.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 719 "sintactico.y" /* yacc.c:1646  */
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
#line 2351 "parser.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 732 "sintactico.y" /* yacc.c:1646  */
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
#line 2367 "parser.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 748 "sintactico.y" /* yacc.c:1646  */
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
#line 2383 "parser.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 760 "sintactico.y" /* yacc.c:1646  */
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
#line 2400 "parser.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 773 "sintactico.y" /* yacc.c:1646  */
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
#line 2417 "parser.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 786 "sintactico.y" /* yacc.c:1646  */
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
#line 2434 "parser.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 803 "sintactico.y" /* yacc.c:1646  */
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
#line 2460 "parser.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 825 "sintactico.y" /* yacc.c:1646  */
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
#line 2484 "parser.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 845 "sintactico.y" /* yacc.c:1646  */
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
#line 2510 "parser.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 867 "sintactico.y" /* yacc.c:1646  */
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
#line 2534 "parser.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 891 "sintactico.y" /* yacc.c:1646  */
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
#line 2554 "parser.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 910 "sintactico.y" /* yacc.c:1646  */
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
#line 2577 "parser.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 934 "sintactico.y" /* yacc.c:1646  */
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
#line 2595 "parser.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 948 "sintactico.y" /* yacc.c:1646  */
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
#line 2612 "parser.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 966 "sintactico.y" /* yacc.c:1646  */
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
#line 2631 "parser.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 981 "sintactico.y" /* yacc.c:1646  */
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
#line 2649 "parser.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 1000 "sintactico.y" /* yacc.c:1646  */
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
#line 2666 "parser.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 1017 "sintactico.y" /* yacc.c:1646  */
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
#line 2683 "parser.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 1035 "sintactico.y" /* yacc.c:1646  */
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
#line 2701 "parser.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 1049 "sintactico.y" /* yacc.c:1646  */
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
#line 2719 "parser.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 1063 "sintactico.y" /* yacc.c:1646  */
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
#line 2736 "parser.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 1076 "sintactico.y" /* yacc.c:1646  */
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
#line 2753 "parser.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 1094 "sintactico.y" /* yacc.c:1646  */
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
#line 2771 "parser.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 1108 "sintactico.y" /* yacc.c:1646  */
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
#line 2792 "parser.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 1128 "sintactico.y" /* yacc.c:1646  */
    {   
                        (yyvsp[-1].VAL)->Padre->hijos.append((yyvsp[0].VAL)->Padre);  


                        (yyval.VAL)=(yyvsp[-1].VAL);
                }
#line 2803 "parser.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 1135 "sintactico.y" /* yacc.c:1646  */
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
#line 2820 "parser.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 1151 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _PAR_CORCHETES_VACIOS *padre=new _PAR_CORCHETES_VACIOS("PAR_CORCHETES_VACIOS",tabla); 
                        padre->nivel=1;
                        padre->nLinea=nLinea;
                        (yyval.VAL)->Padre=padre;
                }
#line 2833 "parser.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 1163 "sintactico.y" /* yacc.c:1646  */
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
#line 2852 "parser.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 1181 "sintactico.y" /* yacc.c:1646  */
    {    
                        
                        
                        (yyvsp[-1].VAL)->Padre->hijos.append((yyvsp[0].VAL)->Padre);  


                        (yyval.VAL)=(yyvsp[-1].VAL);
                }
#line 2865 "parser.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 1190 "sintactico.y" /* yacc.c:1646  */
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
#line 2882 "parser.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 1207 "sintactico.y" /* yacc.c:1646  */
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
#line 2900 "parser.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 1221 "sintactico.y" /* yacc.c:1646  */
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
#line 2918 "parser.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 1235 "sintactico.y" /* yacc.c:1646  */
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
#line 2936 "parser.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 1249 "sintactico.y" /* yacc.c:1646  */
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
#line 2958 "parser.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 1267 "sintactico.y" /* yacc.c:1646  */
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
#line 2980 "parser.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 1285 "sintactico.y" /* yacc.c:1646  */
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
#line 3002 "parser.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 1303 "sintactico.y" /* yacc.c:1646  */
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
#line 3025 "parser.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 1322 "sintactico.y" /* yacc.c:1646  */
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
#line 3048 "parser.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 1341 "sintactico.y" /* yacc.c:1646  */
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
#line 3071 "parser.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 1364 "sintactico.y" /* yacc.c:1646  */
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
#line 3089 "parser.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 1378 "sintactico.y" /* yacc.c:1646  */
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
#line 3111 "parser.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 1397 "sintactico.y" /* yacc.c:1646  */
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
#line 3133 "parser.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 1415 "sintactico.y" /* yacc.c:1646  */
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
#line 3155 "parser.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 1438 "sintactico.y" /* yacc.c:1646  */
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
#line 3173 "parser.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 1452 "sintactico.y" /* yacc.c:1646  */
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
#line 3190 "parser.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 1465 "sintactico.y" /* yacc.c:1646  */
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
#line 3207 "parser.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 1478 "sintactico.y" /* yacc.c:1646  */
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
#line 3225 "parser.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 1492 "sintactico.y" /* yacc.c:1646  */
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
#line 3243 "parser.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 1506 "sintactico.y" /* yacc.c:1646  */
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
#line 3261 "parser.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 1520 "sintactico.y" /* yacc.c:1646  */
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
#line 3279 "parser.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 1537 "sintactico.y" /* yacc.c:1646  */
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
#line 3298 "parser.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 1552 "sintactico.y" /* yacc.c:1646  */
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
#line 3318 "parser.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 1573 "sintactico.y" /* yacc.c:1646  */
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
#line 3335 "parser.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 1586 "sintactico.y" /* yacc.c:1646  */
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
#line 3352 "parser.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 1599 "sintactico.y" /* yacc.c:1646  */
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
#line 3369 "parser.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 1613 "sintactico.y" /* yacc.c:1646  */
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
#line 3386 "parser.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 1626 "sintactico.y" /* yacc.c:1646  */
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
#line 3403 "parser.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 1640 "sintactico.y" /* yacc.c:1646  */
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
#line 3420 "parser.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 1653 "sintactico.y" /* yacc.c:1646  */
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
#line 3437 "parser.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 1666 "sintactico.y" /* yacc.c:1646  */
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
#line 3454 "parser.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 1679 "sintactico.y" /* yacc.c:1646  */
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
#line 3471 "parser.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 1695 "sintactico.y" /* yacc.c:1646  */
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
#line 3488 "parser.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 1708 "sintactico.y" /* yacc.c:1646  */
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
#line 3505 "parser.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 1724 "sintactico.y" /* yacc.c:1646  */
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
#line 3526 "parser.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 1745 "sintactico.y" /* yacc.c:1646  */
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
#line 3547 "parser.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 1766 "sintactico.y" /* yacc.c:1646  */
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
#line 3568 "parser.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 1787 "sintactico.y" /* yacc.c:1646  */
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
#line 3589 "parser.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 1804 "sintactico.y" /* yacc.c:1646  */
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
#line 3609 "parser.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 1824 "sintactico.y" /* yacc.c:1646  */
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
#line 3627 "parser.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 1841 "sintactico.y" /* yacc.c:1646  */
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
#line 3646 "parser.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 1856 "sintactico.y" /* yacc.c:1646  */
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
#line 3667 "parser.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 1876 "sintactico.y" /* yacc.c:1646  */
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
#line 3684 "parser.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 1892 "sintactico.y" /* yacc.c:1646  */
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
#line 3701 "parser.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 1909 "sintactico.y" /* yacc.c:1646  */
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
#line 3718 "parser.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 1922 "sintactico.y" /* yacc.c:1646  */
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
#line 3735 "parser.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 1935 "sintactico.y" /* yacc.c:1646  */
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
#line 3752 "parser.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 1954 "sintactico.y" /* yacc.c:1646  */
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
#line 3776 "parser.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 1974 "sintactico.y" /* yacc.c:1646  */
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
#line 3800 "parser.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 1998 "sintactico.y" /* yacc.c:1646  */
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
#line 3822 "parser.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 2019 "sintactico.y" /* yacc.c:1646  */
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
#line 3844 "parser.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 2037 "sintactico.y" /* yacc.c:1646  */
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
#line 3869 "parser.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 2058 "sintactico.y" /* yacc.c:1646  */
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
#line 3892 "parser.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 2080 "sintactico.y" /* yacc.c:1646  */
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
#line 3915 "parser.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 2099 "sintactico.y" /* yacc.c:1646  */
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
#line 3937 "parser.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 2117 "sintactico.y" /* yacc.c:1646  */
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
#line 3960 "parser.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 2139 "sintactico.y" /* yacc.c:1646  */
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
#line 3981 "parser.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 2160 "sintactico.y" /* yacc.c:1646  */
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
#line 4002 "parser.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 2194 "sintactico.y" /* yacc.c:1646  */
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
#line 4019 "parser.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 2207 "sintactico.y" /* yacc.c:1646  */
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
#line 4036 "parser.cpp" /* yacc.c:1646  */
    break;

  case 118:
#line 2220 "sintactico.y" /* yacc.c:1646  */
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
#line 4053 "parser.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 2237 "sintactico.y" /* yacc.c:1646  */
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
#line 4070 "parser.cpp" /* yacc.c:1646  */
    break;

  case 120:
#line 2253 "sintactico.y" /* yacc.c:1646  */
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
#line 4094 "parser.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 2273 "sintactico.y" /* yacc.c:1646  */
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
#line 4118 "parser.cpp" /* yacc.c:1646  */
    break;

  case 122:
#line 2296 "sintactico.y" /* yacc.c:1646  */
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
#line 4139 "parser.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 2314 "sintactico.y" /* yacc.c:1646  */
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
#line 4161 "parser.cpp" /* yacc.c:1646  */
    break;

  case 124:
#line 2332 "sintactico.y" /* yacc.c:1646  */
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
#line 4183 "parser.cpp" /* yacc.c:1646  */
    break;

  case 125:
#line 2350 "sintactico.y" /* yacc.c:1646  */
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
#line 4205 "parser.cpp" /* yacc.c:1646  */
    break;

  case 126:
#line 2368 "sintactico.y" /* yacc.c:1646  */
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
#line 4228 "parser.cpp" /* yacc.c:1646  */
    break;

  case 127:
#line 2387 "sintactico.y" /* yacc.c:1646  */
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
#line 4251 "parser.cpp" /* yacc.c:1646  */
    break;

  case 128:
#line 2407 "sintactico.y" /* yacc.c:1646  */
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
#line 4274 "parser.cpp" /* yacc.c:1646  */
    break;

  case 129:
#line 2429 "sintactico.y" /* yacc.c:1646  */
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
#line 4297 "parser.cpp" /* yacc.c:1646  */
    break;

  case 130:
#line 2448 "sintactico.y" /* yacc.c:1646  */
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
#line 4320 "parser.cpp" /* yacc.c:1646  */
    break;

  case 131:
#line 2467 "sintactico.y" /* yacc.c:1646  */
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
#line 4342 "parser.cpp" /* yacc.c:1646  */
    break;

  case 132:
#line 2485 "sintactico.y" /* yacc.c:1646  */
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
#line 4365 "parser.cpp" /* yacc.c:1646  */
    break;

  case 133:
#line 2504 "sintactico.y" /* yacc.c:1646  */
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
#line 4388 "parser.cpp" /* yacc.c:1646  */
    break;

  case 134:
#line 2523 "sintactico.y" /* yacc.c:1646  */
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
#line 4411 "parser.cpp" /* yacc.c:1646  */
    break;

  case 135:
#line 2542 "sintactico.y" /* yacc.c:1646  */
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
#line 4434 "parser.cpp" /* yacc.c:1646  */
    break;

  case 136:
#line 2563 "sintactico.y" /* yacc.c:1646  */
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
#line 4457 "parser.cpp" /* yacc.c:1646  */
    break;

  case 137:
#line 2582 "sintactico.y" /* yacc.c:1646  */
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
#line 4479 "parser.cpp" /* yacc.c:1646  */
    break;

  case 138:
#line 2602 "sintactico.y" /* yacc.c:1646  */
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
#line 4500 "parser.cpp" /* yacc.c:1646  */
    break;

  case 139:
#line 2620 "sintactico.y" /* yacc.c:1646  */
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
#line 4517 "parser.cpp" /* yacc.c:1646  */
    break;

  case 140:
#line 2633 "sintactico.y" /* yacc.c:1646  */
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
#line 4536 "parser.cpp" /* yacc.c:1646  */
    break;

  case 141:
#line 2648 "sintactico.y" /* yacc.c:1646  */
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
#line 4553 "parser.cpp" /* yacc.c:1646  */
    break;

  case 142:
#line 2661 "sintactico.y" /* yacc.c:1646  */
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
#line 4571 "parser.cpp" /* yacc.c:1646  */
    break;

  case 143:
#line 2675 "sintactico.y" /* yacc.c:1646  */
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
#line 4589 "parser.cpp" /* yacc.c:1646  */
    break;

  case 144:
#line 2690 "sintactico.y" /* yacc.c:1646  */
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
#line 4607 "parser.cpp" /* yacc.c:1646  */
    break;

  case 145:
#line 2704 "sintactico.y" /* yacc.c:1646  */
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
#line 4625 "parser.cpp" /* yacc.c:1646  */
    break;

  case 146:
#line 2718 "sintactico.y" /* yacc.c:1646  */
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
#line 4643 "parser.cpp" /* yacc.c:1646  */
    break;

  case 147:
#line 2732 "sintactico.y" /* yacc.c:1646  */
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
#line 4660 "parser.cpp" /* yacc.c:1646  */
    break;

  case 148:
#line 2745 "sintactico.y" /* yacc.c:1646  */
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
#line 4677 "parser.cpp" /* yacc.c:1646  */
    break;

  case 149:
#line 2758 "sintactico.y" /* yacc.c:1646  */
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
#line 4694 "parser.cpp" /* yacc.c:1646  */
    break;


#line 4698 "parser.cpp" /* yacc.c:1646  */
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
