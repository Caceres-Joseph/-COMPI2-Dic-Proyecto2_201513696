#ifndef IDENTIFICADOR_H
#define IDENTIFICADOR_H
#include "Gramatica/Arbol/Abstraccion/nodoast.h"
#include "Gramatica/Entorno/entorno3d.h"
#include "Gramatica/Estructuras/TablaSimbolos/tablatemporales.h"
#include "Gramatica/Estructuras/Etiquetas/tablaetiquetas.h"
class identificador:public NodoAST
{
public:
    std::string id;
    identificador(int linea, int columna, std::string archivo,tablaSimbolos *tabla,  std::string id);
    double getValor(Entorno3D *entorno, TablaTemporales *temporales, TablaEtiquetas *etiquetas);
};

#endif // IDENTIFICADOR_H
