#include "asignacionstack.h"
#include "Gramatica/Arbol/Nodos/Expresiones/expexecutor.h"
AsignacionStack::AsignacionStack(int linea, int columna, std::string archivo, tablaSimbolos *tabla, NodoAST *valor, NodoAST *valorAsignado):NodoAST(linea, columna, archivo, tabla)
{
    this->valor = valor;
    this->valorAsignado = valorAsignado;
    this->type = "ASGINACION_STACK";
}

void AsignacionStack::Ejecutar(Entorno3D *entorno, TablaTemporales *temporales, TablaEtiquetas *etiquetas)
{
    try {
        tabla->debuger3D(entorno,temporales,linea);
        double indice = getVal(this->valor, entorno, etiquetas, temporales);
        double valor = getVal(this->valorAsignado, entorno, etiquetas, temporales);
        entorno->Stack->insertar((int)indice, valor);
    } catch (int error) {
        printf("Error al realizar la asignacion en Stack en Linea: %i | error: %i\n", this->linea, error);
    }
}
