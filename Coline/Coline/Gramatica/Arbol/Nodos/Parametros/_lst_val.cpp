#include "_lst_val.h"


QList<itemValor*> _LST_VAL::getLstValores(elementoEntorno *entor){
    QList<itemValor*> retorno;
    for (int i = 0; i < hijos.count(); ++i) {
        _VALOR * elem=(_VALOR*)hijos[i];
        retorno.append(elem->getValorT(entor,new token()));
    }
    return retorno;
}
