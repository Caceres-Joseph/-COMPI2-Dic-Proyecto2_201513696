#ifndef ELEMENTOPARAMETRO_H
#define ELEMENTOPARAMETRO_H


#include "Coline/Elementos/Global/importar.h"

class elementoParametro
{
public:
    token *tipo;
    int dimensiones;
    elementoParametro(token *tipo, int dimensiones);
};

#endif // ELEMENTOPARAMETRO_H
