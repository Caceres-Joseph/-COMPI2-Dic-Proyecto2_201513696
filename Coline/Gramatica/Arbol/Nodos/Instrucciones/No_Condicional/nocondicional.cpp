#include "nocondicional.h"

NoCondicional::NoCondicional(int linea, int columna, std::string archivo, tablaSimbolos *tabla, std::string etiqueta):NodoAST (linea, columna, archivo, tabla)
{
    this->etiqueta = etiqueta;
    this->type = "NO_CONDICIONAL";
}


void NoCondicional::Ejecutar(Entorno3D *entorno, TablaTemporales *temporales, TablaEtiquetas *etiquetas)
{
    try {
        tabla->debuger3D(entorno,temporales,linea);
        if(etiquetas->existeEtiqueta(this->etiqueta))
        {
            entorno->IP = etiquetas->getNumeroInstruccion(this->etiqueta);//CAMBIO EL VALOR DE IP
        }
        else {
            printf("Referencia a una etiqueta que no existe: Linea: %i | Etiqueta: %s", this->linea, this->etiqueta.c_str());
        }
    } catch (int error) {
        printf("Error al realizar un Salto No Condicional en Linea: %i | error: %i\n", this->linea, error);
    }
}
