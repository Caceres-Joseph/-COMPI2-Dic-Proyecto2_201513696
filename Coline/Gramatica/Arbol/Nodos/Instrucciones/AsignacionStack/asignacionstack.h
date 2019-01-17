#ifndef ASIGNACIONSTACK_H
#define ASIGNACIONSTACK_H
#include "Gramatica/Arbol/Abstraccion/nodoast.h"
#include "Gramatica/Entorno/entorno3d.h"
#include "Gramatica/Estructuras/TablaSimbolos/tablatemporales.h"
#include "Gramatica/Estructuras/Etiquetas/tablaetiquetas.h"
class AsignacionStack : public NodoAST
{
public:
    NodoAST *valor;
    NodoAST *valorAsignado;
    AsignacionStack(int linea, int columna, std::string archivo, tablaSimbolos *tabla, NodoAST *valor, NodoAST *valorAsignado);
    void Ejecutar(Entorno3D *entorno, TablaTemporales *temporales, TablaEtiquetas *etiquetas);
};

#endif // ASIGNACIONSTACK_H
