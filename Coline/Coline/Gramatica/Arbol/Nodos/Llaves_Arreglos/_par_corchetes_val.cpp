#include "_par_corchetes_val.h"

itemValor * _PAR_CORCHETES_VAL::getValor(elementoEntorno *entor){

    itemValor *retorno;

    _E *nodoE=(_E*)hijos[0];
    retorno=nodoE->getValorT(entor);
    return retorno;
}
