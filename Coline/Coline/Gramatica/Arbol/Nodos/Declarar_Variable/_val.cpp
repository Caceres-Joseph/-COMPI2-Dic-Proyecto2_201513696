#include "_val.h"

itemValor * _VAL::getValor(elementoEntorno *elemento, token *tipo){
    _VALOR *nodoValor =(_VALOR*)hijos[0];

    return nodoValor->getValor(elemento,tipo);
}

itemValor * _VAL::getValorT(elementoEntorno *entor, token *tipo){

    itemValor *valor= getValor(entor,tipo);

    if(valor->c3dV!=""){
        QString temp=tabla->getEtiqueta();


        tabla->linea2(valor->c3dF+":",entor->nivel);
        tabla->linea(temp+" = 0",entor->nivel);
        tabla->linea("goto "+valor->c3dS, entor->nivel);
        tabla->linea2(valor->c3dV+":",entor->nivel);
        tabla->linea(temp+" = 1",entor->nivel);
        tabla->linea2(valor->c3dS+":",entor->nivel);

        valor->c3d=temp;
        valor->c3dF="";
        valor->c3dS="";
        valor->c3dV="";
        return valor;
    }else{
        return valor;
    }
}

