#ifndef _CONVERTIR_CADENA_H
#define _CONVERTIR_CADENA_H


#include "Coline/Elementos/Global/importar.h"
#include "Coline/Gramatica/Arbol/Nodos/nodomodelo.h"

class _CONVERTIR_CADENA: public nodoModelo
{
public:

    _CONVERTIR_CADENA(QString nombre, tablaSimbolos *tabla): nodoModelo(nombre,tabla) {}
    itemRetorno *ejecutar (elementoEntorno *entor)override;
    itemValor* getValor(elementoEntorno *entor);

};

#endif // _CONVERTIR_CADENA_H
