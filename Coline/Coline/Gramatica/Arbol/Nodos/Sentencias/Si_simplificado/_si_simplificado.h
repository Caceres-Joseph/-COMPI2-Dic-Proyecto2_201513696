#ifndef _SI_SIMPLIFICADO_H
#define _SI_SIMPLIFICADO_H


#include "Coline/Elementos/Global/importar.h"
#include "Coline/Gramatica/Arbol/Nodos/nodomodelo.h"
#include "Coline/Gramatica/Arbol/Nodos/Valor/_e.h"
#include "Coline/Gramatica/Arbol/Nodos/Valor/_valor.h"

class _SI_SIMPLIFICADO: public nodoModelo
{
public:
    _SI_SIMPLIFICADO(QString nombre, tablaSimbolos *tabla): nodoModelo(nombre,tabla) {}


    itemValor *getValor(elementoEntorno* entor);
    itemValor *operarCondicion(itemValor *valor, elementoEntorno *entor);
};

#endif // _SI_SIMPLIFICADO_H
