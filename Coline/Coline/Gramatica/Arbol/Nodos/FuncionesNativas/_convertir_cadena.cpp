#include "_convertir_cadena.h"

#include "Coline/Gramatica/Arbol/Nodos/Valor/_e.h"


itemRetorno* _CONVERTIR_CADENA::ejecutar(elementoEntorno *entor){
    itemRetorno* ret=new itemRetorno(0);
    println("Convirtiendo a cadena");

    return ret;
}


itemValor *_CONVERTIR_CADENA::getValor(elementoEntorno *entor){
    itemValor *retorno=new itemValor();
    _E *nodoE=(_E*)hijos[0];

    itemValor *valor= nodoE->getValorT(entor);

    if(!(valor->isTypeEntero()||valor->isTypeDecimal()||valor->isTypeBooleano())){
        tabla->tablaError->insertErrorSemantic("No se puede convertir a cadena un tipo:"+valor->valor->tipo,lst_Atributos->getToken(0));
        return retorno;
    }

    tabla->func_colocarParam(valor->c3d,1 ,entor);
    QString temp= tabla->func_llamarFuncRetorno("func_convertiCadena",entor);
    retorno->c3d=temp;
    return retorno;
}
