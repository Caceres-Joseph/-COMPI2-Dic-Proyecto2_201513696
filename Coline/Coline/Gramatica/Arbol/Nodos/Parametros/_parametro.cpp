#include "_parametro.h"


void _PARAMETRO::cargarPolimorfismo(elementoPolimorfo *elem)
{

    _VAR_ARREGLO *nodoArr=(_VAR_ARREGLO*)hijos[1];
    _TIPO   *nodoTip=(_TIPO*)hijos[0];

    elem->insertarParametro(nodoArr->getIdentificador(),nodoTip->getTipo(),nodoArr->getDimensiones().count());


}
