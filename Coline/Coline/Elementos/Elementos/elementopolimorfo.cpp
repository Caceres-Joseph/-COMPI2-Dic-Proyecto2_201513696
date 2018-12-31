#include "elementopolimorfo.h"

elementoPolimorfo::elementoPolimorfo(token *visibilidad, tablaSimbolos *tabla, token *tipo,token *nombre, nodoModelo *LST_CUERPO, int dimension)
{
    this->dimension=dimension;
    this->tabla=tabla;
    this->tipo=tipo;
    this->nombre=nombre;

    this->LST_CUERPO=LST_CUERPO;
    this->visibilidad=visibilidad;
}
