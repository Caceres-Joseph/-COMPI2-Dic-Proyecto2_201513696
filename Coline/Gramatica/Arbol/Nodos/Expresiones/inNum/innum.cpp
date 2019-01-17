#include "innum.h"
#include "Gramatica/Arbol/Nodos/Expresiones/expexecutor.h"
InNum::InNum(int linea, int columna, std::string archivo, tablaSimbolos *tabla, NodoAST *puntero):NodoAST (linea, columna, archivo, tabla)
{
    this->puntero = puntero;
    this->type = "INNUM";
}


double InNum::getValor(Entorno3D *entorno, TablaTemporales *temporales, TablaEtiquetas *etiquetas)
{
    try {
        double val = getVal(this->puntero, entorno, etiquetas, temporales);
        std::string cadena = std::to_string(val);
        const char *salida = cadena.c_str();
        double inicio = entorno->S;
        for(int x = 0; x < cadena.size(); x++)
        {
            entorno->Pool->insertar(entorno->S, (double)salida[x]);
            entorno->S++;
        }
        entorno->Pool->insertar(entorno->S, 0);
        entorno->S++;
        return inicio;
    } catch (int error) {
        printf("Error al intentar convertir un numero a cadena: Linea: %i \n", this->linea);
    }
    return 0;
}
