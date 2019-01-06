#include "_declarar_variable_sinvisibi.h"



itemRetorno* _DECLARAR_VARIABLE_SINVISIBI::ejecutar(elementoEntorno *entor){
    itemRetorno* ret=new itemRetorno(0);



    _TIPO *nodoTipo;
    nodoTipo = (_TIPO*)hijos[0];

    _VAR_ARREGLO *nodoVar;
    nodoVar = (_VAR_ARREGLO*)hijos[1];

    itemValor *valor=new itemValor();

    QString t1=tabla->getEtiqueta();
    QString direc="";
    QString asign="";
    if(entor->nombre=="global"){

        direc = t1 + " = H + " + QString::number(entor->lstEntorno.count());
        asign="Heap["+t1+"] = ";
        //tabla->linea(cad1,entor->nivel);
        //tabla->linea("Heap["+t1+"] = "+valor->c3d,entor->nivel,tokId->val);
    }else{
        direc = t1 + " = P + " + QString::number(entor->lstEntorno.count());
        asign="Stack["+t1+"] = ";
    }

    tabla->linea(direc,entor->nivel);

    if(nivel == 1){
        _VAL *nodoVal=(_VAL*)hijos[2];
        valor=nodoVal->getValor(entor,nodoTipo->getTipo());
    }

    token *tokId=nodoVar->getIdentificador();
    token *tokTipo=nodoTipo->getTipo();
    QList<int> dimen=nodoVar->getDimensiones();


    itemEntorno *nuevoItem =new itemEntorno(tokId,tokTipo,valor,dimen,tabla);

    entor->insertarItem(nuevoItem);



    if (valor->c3dV != ""){

        //tabla->linea2(valor->c3d,entor->nivel);

        tabla->linea2(valor->c3dF+":",entor->nivel);
        tabla->linea(asign+"0",entor->nivel,tokId->val);
        tabla->linea("goto "+valor->c3dS, entor->nivel);
        tabla->linea2(valor->c3dV+":",entor->nivel);
        tabla->linea(asign+"1",entor->nivel,tokId->val);
        tabla->linea2(valor->c3dS+":",entor->nivel);
    }else{
        tabla->linea(asign+valor->c3d,entor->nivel,tokId->val);
    }



    //println("Variable insertada exitosamente");
    return ret;
}
