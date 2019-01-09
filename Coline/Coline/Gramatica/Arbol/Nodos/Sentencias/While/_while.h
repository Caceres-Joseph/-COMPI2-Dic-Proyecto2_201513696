#ifndef _WHILE_H
#define _WHILE_H


#include "Coline/Elementos/Global/importar.h"
#include "Coline/Gramatica/Arbol/Nodos/nodomodelo.h"
#include "Coline/Gramatica/Arbol/Nodos/Valor/_e.h"

class _WHILE: public nodoModelo
{
public:
    _WHILE(QString nombre, tablaSimbolos *tabla): nodoModelo(nombre,tabla) {}
    itemRetorno *ejecutar (elementoEntorno *entor)override;
    itemValor *operarCondicion(itemValor *valor, elementoEntorno *entor);
    void cond1(itemValor *valor, elementoEntorno *entor, QString etqInicio);
};

#endif // _WHILE_H
