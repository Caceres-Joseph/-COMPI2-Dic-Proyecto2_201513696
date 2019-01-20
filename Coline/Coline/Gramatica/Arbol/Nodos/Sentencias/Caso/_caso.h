#ifndef _CASO_H
#define _CASO_H

#include "Coline/Elementos/Global/importar.h"
#include "Coline/Gramatica/Arbol/Nodos/nodomodelo.h"
#include "Coline/Gramatica/Arbol/Nodos/Valor/_e.h"
#include "Coline/Gramatica/Arbol/Nodos/Sentencias/Caso/_cuerpo_case.h"

class _CASO: public nodoModelo
{
public:
    _CASO(QString nombre, tablaSimbolos *tabla): nodoModelo(nombre,tabla) {}
    itemRetorno *ejecutar (elementoEntorno *entor)override;
};

#endif // _CASO_H
