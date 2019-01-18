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
#line 60 "sintactico.y" /* yacc.c:1909  */

//se especifican los tipo de valores para los no terminales y lo terminales
char TEXT [256];
struct Nod *VAL;
//extern nodo *NODO;

#line 142 "parser.h" /* yacc.c:1909  */
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
