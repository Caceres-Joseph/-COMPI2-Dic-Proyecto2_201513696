#ifndef _ROMPER_H
#define _ROMPER_H

#include "Coline/Elementos/Global/importar.h"
#include "Coline/Gramatica/Arbol/Nodos/nodomodelo.h"
#include "Coline/Gramatica/Arbol/Nodos/Valor/_valor.h"

class _ROMPER: public nodoModelo
{
public:
    _ROMPER(QString nombre, tablaSimbolos *tabla): nodoModelo(nombre,tabla) {}
    itemRetorno *ejecutar (elementoEntorno *entor)override;
};

#endif // _ROMPER_H
