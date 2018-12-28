#ifndef P_NULO_H
#define P_NULO_H


#include "Coline/Elementos/Primitivos/p_modelo.h"
class p_nulo: public p_modelo
{
public:
    int valor;
    p_nulo(){
        this->valor=0;
        this->tipo="nulo";
    }
};

#endif // P_NULO_H
