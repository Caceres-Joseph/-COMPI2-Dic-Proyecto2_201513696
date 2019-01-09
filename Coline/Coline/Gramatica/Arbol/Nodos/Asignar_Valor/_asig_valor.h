#ifndef _ASIG_VALOR_H
#define _ASIG_VALOR_H

#include "Coline/Elementos/Global/importar.h"
#include "Coline/Gramatica/Arbol/Nodos/nodomodelo.h"
#include "Coline/Gramatica/Arbol/Nodos/IdVar_func/_id_var_func.h"
#include "Coline/Gramatica/Arbol/Nodos/Declarar_Variable/_val.h"

class _ASIG_VALOR: public nodoModelo
{
public:
    _ASIG_VALOR(QString nombre, tablaSimbolos *tabla): nodoModelo(nombre,tabla) {}
    itemRetorno *ejecutar (elementoEntorno *entor)override;

    void nivel1(elementoEntorno *entor);

};

#endif // _ASIG_VALOR_H
