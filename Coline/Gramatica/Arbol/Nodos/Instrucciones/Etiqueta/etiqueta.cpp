#include "etiqueta.h"

Etiqueta::Etiqueta(int linea, int columna, std::string archivo, std::string etiqueta):NodoAST(linea, columna, archivo)
{
    this->etiqueta = etiqueta;
    this->type = "ETIQUETA";
}

void Etiqueta::Ejecutar(Entorno3D *entorno, TablaTemporales *temporales, TablaEtiquetas *etiquetas)
{
    // NO HACE NADA...
}
