%option noyywrap
%{
#include "../Sintactico/parser.h"
%}
id [A-Za-z]([A-Za-z0-9"_"])*
digito [0-9]
Numero {digito}+
%%
"int"           { strcpy(yylval.TEXT, yytext); return entero; }
"string"        { strcpy(yylval.TEXT, yytext); return cad; }
{id}            { strcpy(yylval.TEXT, yytext); return id; }
[+]             { strcpy(yylval.TEXT, yytext); return mas; }
[*]             { strcpy(yylval.TEXT, yytext); return por; }
[-]             { strcpy(yylval.TEXT, yytext); return menos; }
"="             { strcpy(yylval.TEXT, yytext); return igual; }
[;]             { strcpy(yylval.TEXT, yytext); return pcoma; }
[(]             { strcpy(yylval.TEXT, yytext); return acor; }
[)]             { strcpy(yylval.TEXT, yytext); return ccor; }
{Numero}        { strcpy(yylval.TEXT, yytext); return Nnum; }
[[:blank:]]     { /*Se ignoran*/ }
.               {}
%%
