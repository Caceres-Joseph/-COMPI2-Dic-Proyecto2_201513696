#include "declaracionmetodo.h"

DeclaracionMetodo::DeclaracionMetodo(int linea, int columna, std::string archivo, tablaSimbolos *tabla, std::string id, std::vector<NodoAST*> instrucciones):NodoAST (linea, columna, archivo, tabla)
{
    this->id = id;
    this->instrucciones = instrucciones;
    this->type = "DECLARA_METODO";
}


void DeclaracionMetodo::Ejecutar(Entorno3D *entorno, TablaTemporales *temporales, TablaEtiquetas *etiquetas)
{
    //tabla->debuger3D(entorno,temporales,linea);
    // NO HACE NADA
}
