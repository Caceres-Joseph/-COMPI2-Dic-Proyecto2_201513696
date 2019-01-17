#include "imprimirfun.h"
#include "Gramatica/Arbol/Nodos/Expresiones/expexecutor.h"
ImprimirFun::ImprimirFun(int linea, int columna, std::string archivo, int tipo, NodoAST *valor):NodoAST(linea, columna, archivo)
{
    this->valor = valor;
    this->tipo = tipo;
    this->type = "IMPRIMIR";
}


void ImprimirFun::Ejecutar(Entorno3D *entorno, TablaTemporales *temporales, TablaEtiquetas *etiquetas)
{
    try {
        // IMPRIME EN PANTALLA , POR EL MOMENTO ES USANDO EL PRINTF NORMAL DE C
        double val = getVal(this->valor, entorno, etiquetas, temporales);
        if(this->tipo == 0)
        {
            printf("%c", (int)val);
        }
        else if(this->tipo == 1)
        {
            printf("%i", (int)val);
        }
        else if(this->tipo == 2)
        {
            printf("%f", val);
        }
    } catch (int error) {
        printf("Error al ejecutar imprimir, Linea: %i | codigo: %i \n", this->linea, error);
    }
}
