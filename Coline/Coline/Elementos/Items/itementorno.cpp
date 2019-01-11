#include "itementorno.h"

itemEntorno::itemEntorno(token *nombre, token *tipo, itemValor *valor, QList<itemValor*> dimension, tablaSimbolos *tabla, int pos, bool esGlobal)
{
    this->nombre=nombre;
    this->tipo=tipo;
    this->valor=valor;
    this->dimension=dimension;
    this->tabla=tabla;
    this->pos=pos;
    this->esGlobal=esGlobal;
}
