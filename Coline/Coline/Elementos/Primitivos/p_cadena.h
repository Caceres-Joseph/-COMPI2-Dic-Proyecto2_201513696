#ifndef P_CADENA_H
#define P_CADENA_H


#include "Coline/Elementos/Primitivos/p_modelo.h"
class p_cadena:public p_modelo
{
public:
    QString valor;
    p_cadena(QString valor){
        this->valor=valor;
        this->tipo="cadena";
    }
};

#endif // P_CADENA_H
