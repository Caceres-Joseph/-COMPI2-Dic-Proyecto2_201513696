#include "_val.h"

itemValor * _VAL::getValor(elementoEntorno *elemento, token *tipo){
    _VALOR *nodoValor =(_VALOR*)hijos[0];

    return nodoValor->getValor(elemento,tipo);
}
