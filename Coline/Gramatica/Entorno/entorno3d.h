#ifndef ENTORNO3D_H
#define ENTORNO3D_H
#include "Gramatica/Estructuras/Memoria/memoria.h"
#include "Gramatica/Arbol/Abstraccion/astlist.h"
#include <map>
class Entorno3D
{
public:
    memoria *Stack;
    int P;
    memoria *Heap;
    int H;
    memoria *Pool;
    int S;
    std::map<std::string, ASTList*> metodos;
    int IP;
    Entorno3D();
};

#endif // ENTORNO3D_H
