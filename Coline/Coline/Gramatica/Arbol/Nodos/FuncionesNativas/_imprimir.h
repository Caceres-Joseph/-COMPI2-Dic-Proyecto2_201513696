#ifndef _IMPRIMIR_H
#define _IMPRIMIR_H

#include "Coline/Elementos/Global/importar.h"
#include "Coline/Gramatica/Arbol/Nodos/nodomodelo.h"
#include "Coline/Gramatica/Arbol/Nodos/Valor/_valor.h"

class _IMPRIMIR: public nodoModelo
{
public:
    _IMPRIMIR(QString nombre, tablaSimbolos *tabla): nodoModelo(nombre,tabla) {}

    itemRetorno *ejecutar (elementoEntorno *entor)override;
};

#endif // _IMPRIMIR_H
