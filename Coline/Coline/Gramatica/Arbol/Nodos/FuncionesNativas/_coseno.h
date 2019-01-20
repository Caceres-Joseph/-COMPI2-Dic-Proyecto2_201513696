#ifndef _COSENO_H
#define _COSENO_H


#include "Coline/Elementos/Global/importar.h"
#include "Coline/Gramatica/Arbol/Nodos/nodomodelo.h"
#include "Coline/Gramatica/Arbol/Nodos/Valor/_valor.h"
class _COSENO: public nodoModelo
{
public:

    _COSENO(QString nombre, tablaSimbolos *tabla): nodoModelo(nombre,tabla) {}
    itemRetorno *ejecutar (elementoEntorno *entor)override;
};

#endif // _COSENO_H
