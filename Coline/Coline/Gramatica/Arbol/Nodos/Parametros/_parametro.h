#ifndef _PARAMETRO_H
#define _PARAMETRO_H


#include "Coline/Elementos/Global/importar.h"
#include "Coline/Gramatica/Arbol/Nodos/nodomodelo.h"
#include "Coline/Gramatica/Arbol/Nodos/Llaves_Arreglos/_var_arreglo.h"
#include "Coline/Gramatica/Arbol/Nodos/Inicio/_tipo.h"
class _PARAMETRO: public nodoModelo
{
public:
    _PARAMETRO(QString nombre, tablaSimbolos *tabla): nodoModelo(nombre,tabla) {}

    void cargarPolimorfismo(elementoPolimorfo *elem)override;
};

#endif // _PARAMETRO_H
