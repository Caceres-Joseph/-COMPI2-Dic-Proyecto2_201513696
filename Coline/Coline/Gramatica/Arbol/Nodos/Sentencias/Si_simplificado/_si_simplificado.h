#ifndef _SI_SIMPLIFICADO_H
#define _SI_SIMPLIFICADO_H


#include "Coline/Elementos/Global/importar.h"
#include "Coline/Gramatica/Arbol/Nodos/nodomodelo.h"

class _SI_SIMPLIFICADO: public nodoModelo
{
public:
    _SI_SIMPLIFICADO(QString nombre, tablaSimbolos *tabla): nodoModelo(nombre,tabla) {}
};

#endif // _SI_SIMPLIFICADO_H
