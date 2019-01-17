#include "astlist.h"

ASTList::ASTList()
{
    this->instrucciones.clear();
}

void ASTList::addToList(NodoAST *i)
{
    this->instrucciones.push_back(i);
}
