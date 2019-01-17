#include "asignacionheap.h"
#include "Gramatica/Arbol/Nodos/Expresiones/expexecutor.h"
AsignacionHeap::AsignacionHeap(int linea, int columna, std::string archivo, tablaSimbolos *tabla, NodoAST *valor, NodoAST *asignado):NodoAST(linea, columna, archivo, tabla)
{
    this->valor = valor;
    this->asignado = asignado;
    this->type = "ASIGNACION_HEAP";
}


void AsignacionHeap::Ejecutar(Entorno3D *entorno, TablaTemporales *temporales, TablaEtiquetas *etiquetas)
{
    try {
        tabla->debuger3D(entorno,temporales,linea);
        double indice = getVal(this->valor, entorno, etiquetas, temporales);
        double valor = getVal(this->asignado, entorno, etiquetas, temporales);
        entorno->Heap->insertar((int)indice, valor);
    } catch (int error) {
        printf("Error al realizar la asignacion en Heap en Linea: %i | error: %i\n", this->linea, error);
    }
}
