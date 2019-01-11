#ifndef _VAR_ARREGLO_H
#define _VAR_ARREGLO_H


#include "Coline/Elementos/Global/importar.h"
#include "Coline/Gramatica/Arbol/Nodos/nodomodelo.h"
#include "Coline/Gramatica/Arbol/Nodos/Llaves_Arreglos/_lst_corchetes_val.h"
class _VAR_ARREGLO: public nodoModelo
{
public:
    _VAR_ARREGLO(QString nombre, tablaSimbolos *tabla): nodoModelo(nombre,tabla) {}

    token *getIdentificador();

    QList<itemValor*> getDimensiones(elementoEntorno *entor);
};

#endif // _VAR_ARREGLO_H
