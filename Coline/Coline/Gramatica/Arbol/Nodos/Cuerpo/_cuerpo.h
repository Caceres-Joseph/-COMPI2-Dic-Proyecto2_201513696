#ifndef _CUERPO_H
#define _CUERPO_H

#include "Coline/Elementos/Global/importar.h"
#include "Coline/Gramatica/Arbol/Nodos/nodomodelo.h"

class _CUERPO: public nodoModelo
{
public:
    _CUERPO(QString nombre, tablaSimbolos *tabla): nodoModelo(nombre,tabla) {}

    itemRetorno *ejecutar (elementoEntorno *entor)override;
};

#endif // _CUERPO_H
