#include "_declarar_variable_sinvisibi.h"



itemRetorno* _DECLARAR_VARIABLE_SINVISIBI::ejecutar(elementoEntorno *entor){
    tabla->comentarioLinea("Declarando variable",entor->nivel);
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
    QList<int> dimen=nodoVar->getDimensiones();

    //revisando si no es un arreglo
    if(dimen.count()>1){
        cargarArreglo(dimen,valor);
        return ret;
    }

    // --Los tengo que almacenar en string poool *uto


    QString t1=tabla->getEtiqueta();
    QString direc="";
    QString asign="";

    int posAbsoluta=entor->tamEntornoAbsoluto();
    if(entor->nombre=="global"){

        direc = t1 + " = H + " + QString::number(posAbsoluta);
        asign="Heap["+t1+"] = ";
        //tabla->linea(cad1,entor->nivel);
        //tabla->linea("Heap["+t1+"] = "+valor->c3d,entor->nivel,tokId->val);
    }else{
        direc = t1 + " = P + " + QString::number(posAbsoluta);
        asign="Stack["+t1+"] = ";
    }

    tabla->linea(direc,entor->nivel);


    token *tokId=nodoVar->getIdentificador();
    token *tokTipo=nodoTipo->getTipo();

    bool esGlobal=false;
    if(entor->nombre=="global"){
        esGlobal=true;
    }




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


    valor->c3dF="";
    valor->c3dV="";
    valor->c3dS="";

    itemEntorno *nuevoItem =new itemEntorno(tokId,tokTipo,valor,dimen,tabla, posAbsoluta, esGlobal);
    entor->insertarItem(nuevoItem);


    //println("Variable insertada exitosamente");
    return ret;
}


void _DECLARAR_VARIABLE_SINVISIBI::cargarArreglo(QList<int> dimen, itemValor *valor){
    println("Cargando un arreglo");
}
