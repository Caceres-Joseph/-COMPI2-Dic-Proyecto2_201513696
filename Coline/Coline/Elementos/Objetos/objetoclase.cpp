#include "objetoclase.h"
#include "Coline/Gramatica/Arbol/Nodos/nodomodelo.h"
#include "Coline/Gramatica/Arbol/Nodos/Declarar_Variable/_declarar_variable_global.h"
objetoClase::objetoClase(elementoClase *cuerpoClase, tablaSimbolos *tabla)
{
    this->tabla=tabla;
    this->cuerpoClase=cuerpoClase;
    this->este=new elementoEntorno(NULL,tabla,"global",this);
    //ahora tengo que cargar las variables globales, jejejejejejeje

    lstPolimorfismo *lstGlobales=cuerpoClase->lstVariablesGlobales;
    for (int i = 0; i < lstGlobales->listaPolimorfa.count(); ++i) {
        elementoPolimorfo *elem=lstGlobales->listaPolimorfa[i];

        _DECLARAR_VARIABLE_GLOBAL *nodoGlobal=(_DECLARAR_VARIABLE_GLOBAL*)elem->LST_CUERPO;
        nodoGlobal->cargarVariables(this->este);

    }

}

void objetoClase::ejecutarGlobales(elementoEntorno *entor){


    tabla->comentarioLinea("Ejecutando las variables globales",entor->nivel);
    //hay que incrementar la H la cantidad de variables que haya
    for (int j = 0; j < this->este->lstEntorno.count(); ++j) {
        tabla->linea("Heap[H] = 0", entor->nivel);
        tabla->incrementarHeap(entor);
    }

    //Creo un nuevo entorno para que no haya conflicto con las locales desde donde lo estoy llamando
    elementoEntorno *nuevoEntorno=new elementoEntorno(entor,tabla,"global1",entor->este);
    nuevoEntorno->esteAux=this;
    nuevoEntorno->nivel=entor->nivel+1;
    this->cuerpoClase->lstVariablesGlobales->ejecutar(nuevoEntorno);
}




void objetoClase::ejecutarPrincipal(){
    this->cuerpoClase->lstPrincipal->ejecutar(this->este);
}

void objetoClase::ejecutarMetodos(QString nombreClase){
    this->cuerpoClase->lstMetodo_funcion->ejecutarMetodo(this->este, nombreClase);
}

void objetoClase::ejecutarConstructores(QString nombreClase){
    this->cuerpoClase->lstConstructores->ejecutarMetodo(this->este, nombreClase);
}

itemValor * objetoClase::getMetodo(token* nombre, QList<itemValor *> params){
    return this->cuerpoClase->lstMetodo_funcion->getMetodo(nombre,params);
}

itemValor *objetoClase::getConstructor(token *nombre, QList<itemValor *> params){
    return this->cuerpoClase->lstConstructores->getMetodo(nombre,params);
}
