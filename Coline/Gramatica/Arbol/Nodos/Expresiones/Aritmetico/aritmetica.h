#ifndef ARITMETICA_H
#define ARITMETICA_H
#include "Gramatica/Arbol/Abstraccion/nodoast.h"
#include "Gramatica/Entorno/entorno3d.h"
#include "Gramatica/Estructuras/TablaSimbolos/tablatemporales.h"
#include "Gramatica/Estructuras/Etiquetas/tablaetiquetas.h"
class Aritmetica:public NodoAST
{
public:
    NodoAST *val1;
    NodoAST *val2;
    int operando;
    Aritmetica(int linea, int columna, std::string archivo, tablaSimbolos*tabla, NodoAST *val1, NodoAST *val2, int operando);
    double getValor(Entorno3D *entorno, TablaTemporales *temporales, TablaEtiquetas *etiquetas);
};

#endif // ARITMETICA_H
