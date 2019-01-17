#ifndef ASIGNACIONHEAP_H
#define ASIGNACIONHEAP_H
#include "Gramatica/Arbol/Abstraccion/nodoast.h"
#include "Gramatica/Entorno/entorno3d.h"
#include "Gramatica/Estructuras/TablaSimbolos/tablatemporales.h"
#include "Gramatica/Estructuras/Etiquetas/tablaetiquetas.h"
class AsignacionHeap:public NodoAST
{
public:
    NodoAST *valor;
    NodoAST *asignado;
    AsignacionHeap(int linea, int columna, std::string archivo, NodoAST *valor, NodoAST *asignado);
    void Ejecutar(Entorno3D *entorno, TablaTemporales *temporales, TablaEtiquetas *etiquetas);
};

#endif // ASIGNACIONHEAP_H
