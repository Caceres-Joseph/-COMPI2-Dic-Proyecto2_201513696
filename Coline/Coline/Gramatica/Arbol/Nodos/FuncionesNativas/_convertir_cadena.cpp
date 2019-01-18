#include "_convertir_cadena.h"

#include "Coline/Gramatica/Arbol/Nodos/Valor/_e.h"


itemRetorno* _CONVERTIR_CADENA::ejecutar(elementoEntorno *entor){
    itemRetorno* ret=new itemRetorno(0);
    println("Convirtiendo a cadena");

    return ret;
}


itemValor *_CONVERTIR_CADENA::getValor(elementoEntorno *entor){
    QString etqInicioCad=tabla->getEtiqueta();
    itemValor* retorno=new itemValor('a',etqInicioCad);

    _E *nodoE=(_E*)hijos[0];

    itemValor *valor= nodoE->getValorT(entor);

    if(!(valor->isTypeEntero()||valor->isTypeDecimal()||valor->isTypeBooleano())){
        tabla->tablaError->insertErrorSemantic("No se puede convertir a cadena un tipo:"+valor->valor->tipo,lst_Atributos->getToken(0));
        return retorno;
    }


    tabla->linea(etqInicioCad +" = $$_inNum("+valor->c3d+")",entor->nivel);

    itemValor *t1=new itemValor('c',"12");
    retorno->dimensiones.append(t1);


    return retorno;
}
