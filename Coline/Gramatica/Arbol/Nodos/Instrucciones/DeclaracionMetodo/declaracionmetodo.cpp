#include "declaracionmetodo.h"

DeclaracionMetodo::DeclaracionMetodo(int linea, int columna, std::string archivo, std::string id, std::vector<NodoAST*> instrucciones):NodoAST (linea, columna, archivo)
{
    this->id = id;
    this->instrucciones = instrucciones;
    this->type = "DECLARA_METODO";
}


void DeclaracionMetodo::Ejecutar(Entorno3D *entorno, TablaTemporales *temporales, TablaEtiquetas *etiquetas)
{
    // NO HACE NADA
}
