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
#line 60 "sintactico.y" /* yacc.c:1909  */

//se especifican los tipo de valores para los no terminales y lo terminales
char TEXT [256];
struct Nod *VAL;
//extern nodo *NODO;

#line 137 "parser.h" /* yacc.c:1909  */
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
