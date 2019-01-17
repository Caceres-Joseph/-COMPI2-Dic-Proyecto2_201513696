#ifndef ACCESOPOOL_H
#define ACCESOPOOL_H
#include "Gramatica/Arbol/Abstraccion/nodoast.h"
#include "Gramatica/Entorno/entorno3d.h"
#include "Gramatica/Estructuras/TablaSimbolos/tablatemporales.h"
#include "Gramatica/Estructuras/Etiquetas/tablaetiquetas.h"
class AccesoPool:public NodoAST
{
public:
    NodoAST  *valor;
    AccesoPool(int linea, int columna, std::string archivo, tablaSimbolos*tabla,NodoAST *valor);
    double getValor(Entorno3D *entorno, TablaTemporales *temporales, TablaEtiquetas *etiquetas);
};

#endif // ACCESOPOOL_H
