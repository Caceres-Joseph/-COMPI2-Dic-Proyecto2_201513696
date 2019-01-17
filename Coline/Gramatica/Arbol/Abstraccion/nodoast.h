#ifndef NODOAST_H
#define NODOAST_H
#include <string>
/*#include "Gramatica/Entorno/entorno3d.h"
#include "Gramatica/Estructuras/TablaSimbolos/tablatemporales.h"
#include "Gramatica/Estructuras/Etiquetas/tablaetiquetas.h"*/

#include "Coline/Elementos/Tablas/tablasimbolos.h"

class NodoAST
{
public:
    int linea;
    int columna;
    std::string type;
    std::string archivo;
    tablaSimbolos *tabla;
    NodoAST(int linea, int columna, std::string archivo, tablaSimbolos *tabla);
    //double getValor(Entorno3D *entorno, TablaTemporales *temporales, TablaEtiquetas *etiquetas);
    //void ejecutar(Entorno3D *entorno, TablaTemporales *temporales, TablaEtiquetas *etiquetas);*/
};


#endif // NODOAST_H
