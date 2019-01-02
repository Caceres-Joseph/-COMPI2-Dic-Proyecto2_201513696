#include "_declarar_variable_global.h"


void _DECLARAR_VARIABLE_GLOBAL::ejecutarHijos2(elementoClase *simbolo){

    token *visibilidad=new token("publico");
    token *tipo = new token("vacio");
    token *nombre2=new token("val");
    int dimensiones=0;

    elementoPolimorfo *eleme=new elementoPolimorfo(visibilidad,tabla,tipo,nombre2,hijos[1],dimensiones);

    simbolo->lstVariablesGlobales->listaPolimorfa.append(eleme);

}
