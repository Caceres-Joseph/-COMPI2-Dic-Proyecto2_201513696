#ifndef _FOR_H
#define _FOR_H

#include "Coline/Elementos/Global/importar.h"
#include "Coline/Gramatica/Arbol/Nodos/nodomodelo.h"
#include "Coline/Gramatica/Arbol/Nodos/Declarar_Variable/_declarar_variable_sinvisibi.h"
#include "Coline/Gramatica/Arbol/Nodos/Asignar_Valor/_asig_valor.h"
#include "Coline/Gramatica/Arbol/Nodos/Valor/_e.h"


class _FOR: public nodoModelo
{
public:
    _FOR(QString nombre, tablaSimbolos *tabla): nodoModelo(nombre,tabla) {}
    itemRetorno *ejecutar (elementoEntorno *entor)override;
    itemValor *operarCondicion(itemValor *valor, elementoEntorno *entor);
};

#endif // _FOR_H
