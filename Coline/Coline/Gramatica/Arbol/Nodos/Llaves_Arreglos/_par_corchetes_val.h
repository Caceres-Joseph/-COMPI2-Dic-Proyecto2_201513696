#ifndef _PAR_CORCHETES_VAL_H
#define _PAR_CORCHETES_VAL_H

#include "Coline/Elementos/Global/importar.h"
#include "Coline/Gramatica/Arbol/Nodos/nodomodelo.h"
#include "Coline/Gramatica/Arbol/Nodos/Valor/_e.h"


class _PAR_CORCHETES_VAL: public nodoModelo
{
public:
    _PAR_CORCHETES_VAL(QString nombre, tablaSimbolos *tabla): nodoModelo(nombre,tabla) {}
    itemValor *getValor(elementoEntorno *entor);
};

#endif // _PAR_CORCHETES_VAL_H
