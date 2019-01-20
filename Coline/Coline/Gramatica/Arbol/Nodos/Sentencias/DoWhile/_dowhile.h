#ifndef _DOWHILE_H
#define _DOWHILE_H


#include "Coline/Elementos/Global/importar.h"
#include "Coline/Gramatica/Arbol/Nodos/nodomodelo.h"
#include "Coline/Gramatica/Arbol/Nodos/Valor/_e.h"


class _DOWHILE: public nodoModelo
{
public:
    _DOWHILE(QString nombre, tablaSimbolos *tabla): nodoModelo(nombre,tabla) {}
    itemRetorno *ejecutar (elementoEntorno *entor)override;
    itemValor *operarCondicion(itemValor *valor, elementoEntorno *entor);
    void cond1(itemValor *valor, elementoEntorno *entor, QString etqInicio);
};

#endif // _DOWHILE_H
