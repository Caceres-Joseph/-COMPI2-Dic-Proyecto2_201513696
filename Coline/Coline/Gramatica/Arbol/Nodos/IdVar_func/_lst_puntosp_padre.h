#ifndef _LST_PUNTOSP_PADRE_H
#define _LST_PUNTOSP_PADRE_H

#include "Coline/Elementos/Global/importar.h"
#include "Coline/Gramatica/Arbol/Nodos/nodomodelo.h"


class _LST_PUNTOSP_PADRE: public nodoModelo
{
public:
    _LST_PUNTOSP_PADRE(QString nombre, tablaSimbolos *tabla): nodoModelo(nombre,tabla) {}

    itemValor * getValor(elementoEntorno* entor, itemValor *item);
    itemValor *getValor1(elementoEntorno* entor, itemValor *item);
    itemValor *getValor2(elementoEntorno* entor, itemValor *item);
    itemValor *getValor3(elementoEntorno* entor, itemValor *item);
    itemValor *getValor4(elementoEntorno* entor, itemValor *item);

    void ejecutarSent(elementoEntorno* entor, itemValor *item);
    void ejecutarSent2(elementoEntorno* entor, itemValor *item);
    void ejecutarSent3(elementoEntorno* entor, itemValor *item);
    void ejecutarSent4(elementoEntorno* entor, itemValor *item);


    itemValor * cargarMetodo1(elementoEntorno *entor, objetoClase *objeto, itemValor *origen);
    void ejecutarMetodo1(elementoEntorno *entor, objetoClase *objeto, itemValor *origen);
    itemValor *ejecutarMetodoRetorno1(elementoEntorno *entor, objetoClase *objeto, itemValor *origen);

};

#endif // _LST_PUNTOSP_PADRE_H
