#ifndef GETBOOL_H
#define GETBOOL_H
#include "Gramatica/Arbol/Abstraccion/nodoast.h"
#include "Gramatica/Entorno/entorno3d.h"
#include "Gramatica/Estructuras/TablaSimbolos/tablatemporales.h"
#include "Gramatica/Estructuras/Etiquetas/tablaetiquetas.h"

class GetBool:public NodoAST
{
public:
    NodoAST *puntero;
    GetBool(int linea, int columna, std::string archivo, NodoAST *puntero);
    double getValor(Entorno3D *entorno, TablaTemporales *temporales, TablaEtiquetas *etiquetas);
};

#endif // GETBOOL_H
