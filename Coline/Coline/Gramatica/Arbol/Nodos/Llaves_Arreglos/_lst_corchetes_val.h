#ifndef _LST_CORCHETES_VAL_H
#define _LST_CORCHETES_VAL_H


#include "Coline/Elementos/Global/importar.h"
#include "Coline/Gramatica/Arbol/Nodos/nodomodelo.h"
#include "Coline/Gramatica/Arbol/Nodos/Llaves_Arreglos/_par_corchetes_val.h"

class _LST_CORCHETES_VAL: public nodoModelo
{
public:
    _LST_CORCHETES_VAL(QString nombre, tablaSimbolos *tabla): nodoModelo(nombre,tabla) {}

    QList<itemValor*> getLstValores(elementoEntorno *entor);
};

#endif // _LST_CORCHETES_VAL_H
