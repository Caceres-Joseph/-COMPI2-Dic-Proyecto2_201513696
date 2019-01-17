#include "relacional.h"
#include "Gramatica/Arbol/Nodos/Expresiones/expexecutor.h"
Relacional::Relacional(int linea, int columna, std::string archivo, NodoAST *val1, NodoAST *val2, int operando):NodoAST (linea, columna, archivo)
{
    this->val1 = val1;
    this->val2 = val2;
    this->operando = operando;
    this->type = "RELACIONAL";
}

double Relacional::getValor(Entorno3D *entorno, TablaTemporales *temporales, TablaEtiquetas *etiquetas)
{
    try {
        double v1 = getVal(this->val1, entorno, etiquetas, temporales);
        double v2 = getVal(this->val2, entorno, etiquetas, temporales);
        if(this->operando == 7) // ==
        {
            return v1 == v2?1:0;
        }
        else if(this->operando == 8) //!=
        {
            return v1 != v2?1:0;
        }
        else if(this->operando == 9)// >
        {
            return v1 > v2?1:0;
        }
        else if(this->operando == 10)// <
        {
            return v1 < v2?1:0;
        }
        else if(this->operando == 11)// >=
        {
            return v1 >= v2?1:0;
        }
        else if(this->operando == 12)// <=
        {
            return v1 <= v2?1:0;
        }
    } catch (int error) {
        printf("Error el devolver valor de una operacion Relacional, Linea: %i |  codigo: %i \n", this->linea, error);
    }
    return 0;
}
