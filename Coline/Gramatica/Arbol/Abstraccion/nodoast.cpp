#include "nodoast.h"


NodoAST::NodoAST(int linea, int columna, std::string archivo, tablaSimbolos*tabla)
{
    this->linea = linea;
    this->columna = columna;
    this->archivo = archivo;
    this->tabla=tabla;
}
