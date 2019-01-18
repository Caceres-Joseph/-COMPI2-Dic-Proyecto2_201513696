#ifndef _TAMANIO_H
#define _TAMANIO_H

#include "Coline/Elementos/Global/importar.h"
#include "Coline/Gramatica/Arbol/Nodos/nodomodelo.h"
#include "Coline/Elementos/Tablas/tablasimbolos.h"
#include "Coline/Gramatica/Arbol/Nodos/IdVar_func/_id_var_func.h"
class _TAMANIO: public nodoModelo
{
public:

    _TAMANIO(QString nombre, tablaSimbolos *tabla): nodoModelo(nombre,tabla) {}

    itemValor *getValor(elementoEntorno *entorno);

};

#endif // _TAMANIO_H
