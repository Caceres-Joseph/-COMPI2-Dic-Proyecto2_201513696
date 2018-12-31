#ifndef _EXTENDER_H
#define _EXTENDER_H


#include "Coline/Elementos/Global/importar.h"
//#include "Coline/Elementos/Global/nodosimport.h"
#include "Coline/Elementos/Global/token.h"
#include "Coline/Gramatica/Arbol/Nodos/nodomodelo.h"
/*
 * EXTENDER:
        tPadre  valId

        |
*/
class _EXTENDER: public nodoModelo
{
public:
    _EXTENDER(QString nombre, tablaSimbolos *tabla): nodoModelo(nombre,tabla) {}


    token *getExtender(){
        if(nivel==1){
            return lst_Atributos->getToken(0);
        }else{
            token *tok=new token("");
            return tok;
        }
    }
};

#endif // _EXTENDER_H
