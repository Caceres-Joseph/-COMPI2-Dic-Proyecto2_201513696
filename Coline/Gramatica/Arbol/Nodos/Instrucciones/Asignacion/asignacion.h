#ifndef ASIGNACION_H
#define ASIGNACION_H
#include <string>
#include "Gramatica/Arbol/Abstraccion/nodoast.h"
#include "Gramatica/Entorno/entorno3d.h"
#include "Gramatica/Estructuras/TablaSimbolos/tablatemporales.h"
#include "Gramatica/Estructuras/Etiquetas/tablaetiquetas.h"
class Asignacion : public NodoAST
{
public:
    std::string id;
    NodoAST *Expresion;
    Asignacion(int linea , int columna, std::string archivo,tablaSimbolos*tabla, std::string id, NodoAST *Expresion);
    void Ejecutar(Entorno3D *entorno, TablaTemporales *temporales, TablaEtiquetas *etiquetas);
};

#endif // ASIGNACION_H
