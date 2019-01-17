#ifndef NOCONDICIONAL_H
#define NOCONDICIONAL_H
#include "Gramatica/Arbol/Abstraccion/nodoast.h"
#include "Gramatica/Entorno/entorno3d.h"
#include "Gramatica/Estructuras/TablaSimbolos/tablatemporales.h"
#include "Gramatica/Estructuras/Etiquetas/tablaetiquetas.h"

class NoCondicional:public NodoAST
{
public:
    std::string etiqueta;
    NoCondicional(int linea, int columna, std::string archivo,tablaSimbolos *tabla, std::string etiqueta);
    void Ejecutar(Entorno3D *entorno, TablaTemporales *temporales, TablaEtiquetas *etiquetas);
};

#endif // NOCONDICIONAL_H
