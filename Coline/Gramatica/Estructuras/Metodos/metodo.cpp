#include "metodo.h"
/**


 * @brief metodo::metodo
 */
metodo::metodo(int linea, int columna, std::string archivo,tablaSimbolos*tabla, std::string id, std::vector<NodoAST *> instrucciones):NodoAST (linea, columna, archivo, tabla)
{
    this->id = id;
    this->instrucciones = instrucciones;
    this->etiquetas = new TablaEtiquetas();
    this->temporales = new TablaTemporales();
    this->ejecutar = 1;
    this->tabla=tabla;
}

metodo::metodo(int linea, int columna, std::string archivo,tablaSimbolos*tabla, std::string id):NodoAST (linea, columna, archivo, tabla)
{
    this->id = id;
    this->etiquetas = new TablaEtiquetas();
    this->temporales = new TablaTemporales();
    this->ejecutar = 0;
    this->tabla=tabla;
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
