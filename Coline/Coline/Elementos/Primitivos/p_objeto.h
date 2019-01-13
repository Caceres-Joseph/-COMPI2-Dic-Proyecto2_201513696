#ifndef P_OBJETO_H
#define P_OBJETO_H


#include "Coline/Elementos/Primitivos/p_modelo.h"

class objetoClase;
class p_objeto: public p_modelo
{
public:
    objetoClase *valor;
    p_objeto(objetoClase *valor);
};

#endif // P_OBJETO_H
