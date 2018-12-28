#include "token.h"



token::token()
{
    this->val="val";
    this->linea=0;
    this->columna=0;
    this->archivo="--";
    this->valLower="--";
}

token::token(QString val){

    this->val=val;
    this->linea=0;
    this->columna=0;
    this->archivo="--";
    this->valLower=this->val.toLower();
}

token::token(QString val, int linea, int columna, QString archivo){

    this->val=val;
    this->linea=linea;
    this->columna=columna;
    this->archivo=archivo;
    this->valLower=val.toLower();
}
