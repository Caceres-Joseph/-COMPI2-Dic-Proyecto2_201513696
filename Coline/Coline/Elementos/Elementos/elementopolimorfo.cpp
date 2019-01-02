#include "elementopolimorfo.h"

elementoPolimorfo::elementoPolimorfo(token *visibilidad, tablaSimbolos *tabla, token *tipo,token *nombre, nodoModelo *LST_CUERPO, int dimension)
{
    this->dimension=dimension;
    this->tabla=tabla;
    this->tipo=tipo;
    this->nombre=nombre;

    this->LST_CUERPO=LST_CUERPO;
    this->visibilidad=visibilidad;
}

void elementoPolimorfo::insertarParametro(token *idParametro, token *tipoParametro, int dimension){
    elementoParametro *param=new elementoParametro(tipoParametro,dimension);

    std::map<QString,elementoParametro*>::iterator it =lstParametros.find(idParametro->valLower);
    if(it!=lstParametros.end()){
        //ya hay una variable con el mismo nombre *uto
        tabla->tablaError->insertErrorSemantic("Ya existe un parametro con el nombre: "+idParametro->val,idParametro);
    }else{
        //se puede insertar libremente
        lstParametros.insert(std::pair<QString, elementoParametro*>(idParametro->valLower,param));
    }
}
