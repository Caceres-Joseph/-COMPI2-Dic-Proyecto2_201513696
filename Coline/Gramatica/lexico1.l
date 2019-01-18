
%option prefix="zz"
%{
#include <iostream>
#include <string>
#include "parser1.h"
#define ZZ_USER_ACTION zzlloc.first_line = zzlloc.last_line = nLine;
int nLine = 1;
using namespace std;
int comment_caller; 
%}
%option noyywrap
letra [a-zA-Z]
digito [0-9]
entero [0-9]+
flotante {entero}"."{entero}
etiqueta "L"{entero}
identificador {letra}({letra}|{digito}|"_")*
%x comment foo
%%

"/*"         {
             comment_caller = INITIAL;
             BEGIN(comment);
             }
"+"                             {/*printf("+\n");*/ strcpy(zzlval.TEXT, zztext); return mas;}
"^"                             {/*printf("+\n");*/ strcpy(zzlval.TEXT, zztext); return pot;}
"-"                             {/*printf("-\n");*/ strcpy(zzlval.TEXT, zztext); return menos;}
"*"                             {/*printf("*\n");*/ strcpy(zzlval.TEXT, zztext); return mult;}
"/"                             {/*printf("/\n");*/ strcpy(zzlval.TEXT, zztext); return divi;}
"\%"                            {/*printf("\%\n");*/ strcpy(zzlval.TEXT, zztext); return mod;}
"="                             {/*printf("\%\n");*/ strcpy(zzlval.TEXT, zztext); return asignacion;}
","                             {/*printf("\%\n");*/ strcpy(zzlval.TEXT, zztext); return coma;}

"=="                            {/*printf("==\n");*/ strcpy(zzlval.TEXT, zztext); return eql;}
"!="                            {/*printf("!=\n");*/ strcpy(zzlval.TEXT, zztext); return nequal;}
">"                             {/*printf(">\n");*/ strcpy(zzlval.TEXT, zztext); return gtr;}
"<"                             {/*printf("<\n");*/ strcpy(zzlval.TEXT, zztext); return lwr;}
">="                            {/*printf(">=\n");*/ strcpy(zzlval.TEXT, zztext); return grequal;}
"<="                            {/*printf("<=\n");*/ strcpy(zzlval.TEXT, zztext); return lrequal;}

";"                             {/*printf(";\n");*/ strcpy(zzlval.TEXT, zztext); return ptcoma;}
":"                             {/*printf(":\n");*/ strcpy(zzlval.TEXT, zztext); return dpts;}
"{"                             {/*printf("{\n");*/ strcpy(zzlval.TEXT, zztext); return okey;}
"}"                             {/*printf("}\n");*/ strcpy(zzlval.TEXT, zztext); return ckey;}
"("                             {/*printf("(\n");*/ strcpy(zzlval.TEXT, zztext); return oparent;}
")"                             {/*printf(")\n");*/ strcpy(zzlval.TEXT, zztext); return cparent;}
"["                             {/*printf("funcion getStrLength\n");*/ strcpy(zzlval.TEXT, zztext); return obracket;}
"]"                             {/*printf("funcion getStrLength\n");*/ strcpy(zzlval.TEXT, zztext); return cbracket;}
  

"goto"                          {/*printf("goto\n");*/ strcpy(zzlval.TEXT, zztext); return gto;}
"void"                          {/*printf("void\n");*/ strcpy(zzlval.TEXT, zztext); return vacio;}
"if"                            {/*printf("if\n");*/ strcpy(zzlval.TEXT, zztext); return si;}
"printf"                        {/*printf("printf\n");*/ strcpy(zzlval.TEXT, zztext); return imprimir;}
"%c"                            {/*printf("imprimir caracter\n");*/ strcpy(zzlval.TEXT, zztext); return charvalue;}
"%d"                            {/*printf("imprimir entero\n");*/ strcpy(zzlval.TEXT, zztext); return intvalue;}
"%f"                            {/*printf("imprimir flotante\n");*/ strcpy(zzlval.TEXT, zztext); return floatvalue;}
"$$_SGC"                        {strcpy(zzlval.TEXT, zztext); return cleanFunc;}

"$$_getBool"                    {/*printf("funcion getBool\n");*/ strcpy(zzlval.TEXT, zztext); return getbool;}
"$$_getNum"                     {/*printf("funcion getNum\n");*/ strcpy(zzlval.TEXT, zztext); return getnum;}
"$$_outStr"                     {/*printf("funcion outStr\n");*/ strcpy(zzlval.TEXT, zztext); return outstr;}
"$$_outNum"                     {/*printf("funcion outNum\n");*/ strcpy(zzlval.TEXT, zztext); return outnum;}
"$$_inStr"                      {/*printf("funcion inStr\n");*/ strcpy(zzlval.TEXT, zztext); return instr;}
"$$_inNum"                      {/*printf("funcion inNum\n");*/ strcpy(zzlval.TEXT, zztext); return innum;}
"$$_show"                       {/*printf("funcion show\n");*/ strcpy(zzlval.TEXT, zztext); return show;}
"$$_getRandom"                  {/*printf("funcion getRandom\n");*/ strcpy(zzlval.TEXT, zztext); return getrandom;}
"$$_getArrLength"               {/*printf("funcion getArrLength\n");*/ strcpy(zzlval.TEXT, zztext); return getarrlength;}
"$$_getStrLength"               {/*printf("funcion getStrLength\n");*/ strcpy(zzlval.TEXT, zztext); return getstrlength;}
"Stack"                           {/*printf("funcion getStrLength\n");*/ strcpy(zzlval.TEXT, zztext); return pila;}
"Heap"                            {/*printf("funcion getStrLength\n");*/ strcpy(zzlval.TEXT, zztext); return monticulo;}
"Pool"                            {/*printf("funcion getStrLength\n");*/ strcpy(zzlval.TEXT, zztext); return pool;}

{entero}                        {/*printf("Numero entero\n");*/ strcpy(zzlval.TEXT, zztext); return ente;}  
{flotante}                      {/*printf("Numero Flotante\n");*/ strcpy(zzlval.TEXT, zztext); return flota;}
{etiqueta}                      {/*printf("Etiqueta 3D\n");*/ strcpy(zzlval.TEXT, zztext); return etiqueta;}
{identificador}                 {/*printf("Identificador\n");*/ strcpy(zzlval.TEXT, zztext); return identi;}
"\n"                            {nLine++;}
[[:blank:]]                     { 
                                    /*Se ignoran*/ 
                                }
   "//".*                { /* Comentario de una linea */ }

<foo>"/*"    {
    comment_caller = foo;
    BEGIN(comment);
}

<comment>[^*\n]*        /* eat anything that's not a '*' */
<comment>"*"+[^*/\n]*   /* eat up '*'s not followed by '/'s */
<comment>\n             ++nLine;
<comment>"*"+"/"        BEGIN(comment_caller);

.                               {
                                    /*CUALQUIER OTRA COSA ES UN ERROR SINTANTICO*/
                                    printf("error sintactico!!!");
                                }
%%
/*CODIGO DE USUARIO*/