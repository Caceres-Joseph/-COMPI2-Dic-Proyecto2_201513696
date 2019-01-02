#include "_declarar_variable_sinvisibi.h"



itemRetorno* _DECLARAR_VARIABLE_SINVISIBI::ejecutar(elementoEntorno *entor){
    itemRetorno* ret=new itemRetorno(0);



    _TIPO *nodoTipo;
    nodoTipo = (_TIPO*)hijos[0];

    _VAR_ARREGLO *nodoVar;
    nodoVar = (_VAR_ARREGLO*)hijos[1];
    itemValor *valor=new itemValor();

    if(nivel == 1){
        _VAL *nodoVal=(_VAL*)hijos[2];
        valor=nodoVal->getValor(entor,nodoTipo->getTipo());
    }

    token *tokId=nodoVar->getIdentificador();
    token *tokTipo=nodoTipo->getTipo();
    QList<int> dimen=nodoVar->getDimensiones();


    itemEntorno *nuevoItem =new itemEntorno(tokId,tokTipo,valor,dimen,tabla);

    entor->insertarItem(nuevoItem);
    println("Variable insertada exitosamente *uto");
    return ret;
}
