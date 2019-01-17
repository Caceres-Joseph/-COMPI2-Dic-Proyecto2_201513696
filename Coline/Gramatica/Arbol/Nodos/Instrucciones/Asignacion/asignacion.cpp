#include "asignacion.h"
#include "Gramatica/Arbol/Nodos/Expresiones/expexecutor.h"
Asignacion::Asignacion(int linea, int columna, std::string archivo, std::string id, NodoAST *Expresion):NodoAST (linea, columna, archivo)
{
    this->id = id;
    this->Expresion = Expresion;
    this->type = "ASIGNACION";
}

void Asignacion::Ejecutar(Entorno3D *entorno, TablaTemporales *temporales, TablaEtiquetas *etiquetas)
{
    try {
        double val = getVal(this->Expresion, entorno, etiquetas, temporales);
        if(this->id.compare("P")==0)
        {
            entorno->P = (int)val;
        }
        else if(this->id.compare("S")==0)
        {
            entorno->S = (int)val;
        }
        else if(this->id.compare("H")==0)
        {
            entorno->H = (int)val;
        }
        else if(!temporales->existeTemporal(this->id))
        {
            temporales->addTemporal(this->id, val);
        }
        else {
            temporales->actualizaTemporal(this->id, val);
        }
    } catch (int error) {
        printf("Error al realizar la asignacion en Linea: %i | error: %i\n", this->linea, error);
    }
}
