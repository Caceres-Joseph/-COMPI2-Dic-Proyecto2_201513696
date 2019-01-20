#ifndef _LST_VAL_H
#define _LST_VAL_H


#include "Coline/Elementos/Global/importar.h"
#include "Coline/Gramatica/Arbol/Nodos/nodomodelo.h"
#include "Coline/Gramatica/Arbol/Nodos/Valor/_valor.h"


class _LST_VAL: public nodoModelo
{
public:
    _LST_VAL(QString nombre, tablaSimbolos *tabla): nodoModelo(nombre,tabla) {}
    QList<itemValor*> getLstValores(elementoEntorno *entor);
    QList<itemValor*> getLstValoresConCad(elementoEntorno *entor);

};

#endif // _LST_VAL_H
