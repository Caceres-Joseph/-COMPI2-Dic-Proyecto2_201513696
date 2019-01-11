#include "_llaves_val_p.h"


QList<itemValor*> _LLAVES_VAL_P::getLstValores(elementoEntorno *entor){
    QList<itemValor*> retorno;


    if(nivel==1){
        _LLAVES_VAL_P *nodoLlaves=(_LLAVES_VAL_P*)hijos[0];
        retorno= nodoLlaves->getLstValores(entor);

        _E *nodoE=(_E*)hijos[1];
        itemValor *ite=nodoE->getValorT(entor);
        retorno.append(ite);

    }else if(nivel==2){
        _LLAVES_VAL_P *nodoLlaves=(_LLAVES_VAL_P*)hijos[0];
        retorno= nodoLlaves->getLstValores(entor);

        _LST_LLAVES_VAL *nodoVal=(_LST_LLAVES_VAL*)hijos[1];
        retorno.append(nodoVal->getLstValores(entor));
    }else if(nivel==3){
        _E *nodoE=(_E*)hijos[0];
        itemValor *ite=nodoE->getValorT(entor);
        retorno.append(ite);
    }else if(nivel ==4){
        _LST_LLAVES_VAL *nodoVal=(_LST_LLAVES_VAL*)hijos[0];
        retorno.append(nodoVal->getLstValores(entor));
    }

    return retorno;
}
