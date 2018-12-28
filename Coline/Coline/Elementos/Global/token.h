#ifndef TOKEN_H
#define TOKEN_H


#include "Coline/Elementos/Global/importar.h"


class token
{
public:
    QString tipo;
    QString val;
    int linea;
    int columna;
    QString archivo;
    QString valLower;



    /*
     * Metodos
    */

    token();
    token(QString val);
    token(QString val, int linea, int columna, QString archivo);

};

#endif // TOKEN_H
