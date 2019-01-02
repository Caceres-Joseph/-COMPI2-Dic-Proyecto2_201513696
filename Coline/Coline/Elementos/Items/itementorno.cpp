#include "itementorno.h"

itemEntorno::itemEntorno(token *nombre, token *tipo, itemValor *valor, QList<int> dimension, tablaSimbolos *tabla)
{
    this->nombre=nombre;
    this->tipo=tipo;
    this->valor=valor;
    this->dimension=dimension;
    this->tabla=tabla;
}
