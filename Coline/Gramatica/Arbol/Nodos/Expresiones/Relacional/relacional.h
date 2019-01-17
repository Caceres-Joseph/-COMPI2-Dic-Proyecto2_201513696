#ifndef RELACIONAL_H
#define RELACIONAL_H
#include "Gramatica/Arbol/Abstraccion/nodoast.h"
#include "Gramatica/Entorno/entorno3d.h"
#include "Gramatica/Estructuras/TablaSimbolos/tablatemporales.h"
#include "Gramatica/Estructuras/Etiquetas/tablaetiquetas.h"
class Relacional: public NodoAST
{
public:
    NodoAST *val1;
    NodoAST *val2;
    int operando;
    Relacional(int linea, int columna, std::string archivo, NodoAST *val1, NodoAST *val2, int operando);
    double getValor(Entorno3D *entorno, TablaTemporales *temporales, TablaEtiquetas *etiquetas);
};

#endif // RELACIONAL_H
