#include "_tamanio.h"


itemValor *_TAMANIO::getValor(elementoEntorno *entorno){
    itemValor *retorno=new itemValor();

    _ID_VAR_FUNC *nodoFunc =(_ID_VAR_FUNC*)hijos[0];
    itemValor *val=nodoFunc->getValor(entorno);

    //la posicion en heap


    QString etqDim=tabla->getEtiqueta();
    tabla->comentarioLinea("Tamanio de arreglo", entorno->nivel);

    tabla->linea(etqDim +" = Heap["+val->c3d+"]", entorno->nivel);
    retorno=new itemValor(1,etqDim);
    return retorno;
}
