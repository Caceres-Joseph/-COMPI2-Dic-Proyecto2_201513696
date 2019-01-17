#include "flotante.h"

flotante::flotante(int linea, int columna, std::string archivo, tablaSimbolos *tabla, double valor):NodoAST (linea, columna, archivo, tabla)
{
    this->valor = valor;
    this->type = "FLOTANTE";
}

double flotante::getValor(Entorno3D *entorno, TablaTemporales *temporales, TablaEtiquetas *etiquetas)
{
    try {
        return  this->valor;
    } catch (int error) {
        printf("Error el devolver valor flotante, Linea: %i |  codigo: %i \n", this->linea, error);
    }
    return 0;
}
