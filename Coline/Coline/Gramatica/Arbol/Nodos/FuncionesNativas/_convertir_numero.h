#ifndef _CONVERTIR_NUMERO_H
#define _CONVERTIR_NUMERO_H

#include "Coline/Elementos/Global/importar.h"
#include "Coline/Gramatica/Arbol/Nodos/nodomodelo.h"

class _CONVERTIR_NUMERO: public nodoModelo
{
public:

    _CONVERTIR_NUMERO(QString nombre, tablaSimbolos *tabla): nodoModelo(nombre,tabla) {}
    itemValor* getValor(elementoEntorno *entor);

    itemValor *getConvertirAnumero(elementoEntorno *entor, itemValor *valor);
private:
    int getEnteroDeCadena(itemValor *val2);
};

#endif // _CONVERTIR_NUMERO_H
