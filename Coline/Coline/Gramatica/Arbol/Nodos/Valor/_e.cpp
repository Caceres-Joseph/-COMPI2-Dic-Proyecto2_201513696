#include "_e.h"

itemValor * _E::getValor(elementoEntorno *elemento){
    itemValor *retorno=new itemValor();

    if(nivel== 1){

    }else if(nivel==2){

    }else if(nivel==3){

    }else if(nivel==4){

    }else if(nivel==5){
        suma *ope=new suma(hijos[0],hijos[1],tabla,lst_Atributos->getToken(0));
        return ope->opSuma(elemento);
    }else if(nivel==6){

    }else if(nivel==7){

    }else if(nivel==8){

    }else if(nivel==9){

    }else if(nivel==10){

    }else if(nivel==11){

    }else if(nivel==12){

    }else if(nivel==13){

    }else if(nivel==14){

    }else if(nivel==15){

    }else if(nivel==16){

    }else if(nivel==17){

    }else if(nivel==18){

    }else if(nivel==19){
        QString cad19=lst_Atributos->getToken(0)->valLower;

        if(cad19=="verdadero"){
            itemValor *val19=new itemValor(true,"1");
            return val19;
        }else if(cad19=="falso"){
            itemValor *val19=new itemValor(false,"0");
            return val19;
        }

    }else if(nivel==20){

    }else if(nivel==21){

    }else if(nivel==22){
        QString cad22=lst_Atributos->getToken(0)->valLower;
        itemValor *val22=new itemValor(cad22.toDouble(), cad22);
        return val22;

    }else if(nivel==23){
        QString cad23=lst_Atributos->getToken(0)->valLower;
        itemValor *val23=new itemValor(cad23.toInt(), cad23);
        return val23;

    }else if(nivel==24){

    }else if(nivel==25){

    }else if(nivel==26){

    }


    return retorno;
}
