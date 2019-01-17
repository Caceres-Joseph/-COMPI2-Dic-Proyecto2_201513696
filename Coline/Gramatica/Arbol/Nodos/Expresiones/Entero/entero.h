#ifndef ENTERO_H
#define ENTERO_H
#include "Gramatica/Arbol/Abstraccion/nodoast.h"
#include "Gramatica/Entorno/entorno3d.h"
#include "Gramatica/Estructuras/TablaSimbolos/tablatemporales.h"
#include "Gramatica/Estructuras/Etiquetas/tablaetiquetas.h"
class Entero : public NodoAST
{
public:
    int valor; //VALOR QUE SE VA A USAR
    Entero(int linea, int columna, std::string archivo,tablaSimbolos *tabla, int valor); //CONSTRUCTOR
    double getValor(Entorno3D *entorno, TablaTemporales *temporales, TablaEtiquetas *etiquetas);
};

#endif // ENTERO_H
