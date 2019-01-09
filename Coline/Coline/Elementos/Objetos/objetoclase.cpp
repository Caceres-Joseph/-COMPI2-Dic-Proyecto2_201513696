#include "objetoclase.h"

objetoClase::objetoClase(elementoClase *cuerpoClase, tablaSimbolos *tabla)
{
    this->tabla=tabla;
    this->cuerpoClase=cuerpoClase;
    this->este=new elementoEntorno(NULL,tabla,"global",this);
}

void objetoClase::ejecutarGlobales(){

    //elementoEntorno *primerEntorno=new elementoEntorno

    //this->cuerpoClase->lstVariablesGlobales->ejecutar();
    this->cuerpoClase->lstVariablesGlobales->ejecutar(this->este);
}

void objetoClase::ejecutarPrincipal(){
    this->cuerpoClase->lstPrincipal->ejecutar(this->este);
}

void objetoClase::ejecutarMetodos(){
    this->cuerpoClase->lstMetodo_funcion->ejecutarMetodo(this->este);
}

itemValor * objetoClase::getMetodo(token* nombre, QList<itemValor *> params){
    return this->cuerpoClase->lstMetodo_funcion->getMetodo(nombre,params);
}
