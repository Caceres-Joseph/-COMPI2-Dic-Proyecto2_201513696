#ifndef _VISIBILIDAD_H
#define _VISIBILIDAD_H

#include "Coline/Elementos/Global/importar.h"
#include "Coline/Gramatica/Arbol/Nodos/nodomodelo.h"
#include "Coline/Elementos/Global/token.h"

class _VISIBILIDAD: public nodoModelo
{
public:
    _VISIBILIDAD(QString nombre, tablaSimbolos *tabla): nodoModelo(nombre,tabla) {}

    token *getVisibilidad(){
        return lst_Atributos->getToken(0);
    }
};

#endif // _VISIBILIDAD_H
