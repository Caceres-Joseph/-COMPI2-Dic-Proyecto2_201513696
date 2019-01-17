#include "accesostack.h"
#include "Gramatica/Arbol/Nodos/Expresiones/expexecutor.h"
AccesoStack::AccesoStack(int linea, int columna, std::string archivo, NodoAST *valor):NodoAST (linea, columna, archivo)
{
    this->valor = valor;
    this->type = "ACCESO_STACK";
}

double AccesoStack::getValor(Entorno3D *entorno, TablaTemporales *temporales, TablaEtiquetas *etiquetas)
{
    try {
        double indice = getVal(this->valor, entorno, etiquetas, temporales);
        return entorno->Stack->getValueAt((int)indice);
    } catch (int error) {
        printf("Error al realizar un Acceso en Stack en Linea: %i | error: %i\n", this->linea, error);
    }
    return 0;
}
