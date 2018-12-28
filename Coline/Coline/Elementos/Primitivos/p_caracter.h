#ifndef P_CARACTER_H
#define P_CARACTER_H


#include "Coline/Elementos/Primitivos/p_modelo.h"
class p_caracter: public p_modelo
{
public:
    char valor;
    p_caracter(char valor){
        this->valor=valor;
        this->tipo="caracter";
    }
};

#endif // P_CARACTER_H
