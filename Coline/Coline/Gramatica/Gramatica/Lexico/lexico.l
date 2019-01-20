%option noyywrap
%option caseless

%{
#include "../Sintactico/parser.h"
#define YY_USER_ACTION yylloc.first_line = yylloc.last_line = nLinea;
#include "Coline/Elementos/Global/importar.h"

#import "Coline/Elementos/Tablas/tablasimbolos.h"

int nLinea=0;
tablaSimbolos *tabla33;
void iniciarLineaL(tablaSimbolos *tabla2){
        nLinea=1; 
        tabla33=tabla2; 
}

 
%}
%option yylineno

id [A-Za-z]([A-Za-z0-9"_"])*
digito [0-9]
Numero {digito}+
boolDat ("verdadero"|"falso")
Decimal {Numero}"."{Numero}
Cadena \"[^\"]*\"
Char '[^']*'
%x comment foo

%% 
        int comment_caller;

"/*"         {
             comment_caller = INITIAL;
             BEGIN(comment);
             }


    /*
    =============================
        Simbolos
    =============================
    */


"+"         { strcpy(yylval.TEXT, yytext); return sMas; }
"-"         { strcpy(yylval.TEXT, yytext); return sMenos; }
"*"         { strcpy(yylval.TEXT, yytext); return sPor; }
"/"         { strcpy(yylval.TEXT, yytext); return sDiv; }
"^"         { strcpy(yylval.TEXT, yytext); return sPot; }
"%"         { strcpy(yylval.TEXT, yytext); return sMod; }

"=="        { strcpy(yylval.TEXT, yytext); return sIgualacion; }
"!="        { strcpy(yylval.TEXT, yytext); return sDiferenciacion; }
"<"         { strcpy(yylval.TEXT, yytext); return sMenorQue; }
">"         { strcpy(yylval.TEXT, yytext); return sMayorQue; }
"<="        { strcpy(yylval.TEXT, yytext); return sMenorIgualQue; }
">="        { strcpy(yylval.TEXT, yytext); return sMayorIgualQue; }
"&&"        { strcpy(yylval.TEXT, yytext); return sAnd; }
"||"        { strcpy(yylval.TEXT, yytext); return sOr; }
"!"         { strcpy(yylval.TEXT, yytext); return sNot; }


"+="         { strcpy(yylval.TEXT, yytext); return sMasIgual; }
"-="         { strcpy(yylval.TEXT, yytext); return sMenosIgual; }
"*="         { strcpy(yylval.TEXT, yytext); return sPorIgual; }
"/="         { strcpy(yylval.TEXT, yytext); return sDivIgual; }


"("         { strcpy(yylval.TEXT, yytext); return sAbreParent; }
")"         { strcpy(yylval.TEXT, yytext); return sCierraParent; }

"{"         { strcpy(yylval.TEXT, yytext); return sAbreLlave; }
"}"         { strcpy(yylval.TEXT, yytext); return sCierraLlave; }

"["         { strcpy(yylval.TEXT, yytext); return sAbreCorchete; }
"]"         { strcpy(yylval.TEXT, yytext); return sCierraCorchete; }
"."         { strcpy(yylval.TEXT, yytext); return sPunto; }
","         { strcpy(yylval.TEXT, yytext); return sComa; }
";"         { strcpy(yylval.TEXT, yytext); return sPuntoComa; }
"@"         { strcpy(yylval.TEXT, yytext); return sArroba; }
"="         { strcpy(yylval.TEXT, yytext); return sIgual; }

"?"         { strcpy(yylval.TEXT, yytext); return sCierraInterrogante; }
":"         { strcpy(yylval.TEXT, yytext); return sDosPuntos; }

    /*
    =============================
        Palabras reservadas
    =============================
    */

"importar"          { strcpy(yylval.TEXT, yytext); return tImport; }
"clase"             { strcpy(yylval.TEXT, yytext); return tClase; }
"extender"          { strcpy(yylval.TEXT, yytext); return tExtender; }
"hereda_de"             { strcpy(yylval.TEXT, yytext); return tPadre; }
"principal"         { strcpy(yylval.TEXT, yytext); return tPrincipal; }
"sobrescribir"      { strcpy(yylval.TEXT, yytext); return tOverride; }
"nuevo"             { strcpy(yylval.TEXT, yytext); return tNuevo; }
"este"              { strcpy(yylval.TEXT, yytext); return tEste; }
"imprimir"          { strcpy(yylval.TEXT, yytext); return tImprimir; }
"concatenar"        { strcpy(yylval.TEXT, yytext); return tConcatenar; }  
"convertiracadena"  { strcpy(yylval.TEXT, yytext); return tConvertirCadena; }  
"convertiraentero"  { strcpy(yylval.TEXT, yytext); return tConvertirNumero; }  
"retornar"          { strcpy(yylval.TEXT, yytext); return tRetorno; }
"si"                { strcpy(yylval.TEXT, yytext); return tSi; }
"sino"              { strcpy(yylval.TEXT, yytext); return tSino; }
"caso"              { strcpy(yylval.TEXT, yytext); return tCaso; }
"selecciona"        { strcpy(yylval.TEXT, yytext); return tSelecciona; }
"de"                { strcpy(yylval.TEXT, yytext); return tDe; }
"defecto"           { strcpy(yylval.TEXT, yytext); return tDefecto; }
"detener"           { strcpy(yylval.TEXT, yytext); return tRomper; }
"mientras"          { strcpy(yylval.TEXT, yytext); return tMientras; }
"continuar"         { strcpy(yylval.TEXT, yytext); return tContinuar; }
"para"              { strcpy(yylval.TEXT, yytext); return tPara; }
"hacer"             { strcpy(yylval.TEXT, yytext); return tHacer; }
"repetir"           { strcpy(yylval.TEXT, yytext); return tRepetir; }
"hasta"             { strcpy(yylval.TEXT, yytext); return tHasta; }
"mensajes"          { strcpy(yylval.TEXT, yytext); return tMensaje; }
"subcad"            { strcpy(yylval.TEXT, yytext); return tSubCad; }
"poscad"            { strcpy(yylval.TEXT, yytext); return tPosCad; }
"random"            { strcpy(yylval.TEXT, yytext); return tRandom; }
"tamanio"           { strcpy(yylval.TEXT, yytext); return tTamanio; }
"leer_teclado"      { strcpy(yylval.TEXT, yytext); return tLeerTeclado; }

 /* "tam"               { strcpy(yylval.TEXT, yytext); return tTam; }*/
"super"             { strcpy(yylval.TEXT, yytext); return tSuper; }


"nada"              { strcpy(yylval.TEXT, yytext); return tNada; }
"vacio"             { strcpy(yylval.TEXT, yytext); return tVacio; }
"nulo"              { strcpy(yylval.TEXT, yytext); return tNulo; }

"entero"            { strcpy(yylval.TEXT, yytext); return tEntero; }
"caracter"          { strcpy(yylval.TEXT, yytext); return tCaracter; }
"decimal"           { strcpy(yylval.TEXT, yytext); return tDecimal; }
"booleano"          { strcpy(yylval.TEXT, yytext); return tBooleano; }


"publico"           { strcpy(yylval.TEXT, yytext); return tPublico; }
"privado"           { strcpy(yylval.TEXT, yytext); return tPrivado; }
"protegido"         { strcpy(yylval.TEXT, yytext); return tProtegido; }

"\n"       { nLinea++;}

    /*
    =============================
        Valores
    =============================
    */ 
{boolDat}       { strcpy(yylval.TEXT, yytext); return valBoolean; }
{id}            { strcpy(yylval.TEXT, yytext); return valId; }
{Numero}        { strcpy(yylval.TEXT, yytext); return valNumero; }
{Decimal}       { strcpy(yylval.TEXT, yytext); return valDecimal; }
{Char}          { strcpy(yylval.TEXT, yytext); return valCaracter; }
{Cadena}        { strcpy(yylval.TEXT, yytext); return valCadena; }

[[:blank:]]     { /*Se ignoran*/ }
.               {
                    //std::cout <<"Error léxico en linea:"<<nLinea<<" token:"<<yytext<<std::endl;
                    tabla33->tablaError->insertErrorLexical("--",nLinea,10,"No se reconoce el token: "+QString::fromUtf8(yytext));
                }


    /*
    =============================
        Comentarios
    =============================
    */ 

    "//".*                { /* Comentario de una linea */ }

<foo>"/*"    {
    comment_caller = foo;
    BEGIN(comment);
}

<comment>[^*\n]*        /* eat anything that's not a '*' */
<comment>"*"+[^*/\n]*   /* eat up '*'s not followed by '/'s */
<comment>\n             ++nLinea;
<comment>"*"+"/"        BEGIN(comment_caller);

%%
