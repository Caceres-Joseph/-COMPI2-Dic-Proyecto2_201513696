#ifndef IMPRIMIRFUN_H
#define IMPRIMIRFUN_H

#include "Gramatica/Arbol/Abstraccion/nodoast.h"
#include "Gramatica/Entorno/entorno3d.h"
#include "Gramatica/Estructuras/TablaSimbolos/tablatemporales.h"
#include "Gramatica/Estructuras/Etiquetas/tablaetiquetas.h"
class ImprimirFun:public NodoAST
{
public:
    NodoAST *valor;
    int tipo;
    ImprimirFun(int linea, int columna, std::string archivo, tablaSimbolos *tabla, int tipo, NodoAST *valor);
    void Ejecutar(Entorno3D *entorno, TablaTemporales *temporales, TablaEtiquetas *etiquetas);
};

#endif // IMPRIMIRFUN_H
