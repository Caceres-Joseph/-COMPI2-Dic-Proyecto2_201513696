#include "_declarar_variable_global.h"


#include "Coline/Gramatica/Arbol/Nodos/Declarar_Variable/_declarar_variable_sinvisibi.h"
void _DECLARAR_VARIABLE_GLOBAL::ejecutarHijos2(elementoClase *simbolo){

    token *visibilidad=new token("publico");
    token *tipo = new token("vacio");
    token *nombre2=new token("val");
    int dimensiones=0;

    elementoPolimorfo *eleme=new elementoPolimorfo(visibilidad,tabla,tipo,nombre2,this,dimensiones, simbolo->nombreClase->valLower);

    simbolo->lstVariablesGlobales->listaPolimorfa.append(eleme);

}


itemRetorno* _DECLARAR_VARIABLE_GLOBAL::cargarVariables(elementoEntorno *entor){
    itemRetorno* ret=new itemRetorno(0);

        _DECLARAR_VARIABLE_SINVISIBI *nodoVisi=(_DECLARAR_VARIABLE_SINVISIBI*)hijos[0];
        nodoVisi->cargarGlobales(entor);

    return ret;
}



