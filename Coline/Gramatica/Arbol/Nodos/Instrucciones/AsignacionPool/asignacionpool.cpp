#include "asignacionpool.h"
#include "Gramatica/Arbol/Nodos/Expresiones/expexecutor.h"
AsignacionPool::AsignacionPool(int linea, int columna, std::string archivo, NodoAST *valor, NodoAST *asignado):NodoAST(linea, columna, archivo)
{
    this->valor = valor;
    this->asignado = asignado;
    this->type = "ASIGNACION_POOL";
}


void AsignacionPool::Ejecutar(Entorno3D *entorno, TablaTemporales *temporales, TablaEtiquetas *etiquetas)
{
    try {
        double indice = getVal(this->valor, entorno, etiquetas, temporales);
        double valor = getVal(this->asignado, entorno, etiquetas, temporales);
        entorno->Pool->insertar((int)indice, valor);
    } catch (int error) {
        printf("Error al realizar la asignacion en Pool en Linea: %i | error: %i\n", this->linea, error);
    }
}
