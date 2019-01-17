#ifndef ARBOL_3D_H
#define ARBOL_3D_H

#include "Coline/Elementos/Global/importar.h"
#include "Coline/Elementos/Tablas/tablasimbolos.h"
#include "Gramatica/parser1.h"
#include "Gramatica/scanner1.h"

class arbol_3d
{
public:
    tablaSimbolos *tabla;
    arbol_3d(tablaSimbolos *tabla);
};

#endif // ARBOL_3D_H
