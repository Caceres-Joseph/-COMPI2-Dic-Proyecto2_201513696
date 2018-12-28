#ifndef ITEMATRIBUTO_H
#define ITEMATRIBUTO_H

#include "Coline/Elementos/Global/importar.h"
#include "Coline/Elementos/Global/token.h"
class itemAtributo
{
public:
    token *tok;
    QString nombretoken;
    itemAtributo(token *tok, QString nombretoken){
        this->tok=tok;
        this->nombretoken = nombretoken;
    }
};

#endif // ITEMATRIBUTO_H
