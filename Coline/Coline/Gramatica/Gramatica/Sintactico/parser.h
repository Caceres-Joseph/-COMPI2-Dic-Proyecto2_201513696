/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

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
#line 60 "sintactico.y" /* yacc.c:1909  */

//se especifican los tipo de valores para los no terminales y lo terminales
char TEXT [256];
struct Nod *VAL;
//extern nodo *NODO;

#line 143 "parser.h" /* yacc.c:1909  */
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
