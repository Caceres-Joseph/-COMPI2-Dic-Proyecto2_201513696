#ifndef _METODO_H
#define _METODO_H

#include "Coline/Elementos/Global/importar.h"
#include "Coline/Gramatica/Arbol/Nodos/nodomodelo.h"
#include "Coline/Gramatica/Arbol/Nodos/Inicio/_tipo.h"
#include "Coline/Gramatica/Arbol/Nodos/Llaves_Arreglos/_var_arreglo.h"
#include "Coline/Gramatica/Arbol/Nodos/Llaves_Arreglos/_lst_corchetes.h"
class _METODO: public nodoModelo
{
public:
    _METODO(QString nombre, tablaSimbolos *tabla): nodoModelo(nombre,tabla) {}
    void ejecutarHijos2(elementoClase *simbolo)override;
};

#endif // _METODO_H
