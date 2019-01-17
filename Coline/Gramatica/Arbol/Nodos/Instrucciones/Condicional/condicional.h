#ifndef CONDICIONAL_H
#define CONDICIONAL_H
#include "Gramatica/Arbol/Abstraccion/nodoast.h"
#include "Gramatica/Entorno/entorno3d.h"
#include "Gramatica/Estructuras/TablaSimbolos/tablatemporales.h"
#include "Gramatica/Estructuras/Etiquetas/tablaetiquetas.h"
class Condicional:public NodoAST
{
public:
    std::string etiquetaVerdadera;
    NodoAST *Expresion;
    Condicional(int linea, int columna, std::string archivo, NodoAST *Expresion, std::string etiquetaVerdadero);
    void Ejecutar(Entorno3D *entorno, TablaTemporales *temporales, TablaEtiquetas *etiquetas);
};

#endif // CONDICIONAL_H
