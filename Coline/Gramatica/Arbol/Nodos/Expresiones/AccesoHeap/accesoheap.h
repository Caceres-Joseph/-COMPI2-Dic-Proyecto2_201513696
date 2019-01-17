#ifndef ACCESOHEAP_H
#define ACCESOHEAP_H
#include "Gramatica/Arbol/Abstraccion/nodoast.h"
#include "Gramatica/Entorno/entorno3d.h"
#include "Gramatica/Estructuras/TablaSimbolos/tablatemporales.h"
#include "Gramatica/Estructuras/Etiquetas/tablaetiquetas.h"
class AccesoHeap : public NodoAST
{
public:
    NodoAST *valor;
    AccesoHeap(int linea, int columna, std::string archivo,tablaSimbolos *tabla,  NodoAST *valor);
    double getValor(Entorno3D *entorno, TablaTemporales *temporales, TablaEtiquetas *etiquetas);
};

#endif // ACCESOHEAP_H
