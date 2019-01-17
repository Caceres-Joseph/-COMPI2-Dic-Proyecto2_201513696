#include "aritmetica.h"
#include "Gramatica/Arbol/Nodos/Expresiones/expexecutor.h"
Aritmetica::Aritmetica(int linea, int columna, std::string archivo, tablaSimbolos *tabla, NodoAST *val1, NodoAST *val2, int operando):NodoAST(linea, columna, archivo, tabla)
{
    this->val1 = val1;
    this->val2 = val2;
    this->operando = operando;
    this->type = "ARITMETICA";
}


double Aritmetica::getValor(Entorno3D *entorno, TablaTemporales *temporales, TablaEtiquetas *etiquetas)
{
    try {
        double v1 = getVal(this->val1, entorno, etiquetas, temporales);
        double v2 = getVal(this->val2, entorno, etiquetas, temporales);
        if(this->operando == 1) //+
        {
            return v1 + v2;
        }
        else if(this->operando == 2)// -
        {
            return v1 - v2;
        }
        else if(this->operando == 4)// /
        {
            return  v1 / v2;
        }
        else if(this->operando == 5)// *
        {
            return  v1 * v2;
        }
        else if(this->operando == 6)// %
        {
            return (int)v1 % (int)v2;
        }
    } catch (int error) {
        printf("Error el devolver valor de una operacion Aritmetica, Linea: %i |  codigo: %i \n", this->linea, error);
    }
    return 0;
}
