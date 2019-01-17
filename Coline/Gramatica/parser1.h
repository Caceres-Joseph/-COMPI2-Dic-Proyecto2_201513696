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
    divi = 261,
    mod = 262,
    coma = 263,
    eql = 264,
    nequal = 265,
    gtr = 266,
    lwr = 267,
    grequal = 268,
    lrequal = 269,
    ptcoma = 270,
    dpts = 271,
    okey = 272,
    ckey = 273,
    oparent = 274,
    cparent = 275,
    asignacion = 276,
    obracket = 277,
    cbracket = 278,
    gto = 279,
    vacio = 280,
    si = 281,
    imprimir = 282,
    charvalue = 283,
    intvalue = 284,
    floatvalue = 285,
    getbool = 286,
    getnum = 287,
    outstr = 288,
    outnum = 289,
    instr = 290,
    innum = 291,
    show = 292,
    getrandom = 293,
    getarrlength = 294,
    getstrlength = 295,
    pila = 296,
    monticulo = 297,
    pool = 298,
    cleanFunc = 299,
    ente = 300,
    flota = 301,
    etiqueta = 302,
    identi = 303
  };
#endif

#include "Gramatica/Arbol/Abstraccion/nodoast.h"
#include "Arbol/Abstraccion/astlist.h"
/* Value type.  */
#if ! defined ZZSTYPE && ! defined ZZSTYPE_IS_DECLARED

union ZZSTYPE
{
#line 30 "sintactico.y" /* yacc.c:1909  */

//se especifican los tipo de valores para los no terminales y lo terminales
ASTList *Listado;
NodoAST *ASTNode;
int OPERADOR;
char TEXT[256];//NO PUEDO METER UN STRING AQUI!!!!

#line 119 "parser1.h" /* yacc.c:1909  */
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
