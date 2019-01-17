#ifndef INSTR_H
#define INSTR_H
#include "Gramatica/Arbol/Abstraccion/nodoast.h"
#include "Gramatica/Entorno/entorno3d.h"
#include "Gramatica/Estructuras/TablaSimbolos/tablatemporales.h"
#include "Gramatica/Estructuras/Etiquetas/tablaetiquetas.h"

class InStr:public NodoAST
{
public:
    NodoAST *puntero;
    InStr(int linea, int columna, std::string archivo, tablaSimbolos*tabla, NodoAST *puntero);
    double getValor(Entorno3D *entorno, TablaTemporales *temporales, TablaEtiquetas *etiquetas);
};

#endif // INSTR_H
