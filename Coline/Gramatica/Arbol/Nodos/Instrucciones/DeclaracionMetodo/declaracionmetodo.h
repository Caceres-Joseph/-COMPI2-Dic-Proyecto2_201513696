#ifndef DECLARACIONMETODO_H
#define DECLARACIONMETODO_H
#include "Gramatica/Arbol/Abstraccion/nodoast.h"
#include <vector>
#include "Gramatica/Entorno/entorno3d.h"
#include "Gramatica/Estructuras/TablaSimbolos/tablatemporales.h"
#include "Gramatica/Estructuras/Etiquetas/tablaetiquetas.h"
class DeclaracionMetodo:public NodoAST
{
public:
    std::vector<NodoAST*> instrucciones;
    std::string id;
    DeclaracionMetodo(int linea, int columna, std::string archivo,tablaSimbolos *tabla, std::string id, std::vector<NodoAST*> instrucciones);
    void Ejecutar(Entorno3D *entorno, TablaTemporales *temporales, TablaEtiquetas *etiquetas);
};

#endif // DECLARACIONMETODO_H
