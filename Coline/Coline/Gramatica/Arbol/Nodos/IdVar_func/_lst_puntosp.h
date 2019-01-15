#ifndef _LST_PUNTOSP_H
#define _LST_PUNTOSP_H


#include "Coline/Elementos/Global/importar.h"
#include "Coline/Gramatica/Arbol/Nodos/IdVar_func/_lst_puntosp_padre.h"

class _LST_PUNTOSP: public _LST_PUNTOSP_PADRE
{
public:
    _LST_PUNTOSP(QString nombre, tablaSimbolos *tabla): _LST_PUNTOSP_PADRE(nombre,tabla) {}


    itemValor * getDestino(elementoEntorno* entor, itemValor *item);

    itemValor *getDestino1(elementoEntorno* entor, itemValor *item);
    itemValor *getDestino2(elementoEntorno* entor, itemValor *item);
    itemValor *getDestino3(elementoEntorno* entor, itemValor *item);
    itemValor *getDestino4(elementoEntorno* entor, itemValor *item);

};

#endif // _LST_PUNTOSP_H
