#include "etiqueta.h"

Etiqueta::Etiqueta(int linea, int columna, std::string archivo, tablaSimbolos *tabla, std::string etiqueta):NodoAST(linea, columna, archivo, tabla)
{
    this->etiqueta = etiqueta;
    this->type = "ETIQUETA";
}

void Etiqueta::Ejecutar(Entorno3D *entorno, TablaTemporales *temporales, TablaEtiquetas *etiquetas)
{
    //tabla->debuger3D(entorno,temporales,linea);
    // NO HACE NADA...
}
