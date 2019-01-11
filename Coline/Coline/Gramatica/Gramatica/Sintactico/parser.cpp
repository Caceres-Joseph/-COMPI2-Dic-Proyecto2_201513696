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
    tSuper = 312,
    tNada = 313,
    tVacio = 314,
    tNulo = 315,
    tEntero = 316,
    tCaracter = 317,
    tDecimal = 318,
    tBooleano = 319,
    tPublico = 320,
    tPrivado = 321,
    tProtegido = 322,
    valBoolean = 323,
    valId = 324,
    valNumero = 325,
    valDecimal = 326,
    valCaracter = 327,
    valCadena = 328
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

#line 243 "parser.cpp" /* yacc.c:355  */
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

#line 274 "parser.cpp" /* yacc.c:358  */

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
#define YYLAST   965

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  74
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  46
/* YYNRULES -- Number of rules.  */
#define YYNRULES  132
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  285

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   328

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
      65,    66,    67,    68,    69,    70,    71,    72,    73
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   289,   289,   303,   318,   330,   344,   366,   379,   394,
     421,   446,   458,   471,   484,   497,   510,   526,   543,   555,
     568,   581,   592,   608,   615,   628,   640,   653,   665,   681,
     693,   708,   719,   731,   743,   759,   780,   799,   820,   843,
     861,   914,   932,   946,   964,   980,   997,  1010,  1023,  1035,
    1052,  1065,  1084,  1091,  1106,  1117,  1134,  1143,  1159,  1172,
    1185,  1198,  1215,  1232,  1249,  1267,  1285,  1307,  1320,  1338,
    1355,  1377,  1390,  1402,  1417,  1430,  1447,  1459,  1471,  1484,
    1496,  1509,  1521,  1533,  1545,  1560,  1576,  1588,  1603,  1619,
    1633,  1652,  1667,  1683,  1695,  1707,  1725,  1744,  1767,  1787,
    1804,  1824,  1845,  1863,  1880,  1901,  1952,  1964,  1981,  1998,
    2015,  2032,  2049,  2067,  2086,  2107,  2125,  2143,  2161,  2179,
    2197,  2215,  2235,  2253,  2272,  2289,  2301,  2315,  2328,  2341,
    2355,  2368,  2381
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
  "sAbreParent", "sCierraParent", "sAbreLlave", "sCierraLlave",
  "sAbreCorchete", "sCierraCorchete", "sPunto", "sComa", "sPuntoComa",
  "sArroba", "sIgual", "sCierraInterrogante", "sDosPuntos", "tImport",
  "tClase", "tExtender", "tPadre", "tPrincipal", "tOverride", "tNuevo",
  "tEste", "tImprimir", "tRetorno", "tSi", "tSino", "tCaso", "tDe",
  "tDefecto", "tRomper", "tMientras", "tContinuar", "tPara", "tHacer",
  "tRepetir", "tHasta", "tMensaje", "tSubCad", "tPosCad", "tRandom",
  "tSuper", "tNada", "tVacio", "tNulo", "tEntero", "tCaracter", "tDecimal",
  "tBooleano", "tPublico", "tPrivado", "tProtegido", "valBoolean", "valId",
  "valNumero", "valDecimal", "valCaracter", "valCadena", "$accept", "S",
  "LST_IMPORT", "IMPORT", "LST_CLASE", "CLASE", "TIPO", "EXTENDER",
  "LST_PARAMETROS", "PARAMETRO", "LST_VAL", "VISIBILIDAD", "CP_CLASE",
  "CUERPO_CLASE", "METODO", "MAIN", "CONSTRUCTOR",
  "DECLARAR_VARIABLE_GLOBAL", "DECLARAR_VARIABLE_SINVISIBI", "VAL",
  "LST_LLAVES_VAL", "LLAVES_VAL_P", "VAR_ARREGLO", "LST_CORCHETES",
  "PAR_CORCHETES_VACIOS", "PAR_CORCHETES_VAL", "LST_CORCHETES_VAL",
  "ID_VAR_FUNC", "LST_PUNTOSP", "ASIG_VALOR", "LST_CUERPO", "CUERPO",
  "FUNCIONES_NATIVAS", "IMPRIMIR", "SUPER", "RETORNO", "ROMPER",
  "CONTINUAR", "SENTENCIAS", "FOR", "WHILE", "SI", "SINO_SI", "SINO",
  "VALOR", "E", YY_NULLPTR
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
     325,   326,   327,   328
};
# endif

#define YYPACT_NINF -141

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-141)))

#define YYTABLE_NINF -16

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     114,    -7,   -47,    23,   114,  -141,     0,  -141,   -44,    -4,
    -141,  -141,     0,  -141,    10,   -18,  -141,  -141,  -141,    34,
      41,    13,  -141,   698,    69,    65,    96,  -141,  -141,  -141,
    -141,  -141,   101,   -19,    64,   665,  -141,  -141,  -141,  -141,
     112,   698,   117,   129,    64,   130,   137,   -17,  -141,  -141,
     -10,  -141,  -141,  -141,  -141,   680,  -141,   138,   105,     8,
    -141,  -141,    64,   168,  -141,    17,   160,    -9,  -141,   730,
     167,  -141,   183,    64,    55,    64,    64,   262,  -141,   167,
     245,  -141,   190,   193,   202,   201,   206,   199,   208,   203,
     210,   216,   -12,   105,   209,    57,   215,   298,  -141,   217,
    -141,  -141,  -141,  -141,  -141,  -141,  -141,  -141,  -141,   730,
    -141,   222,    86,    99,   262,   262,   262,  -141,  -141,  -141,
      31,  -141,  -141,  -141,  -141,   221,   836,  -141,   245,  -141,
    -141,   922,    64,   179,   218,  -141,   223,   262,  -141,   262,
    -141,    78,   245,   245,   167,  -141,   239,   240,   185,  -141,
    -141,  -141,  -141,  -141,  -141,  -141,   330,   730,   232,   235,
     948,   180,   854,   262,   262,   262,   262,   262,   262,   262,
     262,   262,   262,   262,   262,   262,   262,  -141,  -141,    46,
     922,   131,    88,  -141,   241,  -141,   871,   888,   236,   108,
     238,   141,  -141,   143,  -141,  -141,   200,  -141,   362,   730,
     730,  -141,   936,   948,   280,   280,   280,   280,   280,   280,
     180,   180,   249,   249,   249,  -141,  -141,   245,   248,   245,
     167,  -141,   257,   259,   262,   262,   255,   245,   167,   245,
     167,  -141,   394,   426,  -141,   922,   730,   146,   730,   730,
     794,   815,  -141,  -141,   167,   153,  -141,  -141,   458,   167,
     490,   522,   -21,   -21,   167,  -141,   167,   242,  -141,   263,
     266,   167,     4,  -141,  -141,   278,   279,   730,   283,   730,
     730,   554,   262,   586,   618,  -141,   905,  -141,  -141,   282,
     730,   650,   242,  -141,  -141
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
       0,     0,     0,     0,    21,     0,     0,     0,    53,    15,
       0,    41,     9,    29,    32,     0,     6,     0,     0,     0,
      20,    54,    21,     0,    52,    50,    43,     0,    10,     0,
      50,    22,     0,     0,     0,    21,    21,     0,    57,    51,
       0,    42,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    60,     0,     0,     0,     0,     0,    75,     0,
      85,    80,    83,    81,    82,    79,    95,    94,    93,     0,
      19,     0,     0,     0,     0,     0,     0,   132,   131,   126,
      60,   130,   129,   128,   127,   125,     0,    56,     0,   106,
      44,   107,    21,     0,     0,    89,     0,     0,    91,     0,
      92,     0,    25,    25,    64,    76,     0,     0,     0,    77,
      71,    58,    78,    39,    74,    84,     0,     0,     0,     0,
     123,   108,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    55,    49,     0,
      48,     0,    59,    87,     0,    90,     0,     0,     0,     0,
       0,     0,    24,     0,    72,    73,    67,    40,     0,     0,
       0,   124,   122,   121,   119,   117,   120,   118,   115,   116,
     112,   113,   111,   110,   114,   109,    45,     0,     0,    25,
      63,    86,     0,     0,     0,     0,     0,     0,    62,    25,
      69,    36,     0,     0,    47,    46,     0,     0,     0,     0,
       0,     0,    88,    23,    66,     0,    38,    35,     0,    61,
       0,     0,     0,     0,    68,    37,    65,    99,    98,     0,
       0,    70,     0,   100,   101,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   105,     0,    96,    97,     0,
       0,     0,   103,   102,   104
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -141,  -141,  -141,   300,   302,   181,     3,   287,   -55,   237,
    -112,   299,   268,   -26,  -141,  -141,  -141,  -141,   -32,   246,
    -113,  -141,   253,   271,   -31,   -71,   -74,   -69,  -141,  -140,
     -23,   -41,  -141,  -141,  -141,  -141,  -141,  -141,  -141,  -141,
    -141,  -141,    42,    43,   -66,   -73
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,     5,     6,     7,    93,    19,    59,    60,
     191,    34,    35,    36,    37,    38,    39,    40,    94,   150,
     129,   179,    66,    47,    48,    78,    79,   125,   151,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   263,   264,   192,   131
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      95,   190,    51,    45,   126,    45,   143,    74,   127,    53,
      77,     8,    45,    45,   130,   178,    64,    83,   144,   136,
     112,   113,     9,    10,   267,    14,    33,    72,    95,    53,
      15,   193,     2,    73,    21,    76,    64,    50,    33,    77,
      95,   160,   161,   162,    33,   268,   144,    58,   120,   143,
      46,    22,    63,    77,    23,   180,   154,   -15,    33,    65,
      82,    16,    17,    18,   186,    58,   187,   216,   184,   146,
     147,   217,   189,   127,   111,    15,    58,   181,    58,    58,
      73,   148,    25,   149,    42,    80,   156,    95,    95,    41,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   234,   158,   219,   237,   220,   188,
      77,    73,   259,   260,    43,   154,    83,   245,   159,    44,
     146,   147,   230,    27,    73,    28,    29,    30,    31,    95,
      95,    95,   148,    49,   198,    58,    80,    27,    54,    28,
      29,    30,    31,    56,   235,     1,     2,    92,    57,   127,
     218,   240,   241,    61,   244,    62,    73,   154,    69,   127,
     226,   243,   228,    95,    95,   249,   227,    95,   227,    95,
      95,   227,   254,   127,    70,   256,   232,   233,   227,    95,
     261,    95,    95,   189,   189,   127,    75,    13,    80,    77,
     127,   154,   154,    13,   173,   174,   175,   176,    95,   276,
      95,    95,    95,   109,    95,    95,   114,   154,   132,   154,
     154,    95,    95,   248,   115,   250,   251,   133,   229,   116,
     134,   128,    77,   114,   137,   138,   139,   135,   141,   140,
     154,   115,   154,   154,   142,   145,   116,   183,   128,    83,
     154,   152,   157,   155,   271,   148,   273,   274,   182,   185,
     114,   194,   199,   195,   196,   200,    83,   281,   115,   117,
     221,   118,   224,   116,   225,   128,   176,   114,   236,   119,
     120,   121,   122,   123,   124,   115,   117,   238,   118,   239,
     116,   242,   265,    83,   262,   266,   119,   120,   121,   122,
     123,   124,   171,   172,   173,   174,   175,   176,   269,   270,
      83,   272,   280,   117,    11,   118,    12,    24,    20,    55,
     110,    71,    81,   119,   120,   121,   122,   123,   124,   153,
     117,    67,   118,     0,   283,   284,     0,     0,     0,     0,
     119,   120,   121,   122,   123,   124,    83,    84,    85,    86,
       0,     0,     0,     0,    87,    88,    89,    90,     0,     0,
       0,   197,     0,     0,     0,    91,     0,    27,     0,    28,
      29,    30,    31,     0,     0,     0,     0,    92,    83,    84,
      85,    86,     0,     0,     0,     0,    87,    88,    89,    90,
       0,     0,     0,   231,     0,     0,     0,    91,     0,    27,
       0,    28,    29,    30,    31,     0,     0,     0,     0,    92,
      83,    84,    85,    86,     0,     0,     0,     0,    87,    88,
      89,    90,     0,     0,     0,   246,     0,     0,     0,    91,
       0,    27,     0,    28,    29,    30,    31,     0,     0,     0,
       0,    92,    83,    84,    85,    86,     0,     0,     0,     0,
      87,    88,    89,    90,     0,     0,     0,   247,     0,     0,
       0,    91,     0,    27,     0,    28,    29,    30,    31,     0,
       0,     0,     0,    92,    83,    84,    85,    86,     0,     0,
       0,     0,    87,    88,    89,    90,     0,     0,     0,   255,
       0,     0,     0,    91,     0,    27,     0,    28,    29,    30,
      31,     0,     0,     0,     0,    92,    83,    84,    85,    86,
       0,     0,     0,     0,    87,    88,    89,    90,     0,     0,
       0,   257,     0,     0,     0,    91,     0,    27,     0,    28,
      29,    30,    31,     0,     0,     0,     0,    92,    83,    84,
      85,    86,     0,     0,     0,     0,    87,    88,    89,    90,
       0,     0,     0,   258,     0,     0,     0,    91,     0,    27,
       0,    28,    29,    30,    31,     0,     0,     0,     0,    92,
      83,    84,    85,    86,     0,     0,     0,     0,    87,    88,
      89,    90,     0,     0,     0,   275,     0,     0,     0,    91,
       0,    27,     0,    28,    29,    30,    31,     0,     0,     0,
       0,    92,    83,    84,    85,    86,     0,     0,     0,     0,
      87,    88,    89,    90,     0,     0,     0,   277,     0,     0,
       0,    91,     0,    27,     0,    28,    29,    30,    31,     0,
       0,     0,     0,    92,    83,    84,    85,    86,     0,     0,
       0,     0,    87,    88,    89,    90,     0,     0,     0,   278,
       0,     0,     0,    91,     0,    27,     0,    28,    29,    30,
      31,     0,     0,     0,     0,    92,    83,    84,    85,    86,
       0,     0,     0,     0,    87,    88,    89,    90,     0,     0,
       0,   282,     0,     0,     0,    91,     0,    27,     0,    28,
      29,    30,    31,     0,     0,     0,    52,    92,    83,    84,
      85,    86,     0,     0,     0,     0,    87,    88,    89,    90,
      26,    68,     0,     0,     0,     0,     0,    91,     0,    27,
       0,    28,    29,    30,    31,    26,     0,     0,     0,    92,
       0,     0,     0,     0,    27,     0,    28,    29,    30,    31,
      16,    17,    18,    26,    32,     0,     0,     0,     0,    27,
       0,    28,    29,    30,    31,    16,    17,    18,     0,    32,
       0,     0,     0,     0,     0,     0,     0,    27,     0,    28,
      29,    30,    31,    16,    17,    18,     0,    32,    83,    84,
      85,    86,     0,     0,     0,     0,    87,    88,    89,    90,
       0,     0,     0,     0,     0,     0,     0,    91,     0,    27,
       0,    28,    29,    30,    31,     0,     0,   163,   164,    92,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,     0,     0,     0,     0,     0,     0,   163,   164,
     252,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,     0,     0,     0,     0,     0,     0,   163,
     164,   253,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,     0,     0,     0,   163,   164,   177,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,     0,   201,   163,   164,     0,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,     0,
     222,   163,   164,     0,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,     0,   223,   163,   164,
       0,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,     0,   279,   163,   164,     0,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     164,     0,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176
};

static const yytype_int16 yycheck[] =
{
      69,   141,    34,    22,    77,    22,    18,    62,    79,    35,
      22,    18,    22,    22,    80,   128,    47,    38,    92,    85,
      75,    76,    69,     0,    20,    69,    23,    19,    97,    55,
      34,   143,    32,    25,    24,    18,    67,    34,    35,    22,
     109,   114,   115,   116,    41,    41,   120,    44,    69,    18,
      69,    69,    69,    22,    20,   128,    97,    69,    55,    69,
      69,    65,    66,    67,   137,    62,   139,    21,   134,    12,
      13,    25,   141,   144,    19,    34,    73,   132,    75,    76,
      25,    24,    69,    26,    19,    28,   109,   156,   157,    20,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   217,    19,    18,   219,   182,   141,
      22,    25,   252,   253,    18,   156,    38,   229,    19,    18,
      12,    13,   196,    59,    25,    61,    62,    63,    64,   198,
     199,   200,    24,    69,   157,   132,    28,    59,    26,    61,
      62,    63,    64,    26,   217,    31,    32,    69,    19,   220,
      19,   224,   225,    23,   228,    18,    25,   198,    20,   230,
      19,   227,    19,   232,   233,    19,    25,   236,    25,   238,
     239,    25,    19,   244,    69,   249,   199,   200,    25,   248,
     254,   250,   251,   252,   253,   256,    18,     6,    28,    22,
     261,   232,   233,    12,    14,    15,    16,    17,   267,   272,
     269,   270,   271,    20,   273,   274,     5,   248,    18,   250,
     251,   280,   281,   236,    13,   238,   239,    24,    18,    18,
      18,    20,    22,     5,    18,    26,    18,    26,    18,    26,
     271,    13,   273,   274,    18,    26,    18,    19,    20,    38,
     281,    26,    20,    26,   267,    24,   269,   270,    69,    26,
       5,    12,    20,    13,    69,    20,    38,   280,    13,    58,
      19,    60,    26,    18,    26,    20,    17,     5,    20,    68,
      69,    70,    71,    72,    73,    13,    58,    20,    60,    20,
      18,    26,    19,    38,    42,    19,    68,    69,    70,    71,
      72,    73,    12,    13,    14,    15,    16,    17,    20,    20,
      38,    18,    20,    58,     4,    60,     4,    20,     9,    41,
      73,    58,    66,    68,    69,    70,    71,    72,    73,    21,
      58,    50,    60,    -1,   282,   282,    -1,    -1,    -1,    -1,
      68,    69,    70,    71,    72,    73,    38,    39,    40,    41,
      -1,    -1,    -1,    -1,    46,    47,    48,    49,    -1,    -1,
      -1,    21,    -1,    -1,    -1,    57,    -1,    59,    -1,    61,
      62,    63,    64,    -1,    -1,    -1,    -1,    69,    38,    39,
      40,    41,    -1,    -1,    -1,    -1,    46,    47,    48,    49,
      -1,    -1,    -1,    21,    -1,    -1,    -1,    57,    -1,    59,
      -1,    61,    62,    63,    64,    -1,    -1,    -1,    -1,    69,
      38,    39,    40,    41,    -1,    -1,    -1,    -1,    46,    47,
      48,    49,    -1,    -1,    -1,    21,    -1,    -1,    -1,    57,
      -1,    59,    -1,    61,    62,    63,    64,    -1,    -1,    -1,
      -1,    69,    38,    39,    40,    41,    -1,    -1,    -1,    -1,
      46,    47,    48,    49,    -1,    -1,    -1,    21,    -1,    -1,
      -1,    57,    -1,    59,    -1,    61,    62,    63,    64,    -1,
      -1,    -1,    -1,    69,    38,    39,    40,    41,    -1,    -1,
      -1,    -1,    46,    47,    48,    49,    -1,    -1,    -1,    21,
      -1,    -1,    -1,    57,    -1,    59,    -1,    61,    62,    63,
      64,    -1,    -1,    -1,    -1,    69,    38,    39,    40,    41,
      -1,    -1,    -1,    -1,    46,    47,    48,    49,    -1,    -1,
      -1,    21,    -1,    -1,    -1,    57,    -1,    59,    -1,    61,
      62,    63,    64,    -1,    -1,    -1,    -1,    69,    38,    39,
      40,    41,    -1,    -1,    -1,    -1,    46,    47,    48,    49,
      -1,    -1,    -1,    21,    -1,    -1,    -1,    57,    -1,    59,
      -1,    61,    62,    63,    64,    -1,    -1,    -1,    -1,    69,
      38,    39,    40,    41,    -1,    -1,    -1,    -1,    46,    47,
      48,    49,    -1,    -1,    -1,    21,    -1,    -1,    -1,    57,
      -1,    59,    -1,    61,    62,    63,    64,    -1,    -1,    -1,
      -1,    69,    38,    39,    40,    41,    -1,    -1,    -1,    -1,
      46,    47,    48,    49,    -1,    -1,    -1,    21,    -1,    -1,
      -1,    57,    -1,    59,    -1,    61,    62,    63,    64,    -1,
      -1,    -1,    -1,    69,    38,    39,    40,    41,    -1,    -1,
      -1,    -1,    46,    47,    48,    49,    -1,    -1,    -1,    21,
      -1,    -1,    -1,    57,    -1,    59,    -1,    61,    62,    63,
      64,    -1,    -1,    -1,    -1,    69,    38,    39,    40,    41,
      -1,    -1,    -1,    -1,    46,    47,    48,    49,    -1,    -1,
      -1,    21,    -1,    -1,    -1,    57,    -1,    59,    -1,    61,
      62,    63,    64,    -1,    -1,    -1,    21,    69,    38,    39,
      40,    41,    -1,    -1,    -1,    -1,    46,    47,    48,    49,
      35,    21,    -1,    -1,    -1,    -1,    -1,    57,    -1,    59,
      -1,    61,    62,    63,    64,    35,    -1,    -1,    -1,    69,
      -1,    -1,    -1,    -1,    59,    -1,    61,    62,    63,    64,
      65,    66,    67,    35,    69,    -1,    -1,    -1,    -1,    59,
      -1,    61,    62,    63,    64,    65,    66,    67,    -1,    69,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    59,    -1,    61,
      62,    63,    64,    65,    66,    67,    -1,    69,    38,    39,
      40,    41,    -1,    -1,    -1,    -1,    46,    47,    48,    49,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,    -1,    59,
      -1,    61,    62,    63,    64,    -1,    -1,     3,     4,    69,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
      26,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,    26,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    -1,    -1,    -1,     3,     4,    23,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    -1,    19,     3,     4,    -1,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    -1,
      19,     3,     4,    -1,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    -1,    19,     3,     4,
      -1,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    -1,    19,     3,     4,    -1,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
       4,    -1,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    31,    32,    75,    76,    77,    78,    79,    18,    69,
       0,    77,    78,    79,    69,    34,    65,    66,    67,    81,
      85,    24,    69,    20,    81,    69,    35,    59,    61,    62,
      63,    64,    69,    80,    85,    86,    87,    88,    89,    90,
      91,    20,    19,    18,    18,    22,    69,    97,    98,    69,
      80,    92,    21,    87,    26,    86,    26,    19,    80,    82,
      83,    23,    18,    69,    98,    69,    96,    97,    21,    20,
      69,    96,    19,    25,    82,    18,    18,    22,    99,   100,
      28,    93,    69,    38,    39,    40,    41,    46,    47,    48,
      49,    57,    69,    80,    92,   101,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,    20,
      83,    19,    82,    82,     5,    13,    18,    58,    60,    68,
      69,    70,    71,    72,    73,   101,   119,    99,    20,    94,
     118,   119,    18,    24,    18,    26,   118,    18,    26,    18,
      26,    18,    18,    18,   100,    26,    12,    13,    24,    26,
      93,   102,    26,    21,   105,    26,   104,    20,    19,    19,
     119,   119,   119,     3,     4,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    23,    94,    95,
     119,    82,    69,    19,   118,    26,   119,   119,    92,   101,
     103,    84,   118,    84,    12,    13,    69,    21,   104,    20,
      20,    19,   119,   119,   119,   119,   119,   119,   119,   119,
     119,   119,   119,   119,   119,   119,    21,    25,    19,    18,
     100,    19,    19,    19,    26,    26,    19,    25,    19,    18,
     100,    21,   104,   104,    94,   119,    20,    84,    20,    20,
     119,   119,    26,   118,   100,    84,    21,    21,   104,    19,
     104,   104,    26,    26,    19,    21,   100,    21,    21,   103,
     103,   100,    42,   116,   117,    19,    19,    20,    41,    20,
      20,   104,    18,   104,   104,    21,   119,    21,    21,    19,
      20,   104,    21,   116,   117
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    74,    75,    75,    76,    76,    77,    78,    78,    79,
      79,    80,    80,    80,    80,    80,    80,    81,    81,    82,
      82,    82,    83,    84,    84,    84,    85,    85,    85,    86,
      86,    87,    87,    87,    87,    88,    88,    88,    88,    89,
      90,    91,    92,    92,    93,    94,    95,    95,    95,    95,
      96,    96,    97,    97,    98,    99,   100,   100,   101,   101,
     101,   101,   101,   101,   101,   101,   101,   102,   102,   102,
     102,   103,   103,   103,   104,   104,   105,   105,   105,   105,
     105,   105,   105,   105,   105,   106,   107,   107,   108,   109,
     109,   110,   111,   112,   112,   112,   113,   113,   114,   115,
     115,   115,   116,   116,   116,   117,   118,   118,   119,   119,
     119,   119,   119,   119,   119,   119,   119,   119,   119,   119,
     119,   119,   119,   119,   119,   119,   119,   119,   119,   119,
     119,   119,   119
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     2,     1,     7,     2,     1,     6,
       7,     1,     1,     1,     1,     1,     1,     2,     0,     3,
       1,     0,     2,     3,     1,     0,     1,     1,     1,     2,
       1,     1,     2,     1,     1,     9,     8,    10,     9,     6,
       7,     2,     3,     2,     2,     3,     3,     3,     1,     1,
       1,     2,     2,     1,     2,     3,     2,     1,     2,     3,
       1,     6,     4,     4,     2,     7,     5,     2,     5,     3,
       6,     2,     3,     3,     2,     1,     2,     2,     2,     1,
       1,     1,     1,     1,     2,     1,     4,     3,     5,     2,
       3,     2,     2,     1,     1,     1,    11,    11,     7,     7,
       8,     8,     9,     8,     9,     4,     1,     1,     2,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     2,     3,     1,     1,     1,     1,     1,
       1,     1,     1
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
#line 290 "sintactico.y" /* yacc.c:1646  */
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
#line 1804 "parser.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 304 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _S *padre=new _S("S",tabla); 
                        padre->nivel=2;

                                //hijos
                                padre->hijos.append((yyvsp[0].VAL)->Padre);

                        raiz->hijos.append(padre);
                }
#line 1820 "parser.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 319 "sintactico.y" /* yacc.c:1646  */
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
#line 1836 "parser.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 331 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _LST_IMPORT *padre=new _LST_IMPORT("LST_IMPORT",tabla); 
                        padre->nivel=2;
                                //hijos
                                padre->hijos.append((yyvsp[0].VAL)->Padre);

                        (yyval.VAL)->Padre=padre;
                }
#line 1851 "parser.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 345 "sintactico.y" /* yacc.c:1646  */
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
#line 1874 "parser.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 367 "sintactico.y" /* yacc.c:1646  */
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
#line 1891 "parser.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 380 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _LST_CLASE *padre=new _LST_CLASE("LST_CLASE",tabla); 
                        padre->nivel=2;
                                //hijos
                                padre->hijos.append((yyvsp[0].VAL)->Padre);

                        (yyval.VAL)->Padre=padre;
                }
#line 1906 "parser.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 395 "sintactico.y" /* yacc.c:1646  */
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
#line 1937 "parser.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 422 "sintactico.y" /* yacc.c:1646  */
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
#line 1961 "parser.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 447 "sintactico.y" /* yacc.c:1646  */
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
#line 1977 "parser.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 459 "sintactico.y" /* yacc.c:1646  */
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
#line 1994 "parser.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 472 "sintactico.y" /* yacc.c:1646  */
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
#line 2011 "parser.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 485 "sintactico.y" /* yacc.c:1646  */
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
#line 2028 "parser.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 498 "sintactico.y" /* yacc.c:1646  */
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
#line 2045 "parser.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 511 "sintactico.y" /* yacc.c:1646  */
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
#line 2062 "parser.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 527 "sintactico.y" /* yacc.c:1646  */
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
#line 2082 "parser.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 543 "sintactico.y" /* yacc.c:1646  */
    {
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _EXTENDER *padre=new _EXTENDER("EXTENDER",tabla);
                        padre->nivel=2;

                        (yyval.VAL)->Padre=padre;
                }
#line 2095 "parser.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 556 "sintactico.y" /* yacc.c:1646  */
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
#line 2112 "parser.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 569 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _LST_PARAMETROS *padre=new _LST_PARAMETROS("LST_PARAMETROS",tabla); 
                        padre->nivel=2;

                                //hijos
                                padre->hijos.append((yyvsp[0].VAL)->Padre);

                        (yyval.VAL)->Padre=padre;
                }
#line 2128 "parser.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 581 "sintactico.y" /* yacc.c:1646  */
    {
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _LST_PARAMETROS *padre=new _LST_PARAMETROS("LST_PARAMETROS",tabla); 
                        padre->nivel=3;
                        (yyval.VAL)->Padre=padre;
                        /*vacio*/
                }
#line 2141 "parser.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 593 "sintactico.y" /* yacc.c:1646  */
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
#line 2157 "parser.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 609 "sintactico.y" /* yacc.c:1646  */
    {   
                        
                        (yyvsp[-2].VAL)->Padre->hijos.append((yyvsp[0].VAL)->Padre);

                        (yyval.VAL)->Padre=(yyvsp[-2].VAL)->Padre;
                }
#line 2168 "parser.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 616 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _LST_VAL *padre=new _LST_VAL("LST_VAL",tabla); 
                        padre->nivel=2;

                                //hijos
                                padre->hijos.append((yyvsp[0].VAL)->Padre); 

                        (yyval.VAL)->Padre=padre;
                }
#line 2184 "parser.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 628 "sintactico.y" /* yacc.c:1646  */
    {
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _LST_VAL *padre=new _LST_VAL("LST_VAL",tabla); 
                        padre->nivel=3;
                        (yyval.VAL)->Padre=padre;
                        /*vacio*/
                }
#line 2197 "parser.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 641 "sintactico.y" /* yacc.c:1646  */
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
#line 2214 "parser.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 654 "sintactico.y" /* yacc.c:1646  */
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
#line 2230 "parser.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 666 "sintactico.y" /* yacc.c:1646  */
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
#line 2246 "parser.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 682 "sintactico.y" /* yacc.c:1646  */
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
#line 2262 "parser.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 694 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _CP_CLASE *padre=new _CP_CLASE("CP_CLASE",tabla); 
                        padre->nivel=2;
                                //hijos
                                padre->hijos.append((yyvsp[0].VAL)->Padre);
                                
                        (yyval.VAL)->Padre=padre;
                }
#line 2277 "parser.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 709 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _CUERPO_CLASE *padre=new _CUERPO_CLASE("CUERPO_CLASE",tabla); 
                        padre->nivel=1;
                                //hijos
                                padre->hijos.append((yyvsp[0].VAL)->Padre);

                        (yyval.VAL)->Padre=padre;
                }
#line 2292 "parser.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 720 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _CUERPO_CLASE *padre=new _CUERPO_CLASE("CUERPO_CLASE",tabla); 
                        padre->nivel=2;

                                //hijos
                                padre->hijos.append((yyvsp[-1].VAL)->Padre);

                        (yyval.VAL)->Padre=padre;
                }
#line 2308 "parser.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 732 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _CUERPO_CLASE *padre=new _CUERPO_CLASE("CUERPO_CLASE",tabla); 
                        padre->nivel=3;

                                //hijos
                                padre->hijos.append((yyvsp[0].VAL)->Padre);

                        (yyval.VAL)->Padre=padre;
                }
#line 2324 "parser.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 744 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _CUERPO_CLASE *padre=new _CUERPO_CLASE("CUERPO_CLASE",tabla); 
                        padre->nivel=4;

                                //hijos
                                padre->hijos.append((yyvsp[0].VAL)->Padre);

                        (yyval.VAL)->Padre=padre;
                }
#line 2340 "parser.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 760 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _METODO *padre=new _METODO("METODO",tabla); 
                        padre->nivel=1;

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
#line 2365 "parser.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 781 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _METODO *padre=new _METODO("METODO",tabla); 
                        padre->nivel=2;

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
#line 2388 "parser.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 800 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _METODO *padre=new _METODO("METODO",tabla); 
                        padre->nivel=3;
 
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
#line 2413 "parser.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 821 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _METODO *padre=new _METODO("METODO",tabla); 
                        padre->nivel=4;

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
#line 2436 "parser.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 844 "sintactico.y" /* yacc.c:1646  */
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
#line 2455 "parser.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 862 "sintactico.y" /* yacc.c:1646  */
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
#line 2477 "parser.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 915 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _DECLARAR_VARIABLE_GLOBAL *padre=new _DECLARAR_VARIABLE_GLOBAL("DECLARAR_VARIABLE_GLOBAL",tabla); 
                        padre->nivel=3;

                                //hijos
                                padre->hijos.append((yyvsp[-1].VAL)->Padre);
                                padre->hijos.append((yyvsp[0].VAL)->Padre);

                        (yyval.VAL)->Padre=padre;
                }
#line 2494 "parser.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 933 "sintactico.y" /* yacc.c:1646  */
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
#line 2512 "parser.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 947 "sintactico.y" /* yacc.c:1646  */
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
#line 2529 "parser.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 965 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _VAL *padre=new _VAL("VAL",tabla); 
                        padre->nivel=1;

                                //hijos 
                                padre->hijos.append((yyvsp[0].VAL)->Padre);  

                        (yyval.VAL)->Padre=padre;
                }
#line 2545 "parser.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 981 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _LST_LLAVES_VAL *padre=new _LST_LLAVES_VAL("LST_LLAVES_VAL",tabla); 
                        padre->nivel=1;

                                //hijos 
                                padre->hijos.append((yyvsp[-1].VAL)->Padre);  

                        (yyval.VAL)->Padre=padre;
                }
#line 2561 "parser.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 998 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _LLAVES_VAL_P *padre=new _LLAVES_VAL_P("LLAVES_VAL_P",tabla); 
                        padre->nivel=1;

                                //hijos 
                                padre->hijos.append((yyvsp[-2].VAL)->Padre);
                                padre->hijos.append((yyvsp[0].VAL)->Padre);  

                        (yyval.VAL)->Padre=padre;
                }
#line 2578 "parser.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 1011 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _LLAVES_VAL_P *padre=new _LLAVES_VAL_P("LLAVES_VAL_P",tabla); 
                        padre->nivel=2;

                                //hijos 
                                padre->hijos.append((yyvsp[-2].VAL)->Padre);
                                padre->hijos.append((yyvsp[0].VAL)->Padre);  

                        (yyval.VAL)->Padre=padre;
                }
#line 2595 "parser.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 1024 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _LLAVES_VAL_P *padre=new _LLAVES_VAL_P("LLAVES_VAL_P",tabla); 
                        padre->nivel=3;

                                //hijos 
                                padre->hijos.append((yyvsp[0].VAL)->Padre); 

                        (yyval.VAL)->Padre=padre;
                }
#line 2611 "parser.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 1036 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _LLAVES_VAL_P *padre=new _LLAVES_VAL_P("LLAVES_VAL_P",tabla); 
                        padre->nivel=4;

                                //hijos 
                                padre->hijos.append((yyvsp[0].VAL)->Padre); 

                        (yyval.VAL)->Padre=padre;
                }
#line 2627 "parser.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 1053 "sintactico.y" /* yacc.c:1646  */
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
#line 2644 "parser.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 1066 "sintactico.y" /* yacc.c:1646  */
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
#line 2664 "parser.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 1085 "sintactico.y" /* yacc.c:1646  */
    {   
                        (yyvsp[-1].VAL)->Padre->hijos.append((yyvsp[0].VAL)->Padre);  


                        (yyval.VAL)=(yyvsp[-1].VAL);
                }
#line 2675 "parser.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 1092 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _LST_CORCHETES *padre=new _LST_CORCHETES("LST_CORCHETES",tabla); 
                        padre->nivel=2;

                                //hijos
                                padre->hijos.append((yyvsp[0].VAL)->Padre); 

                        (yyval.VAL)->Padre=padre;
                }
#line 2691 "parser.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 1107 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _PAR_CORCHETES_VACIOS *padre=new _PAR_CORCHETES_VACIOS("PAR_CORCHETES_VACIOS",tabla); 
                        padre->nivel=1;
                        (yyval.VAL)->Padre=padre;
                }
#line 2703 "parser.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 1118 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _PAR_CORCHETES_VAL *padre=new _PAR_CORCHETES_VAL("PAR_CORCHETES_VAL",tabla); 
                        padre->nivel=1;


                                //hijos 
                                padre->hijos.append((yyvsp[-1].VAL)->Padre);  


                        (yyval.VAL)->Padre=padre;
                }
#line 2721 "parser.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 1135 "sintactico.y" /* yacc.c:1646  */
    {    
                        
                        
                        (yyvsp[-1].VAL)->Padre->hijos.append((yyvsp[0].VAL)->Padre);  


                        (yyval.VAL)=(yyvsp[-1].VAL);
                }
#line 2734 "parser.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 1144 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _LST_CORCHETES_VAL *padre=new _LST_CORCHETES_VAL("LST_CORCHETES_VAL",tabla); 
                        padre->nivel=2;

                                //hijos
                                padre->hijos.append((yyvsp[0].VAL)->Padre); 

                        (yyval.VAL)->Padre=padre;
                }
#line 2750 "parser.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 1160 "sintactico.y" /* yacc.c:1646  */
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
#line 2767 "parser.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 1173 "sintactico.y" /* yacc.c:1646  */
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
#line 2784 "parser.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 1186 "sintactico.y" /* yacc.c:1646  */
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
#line 2801 "parser.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 1199 "sintactico.y" /* yacc.c:1646  */
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
#line 2822 "parser.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 1216 "sintactico.y" /* yacc.c:1646  */
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
#line 2843 "parser.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 1233 "sintactico.y" /* yacc.c:1646  */
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
#line 2864 "parser.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 1250 "sintactico.y" /* yacc.c:1646  */
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
#line 2886 "parser.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 1268 "sintactico.y" /* yacc.c:1646  */
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
#line 2908 "parser.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 1286 "sintactico.y" /* yacc.c:1646  */
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
#line 2930 "parser.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 1308 "sintactico.y" /* yacc.c:1646  */
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
#line 2947 "parser.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 1321 "sintactico.y" /* yacc.c:1646  */
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
#line 2968 "parser.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 1339 "sintactico.y" /* yacc.c:1646  */
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
#line 2989 "parser.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 1356 "sintactico.y" /* yacc.c:1646  */
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
#line 3010 "parser.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 1378 "sintactico.y" /* yacc.c:1646  */
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
#line 3027 "parser.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 1391 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _ASIG_VALOR *padre=new _ASIG_VALOR("ASIG_VALOR",tabla); 
                        padre->nivel=2;

                                //hijos
                                padre->hijos.append((yyvsp[-2].VAL)->Padre); 

                        (yyval.VAL)->Padre=padre;
                }
#line 3043 "parser.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 1403 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _ASIG_VALOR *padre=new _ASIG_VALOR("ASIG_VALOR",tabla); 
                        padre->nivel=3;

                                //hijos
                                padre->hijos.append((yyvsp[-2].VAL)->Padre); 

                        (yyval.VAL)->Padre=padre;
                }
#line 3059 "parser.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 1418 "sintactico.y" /* yacc.c:1646  */
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
#line 3076 "parser.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 1431 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _LST_CUERPO *padre=new _LST_CUERPO("LST_CUERPO",tabla); 
                        padre->nivel=2;

                                //hijos
                                padre->hijos.append((yyvsp[0].VAL)->Padre); 

                        (yyval.VAL)->Padre=padre;
                }
#line 3092 "parser.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 1448 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _CUERPO *padre=new _CUERPO("CUERPO",tabla); 
                        padre->nivel=1;

                                //hijos
                                padre->hijos.append((yyvsp[-1].VAL)->Padre); 

                        (yyval.VAL)->Padre=padre;
                }
#line 3108 "parser.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 1460 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _CUERPO *padre=new _CUERPO("CUERPO",tabla); 
                        padre->nivel=2;

                                //hijos
                                padre->hijos.append((yyvsp[-1].VAL)->Padre); 

                        (yyval.VAL)->Padre=padre;
                }
#line 3124 "parser.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 1472 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _CUERPO *padre=new _CUERPO("CUERPO",tabla); 
                        padre->nivel=3;

                                //hijos
                                padre->hijos.append((yyvsp[-1].VAL)->Padre); 

                        (yyval.VAL)->Padre=padre;
                }
#line 3140 "parser.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 1485 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _CUERPO *padre=new _CUERPO("CUERPO",tabla); 
                        padre->nivel=4;

                                //hijos
                                padre->hijos.append((yyvsp[0].VAL)->Padre); 

                        (yyval.VAL)->Padre=padre;
                }
#line 3156 "parser.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 1497 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _CUERPO *padre=new _CUERPO("CUERPO",tabla); 
                        padre->nivel=5;

                                //hijos
                                padre->hijos.append((yyvsp[0].VAL)->Padre);
                                
                        (yyval.VAL)->Padre=padre;
                }
#line 3172 "parser.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 1510 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _CUERPO *padre=new _CUERPO("CUERPO",tabla); 
                        padre->nivel=6;
                                //hijos
                                padre->hijos.append((yyvsp[0].VAL)->Padre);
                                

                        (yyval.VAL)->Padre=padre; 
                }
#line 3188 "parser.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 1522 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _CUERPO *padre=new _CUERPO("CUERPO",tabla); 
                        padre->nivel=7;

                                //hijos
                                padre->hijos.append((yyvsp[0].VAL)->Padre);
                                
                        (yyval.VAL)->Padre=padre;
                }
#line 3204 "parser.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 1534 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _CUERPO *padre=new _CUERPO("CUERPO",tabla); 
                        padre->nivel=8;
                                //hijos
                                padre->hijos.append((yyvsp[0].VAL)->Padre);
                                

                        (yyval.VAL)->Padre=padre;
                }
#line 3220 "parser.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 1546 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _CUERPO *padre=new _CUERPO("CUERPO",tabla); 
                        padre->nivel=9;

                                //hijos
                                padre->hijos.append((yyvsp[-1].VAL)->Padre); 

                        (yyval.VAL)->Padre=padre;
                }
#line 3236 "parser.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 1561 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _FUNCIONES_NATIVAS *padre=new _FUNCIONES_NATIVAS("FUNCIONES_NATIVAS",tabla); 
                        padre->nivel=1;

                                //hijos
                                padre->hijos.append((yyvsp[0].VAL)->Padre); 

                        (yyval.VAL)->Padre=padre;
                }
#line 3252 "parser.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 1577 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _IMPRIMIR *padre=new _IMPRIMIR("IMPRIMIR",tabla); 
                        padre->nivel=1;

                                //hijos
                                padre->hijos.append((yyvsp[-1].VAL)->Padre); 

                        (yyval.VAL)->Padre=padre;
                }
#line 3268 "parser.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 1589 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _IMPRIMIR *padre=new _IMPRIMIR("IMPRIMIR",tabla); 
                        padre->nivel=2;

                                //hijos 

                        (yyval.VAL)->Padre=padre;
                }
#line 3283 "parser.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 1604 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _SUPER *padre=new _SUPER("SUPER",tabla); 
                        padre->nivel=1;

                                //hijos
                                padre->hijos.append((yyvsp[-2].VAL)->Padre);
                                

                        (yyval.VAL)->Padre=padre;
                }
#line 3300 "parser.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 1620 "sintactico.y" /* yacc.c:1646  */
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
#line 3318 "parser.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 1634 "sintactico.y" /* yacc.c:1646  */
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
#line 3338 "parser.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 1653 "sintactico.y" /* yacc.c:1646  */
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
#line 3354 "parser.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 1668 "sintactico.y" /* yacc.c:1646  */
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
#line 3370 "parser.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 1684 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _SENTENCIAS *padre=new _SENTENCIAS("SENTENCIAS",tabla); 
                        padre->nivel=1;

                                //hijos
                                padre->hijos.append((yyvsp[0].VAL)->Padre); 

                        (yyval.VAL)->Padre=padre;
                }
#line 3386 "parser.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 1696 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _SENTENCIAS *padre=new _SENTENCIAS("SENTENCIAS",tabla); 
                        padre->nivel=1;

                                //hijos
                                padre->hijos.append((yyvsp[0].VAL)->Padre); 

                        (yyval.VAL)->Padre=padre;
                }
#line 3402 "parser.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 1708 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _SENTENCIAS *padre=new _SENTENCIAS("SENTENCIAS",tabla); 
                        padre->nivel=1;

                                //hijos
                                padre->hijos.append((yyvsp[0].VAL)->Padre); 

                        (yyval.VAL)->Padre=padre;
                }
#line 3418 "parser.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 1726 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _FOR *padre=new _FOR("FOR",tabla); 
                        padre->nivel=1;

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
#line 3441 "parser.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 1745 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _FOR *padre=new _FOR("FOR",tabla); 
                        padre->nivel=2;

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
#line 3464 "parser.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 1768 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _WHILE *padre=new _WHILE("WHILE",tabla); 
                        padre->nivel=1;

                                //asignando atributos 
                                token *tok1=new token(QString::fromStdString((yyvsp[-6].TEXT)),(yylsp[-6]).first_line,3,archivo);
                                padre->lst_Atributos->insertar("tMientras",tok1);

                                //hijos
                                padre->hijos.append((yyvsp[-4].VAL)->Padre);
                                padre->hijos.append((yyvsp[-1].VAL)->Padre);  

                        (yyval.VAL)->Padre=padre;
                }
#line 3485 "parser.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 1788 "sintactico.y" /* yacc.c:1646  */
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
#line 3506 "parser.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 1805 "sintactico.y" /* yacc.c:1646  */
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
#line 3530 "parser.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 1825 "sintactico.y" /* yacc.c:1646  */
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
#line 3552 "parser.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 1846 "sintactico.y" /* yacc.c:1646  */
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
#line 3574 "parser.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 1864 "sintactico.y" /* yacc.c:1646  */
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
#line 3595 "parser.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 1881 "sintactico.y" /* yacc.c:1646  */
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
#line 3617 "parser.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 1902 "sintactico.y" /* yacc.c:1646  */
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
#line 3637 "parser.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 1953 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _VALOR *padre=new _VALOR("VALOR",tabla); 
                        padre->nivel=3;

                                //hijos
                                padre->hijos.append((yyvsp[0].VAL)->Padre); 

                        (yyval.VAL)->Padre=padre;
                }
#line 3653 "parser.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 1965 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _VALOR *padre=new _VALOR("VALOR",tabla); 
                        padre->nivel=4;

                                //hijos
                                padre->hijos.append((yyvsp[0].VAL)->Padre); 

                        (yyval.VAL)->Padre=padre;
                }
#line 3669 "parser.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 1982 "sintactico.y" /* yacc.c:1646  */
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
#line 3689 "parser.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 1999 "sintactico.y" /* yacc.c:1646  */
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
#line 3710 "parser.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 2016 "sintactico.y" /* yacc.c:1646  */
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
#line 3731 "parser.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 2033 "sintactico.y" /* yacc.c:1646  */
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
#line 3752 "parser.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 2050 "sintactico.y" /* yacc.c:1646  */
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
#line 3774 "parser.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 2068 "sintactico.y" /* yacc.c:1646  */
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
#line 3796 "parser.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 2087 "sintactico.y" /* yacc.c:1646  */
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
#line 3818 "parser.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 2108 "sintactico.y" /* yacc.c:1646  */
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
#line 3840 "parser.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 2126 "sintactico.y" /* yacc.c:1646  */
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
#line 3862 "parser.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 2144 "sintactico.y" /* yacc.c:1646  */
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
#line 3884 "parser.cpp" /* yacc.c:1646  */
    break;

  case 118:
#line 2162 "sintactico.y" /* yacc.c:1646  */
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
#line 3906 "parser.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 2180 "sintactico.y" /* yacc.c:1646  */
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
#line 3928 "parser.cpp" /* yacc.c:1646  */
    break;

  case 120:
#line 2198 "sintactico.y" /* yacc.c:1646  */
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
#line 3950 "parser.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 2216 "sintactico.y" /* yacc.c:1646  */
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
#line 3972 "parser.cpp" /* yacc.c:1646  */
    break;

  case 122:
#line 2236 "sintactico.y" /* yacc.c:1646  */
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
#line 3994 "parser.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 2254 "sintactico.y" /* yacc.c:1646  */
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
#line 4015 "parser.cpp" /* yacc.c:1646  */
    break;

  case 124:
#line 2273 "sintactico.y" /* yacc.c:1646  */
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
#line 4035 "parser.cpp" /* yacc.c:1646  */
    break;

  case 125:
#line 2290 "sintactico.y" /* yacc.c:1646  */
    {   
                        //creando el padre
                        (yyval.VAL)=new Nod(); 
                        _E *padre=new _E("E",tabla); 
                        padre->nivel=18;

                                //hijos
                                padre->hijos.append((yyvsp[0].VAL)->Padre);  

                        (yyval.VAL)->Padre=padre;
                }
#line 4051 "parser.cpp" /* yacc.c:1646  */
    break;

  case 126:
#line 2302 "sintactico.y" /* yacc.c:1646  */
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
#line 4069 "parser.cpp" /* yacc.c:1646  */
    break;

  case 127:
#line 2316 "sintactico.y" /* yacc.c:1646  */
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
#line 4086 "parser.cpp" /* yacc.c:1646  */
    break;

  case 128:
#line 2329 "sintactico.y" /* yacc.c:1646  */
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
#line 4103 "parser.cpp" /* yacc.c:1646  */
    break;

  case 129:
#line 2342 "sintactico.y" /* yacc.c:1646  */
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
#line 4120 "parser.cpp" /* yacc.c:1646  */
    break;

  case 130:
#line 2356 "sintactico.y" /* yacc.c:1646  */
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
#line 4137 "parser.cpp" /* yacc.c:1646  */
    break;

  case 131:
#line 2369 "sintactico.y" /* yacc.c:1646  */
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
#line 4154 "parser.cpp" /* yacc.c:1646  */
    break;

  case 132:
#line 2382 "sintactico.y" /* yacc.c:1646  */
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
#line 4171 "parser.cpp" /* yacc.c:1646  */
    break;


#line 4175 "parser.cpp" /* yacc.c:1646  */
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
