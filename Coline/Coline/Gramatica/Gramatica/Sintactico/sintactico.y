%{
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

%}
//error-verbose si se especifica la opcion los errores sintacticos son especificados por BISON
%error-verbose
%locations

%union{
//se especifican los tipo de valores para los no terminales y lo terminales
char TEXT [256];
struct Nod *VAL;
//extern nodo *NODO;
} 

        /*
        =============================
        | Terminales
        =============================
        */ 
%token<TEXT>  sOr
%token<TEXT>  sAnd
%token<TEXT>  sNot

%token<TEXT>  sMayorQue
%token<TEXT>  sMenorQue
%token<TEXT>  sMayorIgualQue
%token<TEXT>  sMenorIgualQue
%token<TEXT>  sIgualacion
%token<TEXT>  sDiferenciacion

%token<TEXT>  sMas
%token<TEXT>  sMenos
%token<TEXT>  sPor
%token<TEXT>  sDiv
%token<TEXT>  sMod
%token<TEXT>  sPot

%token<TEXT>  sAbreParent
%token<TEXT>  sCierraParent
%token<TEXT>  sAbreLlave
%token<TEXT>  sCierraLlave
%token<TEXT>  sAbreCorchete
%token<TEXT>  sCierraCorchete
%token<TEXT>  sPunto
%token<TEXT>  sComa
%token<TEXT>  sPuntoComa
%token<TEXT>  sArroba
%token<TEXT>  sIgual
%token<TEXT>  sCierraInterrogante
%token<TEXT>  sDosPuntos

%token<TEXT>  tImport
%token<TEXT>  tClase
%token<TEXT>  tExtender
%token<TEXT>  tPadre
%token<TEXT>  tPrincipal
%token<TEXT>  tOverride
%token<TEXT>  tNuevo
%token<TEXT>  tEste
%token<TEXT>  tImprimir
%token<TEXT>  tRetorno
%token<TEXT>  tSi
%token<TEXT>  tSino
%token<TEXT>  tCaso
%token<TEXT>  tDe
%token<TEXT>  tDefecto
%token<TEXT>  tRomper
%token<TEXT>  tMientras
%token<TEXT>  tContinuar
%token<TEXT>  tPara
%token<TEXT>  tHacer
%token<TEXT>  tRepetir
%token<TEXT>  tHasta
%token<TEXT>  tMensaje
%token<TEXT>  tSubCad
%token<TEXT>  tPosCad
%token<TEXT>  tRandom
//%token<TEXT>  tTam
%token<TEXT>  tSuper
%token<TEXT>  tNada
%token<TEXT>  tVacio
%token<TEXT>  tNulo
%token<TEXT>  tEntero
%token<TEXT>  tCaracter
%token<TEXT>  tDecimal
%token<TEXT>  tBooleano

%token<TEXT>  tPublico
%token<TEXT>  tPrivado
%token<TEXT>  tProtegido 


%token<TEXT>  valBoolean
%token<TEXT>  valId
%token<TEXT>  valNumero 
%token<TEXT>  valDecimal
%token<TEXT>  valCaracter
%token<TEXT>  valCadena 


        /*
        =============================
        No Terminales
        =============================
        */ 

%type<VAL> S 
%type<VAL> IMPORT 
%type<VAL> LST_IMPORT 
%type<VAL> LST_CLASE 
%type<VAL> CLASE 
%type<VAL> TIPO 
%type<VAL> EXTENDER 
%type<VAL> VISIBILIDAD 
%type<VAL> LST_PARAMETROS 
%type<VAL> PARAMETRO 
%type<VAL> LST_VAL 
%type<VAL> CP_CLASE 
%type<VAL> CUERPO_CLASE 
%type<VAL> METODO 
%type<VAL> SOBRESCRITURA 
%type<VAL> MAIN 
%type<VAL> CONSTRUCTOR 
%type<VAL> FORMULARIO 
%type<VAL> PROCEDIMIENTOS_FORMULARIO 
%type<VAL> DECLARAR_VARIABLE_GLOBAL 
%type<VAL> DECLARAR_VARIABLE_SINVISIBI 
%type<VAL> VAL 
%type<VAL> LST_LLAVES_VAL 
%type<VAL> LLAVES_VAL_P 
%type<VAL> VAR_ARREGLO 
%type<VAL> LST_CORCHETES 
%type<VAL> LST_CORCHETES_VAL 
%type<VAL> ASIGNAR_VALOR 
%type<VAL> USAR_VARIABLE 
%type<VAL> USAR_VARIABLEP 
%type<VAL> USAR_METODO 
%type<VAL> USAR_METODOP 
%type<VAL> LLAMADA_FORMULARIO 
%type<VAL> LST_ID 
%type<VAL> LST_CUERPO 
%type<VAL> PAR_CORCHETES_VAL

%type<VAL> CUERPO 
%type<VAL> RETORNO 
%type<VAL> ROMPER 
%type<VAL> CONTINUAR 
%type<VAL> SENTENCIAS 
%type<VAL> SI 
%type<VAL> SINO_SI 
%type<VAL> SINO 
%type<VAL> SI_SIMPLIFICADO 
%type<VAL> CASO 
%type<VAL> CUERPO_CASE 
%type<VAL> WHILE 
%type<VAL> DOWHILE 
%type<VAL> REPETIR 
%type<VAL> FOR 
%type<VAL> FUNCIONES_NATIVAS 
%type<VAL> IMPRIMIR 
%type<VAL> MENSAJE 
%type<VAL> OPE_TIPO 

%type<VAL> OPE_ARITME 
%type<VAL> TO_CADENA 
%type<VAL> SUB_CAD 
%type<VAL> POS_CAD 
%type<VAL> TO_BOOLEAN 
%type<VAL> TO_ENTERO 
%type<VAL> HOY 
%type<VAL> AHORA 
%type<VAL> TO_FECHA 
%type<VAL> TO_HORA 
%type<VAL> TO_FECHAHORA 
%type<VAL> TAM 
%type<VAL> RANDOM 
%type<VAL> MIN 
%type<VAL> MAX 
%type<VAL> POTENCIA 
%type<VAL> LOGARITMO 
%type<VAL> LOGARITMO10 
%type<VAL> ABSOLUTO 

%type<VAL> USAR_METO_VAR 
%type<VAL> SENO 
%type<VAL> COSENO 
%type<VAL> TANGENTE 
%type<VAL> RAIZ 
%type<VAL> PI 
%type<VAL> FUNC_MULTIMEDIA 
%type<VAL> IMAGEN 
%type<VAL> AUDIO 
%type<VAL> VIDEO 
%type<VAL> VALOR 
%type<VAL> E 
%type<VAL> F 


%type<VAL> PAR_CORCHETES_VACIOS 

%type<VAL> ID_VAR_FUNC 
%type<VAL> LST_PUNTOSP 

%type<VAL> ASIG_VALOR 
//%type<VAL> LST_E 

%type<VAL> SUPER 

%type<VAL> CUERPO_PREGUNTA 
%type<VAL> LST_CUERPO_PREGUNTA 
%type<VAL> PREGUNTA 
%type<VAL> GRUPO 




%left sOr 
%left sAnd
%left sNot

%left sMayorQue sMenorQue sMayorIgualQue sMenorIgualQue sIgualacion sDiferenciacion


%left sMas sMenos
%left sPor sDiv  sMod 
%left sPot  
 


%start S

%%



S:                      
        LST_IMPORT  LST_CLASE
                {   
                        //creando el padre
                        $$=new Nod(); 
                        _S *padre=new _S("S",tabla); 
                        padre->nivel=1;


                                //hijos
                                padre->hijos.append($1->Padre);
                                padre->hijos.append($2->Padre);
                        
                        raiz->hijos.append(padre);
                }
        |LST_CLASE
                {   
                        //creando el padre
                        $$=new Nod(); 
                        _S *padre=new _S("S",tabla); 
                        padre->nivel=2;

                                //hijos
                                padre->hijos.append($1->Padre);

                        raiz->hijos.append(padre);
                }
        ;
 
LST_IMPORT:            
        LST_IMPORT IMPORT
                {   
                        //creando el padre
                        $$=new Nod(); 
                        _LST_IMPORT *padre=new _LST_IMPORT("LST_IMPORT",tabla); 
                        padre->nivel=1;
                                //hijos
                                padre->hijos.append($1->Padre);
                                padre->hijos.append($2->Padre);

                        $$->Padre=padre;
                }
        |IMPORT
                {   
                        //creando el padre
                        $$=new Nod(); 
                        _LST_IMPORT *padre=new _LST_IMPORT("LST_IMPORT",tabla); 
                        padre->nivel=2;
                                //hijos
                                padre->hijos.append($1->Padre);

                        $$->Padre=padre;
                }
        ;

IMPORT:                
        tImport  sAbreParent  valId  sPunto  valId  sCierraParent  sPuntoComa
                {   
                        //creando el padre
                        $$=new Nod(); 
                        _IMPORT *padre=new _IMPORT("IMPORT",tabla); 
                        padre->nivel=1;
                                

                                //asignando atributos  

                                token *tok3=new token(QString::fromStdString($3),@3.first_line,3,archivo);
                                padre->lst_Atributos->insertar("valId",tok3);
 

                                token *tok5=new token(QString::fromStdString($5),@5.first_line,3,archivo);
                                padre->lst_Atributos->insertar("valId",tok5);
                                
                        $$->Padre=padre;
                }
        ;

LST_CLASE:              
        LST_CLASE CLASE
                {   
                        //creando el padre
                        $$=new Nod(); 
                        _LST_CLASE *padre=new _LST_CLASE("LST_CLASE",tabla); 
                        padre->nivel=1;

                                //hijos
                                padre->hijos.append($1->Padre);
                                padre->hijos.append($2->Padre);

                        $$->Padre=padre;
                }
        |CLASE
                {   
                        //creando el padre
                        $$=new Nod(); 
                        _LST_CLASE *padre=new _LST_CLASE("LST_CLASE",tabla); 
                        padre->nivel=2;
                                //hijos
                                padre->hijos.append($1->Padre);

                        $$->Padre=padre;
                }
        ;


CLASE:                  
        tClase  valId  EXTENDER  sAbreLlave  CP_CLASE  sCierraLlave
                {   

                        //std::cout<<padre->nombre.toStdString()<<std::endl;
                        //std::cout<<$2<<" linea:"<<@2.first_line<<std::endl;

                        //creando el padre
                        $$=new Nod(); 
                        _CLASE *padre=new _CLASE("CLASE",tabla);
                        padre->nivel=1;
                                //asignando atributos  

                                token *tok2=new token(QString::fromStdString($2),@2.first_line,3,archivo);
                                padre->lst_Atributos->insertar("valId",tok2);


                                //hijos
                                padre->hijos.append($3->Padre);
                                padre->hijos.append($5->Padre);



 

                        $$->Padre=padre;

                }
        |tClase  valId  VISIBILIDAD  EXTENDER  sAbreLlave  CP_CLASE  sCierraLlave
                {   
                        //creando el padre
                        $$=new Nod(); 
                        _CLASE *padre=new _CLASE("CLASE",tabla); 
                        padre->nivel=2;

                                //asignando atributos  

                                token *tok2=new token(QString::fromStdString($2),@2.first_line,3,archivo);
                                padre->lst_Atributos->insertar("valId",tok2);


                                //hijos
                                padre->hijos.append($3->Padre);
                                padre->hijos.append($4->Padre);
                                padre->hijos.append($6->Padre);

                        $$->Padre=padre;
                }
        ;



TIPO:                   
        tEntero
                {   
                        //creando el padre
                        $$=new Nod(); 
                        _TIPO *padre=new _TIPO("TIPO",tabla); 
                        padre->nivel=1;
                                //asignando atributos 
                                token *tok1=new token(QString::fromStdString($1),@1.first_line,3,archivo);
                                padre->lst_Atributos->insertar("tEntero",tok1);

                        $$->Padre=padre;
                }
        |tCaracter
                {   
                        //creando el padre
                        $$=new Nod(); 
                        _TIPO *padre=new _TIPO("TIPO",tabla); 
                        padre->nivel=2;

                                //asignando atributos 
                                token *tok1=new token(QString::fromStdString($1),@1.first_line,3,archivo);
                                padre->lst_Atributos->insertar("tCaracter",tok1);

                        $$->Padre=padre;
                }
        |tBooleano
                {   
                        //creando el padre
                        $$=new Nod(); 
                        _TIPO *padre=new _TIPO("TIPO",tabla); 
                        padre->nivel=3;

                                //asignando atributos 
                                token *tok1=new token(QString::fromStdString($1),@1.first_line,3,archivo);
                                padre->lst_Atributos->insertar("tBooleano",tok1);

                        $$->Padre=padre;
                }
        |tDecimal 
                {   
                        //creando el padre
                        $$=new Nod(); 
                        _TIPO *padre=new _TIPO("TIPO",tabla); 
                        padre->nivel=4;

                                //asignando atributos 
                                token *tok1=new token(QString::fromStdString($1),@1.first_line,3,archivo);
                                padre->lst_Atributos->insertar("tDecimal",tok1);

                        $$->Padre=padre;
                }
        |valId 
                {   
                        //creando el padre
                        $$=new Nod(); 
                        _TIPO *padre=new _TIPO("TIPO",tabla); 
                        padre->nivel=5;

                                //asignando atributos 
                                token *tok1=new token(QString::fromStdString($1),@1.first_line,3,archivo);
                                padre->lst_Atributos->insertar("valId",tok1);

                        $$->Padre=padre;
                }
        |tVacio 
                {   
                        //creando el padre
                        $$=new Nod(); 
                        _TIPO *padre=new _TIPO("TIPO",tabla); 
                        padre->nivel=6;

                                //asignando atributos 
                                token *tok1=new token(QString::fromStdString($1),@1.first_line,3,archivo);
                                padre->lst_Atributos->insertar("tVacio",tok1);

                        $$->Padre=padre;
                }
        ;

EXTENDER:              
        tPadre  valId
                {   


                        //creando el padre
                        $$=new Nod(); 
                        _EXTENDER *padre=new _EXTENDER("EXTENDER",tabla);
                        padre->nivel=1;

                                //atributos  
                                token *tok2=new token(QString::fromStdString($2),@2.first_line,3,archivo);
                                padre->lst_Atributos->insertar("valId",tok2);


                        $$->Padre=padre;
                }
        |
                {
                        //creando el padre
                        $$=new Nod(); 
                        _EXTENDER *padre=new _EXTENDER("EXTENDER",tabla);
                        padre->nivel=2;

                        $$->Padre=padre;
                }
        
        ;     

LST_PARAMETROS:  
        LST_PARAMETROS sComa PARAMETRO
                {   
                        //creando el padre
                        $$=new Nod(); 
                        _LST_PARAMETROS *padre=new _LST_PARAMETROS("LST_PARAMETROS",tabla); 
                        padre->nivel=1;

                                //hijos
                                padre->hijos.append($1->Padre);
                                padre->hijos.append($3->Padre);

                        $$->Padre=padre; 
                }
        |PARAMETRO
                {   
                        //creando el padre
                        $$=new Nod(); 
                        _LST_PARAMETROS *padre=new _LST_PARAMETROS("LST_PARAMETROS",tabla); 
                        padre->nivel=2;

                                //hijos
                                padre->hijos.append($1->Padre);

                        $$->Padre=padre;
                }
        |
                {
                        //creando el padre
                        $$=new Nod(); 
                        _LST_PARAMETROS *padre=new _LST_PARAMETROS("LST_PARAMETROS",tabla); 
                        padre->nivel=3;
                        $$->Padre=padre;
                        /*vacio*/
                }
        ;

PARAMETRO:  
        TIPO  VAR_ARREGLO
                {   
                        //creando el padre
                        $$=new Nod(); 
                        _PARAMETRO *padre=new _PARAMETRO("PARAMETRO",tabla); 
                        padre->nivel=1;
                                //hijos
                                padre->hijos.append($1->Padre);
                                padre->hijos.append($2->Padre);

                        $$->Padre=padre;
                }
        ;


LST_VAL:  
        LST_VAL sComa VALOR
                {   
                        
                        $1->Padre->hijos.append($3->Padre);

                        $$->Padre=$1->Padre;
                }
        |VALOR
                {   
                        //creando el padre
                        $$=new Nod(); 
                        _LST_VAL *padre=new _LST_VAL("LST_VAL",tabla); 
                        padre->nivel=2;

                                //hijos
                                padre->hijos.append($1->Padre); 

                        $$->Padre=padre;
                }
        |
                {
                        //creando el padre
                        $$=new Nod(); 
                        _LST_VAL *padre=new _LST_VAL("LST_VAL",tabla); 
                        padre->nivel=3;
                        $$->Padre=padre;
                        /*vacio*/
                }

        ;

VISIBILIDAD:            
        tPublico
                {   
                        //creando el padre
                        $$=new Nod(); 
                        _VISIBILIDAD *padre=new _VISIBILIDAD("VISIBILIDAD",tabla); 
                        padre->nivel=1;
                        
                                //asignando atributos 
                                token *tok1=new token(QString::fromStdString($1),@1.first_line,3,archivo);
                                padre->lst_Atributos->insertar("tPublico",tok1);
                                
                        $$->Padre=padre;
                }
        |tPrivado
                {   
                        //creando el padre
                        $$=new Nod(); 
                        _VISIBILIDAD *padre=new _VISIBILIDAD("VISIBILIDAD",tabla); 
                        padre->nivel=2;
                                //asignando atributos 
                                token *tok1=new token(QString::fromStdString($1),@1.first_line,3,archivo);
                                padre->lst_Atributos->insertar("tPrivado",tok1);

                        $$->Padre=padre;
                }
        |tProtegido
                {   
                        //creando el padre
                        $$=new Nod(); 
                        _VISIBILIDAD *padre=new _VISIBILIDAD("VISIBILIDAD",tabla); 
                        padre->nivel=3;
                                //asignando atributos 
                                token *tok1=new token(QString::fromStdString($1),@1.first_line,3,archivo);
                                padre->lst_Atributos->insertar("tProtegido",tok1);

                        $$->Padre=padre;
                }
        ;                              

  
CP_CLASE:              
        CP_CLASE CUERPO_CLASE
                {   
                        //creando el padre
                        $$=new Nod(); 
                        _CP_CLASE *padre=new _CP_CLASE("CP_CLASE",tabla); 
                        padre->nivel=1;
                                //hijos
                                padre->hijos.append($1->Padre);
                                padre->hijos.append($2->Padre);

                        $$->Padre=padre;
                }
        |CUERPO_CLASE
                {   
                        //creando el padre
                        $$=new Nod(); 
                        _CP_CLASE *padre=new _CP_CLASE("CP_CLASE",tabla); 
                        padre->nivel=2;
                                //hijos
                                padre->hijos.append($1->Padre);
                                
                        $$->Padre=padre;
                }
        ;


 CUERPO_CLASE:  
        CONSTRUCTOR
                {   
                        //creando el padre
                        $$=new Nod(); 
                        _CUERPO_CLASE *padre=new _CUERPO_CLASE("CUERPO_CLASE",tabla); 
                        padre->nivel=1;
                                //hijos
                                padre->hijos.append($1->Padre);

                        $$->Padre=padre;
                }
        | DECLARAR_VARIABLE_GLOBAL  sPuntoComa
                {   
                        //creando el padre
                        $$=new Nod(); 
                        _CUERPO_CLASE *padre=new _CUERPO_CLASE("CUERPO_CLASE",tabla); 
                        padre->nivel=2;

                                //hijos
                                padre->hijos.append($1->Padre);

                        $$->Padre=padre;
                }
        | METODO
                {   
                        //creando el padre
                        $$=new Nod(); 
                        _CUERPO_CLASE *padre=new _CUERPO_CLASE("CUERPO_CLASE",tabla); 
                        padre->nivel=3;

                                //hijos
                                padre->hijos.append($1->Padre);

                        $$->Padre=padre;
                }
        | MAIN
                {   
                        //creando el padre
                        $$=new Nod(); 
                        _CUERPO_CLASE *padre=new _CUERPO_CLASE("CUERPO_CLASE",tabla); 
                        padre->nivel=4;

                                //hijos
                                padre->hijos.append($1->Padre);

                        $$->Padre=padre;
                }
        ;


METODO:  
        VISIBILIDAD  TIPO    valId  sAbreParent  LST_PARAMETROS  sCierraParent  sAbreLlave  LST_CUERPO  sCierraLlave
                {   
                        //creando el padre
                        $$=new Nod(); 
                        _METODO *padre=new _METODO("METODO",tabla); 
                        padre->nivel=1;

                                //asignando atributos 
                                token *tok3=new token(QString::fromStdString($3),@3.first_line,3,archivo);
                                padre->lst_Atributos->insertar("valId",tok3);


                                //hijos
                                padre->hijos.append($1->Padre);
                                padre->hijos.append($2->Padre);
                                //padre->hijos.append($3->Padre);
                                padre->hijos.append($5->Padre);
                                padre->hijos.append($8->Padre);

                        $$->Padre=padre;
                }
        | TIPO    valId  sAbreParent  LST_PARAMETROS  sCierraParent  sAbreLlave  LST_CUERPO  sCierraLlave
                {   
                        //creando el padre
                        $$=new Nod(); 
                        _METODO *padre=new _METODO("METODO",tabla); 
                        padre->nivel=2;

                                //asignando atributos 
                                token *tok2=new token(QString::fromStdString($2),@2.first_line,3,archivo);
                                padre->lst_Atributos->insertar("valId",tok2);

                                //hijos
                                padre->hijos.append($1->Padre);
                                //padre->hijos.append($2->Padre);
                                padre->hijos.append($4->Padre);
                                padre->hijos.append($7->Padre); 

                        $$->Padre=padre;
                }
        |VISIBILIDAD  TIPO  LST_CORCHETES  valId  sAbreParent  LST_PARAMETROS  sCierraParent  sAbreLlave  LST_CUERPO  sCierraLlave
                {   
                        //creando el padre
                        $$=new Nod(); 
                        _METODO *padre=new _METODO("METODO",tabla); 
                        padre->nivel=3;
 
                                //asignando atributos 
                                token *tok4=new token(QString::fromStdString($4),@4.first_line,3,archivo);
                                padre->lst_Atributos->insertar("valId",tok4);

                                //hijos
                                padre->hijos.append($1->Padre);
                                padre->hijos.append($2->Padre);
                                padre->hijos.append($3->Padre);
                                padre->hijos.append($6->Padre);
                                padre->hijos.append($9->Padre);


                        $$->Padre=padre;
                }
        | TIPO  LST_CORCHETES  valId  sAbreParent  LST_PARAMETROS  sCierraParent  sAbreLlave  LST_CUERPO  sCierraLlave
                {   
                        //creando el padre
                        $$=new Nod(); 
                        _METODO *padre=new _METODO("METODO",tabla); 
                        padre->nivel=4;

                                //asignando atributos 
                                token *tok3=new token(QString::fromStdString($3),@3.first_line,3,archivo);
                                padre->lst_Atributos->insertar("valId",tok3);

                                //hijos
                                padre->hijos.append($1->Padre);
                                padre->hijos.append($2->Padre); 
                                padre->hijos.append($5->Padre);
                                padre->hijos.append($8->Padre);

                        $$->Padre=padre;
                }
        ;
 

MAIN:  
        tPrincipal  sAbreParent  sCierraParent  sAbreLlave  LST_CUERPO  sCierraLlave
                {   
                        //creando el padre
                        $$=new Nod(); 
                        _MAIN *padre=new _MAIN("MAIN",tabla); 
                        padre->nivel=1;
                                //asignando atributos 
                                token *tok1=new token(QString::fromStdString($1),@1.first_line,3,archivo);
                                padre->lst_Atributos->insertar("tPrincipal",tok1);
                        
                                //hijos
                                padre->hijos.append($5->Padre);

                        $$->Padre=padre;
                }
        ;

CONSTRUCTOR:  
        valId  sAbreParent  LST_PARAMETROS  sCierraParent  sAbreLlave  LST_CUERPO  sCierraLlave
                {   
                        //creando el padre
                        $$=new Nod(); 
                        _CONSTRUCTOR *padre=new _CONSTRUCTOR("CONSTRUCTOR",tabla); 
                        padre->nivel=1;
                        
                                //asignando atributos 
                                token *tok1=new token(QString::fromStdString($1),@1.first_line,3,archivo);
                                padre->lst_Atributos->insertar("valId",tok1);

                                //hijos
                                padre->hijos.append($3->Padre);
                                padre->hijos.append($6->Padre); 


                        $$->Padre=padre;
                }
        ;



DECLARAR_VARIABLE_GLOBAL: 
        /*
        VISIBILIDAD TIPO  VAR_ARREGLO  VAL
                {   
                        //creando el padre
                        $$=new Nod(); 
                        _DECLARAR_VARIABLE_GLOBAL *padre=new _DECLARAR_VARIABLE_GLOBAL("DECLARAR_VARIABLE_GLOBAL",tabla); 
                        padre->nivel=1;

                                //hijos
                                padre->hijos.append($1->Padre);
                                padre->hijos.append($2->Padre); 
                                padre->hijos.append($3->Padre);
                                padre->hijos.append($4->Padre); 

                                
                        $$->Padre=padre;
                }
        | VISIBILIDAD TIPO  VAR_ARREGLO  
                {   
                        //creando el padre
                        $$=new Nod(); 
                        _DECLARAR_VARIABLE_GLOBAL *padre=new _DECLARAR_VARIABLE_GLOBAL("DECLARAR_VARIABLE_GLOBAL",tabla); 
                        padre->nivel=2;
                                //hijos
                                padre->hijos.append($1->Padre);
                                padre->hijos.append($2->Padre); 
                                padre->hijos.append($3->Padre); 

                        $$->Padre=padre;
                }
        | */VISIBILIDAD DECLARAR_VARIABLE_SINVISIBI
                {   
                        //creando el padre
                        $$=new Nod(); 
                        _DECLARAR_VARIABLE_GLOBAL *padre=new _DECLARAR_VARIABLE_GLOBAL("DECLARAR_VARIABLE_GLOBAL",tabla); 
                        padre->nivel=3;

                                //hijos
                                padre->hijos.append($1->Padre);
                                padre->hijos.append($2->Padre);

                        $$->Padre=padre;
                } 
        ;



DECLARAR_VARIABLE_SINVISIBI:  
        TIPO  VAR_ARREGLO  VAL
                {   
                        //creando el padre
                        $$=new Nod(); 
                        _DECLARAR_VARIABLE_SINVISIBI *padre=new _DECLARAR_VARIABLE_SINVISIBI("DECLARAR_VARIABLE_SINVISIBI",tabla); 
                        padre->nivel=1;

                                //hijos
                                padre->hijos.append($1->Padre);
                                padre->hijos.append($2->Padre); 
                                padre->hijos.append($3->Padre); 

                        $$->Padre=padre;
                }
        | TIPO  VAR_ARREGLO
                {   
                        //creando el padre
                        $$=new Nod(); 
                        _DECLARAR_VARIABLE_SINVISIBI *padre=new _DECLARAR_VARIABLE_SINVISIBI("DECLARAR_VARIABLE_SINVISIBI",tabla);
                        padre->nivel=2;

                                //hijos
                                padre->hijos.append($1->Padre);
                                padre->hijos.append($2->Padre);  

                        $$->Padre=padre;
                }
        ;



VAL:  
        sIgual  VALOR
                {   
                        //creando el padre
                        $$=new Nod(); 
                        _VAL *padre=new _VAL("VAL",tabla); 
                        padre->nivel=1;

                                //hijos 
                                padre->hijos.append($2->Padre);  

                        $$->Padre=padre;
                }
        ;


LST_LLAVES_VAL:
        sAbreLlave LLAVES_VAL_P sCierraLlave
                {   
                        //creando el padre
                        $$=new Nod(); 
                        _LST_LLAVES_VAL *padre=new _LST_LLAVES_VAL("LST_LLAVES_VAL",tabla); 
                        padre->nivel=1;

                                //hijos 
                                padre->hijos.append($2->Padre);  

                        $$->Padre=padre;
                }

        ;


LLAVES_VAL_P:  
        LLAVES_VAL_P sComa  E 
                {   
                        //creando el padre
                        $$=new Nod(); 
                        _LLAVES_VAL_P *padre=new _LLAVES_VAL_P("LLAVES_VAL_P",tabla); 
                        padre->nivel=1;

                                //hijos 
                                padre->hijos.append($1->Padre);
                                padre->hijos.append($3->Padre);  

                        $$->Padre=padre;
                }
        | LLAVES_VAL_P sComa LST_LLAVES_VAL
                {   
                        //creando el padre
                        $$=new Nod(); 
                        _LLAVES_VAL_P *padre=new _LLAVES_VAL_P("LLAVES_VAL_P",tabla); 
                        padre->nivel=2;

                                //hijos 
                                padre->hijos.append($1->Padre);
                                padre->hijos.append($3->Padre);  

                        $$->Padre=padre;
                }
        | E
                {   
                        //creando el padre
                        $$=new Nod(); 
                        _LLAVES_VAL_P *padre=new _LLAVES_VAL_P("LLAVES_VAL_P",tabla); 
                        padre->nivel=3;

                                //hijos 
                                padre->hijos.append($1->Padre); 

                        $$->Padre=padre;
                }
        | LST_LLAVES_VAL
                {   
                        //creando el padre
                        $$=new Nod(); 
                        _LLAVES_VAL_P *padre=new _LLAVES_VAL_P("LLAVES_VAL_P",tabla); 
                        padre->nivel=4;

                                //hijos 
                                padre->hijos.append($1->Padre); 

                        $$->Padre=padre;
                }
        ;



VAR_ARREGLO:  
        valId
                {   
                        //creando el padre
                        $$=new Nod(); 
                        _VAR_ARREGLO *padre=new _VAR_ARREGLO("VAR_ARREGLO",tabla); 
                        padre->nivel=1;

                                //asignando atributos 
                                token *tok1=new token(QString::fromStdString($1),@1.first_line,3,archivo);
                                padre->lst_Atributos->insertar("valId",tok1);

                        $$->Padre=padre;
                }
        |valId  LST_CORCHETES_VAL
                {   
                        //creando el padre
                        $$=new Nod(); 
                        _VAR_ARREGLO *padre=new _VAR_ARREGLO("VAR_ARREGLO",tabla); 
                        padre->nivel=2;

                                //asignando atributos 
                                token *tok1=new token(QString::fromStdString($1),@1.first_line,3,archivo);
                                padre->lst_Atributos->insertar("valId",tok1);

                                //hijos 
                                padre->hijos.append($2->Padre);  

                        $$->Padre=padre;
                }
        ;

LST_CORCHETES:  
        LST_CORCHETES PAR_CORCHETES_VACIOS
                {   
                        $1->Padre->hijos.append($2->Padre);  


                        $$=$1;
                }
        |PAR_CORCHETES_VACIOS
                {   
                        //creando el padre
                        $$=new Nod(); 
                        _LST_CORCHETES *padre=new _LST_CORCHETES("LST_CORCHETES",tabla); 
                        padre->nivel=2;

                                //hijos
                                padre->hijos.append($1->Padre); 

                        $$->Padre=padre;
                } 
        ;

PAR_CORCHETES_VACIOS:  
        sAbreCorchete  sCierraCorchete
                {   
                        //creando el padre
                        $$=new Nod(); 
                        _PAR_CORCHETES_VACIOS *padre=new _PAR_CORCHETES_VACIOS("PAR_CORCHETES_VACIOS",tabla); 
                        padre->nivel=1;
                        $$->Padre=padre;
                }
        ;

PAR_CORCHETES_VAL:  
        sAbreCorchete  E  sCierraCorchete
                {   
                        //creando el padre
                        $$=new Nod(); 
                        _PAR_CORCHETES_VAL *padre=new _PAR_CORCHETES_VAL("PAR_CORCHETES_VAL",tabla); 
                        padre->nivel=1;


                                //hijos 
                                padre->hijos.append($2->Padre);  


                        $$->Padre=padre;
                }
        ;

LST_CORCHETES_VAL:  
        LST_CORCHETES_VAL  PAR_CORCHETES_VAL
                {    
                        
                        
                        $1->Padre->hijos.append($2->Padre);  


                        $$=$1;
                }
        |PAR_CORCHETES_VAL
                {   
                        //creando el padre
                        $$=new Nod(); 
                        _LST_CORCHETES_VAL *padre=new _LST_CORCHETES_VAL("LST_CORCHETES_VAL",tabla); 
                        padre->nivel=2;

                                //hijos
                                padre->hijos.append($1->Padre); 

                        $$->Padre=padre;
                }
        ;


ID_VAR_FUNC:  
        ID_VAR_FUNC  LST_PUNTOSP 
                {   
                        //creando el padre
                        $$=new Nod(); 
                        _ID_VAR_FUNC *padre=new _ID_VAR_FUNC("ID_VAR_FUNC",tabla); 
                        padre->nivel=1;

                                //hijos
                                padre->hijos.append($1->Padre);
                                padre->hijos.append($2->Padre);  

                        $$->Padre=padre;
                }
        | tEste  sPunto  valId
                {   
                        //creando el padre
                        $$=new Nod(); 
                        _ID_VAR_FUNC *padre=new _ID_VAR_FUNC("ID_VAR_FUNC",tabla); 
                        padre->nivel=2;
                        
                                //asignando atributos 
                                token *tok3=new token(QString::fromStdString($3),@3.first_line,3,archivo);
                                padre->lst_Atributos->insertar("valId",tok3);

                        $$->Padre=padre;
                }
        | valId
                {   
                        //creando el padre
                        $$=new Nod(); 
                        _ID_VAR_FUNC *padre=new _ID_VAR_FUNC("ID_VAR_FUNC",tabla); 
                        padre->nivel=3;

                                //asignando atributos 
                                token *tok1=new token(QString::fromStdString($1),@1.first_line,3,archivo);
                                padre->lst_Atributos->insertar("valId",tok1);

                        $$->Padre=padre;
                }
        | tEste  sPunto  valId  sAbreParent  LST_VAL  sCierraParent
                {   
                        //creando el padre
                        $$=new Nod(); 
                        _ID_VAR_FUNC *padre=new _ID_VAR_FUNC("ID_VAR_FUNC",tabla); 
                        padre->nivel=4;

                                //asignando atributos 
                                token *tok3=new token(QString::fromStdString($3),@3.first_line,3,archivo);
                                padre->lst_Atributos->insertar("valId",tok3);

                                //hijos
                                padre->hijos.append($5->Padre); 


                        $$->Padre=padre;
                }
        | valId  sAbreParent  LST_VAL  sCierraParent 
                {   
                        //creando el padre
                        $$=new Nod(); 
                        _ID_VAR_FUNC *padre=new _ID_VAR_FUNC("ID_VAR_FUNC",tabla); 
                        padre->nivel=5;


                                //asignando atributos 
                                token *tok1=new token(QString::fromStdString($1),@1.first_line,3,archivo);
                                padre->lst_Atributos->insertar("valId",tok1);

                                //hijos 
                                padre->hijos.append($3->Padre); 

                        $$->Padre=padre;
                }
        | tEste  sPunto  valId  LST_CORCHETES_VAL
                {   
                        //creando el padre
                        $$=new Nod(); 
                        _ID_VAR_FUNC *padre=new _ID_VAR_FUNC("ID_VAR_FUNC",tabla); 
                        padre->nivel=6;

                                //asignando atributos 
                                token *tok3=new token(QString::fromStdString($3),@3.first_line,3,archivo);
                                padre->lst_Atributos->insertar("valId",tok3);

                                //hijos 
                                padre->hijos.append($4->Padre); 


                        $$->Padre=padre;
                }
        | valId  LST_CORCHETES_VAL
                {   
                        //creando el padre
                        $$=new Nod(); 
                        _ID_VAR_FUNC *padre=new _ID_VAR_FUNC("ID_VAR_FUNC",tabla); 
                        padre->nivel=7;


                                //asignando atributos 
                                token *tok1=new token(QString::fromStdString($1),@1.first_line,3,archivo);
                                padre->lst_Atributos->insertar("valId",tok1);

                                //hijos 
                                padre->hijos.append($2->Padre);  


                        $$->Padre=padre;
                }
        | tEste  sPunto  valId  sAbreParent  LST_VAL  sCierraParent  LST_CORCHETES_VAL
                {   
                        //creando el padre
                        $$=new Nod(); 
                        _ID_VAR_FUNC *padre=new _ID_VAR_FUNC("ID_VAR_FUNC",tabla); 
                        padre->nivel=8;

                                //asignando atributos 
                                token *tok3=new token(QString::fromStdString($3),@3.first_line,3,archivo);
                                padre->lst_Atributos->insertar("valId",tok3);

                                //hijos
                                padre->hijos.append($5->Padre);
                                padre->hijos.append($7->Padre);  


                        $$->Padre=padre;
                }
        | valId  sAbreParent  LST_VAL  sCierraParent  LST_CORCHETES_VAL
                {   
                        //creando el padre
                        $$=new Nod(); 
                        _ID_VAR_FUNC *padre=new _ID_VAR_FUNC("ID_VAR_FUNC",tabla); 
                        padre->nivel=9;

                                //asignando atributos 
                                token *tok1=new token(QString::fromStdString($1),@1.first_line,3,archivo);
                                padre->lst_Atributos->insertar("valId",tok1);


                                //hijos 
                                padre->hijos.append($3->Padre);
                                padre->hijos.append($5->Padre); 

                        $$->Padre=padre;
                }
        ;


LST_PUNTOSP:  
        sPunto  valId
                {   
                        //creando el padre
                        $$=new Nod(); 
                        _LST_PUNTOSP *padre=new _LST_PUNTOSP("LST_PUNTOSP",tabla); 
                        padre->nivel=1;

                                //asignando atributos 
                                token *tok2=new token(QString::fromStdString($2),@2.first_line,3,archivo);
                                padre->lst_Atributos->insertar("valId",tok2);

                        $$->Padre=padre;
                }
        | sPunto  valId  sAbreParent  LST_VAL  sCierraParent
                {   
                        //creando el padre
                        $$=new Nod(); 
                        _LST_PUNTOSP *padre=new _LST_PUNTOSP("LST_PUNTOSP",tabla); 
                        padre->nivel=2;

                                //asignando atributos 
                                token *tok2=new token(QString::fromStdString($2),@2.first_line,3,archivo);
                                padre->lst_Atributos->insertar("valId",tok2);

                                //hijos 
                                padre->hijos.append($4->Padre); 


                        $$->Padre=padre;
                }

        | sPunto  valId  LST_CORCHETES_VAL
                {   
                        //creando el padre
                        $$=new Nod(); 
                        _LST_PUNTOSP *padre=new _LST_PUNTOSP("LST_PUNTOSP",tabla); 
                        padre->nivel=3;

                                //asignando atributos 
                                token *tok2=new token(QString::fromStdString($2),@2.first_line,3,archivo);
                                padre->lst_Atributos->insertar("valId",tok2);


                                //hijos 
                                padre->hijos.append($3->Padre); 

                        $$->Padre=padre;
                }
        | sPunto  valId  sAbreParent  LST_VAL  sCierraParent  LST_CORCHETES_VAL
                {   
                        //creando el padre
                        $$=new Nod(); 
                        _LST_PUNTOSP *padre=new _LST_PUNTOSP("LST_PUNTOSP",tabla); 
                        padre->nivel=4;

                                //asignando atributos 
                                token *tok2=new token(QString::fromStdString($2),@2.first_line,3,archivo);
                                padre->lst_Atributos->insertar("valId",tok2);

                                //hijos 
                                padre->hijos.append($4->Padre);
                                padre->hijos.append($6->Padre); 
                                
                        $$->Padre=padre;
                }
        ;



ASIG_VALOR:  
        ID_VAR_FUNC  VAL
                {   
                        //creando el padre
                        $$=new Nod(); 
                        _ASIG_VALOR *padre=new _ASIG_VALOR("ASIG_VALOR",tabla); 
                        padre->nivel=1;

                                //hijos
                                padre->hijos.append($1->Padre);
                                padre->hijos.append($2->Padre);  

                        $$->Padre=padre;
                }
        | ID_VAR_FUNC  sMas  sMas
                {   
                        //creando el padre
                        $$=new Nod(); 
                        _ASIG_VALOR *padre=new _ASIG_VALOR("ASIG_VALOR",tabla); 
                        padre->nivel=2;

                                //hijos
                                padre->hijos.append($1->Padre); 

                        $$->Padre=padre;
                }
        | ID_VAR_FUNC  sMenos  sMenos
                {   
                        //creando el padre
                        $$=new Nod(); 
                        _ASIG_VALOR *padre=new _ASIG_VALOR("ASIG_VALOR",tabla); 
                        padre->nivel=3;

                                //hijos
                                padre->hijos.append($1->Padre); 

                        $$->Padre=padre;
                }
        ;

LST_CUERPO:  
        LST_CUERPO CUERPO
                {   
                        //creando el padre
                        $$=new Nod(); 
                        _LST_CUERPO *padre=new _LST_CUERPO("LST_CUERPO",tabla); 
                        padre->nivel=1;

                                //hijos
                                padre->hijos.append($1->Padre);
                                padre->hijos.append($2->Padre);  

                        $$->Padre=padre;
                }
        |CUERPO
                {   
                        //creando el padre
                        $$=new Nod(); 
                        _LST_CUERPO *padre=new _LST_CUERPO("LST_CUERPO",tabla); 
                        padre->nivel=2;

                                //hijos
                                padre->hijos.append($1->Padre); 

                        $$->Padre=padre;
                }
                
        ;
 

CUERPO:  
        DECLARAR_VARIABLE_SINVISIBI  sPuntoComa
                {   
                        //creando el padre
                        $$=new Nod(); 
                        _CUERPO *padre=new _CUERPO("CUERPO",tabla); 
                        padre->nivel=1;

                                //hijos
                                padre->hijos.append($1->Padre); 

                        $$->Padre=padre;
                }
        | ID_VAR_FUNC  sPuntoComa  
                {   
                        //creando el padre
                        $$=new Nod(); 
                        _CUERPO *padre=new _CUERPO("CUERPO",tabla); 
                        padre->nivel=2;

                                //hijos
                                padre->hijos.append($1->Padre); 

                        $$->Padre=padre;
                }
        | ASIG_VALOR  sPuntoComa
                {   
                        //creando el padre
                        $$=new Nod(); 
                        _CUERPO *padre=new _CUERPO("CUERPO",tabla); 
                        padre->nivel=3;

                                //hijos
                                padre->hijos.append($1->Padre); 

                        $$->Padre=padre;
                }

        | SENTENCIAS
                {   
                        //creando el padre
                        $$=new Nod(); 
                        _CUERPO *padre=new _CUERPO("CUERPO",tabla); 
                        padre->nivel=4;

                                //hijos
                                padre->hijos.append($1->Padre); 

                        $$->Padre=padre;
                }
        | SUPER
                {   
                        //creando el padre
                        $$=new Nod(); 
                        _CUERPO *padre=new _CUERPO("CUERPO",tabla); 
                        padre->nivel=5;

                                //hijos
                                padre->hijos.append($1->Padre);
                                
                        $$->Padre=padre;
                }
 
        | ROMPER
                {   
                        //creando el padre
                        $$=new Nod(); 
                        _CUERPO *padre=new _CUERPO("CUERPO",tabla); 
                        padre->nivel=6;
                                //hijos
                                padre->hijos.append($1->Padre);
                                

                        $$->Padre=padre; 
                }
        | CONTINUAR
                {   
                        //creando el padre
                        $$=new Nod(); 
                        _CUERPO *padre=new _CUERPO("CUERPO",tabla); 
                        padre->nivel=7;

                                //hijos
                                padre->hijos.append($1->Padre);
                                
                        $$->Padre=padre;
                }
        | RETORNO 
                {   
                        //creando el padre
                        $$=new Nod(); 
                        _CUERPO *padre=new _CUERPO("CUERPO",tabla); 
                        padre->nivel=8;
                                //hijos
                                padre->hijos.append($1->Padre);
                                

                        $$->Padre=padre;
                } 
        | FUNCIONES_NATIVAS  sPuntoComa
                {   
                        //creando el padre
                        $$=new Nod(); 
                        _CUERPO *padre=new _CUERPO("CUERPO",tabla); 
                        padre->nivel=9;

                                //hijos
                                padre->hijos.append($1->Padre); 

                        $$->Padre=padre;
                }
        ;

FUNCIONES_NATIVAS: 
        IMPRIMIR
                {   
                        //creando el padre
                        $$=new Nod(); 
                        _FUNCIONES_NATIVAS *padre=new _FUNCIONES_NATIVAS("FUNCIONES_NATIVAS",tabla); 
                        padre->nivel=1;

                                //hijos
                                padre->hijos.append($1->Padre); 

                        $$->Padre=padre;
                } 
        ;


IMPRIMIR:
        tImprimir sAbreParent VALOR sCierraParent 
                {   
                        //creando el padre
                        $$=new Nod(); 
                        _IMPRIMIR *padre=new _IMPRIMIR("IMPRIMIR",tabla); 
                        padre->nivel=1;

                                //hijos
                                padre->hijos.append($3->Padre); 

                        $$->Padre=padre;
                }
        |tImprimir sAbreParent  sCierraParent
                {   
                        //creando el padre
                        $$=new Nod(); 
                        _IMPRIMIR *padre=new _IMPRIMIR("IMPRIMIR",tabla); 
                        padre->nivel=2;

                                //hijos 

                        $$->Padre=padre;
                }
        ;


SUPER:  
        tSuper  sAbreParent  LST_VAL  sCierraParent  sPuntoComa
                {   
                        //creando el padre
                        $$=new Nod(); 
                        _SUPER *padre=new _SUPER("SUPER",tabla); 
                        padre->nivel=1;

                                //hijos
                                padre->hijos.append($3->Padre);
                                

                        $$->Padre=padre;
                }
        ;

RETORNO:  
        tRetorno  sPuntoComa
                {   
                        //creando el padre
                        $$=new Nod(); 
                        _RETORNO *padre=new _RETORNO("RETORNO",tabla); 
                         padre->nivel=1;

                                //asignando atributos 
                                token *tok1=new token(QString::fromStdString($1),@1.first_line,3,archivo);
                                padre->lst_Atributos->insertar("tRetorno",tok1);


                        $$->Padre=padre;
                }
        | tRetorno  VALOR  sPuntoComa
                {   
                        //creando el padre
                        $$=new Nod(); 
                        _RETORNO *padre=new _RETORNO("RETORNO",tabla); 
                        padre->nivel=2;

                                //asignando atributos 
                                token *tok1=new token(QString::fromStdString($1),@1.first_line,3,archivo);
                                padre->lst_Atributos->insertar("tRetorno",tok1);

                                //hijos 
                                padre->hijos.append($2->Padre);  

                        $$->Padre=padre;
                }
        ;

ROMPER:  
        tRomper  sPuntoComa
                {   
                        //creando el padre
                        $$=new Nod(); 
                        _ROMPER *padre=new _ROMPER("ROMPER",tabla); 
                        padre->nivel=1;
                                //asignando atributos 
                                token *tok1=new token(QString::fromStdString($1),@1.first_line,3,archivo);
                                padre->lst_Atributos->insertar("tRomper",tok1);

                        $$->Padre=padre;
                }
        ;

CONTINUAR:  
        tContinuar  sPuntoComa
                {   
                        //creando el padre
                        $$=new Nod(); 
                        _CONTINUAR *padre=new _CONTINUAR("CONTINUAR",tabla); 
                        padre->nivel=1;
                                //asignando atributos 
                                token *tok1=new token(QString::fromStdString($1),@1.first_line,3,archivo);
                                padre->lst_Atributos->insertar("tContinuar",tok1);

                        $$->Padre=padre;
                }
        ;


SENTENCIAS:  
        SI
                {   
                        //creando el padre
                        $$=new Nod(); 
                        _SENTENCIAS *padre=new _SENTENCIAS("SENTENCIAS",tabla); 
                        padre->nivel=1;

                                //hijos
                                padre->hijos.append($1->Padre); 

                        $$->Padre=padre;
                }
         | WHILE
                {   
                        //creando el padre
                        $$=new Nod(); 
                        _SENTENCIAS *padre=new _SENTENCIAS("SENTENCIAS",tabla); 
                        padre->nivel=1;

                                //hijos
                                padre->hijos.append($1->Padre); 

                        $$->Padre=padre;
                }
        | FOR
                {   
                        //creando el padre
                        $$=new Nod(); 
                        _SENTENCIAS *padre=new _SENTENCIAS("SENTENCIAS",tabla); 
                        padre->nivel=1;

                                //hijos
                                padre->hijos.append($1->Padre); 

                        $$->Padre=padre;
                }
        //| CASO
        //| DOWHILE
        //| REPETIR
        ;

FOR: 
        tPara  sAbreParent DECLARAR_VARIABLE_SINVISIBI sPuntoComa E sPuntoComa ASIG_VALOR sCierraParent sAbreLlave  LST_CUERPO  sCierraLlave
                {   
                        //creando el padre
                        $$=new Nod(); 
                        _FOR *padre=new _FOR("FOR",tabla); 
                        padre->nivel=1;

                                //asignando atributos 
                                token *tok1=new token(QString::fromStdString($1),@1.first_line,3,archivo);
                                padre->lst_Atributos->insertar("tPara",tok1);

                                //hijos
                                padre->hijos.append($3->Padre);
                                padre->hijos.append($5->Padre);
                                padre->hijos.append($7->Padre);
                                padre->hijos.append($10->Padre);  

                        $$->Padre=padre;
                } 
        | tPara sAbreParent ASIG_VALOR sPuntoComa E sPuntoComa ASIG_VALOR sCierraParent sAbreLlave  LST_CUERPO  sCierraLlave
                {   
                        //creando el padre
                        $$=new Nod(); 
                        _FOR *padre=new _FOR("FOR",tabla); 
                        padre->nivel=2;

                                //asignando atributos 
                                token *tok1=new token(QString::fromStdString($1),@1.first_line,3,archivo);
                                padre->lst_Atributos->insertar("tPara",tok1);

                                //hijos
                                padre->hijos.append($3->Padre);
                                padre->hijos.append($5->Padre);
                                padre->hijos.append($7->Padre);
                                padre->hijos.append($10->Padre);  

                        $$->Padre=padre;
                }
        
        ;

WHILE:
        tMientras sAbreParent  E  sCierraParent  sAbreLlave  LST_CUERPO  sCierraLlave
                {   
                        //creando el padre
                        $$=new Nod(); 
                        _WHILE *padre=new _WHILE("WHILE",tabla); 
                        padre->nivel=1;

                                //asignando atributos 
                                token *tok1=new token(QString::fromStdString($1),@1.first_line,3,archivo);
                                padre->lst_Atributos->insertar("tMientras",tok1);

                                //hijos
                                padre->hijos.append($3->Padre);
                                padre->hijos.append($6->Padre);  

                        $$->Padre=padre;
                }
        ;

SI:  
        tSi  sAbreParent  E  sCierraParent  sAbreLlave  LST_CUERPO  sCierraLlave
                {   
                        //creando el padre
                        $$=new Nod(); 
                        _SI *padre=new _SI("SI",tabla); 
                        padre->nivel=1;

                                //asignando atributos 
                                token *tok1=new token(QString::fromStdString($1),@1.first_line,3,archivo);
                                padre->lst_Atributos->insertar("tSi",tok1);

                                //hijos
                                padre->hijos.append($3->Padre);
                                padre->hijos.append($6->Padre);  

                        $$->Padre=padre;
                }
        | tSi  sAbreParent  E  sCierraParent  sAbreLlave  LST_CUERPO  sCierraLlave  SINO_SI
                {   
                        //creando el padre
                        $$=new Nod(); 
                        _SI *padre=new _SI("SI",tabla); 
                        padre->nivel=2;
                        

                                //asignando atributos 
                                token *tok1=new token(QString::fromStdString($1),@1.first_line,3,archivo);
                                padre->lst_Atributos->insertar("tSi",tok1);

                                //hijos
                                padre->hijos.append($3->Padre);
                                padre->hijos.append($6->Padre); 
                                padre->hijos.append($8->Padre);
                                

                        $$->Padre=padre;
                }
        | tSi  sAbreParent  E  sCierraParent  sAbreLlave  LST_CUERPO  sCierraLlave  SINO
                {   
                        //creando el padre
                        $$=new Nod(); 
                        _SI *padre=new _SI("SI",tabla); 
                        padre->nivel=3;

                                //asignando atributos 
                                token *tok1=new token(QString::fromStdString($1),@1.first_line,3,archivo);
                                padre->lst_Atributos->insertar("tSi",tok1);

                                //hijos
                                padre->hijos.append($3->Padre);
                                padre->hijos.append($6->Padre); 
                                padre->hijos.append($8->Padre); 

                        $$->Padre=padre;
                }
        ;

SINO_SI:  
        tSino  tSi  sAbreParent  E  sCierraParent  sAbreLlave  LST_CUERPO  sCierraLlave  SINO_SI
                {   
                        //creando el padre
                        $$=new Nod(); 
                        _SINO_SI *padre=new _SINO_SI("SINO_SI",tabla); 
                        padre->nivel=1;

                                //asignando atributos 
                                token *tok1=new token(QString::fromStdString($1),@1.first_line,3,archivo);
                                padre->lst_Atributos->insertar("tSino",tok1);

                                //hijos
                                padre->hijos.append($4->Padre);
                                padre->hijos.append($7->Padre); 
                                padre->hijos.append($9->Padre);  

                        $$->Padre=padre;
                }
        | tSino  tSi  sAbreParent  E  sCierraParent  sAbreLlave  LST_CUERPO  sCierraLlave
                {   
                        //creando el padre
                        $$=new Nod(); 
                        _SINO_SI *padre=new _SINO_SI("SINO_SI",tabla); 
                        padre->nivel=2;

                                //asignando atributos 
                                token *tok1=new token(QString::fromStdString($1),@1.first_line,3,archivo);
                                padre->lst_Atributos->insertar("tSino",tok1);

                                //hijos
                                padre->hijos.append($4->Padre);
                                padre->hijos.append($7->Padre);  

                        $$->Padre=padre;
                }
        | tSino  tSi  sAbreParent  E  sCierraParent  sAbreLlave  LST_CUERPO  sCierraLlave  SINO
                {   
                        //creando el padre
                        $$=new Nod(); 
                        _SINO_SI *padre=new _SINO_SI("SINO_SI",tabla); 
                        padre->nivel=3;

                                //asignando atributos 
                                token *tok1=new token(QString::fromStdString($1),@1.first_line,3,archivo);
                                padre->lst_Atributos->insertar("tSino",tok1);

                                //hijos
                                padre->hijos.append($4->Padre);
                                padre->hijos.append($7->Padre); 
                                padre->hijos.append($9->Padre); 

                        $$->Padre=padre;
                }
        ;

SINO:  
        tSino  sAbreLlave  LST_CUERPO  sCierraLlave
                {   
                        //creando el padre
                        $$=new Nod(); 
                        _SINO *padre=new _SINO("SINO",tabla); 
                        padre->nivel=1;

                                //asignando atributos 
                                token *tok1=new token(QString::fromStdString($1),@1.first_line,3,archivo);
                                padre->lst_Atributos->insertar("tSino",tok1);

                                //hijos 
                                padre->hijos.append($3->Padre); 

                        $$->Padre=padre;
                }
        ;

 
VALOR:  
       /* tNuevo  valId  sAbreParent  LST_VAL  sCierraParent  
                {   
                        //creando el padre
                        $$=new Nod(); 
                        _VALOR *padre=new _VALOR("VALOR",tabla); 
                        padre->nivel=1;

                                //asignando atributos 
                                token *tok2=new token(QString::fromStdString($2),@2.first_line,3,archivo);
                                padre->lst_Atributos->insertar("valId",tok2);

                                //hijos 
                                padre->hijos.append($4->Padre); 

                        $$->Padre=padre;
                }
        | tNuevo  TIPO  LST_CORCHETES_VAL
                {   
                        //creando el padre
                        $$=new Nod(); 
                        _VALOR *padre=new _VALOR("VALOR",tabla); 
                        padre->nivel=2;

                                //hijos 
                                padre->hijos.append($2->Padre); 
                                padre->hijos.append($3->Padre); 

                        $$->Padre=padre;
                }
        | */

        LST_LLAVES_VAL  
                {   
                        //creando el padre
                        $$=new Nod(); 
                        _VALOR *padre=new _VALOR("VALOR",tabla); 
                        padre->nivel=3;

                                //hijos
                                padre->hijos.append($1->Padre); 

                        $$->Padre=padre;
                }
        | E
                {   
                        //creando el padre
                        $$=new Nod(); 
                        _VALOR *padre=new _VALOR("VALOR",tabla); 
                        padre->nivel=4;

                                //hijos
                                padre->hijos.append($1->Padre); 

                        $$->Padre=padre;
                }
        ;



E: 
        sMenos  E
                {   
                        //creando el padre
                        $$=new Nod(); 
                        _E *padre=new _E("E",tabla); 
                        padre->nivel=1;

                                //asignando atributos 
                                token *tok1=new token(QString::fromStdString($1),@1.first_line,3,archivo);
                                padre->lst_Atributos->insertar("sMenos",tok1);

                                //hijos 
                                padre->hijos.append($2->Padre);  

                        $$->Padre=padre;
                }
        
        | E  sPot  E
                {   
                        //creando el padre
                        $$=new Nod(); 
                        _E *padre=new _E("E",tabla); 
                        padre->nivel=2;

                                //asignando atributos 
                                token *tok2=new token(QString::fromStdString($2),@2.first_line,3,archivo);
                                padre->lst_Atributos->insertar("sPot",tok2);

                                //hijos
                                padre->hijos.append($1->Padre); 
                                padre->hijos.append($3->Padre); 

                        $$->Padre=padre;
                }
        | E  sDiv  E
                {   
                        //creando el padre
                        $$=new Nod(); 
                        _E *padre=new _E("E",tabla); 
                        padre->nivel=3;

                                //asignando atributos 
                                token *tok2=new token(QString::fromStdString($2),@2.first_line,3,archivo);
                                padre->lst_Atributos->insertar("sDiv",tok2);

                                //hijos
                                padre->hijos.append($1->Padre); 
                                padre->hijos.append($3->Padre); 

                        $$->Padre=padre;
                }
        | E  sPor  E
                {   
                        //creando el padre
                        $$=new Nod(); 
                        _E *padre=new _E("E",tabla); 
                        padre->nivel=4;

                                //asignando atributos 
                                token *tok2=new token(QString::fromStdString($2),@2.first_line,3,archivo);
                                padre->lst_Atributos->insertar("sPor",tok2);

                                //hijos
                                padre->hijos.append($1->Padre); 
                                padre->hijos.append($3->Padre); 

                        $$->Padre=padre;
                }
        | E  sMas  E
                {   
                        //creando el padre
                        $$=new Nod(); 
                        _E *padre=new _E("E",tabla); 
                        padre->nivel=5;


                                //asignando atributos 
                                token *tok2=new token(QString::fromStdString($2),@2.first_line,3,archivo);
                                padre->lst_Atributos->insertar("sMas",tok2);

                                //hijos
                                padre->hijos.append($1->Padre); 
                                padre->hijos.append($3->Padre); 

                        $$->Padre=padre;
                }
        | E  sMenos  E
                {   
                        //creando el padre
                        $$=new Nod(); 
                        _E *padre=new _E("E",tabla); 
                        padre->nivel=6;


                                //asignando atributos 
                                token *tok2=new token(QString::fromStdString($2),@2.first_line,3,archivo);
                                padre->lst_Atributos->insertar("sMenos",tok2);

                                //hijos
                                padre->hijos.append($1->Padre); 
                                padre->hijos.append($3->Padre); 

                        $$->Padre=padre;
                }
         
        | E  sMod  E
                {   
                        //creando el padre
                        $$=new Nod(); 
                        _E *padre=new _E("E",tabla); 
                        padre->nivel=7;


                                //asignando atributos 
                                token *tok2=new token(QString::fromStdString($2),@2.first_line,3,archivo);
                                padre->lst_Atributos->insertar("sMod",tok2);

                                //hijos
                                padre->hijos.append($1->Padre); 
                                padre->hijos.append($3->Padre); 

                        $$->Padre=padre;
                }
 

        
        | E  sIgualacion  E
                {   
                        //creando el padre
                        $$=new Nod(); 
                        _E *padre=new _E("E",tabla); 
                        padre->nivel=8;


                                //asignando atributos 
                                token *tok2=new token(QString::fromStdString($2),@2.first_line,3,archivo);
                                padre->lst_Atributos->insertar("sIgualacion",tok2);

                                //hijos
                                padre->hijos.append($1->Padre); 
                                padre->hijos.append($3->Padre); 

                        $$->Padre=padre;
                }
        | E  sDiferenciacion  E
                {   
                        //creando el padre
                        $$=new Nod(); 
                        _E *padre=new _E("E",tabla); 
                        padre->nivel=9;

                                //asignando atributos 
                                token *tok2=new token(QString::fromStdString($2),@2.first_line,3,archivo);
                                padre->lst_Atributos->insertar("sDiferenciacion",tok2);


                                //hijos
                                padre->hijos.append($1->Padre); 
                                padre->hijos.append($3->Padre); 

                        $$->Padre=padre;
                }
        | E  sMenorQue  E
                {   
                        //creando el padre
                        $$=new Nod(); 
                        _E *padre=new _E("E",tabla); 
                        padre->nivel=10;

                                //asignando atributos 
                                token *tok2=new token(QString::fromStdString($2),@2.first_line,3,archivo);
                                padre->lst_Atributos->insertar("sMenorQue",tok2);


                                //hijos
                                padre->hijos.append($1->Padre); 
                                padre->hijos.append($3->Padre); 

                        $$->Padre=padre;
                }
        | E  sMenorIgualQue  E
                {   
                        //creando el padre
                        $$=new Nod(); 
                        _E *padre=new _E("E",tabla); 
                        padre->nivel=11;


                                //asignando atributos 
                                token *tok2=new token(QString::fromStdString($2),@2.first_line,3,archivo);
                                padre->lst_Atributos->insertar("sMenorIgualQue",tok2);

                                //hijos
                                padre->hijos.append($1->Padre); 
                                padre->hijos.append($3->Padre); 

                        $$->Padre=padre;
                }
        | E  sMayorQue  E
                {   
                        //creando el padre
                        $$=new Nod(); 
                        _E *padre=new _E("E",tabla); 
                        padre->nivel=12;


                                //asignando atributos 
                                token *tok2=new token(QString::fromStdString($2),@2.first_line,3,archivo);
                                padre->lst_Atributos->insertar("sMayorQue",tok2);

                                //hijos
                                padre->hijos.append($1->Padre); 
                                padre->hijos.append($3->Padre); 

                        $$->Padre=padre;
                }
        | E  sMayorIgualQue  E
                {   
                        //creando el padre
                        $$=new Nod(); 
                        _E *padre=new _E("E",tabla); 
                        padre->nivel=13;

                                //asignando atributos 
                                token *tok2=new token(QString::fromStdString($2),@2.first_line,3,archivo);
                                padre->lst_Atributos->insertar("sMayorIgualQue",tok2);


                                //hijos
                                padre->hijos.append($1->Padre); 
                                padre->hijos.append($3->Padre); 

                        $$->Padre=padre;
                }
        | E  sAnd  E
                {   
                        //creando el padre
                        $$=new Nod(); 
                        _E *padre=new _E("E",tabla); 
                        padre->nivel=14;


                                //asignando atributos 
                                token *tok2=new token(QString::fromStdString($2),@2.first_line,3,archivo);
                                padre->lst_Atributos->insertar("sAnd",tok2);

                                //hijos
                                padre->hijos.append($1->Padre); 
                                padre->hijos.append($3->Padre); 

                        $$->Padre=padre;
                }
 
        
        | E  sOr  E
                {   
                        //creando el padre
                        $$=new Nod(); 
                        _E *padre=new _E("E",tabla); 
                        padre->nivel=15;

                                //asignando atributos 
                                token *tok2=new token(QString::fromStdString($2),@2.first_line,3,archivo);
                                padre->lst_Atributos->insertar("sOr",tok2);


                                //hijos
                                padre->hijos.append($1->Padre); 
                                padre->hijos.append($3->Padre); 

                        $$->Padre=padre;
                }
        | sNot  E
                {   
                        //creando el padre
                        $$=new Nod(); 
                        _E *padre=new _E("E",tabla); 
                        padre->nivel=16;

                                //asignando atributos 
                                token *tok1=new token(QString::fromStdString($1),@1.first_line,3,archivo);
                                padre->lst_Atributos->insertar("sNot",tok1);


                                //hijos
                                padre->hijos.append($2->Padre);  

                        $$->Padre=padre;
                }
         

        | sAbreParent  E  sCierraParent
                {   
                        //creando el padre
                        $$=new Nod(); 
                        _E *padre=new _E("E",tabla); 
                        padre->nivel=17;

                                //asignando atributos 
                                token *tok1=new token(QString::fromStdString($1),@1.first_line,3,archivo);
                                padre->lst_Atributos->insertar("sAbreParent",tok1);

                                //hijos
                                padre->hijos.append($2->Padre);  

                        $$->Padre=padre;
                }
        
        | ID_VAR_FUNC 
                {   
                        //creando el padre
                        $$=new Nod(); 
                        _E *padre=new _E("E",tabla); 
                        padre->nivel=18;

                                //hijos
                                padre->hijos.append($1->Padre);  

                        $$->Padre=padre;
                }  
        | valBoolean
                {   
                        //creando el padre
                        $$=new Nod(); 
                        _E *padre=new _E("E",tabla); 
                        padre->nivel=19;

                                //asignando atributos 
                                token *tok1=new token(QString::fromStdString($1),@1.first_line,3,archivo);
                                padre->lst_Atributos->insertar("valBoolean",tok1);


                        $$->Padre=padre;
                }
        | valCadena 
                {   
                        //creando el padre
                        $$=new Nod(); 
                        _E *padre=new _E("E",tabla); 
                        padre->nivel=20;

                                //asignando atributos 
                                token *tok1=new token(QString::fromStdString($1),@1.first_line,3,archivo);
                                padre->lst_Atributos->insertar("valCadena",tok1);

                        $$->Padre=padre;
                }
        | valCaracter
                {   
                        //creando el padre
                        $$=new Nod(); 
                        _E *padre=new _E("E",tabla); 
                        padre->nivel=21;

                                //asignando atributos 
                                token *tok1=new token(QString::fromStdString($1),@1.first_line,3,archivo);
                                padre->lst_Atributos->insertar("valCaracter",tok1);

                        $$->Padre=padre;
                }
        | valDecimal
                {   
                        //creando el padre
                        $$=new Nod(); 
                        _E *padre=new _E("E",tabla); 
                        padre->nivel=22;

                                //asignando atributos 
                                token *tok1=new token(QString::fromStdString($1),@1.first_line,3,archivo);
                                padre->lst_Atributos->insertar("valDecimal",tok1);

                        $$->Padre=padre;
                }
                
        | valNumero
                {   
                        //creando el padre
                        $$=new Nod(); 
                        _E *padre=new _E("E",tabla); 
                        padre->nivel=23;

                                //asignando atributos 
                                token *tok1=new token(QString::fromStdString($1),@1.first_line,3,archivo);
                                padre->lst_Atributos->insertar("valNumero",tok1);

                        $$->Padre=padre;
                }
        | tNulo
                {   
                        //creando el padre
                        $$=new Nod(); 
                        _E *padre=new _E("E",tabla); 
                        padre->nivel=24;

                                //asignando atributos 
                                token *tok1=new token(QString::fromStdString($1),@1.first_line,3,archivo);
                                padre->lst_Atributos->insertar("tNulo",tok1);

                        $$->Padre=padre;
                }
        | tNada
                {   
                        //creando el padre
                        $$=new Nod(); 
                        _E *padre=new _E("E",tabla); 
                        padre->nivel=25;

                                //asignando atributos 
                                token *tok1=new token(QString::fromStdString($1),@1.first_line,3,archivo);
                                padre->lst_Atributos->insertar("tNada",tok1);

                        $$->Padre=padre;
                }
        //| SI_SIMPLIFICADO
        //| OPE_ARITME
        //| OPE_TIPO
        //| LEN
        ;