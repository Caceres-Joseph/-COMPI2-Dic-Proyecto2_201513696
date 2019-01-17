#ifndef INNUM_H
#define INNUM_H
#include "Gramatica/Arbol/Abstraccion/nodoast.h"
#include "Gramatica/Entorno/entorno3d.h"
#include "Gramatica/Estructuras/TablaSimbolos/tablatemporales.h"
#include "Gramatica/Estructuras/Etiquetas/tablaetiquetas.h"

class InNum : public NodoAST
{
public:
    NodoAST *puntero;
    InNum(int linea, int columna, std::string archivo, tablaSimbolos*tabla, NodoAST *puntero);
    double getValor(Entorno3D *entorno, TablaTemporales *temporales, TablaEtiquetas *etiquetas);
};

#endif // INNUM_H
