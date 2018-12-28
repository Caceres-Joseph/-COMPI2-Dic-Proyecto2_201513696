%{
#include "../Lexico/scanner.h"//se importa el header del analisis sintactico
#include <math.h>
#include <stdlib.h>
#include <QTextEdit>
#include <iostream>
#include <qstring.h>
#import "Coline/Elementos/Tablas/tablasimbolos.h"


extern int yylineno; //linea actual donde se encuentra el parser (analisis lexico) lo maneja BISON
extern int columna; //columna actual donde se encuentra el parser (analisis lexico) lo maneja BISON
extern char *yytext; //lexema actual donde esta el parser (analisis lexico) lo maneja BISON

typedef struct Operador operador;
 
tablaSimbolos *tabla;


int contador=0;
int yyerror(const char* mens){
//metodo que se llama al haber un error sintactico
//SE IMPRIME EN CONSOLA EL ERROR
//std::cout <<mens<<" "<<yytext<<"linea:" <<yylineno <<std::endl;
 
tabla->tablaError->insertErrorSyntax(QString::fromUtf8(yytext),yylineno,23,QString::fromUtf8(mens));
return 0;
}

void setSalida(tablaSimbolos *tabla2) { 
tabla=tabla2; 
}

struct Operador{
//ESTRUCTURA LA CUAL CONTENDRA LOS TIPOS DE LOS NO TERMINALES PARA HEREDAR VALORES
QString valor;
QString operacion;
};

%}
//error-verbose si se especifica la opcion los errores sintacticos son especificados por BISON
%error-verbose

%union{
//se especifican los tipo de valores para los no terminales y lo terminales
char TEXT [256];
struct Operador * VAL;
}
//TERMINALES DE TIPO TEXT, SON STRINGS
%token<TEXT>  Nnum
%token<TEXT>  mas
%token<TEXT>  menos
%token<TEXT>  por
%token<TEXT>  id
%token<TEXT>  igual
%token<TEXT>  pcoma
%token<TEXT>  acor
%token<TEXT>  ccor
%token<TEXT>  cad
%token<TEXT>  entero



//NO TERMINALES DE TIPO VAL, POSEEN ATRIBUTOS INT VALOR, Y QSTRING TEXTO
%type<VAL>  E
%type<VAL>  S
%type<VAL>  OPERACIONES
%type<VAL>  OPERACION
%type<TEXT>  TIPO

%left mas 
%left menos
%left por 
%%


S : OPERACIONES {
        QString cont = QString::number(contador);
        tabla->salida.append( "operaciones realizadas = "+cont);
        contador=0;
}
	;


OPERACIONES : OPERACIONES OPERACION {contador++;}
             |OPERACION {contador++;};


TIPO : entero
      |cad;

OPERACION: TIPO id igual E pcoma{
QString ids = $2;
tabla->salida.append( ids + "=" + $4->valor + "  \n ultima op = "+ $4->operacion );

}
| error pcoma {contador--;} ;


E :  E mas E{ $$=new Operador();
              $$->valor = QString::number(  $1->valor.toInt() +  $3->valor.toInt() );
              $$->operacion = "SUMA" ;
    }
    |  E menos E{ $$=new Operador();
              $$->valor = QString::number(  $1->valor.toInt() -  $3->valor.toInt() );
              $$->operacion = "RESTA" ;
    }
    |  E por E{ $$=new Operador();
              $$->valor = QString::number(  $1->valor.toInt() *  $3->valor.toInt() );
              $$->operacion = "MULTIPLICACION" ;
    }
 
    |acor E ccor{ $$=new Operador();
                  $$= $2;
    }
    |Nnum{  $$=new Operador();
            $$->valor = $1;
        };
 

