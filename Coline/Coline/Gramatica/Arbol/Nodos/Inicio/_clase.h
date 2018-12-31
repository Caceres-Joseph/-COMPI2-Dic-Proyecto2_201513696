#ifndef _CLASE_H
#define _CLASE_H
#include <memory>

#include "Coline/Elementos/Global/importar.h"
//#include "Coline/Elementos/Global/nodosimport.h"
#include "Coline/Elementos/Elementos/elementoclase.h"
#include "Coline/Gramatica/Arbol/Nodos/Inicio/_extender.h"
#include "Coline/Gramatica/Arbol/Nodos/Inicio/_visibilidad.h"
/*--------------------
 *      tClase  valId  EXTENDER  sAbreLlave  CP_CLASE  sCierraLlave
        |tClase  valId  VISIBILIDAD  EXTENDER  sAbreLlave  CP_CLASE  sCierraLlave
 *--------------------
*/
class _CLASE: public nodoModelo
{
public:
    explicit _CLASE(QString nombre, tablaSimbolos *tabla): nodoModelo(nombre,tabla) {}
    int valor=-12;
    void ejecutar ()override;


    token *getNombre(){
        return lst_Atributos->getToken(0);
    }


    token *getExtender(){
        if(nivel==1){



            //std::shared_ptr<_EXTENDER> *nodoExtender=dynamic_cast<_EXTENDER*>hijos[0];

            //_EXTENDER *val=new _EXTENDER("hola",tabla);
            //_EXTENDER *nodoExtender=dynamic_cast<_EXTENDER*>(hijos[0]);
            _EXTENDER *nodoExtender=(_EXTENDER*)hijos[0];
            return nodoExtender->getExtender();
        }else{
            _EXTENDER *nodoExtender=(_EXTENDER*)hijos[1];
            return nodoExtender->getExtender();
        }
        return NULL;
    }


    token *getVisibilidad(){

        if(nivel==1){
            token *tok=new token("privado");
            return tok;
        }else{
            _VISIBILIDAD *nodoVisi =(_VISIBILIDAD*)hijos[0];
            return nodoVisi->getVisibilidad();
        }
        return NULL;
    }




};

#endif // _CLASE_H
