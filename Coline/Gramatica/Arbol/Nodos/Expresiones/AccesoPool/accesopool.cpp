#include "accesopool.h"
#include "Gramatica/Arbol/Nodos/Expresiones/expexecutor.h"
AccesoPool::AccesoPool(int linea, int columna, std::string archivo, tablaSimbolos *tabla, NodoAST *valor):NodoAST (linea, columna, archivo, tabla)
{
    this->valor = valor;
    this->type = "ACCESSO_POOL";
}

double AccesoPool::getValor(Entorno3D *entorno, TablaTemporales *temporales, TablaEtiquetas *etiquetas)
{
    try {
        double indice = getVal(this->valor, entorno, etiquetas, temporales);
        return entorno->Pool->getValueAt((int)indice);
    } catch (int error) {
        printf("Error al realizar un Acceso en Pool en Linea: %i | error: %i\n", this->linea, error);
    }
    return 0;
}
