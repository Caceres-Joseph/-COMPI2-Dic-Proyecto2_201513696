#include "condicional.h"
#include "Gramatica/Arbol/Nodos/Expresiones/expexecutor.h"
Condicional::Condicional(int linea, int columna, std::string archivo, NodoAST *Expresion, std::string etiquetaVerdadera):NodoAST (linea, columna, archivo)
{
    this->Expresion = Expresion;
    this->etiquetaVerdadera = etiquetaVerdadera;
    this->type = "CONDICIONAL";
}

void Condicional::Ejecutar(Entorno3D *entorno, TablaTemporales *temporales, TablaEtiquetas *etiquetas)
{
    try {
        double val = getVal(this->Expresion, entorno, etiquetas, temporales);
        if(etiquetas->existeEtiqueta(this->etiquetaVerdadera))
        {
            int v = (int)val;
            if(v == 1)
            {
                entorno->IP = etiquetas->getNumeroInstruccion(this->etiquetaVerdadera); //CAMBIO EL VALOR DEL IP.
            }
        }
        else {
            printf("Referencia a una etiqueta que no existe: Linea: %i | Etiqueta: %s", this->linea, this->etiquetaVerdadera.c_str());
        }
    } catch (int error) {
        printf("Error al realizar un Condicional en Linea: %i | error: %i\n", this->linea, error);
    }
}
