#ifndef P_ENTERO_H
#define P_ENTERO_H


#include "Coline/Elementos/Primitivos/p_modelo.h"
class p_entero: public p_modelo
{
public:
    int valor;
    p_entero(int valor){
        this->valor=valor;
        this->tipo="entero";
    }
};

#endif // P_ENTERO_H
