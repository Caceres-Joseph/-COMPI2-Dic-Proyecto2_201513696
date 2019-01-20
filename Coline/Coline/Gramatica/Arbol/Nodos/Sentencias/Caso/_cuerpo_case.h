#ifndef _CUERPO_CASE_H
#define _CUERPO_CASE_H

#include "Coline/Elementos/Global/importar.h"
#include "Coline/Gramatica/Arbol/Nodos/nodomodelo.h"
#include "Coline/Gramatica/Arbol/Nodos/Valor/_e.h"


class _CUERPO_CASE: public nodoModelo
{
public:
    _CUERPO_CASE(QString nombre, tablaSimbolos *tabla): nodoModelo(nombre,tabla) {}
    void execute(itemValor *valor, elementoEntorno *entor, QString etqSalida);
};

#endif // _CUERPO_CASE_H
