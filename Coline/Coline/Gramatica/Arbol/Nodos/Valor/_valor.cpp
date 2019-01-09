#include "_valor.h"

itemValor * _VALOR::getValor(elementoEntorno *elemento, token *tipo){
    itemValor *retorno=new itemValor();

    if(nivel==1){

    }else if(nivel ==2){

    }else if(nivel==3){

    }else if(nivel==4){
        _E *nodoE=(_E*)hijos[0];
        return nodoE->getValor(elemento);
    }

    return retorno;
}


itemValor * _VALOR::getValorT(elementoEntorno *entor, token *tipo){

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




