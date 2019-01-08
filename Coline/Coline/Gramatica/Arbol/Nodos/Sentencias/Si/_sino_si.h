#ifndef _SINO_SI_H
#define _SINO_SI_H


#include "Coline/Elementos/Global/importar.h"
#include "Coline/Gramatica/Arbol/Nodos/nodomodelo.h"
#include "Coline/Gramatica/Arbol/Nodos/Valor/_e.h"

class _SINO_SI: public nodoModelo
{
public:
    _SINO_SI(QString nombre, tablaSimbolos *tabla): nodoModelo(nombre,tabla) {}
    itemRetorno *ejecutar (elementoEntorno *entor)override;
    void cond1(itemValor *valor, elementoEntorno *entor);

    void cond2(itemValor *valor, elementoEntorno *entor);

    void cond3(itemValor *valor, elementoEntorno *entor);

    itemValor *operarCondicion(itemValor *valor, elementoEntorno *entor);
};

#endif // _SINO_SI_H
