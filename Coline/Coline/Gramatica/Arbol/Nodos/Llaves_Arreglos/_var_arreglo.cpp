#include "_var_arreglo.h"

token * _VAR_ARREGLO::getIdentificador(){
    return lst_Atributos->getToken(0);
}

QList<itemValor*> _VAR_ARREGLO::getDimensiones(elementoEntorno *entor){
    QList<itemValor*> retorno;
    if(nivel==1){
        //se envia una lista vacia
        return retorno;
    }else{
        _LST_CORCHETES_VAL *nodoVals=(_LST_CORCHETES_VAL*)hijos[0];
        return nodoVals->getLstValores(entor);
    }
}
