#ifndef _MAIN_H
#define _MAIN_H

#include "Coline/Elementos/Global/importar.h"
#include "Coline/Gramatica/Arbol/Nodos/nodomodelo.h"
#include "Coline/Elementos/Elementos/elementopolimorfo.h"

class _MAIN: public nodoModelo
{
public:
    _MAIN(QString nombre, tablaSimbolos *tabla);

     void ejecutarHijos2(elementoClase *simbolo)override;
};

#endif // _MAIN_H
