#ifndef ETIQUETA_H
#define ETIQUETA_H
#include "string"
#include "Gramatica/Arbol/Abstraccion/nodoast.h"
#include "Gramatica/Entorno/entorno3d.h"
#include "Gramatica/Estructuras/TablaSimbolos/tablatemporales.h"
#include "Gramatica/Estructuras/Etiquetas/tablaetiquetas.h"
#include "Coline/Elementos/Tablas/tablasimbolos.h"

class Etiqueta : public NodoAST
{
public:
    std::string etiqueta;
    Etiqueta(int linea, int columna, std::string archivo,tablaSimbolos *tabla, std::string etiqueta);
    void Ejecutar(Entorno3D *entorno, TablaTemporales *temporales, TablaEtiquetas *etiquetas);
};

#endif // ETIQUETA_H
