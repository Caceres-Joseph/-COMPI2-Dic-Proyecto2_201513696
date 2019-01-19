#include "_asig_valor.h"


itemRetorno* _ASIG_VALOR::ejecutar(elementoEntorno *entor){
    tabla->comentarioLinea("Asignando valor",entor->nivel);
    itemRetorno* ret=new itemRetorno(0);


    _ID_VAR_FUNC *nodoFunc =(_ID_VAR_FUNC*)hijos[0];
    itemValor *destino=nodoFunc->getDestino(entor);
    itemValor *valor=new itemValor();




    if(nivel==1){
        _VAL * nodoVal=(_VAL*)hijos[1];
        valor=nodoVal->getValorT(entor,new token());


        if(valor->dimensiones.count()>0&&valor->dimen==0){
            //println("dimensione");
            if(destino->isTypeChar()){

                /*
                itemValor *ite=new itemValor('a',"a");
                destino->dimensiones.append(ite);
                */

                tabla->comentarioLinea("Asignando valores a los arreglos", entor->nivel);
                QString etqT1=tabla->getEtiqueta();
                //QString etqT2=tabla->getEtiqueta();

                tabla->linea(etqT1+" = "+destino->c3d, entor->nivel);
                //tabla->linea(etqT2+" = "+etqT1+" + "+QString::number(destino->dimen),entor->nivel, "Pos donde inicia el arreglo");

                tabla->func_colocarParam(etqT1,1, entor);
                tabla->func_colocarParam(valor->c3d,2,entor);
                tabla->func_llamarFunc("func_cargarCadena",entor);

                /*
                if(destino->dimensiones.count()==0){
                    itemValor *ite=new itemValor('a',"a");
                    destino->dimensiones.append(ite);
                }
                */

                return ret;
            }else{

                /*-------------------------
                 * Inicialiar Arreglo
                */
                tabla->comentarioLinea("Asignano valores a los arreglos", entor->nivel);
                for (int i = 0; i < valor->dimensiones.count(); ++i) {
                    itemValor *item=valor->dimensiones[i];
                    QString etqT1=tabla->getEtiqueta();
                    tabla->linea(etqT1+" = "+destino->c3d,entor->nivel);
                    QString etqT3=tabla->getEtiqueta();
                    tabla->linea(etqT3+" = "+etqT1 + " + "+QString::number(destino->dimen),entor->nivel);
                    QString etqT2=tabla->getEtiqueta();
                    tabla->linea(etqT2+" = "+etqT3+" + "+QString::number(i), entor->nivel);
                    tabla->linea("Heap["+etqT2+"] = "+item->c3d,entor->nivel);
                }
                return ret;
            }


        }


        /*-------------------------
         * Validando si se esta igualando a una cadena entre comillas

        if(destino->isTypeChar())
        {
            if(destino->dimen>0 && (valor->dimensiones.count()>0&&valor->dimen==0)){


                tabla->comentarioLinea("Asignando valores a los arreglos", entor->nivel);
                QString etqT1=tabla->getEtiqueta();
                //QString etqT2=tabla->getEtiqueta();

                tabla->linea(etqT1+" = "+destino->c3d, entor->nivel);
                //tabla->linea(etqT2+" = "+etqT1+" + "+QString::number(destino->dimen),entor->nivel, "Pos donde inicia el arreglo");

                tabla->func_colocarParam(etqT1,1, entor);
                tabla->func_colocarParam(valor->c3d,2,entor);
                tabla->func_llamarFunc("func_cargarCadena",entor);


                return ret;
            }
        }*/



    }else if(nivel==2) {
        itemValor*val2=nodoFunc->getValor(entor);
        QString nuevoTemp=tabla->getEtiqueta();

        tabla->linea(nuevoTemp+" = "+val2->c3d+" + 1",entor->nivel);
        valor->c3d=nuevoTemp;
    }else if(nivel==3){
        itemValor*val2=nodoFunc->getValor(entor);
        QString nuevoTemp=tabla->getEtiqueta();

        tabla->linea(nuevoTemp+" = "+val2->c3d+" - 1",entor->nivel);
        valor->c3d=nuevoTemp;
    }else if(nivel==4){

        _E *nodoE=(_E*)hijos[1];
        itemValor *valor1=nodoE->getValorT(entor);

        itemValor*val2=nodoFunc->getValor(entor);
        QString nuevoTemp=tabla->getEtiqueta();

        tabla->linea(nuevoTemp+" = "+val2->c3d+" + "+valor1->c3d,entor->nivel);
        valor->c3d=nuevoTemp;

    }else if(nivel==5){

        _E *nodoE=(_E*)hijos[1];
        itemValor *valor1=nodoE->getValorT(entor);

        itemValor*val2=nodoFunc->getValor(entor);
        QString nuevoTemp=tabla->getEtiqueta();

        tabla->linea(nuevoTemp+" = "+val2->c3d+" - "+valor1->c3d,entor->nivel);
        valor->c3d=nuevoTemp;
    }else if(nivel ==6){

        _E *nodoE=(_E*)hijos[1];
        itemValor *valor1=nodoE->getValorT(entor);

        itemValor*val2=nodoFunc->getValor(entor);
        QString nuevoTemp=tabla->getEtiqueta();

        tabla->linea(nuevoTemp+" = "+val2->c3d+" * "+valor1->c3d,entor->nivel);
        valor->c3d=nuevoTemp;
    }else if(nivel==7){

        _E *nodoE=(_E*)hijos[1];
        itemValor *valor1=nodoE->getValorT(entor);

        itemValor*val2=nodoFunc->getValor(entor);
        QString nuevoTemp=tabla->getEtiqueta();

        tabla->linea(nuevoTemp+" = "+val2->c3d+" / "+valor1->c3d,entor->nivel);
        valor->c3d=nuevoTemp;
    }




    tabla->linea(destino->c3d+" = "+valor->c3d,entor->nivel);
    return ret;
}


