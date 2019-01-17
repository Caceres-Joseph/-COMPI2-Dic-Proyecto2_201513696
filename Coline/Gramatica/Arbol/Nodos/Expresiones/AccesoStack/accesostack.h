#ifndef ACCESOSTACK_H
#define ACCESOSTACK_H
#include "Gramatica/Arbol/Abstraccion/nodoast.h"
#include "Gramatica/Entorno/entorno3d.h"
#include "Gramatica/Estructuras/TablaSimbolos/tablatemporales.h"
#include "Gramatica/Estructuras/Etiquetas/tablaetiquetas.h"
class AccesoStack:public NodoAST
{
public:
    NodoAST *valor;
    AccesoStack(int linea, int columna, std::string archivo, NodoAST *valor);
    double getValor(Entorno3D *entorno, TablaTemporales *temporales, TablaEtiquetas *etiquetas);
};

#endif // ACCESOSTACK_H
