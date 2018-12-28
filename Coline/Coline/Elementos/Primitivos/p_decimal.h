#ifndef P_DECIMAL_H
#define P_DECIMAL_H


#include "Coline/Elementos/Primitivos/p_modelo.h"
class p_decimal: public p_modelo
{
public:
    double valor;
    p_decimal(double valor){
        this->valor=valor;
        this->tipo="decimal";
    }
};

#endif // P_DECIMAL_H
