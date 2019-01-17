#include "metodo.h"
/**
 * @brief metodo::metodo
 */
metodo::metodo(int linea, int columna, std::string archivo, std::string id, std::vector<NodoAST *> instrucciones):NodoAST (linea, columna, archivo)
{
    this->id = id;
    this->instrucciones = instrucciones;
    this->etiquetas = new TablaEtiquetas();
    this->temporales = new TablaTemporales();
    this->ejecutar = 1;
}

metodo::metodo(int linea, int columna, std::string archivo, std::string id):NodoAST (linea, columna, archivo)
{
    this->id = id;
    this->etiquetas = new TablaEtiquetas();
    this->temporales = new TablaTemporales();
    this->ejecutar = 0;
}

void metodo::Ejecutar(Entorno3D *entorno, TablaTemporales *temporales, TablaEtiquetas *etiquetas)
{
    printf("Ejecutando un metodo");
}


int metodo::esEtiqueta(NodoAST *n)
{
    try {
        Etiqueta *e = (Etiqueta*)n;
        return  1;
    } catch (int error) {
        return 0;
    }
}
