#ifndef ASTLIST_H
#define ASTLIST_H
#include "Gramatica/Arbol/Abstraccion/nodoast.h"
#include <vector>
class ASTList
{
public:
    std::vector<NodoAST*> instrucciones;
    ASTList();
    void addToList(NodoAST *i);
};

#endif // ASTLIST_H
