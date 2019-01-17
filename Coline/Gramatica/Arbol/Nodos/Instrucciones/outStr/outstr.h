#ifndef OUTSTR_H
#define OUTSTR_H
#include "Gramatica/Arbol/Abstraccion/nodoast.h"
#include "Gramatica/Entorno/entorno3d.h"
#include "Gramatica/Estructuras/TablaSimbolos/tablatemporales.h"
#include "Gramatica/Estructuras/Etiquetas/tablaetiquetas.h"

class OutStr:public NodoAST
{
public:
    NodoAST *puntero;
    OutStr(int linea, int columna, std::string archivo, NodoAST *puntero);
    void Ejecutar(Entorno3D *entorno, TablaTemporales *temporales, TablaEtiquetas *etiquetas);
};

#endif // OUTSTR_H
