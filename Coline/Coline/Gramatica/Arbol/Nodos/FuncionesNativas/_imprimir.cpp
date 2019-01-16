#include "_imprimir.h"


itemRetorno* _IMPRIMIR::ejecutar(elementoEntorno *entor){
    itemRetorno* ret=new itemRetorno(0);
    tabla->debugerColine(entor);

    /*
    QMessageBox msgBox;
    msgBox.setText("Se detectaron algunos errores :(");
    msgBox.exec();
    */

    tabla->comentarioLinea("Imprimiendo", entor->nivel);

    if(nivel==1)
    //tImprimir sAbreParent VALOR sCierraParent
    {

        _VALOR *nodoVal=(_VALOR*)hijos[0];
        itemValor *val=nodoVal->getValorT(entor,new token());

        if(val->isTypeBooleano()||val->isTypeEntero()){
            tabla->linea("printf(%d, "+val->c3d+")",entor->nivel);
        }else if(val->isTypeDecimal()){
            tabla->linea("printf(%f, "+val->c3d+")",entor->nivel);
        }
        else if(val->isTypeCadena()){

        }else if(val->isTypeChar()){



            //verificando si es un arreglo de chars

            if(val->dimensiones.count()>0){

                if(val->dimen==0)
                //es una cadena desde string pool
                {
                    tabla->linea("$$_outStr("+val->c3d+")", entor->nivel);
                }else
                //cadena desde heap
                {
                    tabla->func_colocarParam(val->c3d,1,entor);
                    tabla->func_llamarFunc("func_imprimirArray",entor);
                }
            }else{
                QString temp= tabla->getEtiqueta();
                tabla->linea(temp+" = Pool["+val->c3d+"]", entor->nivel);
                tabla->linea("printf(%c, "+temp+")",entor->nivel);
            }
        }else if(val->isTypeNulo()){

        }else
        //objeto
        {

        }

    }else if(nivel==2)
    //tImprimir sAbreParent  sCierraParent
    {
      //tabla->linea("printf(%c, 10)",entor->nivel);
    }

    tabla->linea("printf(%c, 10)",entor->nivel);
    return ret;
}
