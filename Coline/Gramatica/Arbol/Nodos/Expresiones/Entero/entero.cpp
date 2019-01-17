#include "entero.h"

Entero::Entero(int linea, int columna, std::string archivo, int valor):NodoAST (linea,columna, archivo)
{
    this->valor = valor;
    this->type = "ENTERO";
}

double Entero::getValor(Entorno3D *entorno, TablaTemporales *temporales, TablaEtiquetas *etiquetas)
{
    try {
        return (double)this->valor;
    } catch (int error) {
        printf("Error el devolver valor entero, Linea: %i |  codigo: %i \n", this->linea, error);
    }
    return 0;
}
