#include "_lst_llaves_val.h"

QList<itemValor*>  _LST_LLAVES_VAL::getLstValores(elementoEntorno *entor){

    _LLAVES_VAL_P *nodoVal=(_LLAVES_VAL_P*)hijos[0];
    return nodoVal->getLstValores(entor);
}
