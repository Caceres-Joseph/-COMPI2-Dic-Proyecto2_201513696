#ifndef P_BOOLEANO_H
#define P_BOOLEANO_H


#include "Coline/Elementos/Primitivos/p_modelo.h"
class p_booleano: public p_modelo
{
public:
    bool valor;
    p_booleano(bool valor){
        this->valor=valor;
        this->tipo="booleano";
    }
};

#endif // P_BOOLEANO_H
