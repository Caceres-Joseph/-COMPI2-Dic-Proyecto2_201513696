#ifndef _DECLARAR_VARIABLE_GLOBAL_H
#define _DECLARAR_VARIABLE_GLOBAL_H


#include "Coline/Elementos/Global/importar.h"
#include "Coline/Gramatica/Arbol/Nodos/nodomodelo.h"
#include "Coline/Gramatica/Arbol/Nodos/Inicio/_tipo.h"
#include "Coline/Gramatica/Arbol/Nodos/Llaves_Arreglos/_var_arreglo.h"

class _DECLARAR_VARIABLE_GLOBAL: public nodoModelo
{
public:
    _DECLARAR_VARIABLE_GLOBAL(QString nombre, tablaSimbolos *tabla): nodoModelo(nombre,tabla) {}
    void ejecutarHijos2(elementoClase *simbolo)override;
    //itemRetorno *ejecutar (elementoEntorno *entor)override;

    itemRetorno * cargarVariables(elementoEntorno *entor);
};

#endif // _DECLARAR_VARIABLE_GLOBAL_H
