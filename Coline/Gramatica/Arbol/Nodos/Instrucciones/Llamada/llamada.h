#ifndef LLAMADA_H
#define LLAMADA_H
#include "Gramatica/Arbol/Abstraccion/nodoast.h"
#include "Gramatica/Entorno/entorno3d.h"
#include "Gramatica/Estructuras/TablaSimbolos/tablatemporales.h"
#include "Gramatica/Estructuras/Etiquetas/tablaetiquetas.h"
#include <vector>
#include "Gramatica/Arbol/Abstraccion/astlist.h"
class Llamada:public NodoAST
{
public:
    std::string id;
    Llamada(int linea, int columna, std::string archivo,tablaSimbolos *tabla, std::string id);
    void Ejecutar(Entorno3D *entorno, TablaTemporales *temporales, TablaEtiquetas *etiquetas);
    void CasteaYEjecuta(Entorno3D *entorno, TablaTemporales *temporales, TablaEtiquetas *etiquetas, NodoAST *i);
    void LlenarEtiquetas(TablaEtiquetas *t, NodoAST *i, int index);
};

#endif // LLAMADA_H
