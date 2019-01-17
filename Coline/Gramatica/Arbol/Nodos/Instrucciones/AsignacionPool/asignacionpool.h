#ifndef ASIGNACIONPOOL_H
#define ASIGNACIONPOOL_H
#include "Gramatica/Arbol/Abstraccion/nodoast.h"
#include "Gramatica/Entorno/entorno3d.h"
#include "Gramatica/Estructuras/TablaSimbolos/tablatemporales.h"
#include "Gramatica/Estructuras/Etiquetas/tablaetiquetas.h"
class AsignacionPool:public NodoAST
{
public:
    NodoAST *valor;
    NodoAST *asignado;
    AsignacionPool(int linea, int columna, std::string archivo,tablaSimbolos *tabla, NodoAST *valor, NodoAST *asignado);
    void Ejecutar(Entorno3D *entorno, TablaTemporales *temporales, TablaEtiquetas *etiquetas);
};

#endif // ASIGNACIONPOOL_H
