#include "_lst_val.h"


QList<itemValor*> _LST_VAL::getLstValores(elementoEntorno *entor){
    QList<itemValor*> retorno;
    for (int i = 0; i < hijos.count(); ++i) {
        _VALOR * elem=(_VALOR*)hijos[i];
        retorno.append(elem->getValorT(entor,new token()));
    }
    return retorno;
}



QList<itemValor*> _LST_VAL::getLstValoresConCad(elementoEntorno *entor){
    QList<itemValor*> retorno;
    for (int i = 0; i < hijos.count(); ++i) {
        _VALOR * elem1=(_VALOR*)hijos[i];
        itemValor *vale = elem1->getValorT(entor,new token());

        if(vale->isTypeChar()&&vale->dimen==0&&vale->dimensiones.count()>0){
            //estoy recibiendo una cadena

            tabla->comentarioLinea("Convirtiendo la cadena en un arreglo", entor->nivel);
            QString etqInicio=tabla->getEtiqueta();
            QString etqInicio2=tabla->getEtiqueta();
            tabla->linea(etqInicio +" = H",entor->nivel);
            tabla->linea(etqInicio2 +" = H",entor->nivel);
            tabla->linea("Heap[H] = 50",entor->nivel);
            tabla->incrementarHeap(entor);
            for (int i = 0; i < 50; ++i) {
                tabla->linea("Heap[H] = 0",entor->nivel);
                tabla->incrementarHeap(entor);
            }

            //llamanod a la funcion para que lo cargue en el arreglo
            tabla->func_colocarParam(etqInicio,1,entor);
            tabla->func_colocarParam(vale->c3d,2,entor);
            tabla->func_llamarFunc("func_cargarCadena",entor);

            itemValor *val=new itemValor(12,"12");
            vale->dimensiones.append(val);
            vale->dimen=1;
            vale->c3d=etqInicio2; //donde inicia el arreglo
        }

        retorno.append(vale);

    }
    return retorno;
}
