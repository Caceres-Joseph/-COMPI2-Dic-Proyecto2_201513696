#include "_lst_corchetes_val.h"

QList<itemValor*> _LST_CORCHETES_VAL::getLstValores(elementoEntorno *entor){
    QList<itemValor*> retorno;

    for (int i = 0; i < hijos.count(); ++i) {
        _PAR_CORCHETES_VAL *nodoVal=(_PAR_CORCHETES_VAL*)hijos[i];
        retorno.append(nodoVal->getValor(entor));
    }
    return retorno;
}
