#ifndef _SI_H
#define _SI_H


#include "Coline/Elementos/Global/importar.h"
#include "Coline/Gramatica/Arbol/Nodos/nodomodelo.h"
#include "Coline/Gramatica/Arbol/Nodos/Valor/_e.h"
class _SI: public nodoModelo
{
public:
    _SI(QString nombre, tablaSimbolos *tabla): nodoModelo(nombre,tabla) {}
    itemRetorno *ejecutar (elementoEntorno *entor)override;

    void cond1(itemValor *valor, elementoEntorno *entor);

    void cond2(itemValor *valor, elementoEntorno *entor);

    void cond3(itemValor *valor, elementoEntorno *entor);

    itemValor *operarCondicion(itemValor *valor, elementoEntorno *entor);
};

#endif // _SI_H
