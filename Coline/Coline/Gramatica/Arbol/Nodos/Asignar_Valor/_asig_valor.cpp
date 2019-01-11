#include "_asig_valor.h"


itemRetorno* _ASIG_VALOR::ejecutar(elementoEntorno *entor){
    tabla->comentarioLinea("Asignando valor",entor->nivel);
    itemRetorno* ret=new itemRetorno(0);


    _ID_VAR_FUNC *nodoFunc =(_ID_VAR_FUNC*)hijos[0];
    itemValor *destino=nodoFunc->getDestino(entor);
    itemValor *valor=new itemValor();

    if(nivel==1){
        _VAL * nodoVal=(_VAL*)hijos[1];
        valor=nodoVal->getValorT(entor,new token());

    }else if(nivel==2) {
        itemValor*val2=nodoFunc->getValor(entor);
        QString nuevoTemp=tabla->getEtiqueta();

        tabla->linea(nuevoTemp+" = "+val2->c3d+" + 1",entor->nivel);
        valor->c3d=nuevoTemp;
    }else if(nivel==3){
        itemValor*val2=nodoFunc->getValor(entor);
        QString nuevoTemp=tabla->getEtiqueta();

        tabla->linea(nuevoTemp+" = "+val2->c3d+" - 1",entor->nivel);
        valor->c3d=nuevoTemp;
    }

    tabla->linea(destino->c3d+" = "+valor->c3d,entor->nivel);
    return ret;
}


