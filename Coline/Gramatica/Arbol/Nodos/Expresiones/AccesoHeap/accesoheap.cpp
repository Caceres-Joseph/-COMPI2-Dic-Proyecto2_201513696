#include "accesoheap.h"
#include "Gramatica/Arbol/Nodos/Expresiones/expexecutor.h"
AccesoHeap::AccesoHeap(int linea, int columna, std::string archivo, tablaSimbolos *tabla, NodoAST *valor):NodoAST (linea, columna, archivo, tabla)
{
    this->valor = valor;
    this->type = "ACCESO_HEAP";
}

double AccesoHeap::getValor(Entorno3D *entorno, TablaTemporales *temporales, TablaEtiquetas *etiquetas)
{
    try {
        double indice = getVal(this->valor, entorno, etiquetas, temporales);
        return entorno->Heap->getValueAt((int)indice);
    } catch (int error) {
        printf("Error al realizar un Acceso en Heap en Linea: %i | error: %i\n", this->linea, error);
    }
    return 0;
}
