#ifndef NODOAST_H
#define NODOAST_H
#include <string>
/*#include "Gramatica/Entorno/entorno3d.h"
#include "Gramatica/Estructuras/TablaSimbolos/tablatemporales.h"
#include "Gramatica/Estructuras/Etiquetas/tablaetiquetas.h"*/
class NodoAST
{
public:
    int linea;
    int columna;
    std::string type;
    std::string archivo;
    NodoAST(int linea, int columna, std::string archivo);
    //double getValor(Entorno3D *entorno, TablaTemporales *temporales, TablaEtiquetas *etiquetas);
    //void ejecutar(Entorno3D *entorno, TablaTemporales *temporales, TablaEtiquetas *etiquetas);*/
};


#endif // NODOAST_H
