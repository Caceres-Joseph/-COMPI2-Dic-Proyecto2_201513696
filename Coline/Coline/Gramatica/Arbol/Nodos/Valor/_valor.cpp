#include "_valor.h"

itemValor * _VALOR::getValor(elementoEntorno *elemento, token *tipo){
    itemValor *retorno=new itemValor();

    if(nivel==1){

    }else if(nivel ==2){

    }else if(nivel==3){

    }else if(nivel==4){
        _E *nodoE=(_E*)hijos[0];
        return nodoE->getValor(elemento,tipo);
    }

    return retorno;
}
