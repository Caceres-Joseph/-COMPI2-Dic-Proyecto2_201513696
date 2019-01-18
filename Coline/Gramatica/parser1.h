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

#include "Gramatica/Arbol/Abstraccion/nodoast.h"
#include "Arbol/Abstraccion/astlist.h"
/* Value type.  */
#if ! defined ZZSTYPE && ! defined ZZSTYPE_IS_DECLARED

union ZZSTYPE
{
#line 41 "sintactico1.y" /* yacc.c:1909  */

//se especifican los tipo de valores para los no terminales y lo terminales
ASTList *Listado;
NodoAST *ASTNode;
int OPERADOR;
char TEXT[256];//NO PUEDO METER UN STRING AQUI!!!!

#line 120 "parser1.h" /* yacc.c:1909  */
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
