#ifndef PENTERO_H
#define PENTERO_H


#include "Coline/Elementos/Primitivos/p_modelo.h"

class pEntero: public p_modelo
{
public:
    int valor;
    pEntero(QString tipo){
        std::cout<<"hola *utos"<<std::endl;
    }

};

#endif // PENTERO_H
