#include "_convertir_numero.h"
#include "Coline/Gramatica/Arbol/Nodos/Valor/_e.h"


itemValor *_CONVERTIR_NUMERO::getConvertirAnumero(elementoEntorno* entor, itemValor *valor){
    QString etqInicioCad=tabla->getEtiqueta();
    itemValor* retorno=new itemValor(23,etqInicioCad);

    if(!(valor->isTypeEntero()||valor->isTypeDecimal()||valor->isTypeBooleano()||valor->isTypeChar())){
        if(lst_Atributos->listaAtributos.count()>0){
            tabla->tablaError->insertErrorSemantic("No se puede convertir a cadena un tipo:"+valor->valor->tipo,lst_Atributos->getToken(0));
        }else{
            println("No se puedo convertir a entero desde E");
        }
        return retorno;
    }

    if(valor->isTypeBooleano()){

        retorno =new itemValor(12,valor->c3d);
    }else if(valor->isTypeDecimal()){

        tabla->comentarioLinea("Conviertiendo a numero",entor->nivel);
        tabla->func_colocarParam(valor->c3d,2,entor);
        QString rete= tabla->func_llamarFuncRetorno("func_convertirANumeroDecimal",entor);
        retorno =new itemValor(12,rete);

    }else if(valor->isTypeEntero()){
        retorno =new itemValor(12,valor->c3d);
    }else if(valor->isTypeChar()){
        if(valor->dimen>0&&valor->dimensiones.count()>0)
         // arreglo de chars
        {

            tabla->comentarioLinea("Conviertiendo a numero",entor->nivel);
            tabla->func_colocarParam(valor->c3d,2,entor);
            QString rete= tabla->func_llamarFuncRetorno("func_convertirANumero_ArrCaracter",entor);
            retorno =new itemValor(12,rete);
        }else if(valor->dimen==0&&valor->dimensiones.count()>0)
        //cadena
        {
            int resultado=getEnteroDeCadena(valor);
            retorno=new itemValor(12,QString::number(resultado));
        }else if(valor->dimen==0&&valor->dimensiones.count()==0)
        //solo el caracter
        {

            //tengo que sacarlo de pool
            QString etqChar=tabla->getEtiqueta();
            tabla->linea(etqChar+" = Pool["+valor->c3d+"]", entor->nivel,"Valor de pool");
            valor->c3d=etqChar;
            retorno =new itemValor(12,valor->c3d);
        }
    }



    return retorno;
}


itemValor *_CONVERTIR_NUMERO::getValor(elementoEntorno *entor){
    _E *nodoE=(_E*)hijos[0];
    itemValor *valor= nodoE->getValorT(entor);
    return getConvertirAnumero(entor,valor);
}


int _CONVERTIR_NUMERO::getEnteroDeCadena(itemValor *val2){

        int resultadoFinal=0;
        bool esEntero=false;
        for (int i = 0; i < val2->dimensiones.count(); ++i) {
            if(val2->dimensiones[i]->isTypeChar()){

                p_caracter *valChar=(p_caracter*)val2->dimensiones[i]->valor;
                int valCaracter=(int)valChar->valor;
                int t1=valCaracter-48;
                if(i==0){
                    if(t1>=0&&t1<=9){
                        esEntero=true;
                        resultadoFinal=t1;
                    }else{
                        resultadoFinal=valCaracter;
                    }
                }else{
                    if(esEntero){
                        resultadoFinal=resultadoFinal*10+t1;
                    }else{
                        resultadoFinal+=valCaracter;
                    }
                }
            }
        }
        return resultadoFinal;
}

