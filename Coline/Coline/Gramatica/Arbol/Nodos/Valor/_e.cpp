#include "_e.h"

itemValor * _E::getValor(elementoEntorno *elemento){
    itemValor *retorno=new itemValor();

    if(nivel== 1){
        negativo *ope=new negativo(hijos[0],tabla,lst_Atributos->getToken(0));
        return ope->opNegativo(elemento);
    }else if(nivel==2){
        potencia *ope=new potencia(hijos[0],hijos[1],tabla,lst_Atributos->getToken(0));
        return ope->opPot(elemento);
    }else if(nivel==3){
        division *ope=new division(hijos[0],hijos[1],tabla,lst_Atributos->getToken(0));
        return ope->opDivision(elemento);

    }else if(nivel==4){
        multiplicacion *ope=new multiplicacion(hijos[0],hijos[1],tabla,lst_Atributos->getToken(0));
        return ope->opMult(elemento);

    }else if(nivel==5){
        suma *ope=new suma(hijos[0],hijos[1],tabla,lst_Atributos->getToken(0));
        return ope->opSuma(elemento);
    }else if(nivel==6){
        resta *ope=new resta(hijos[0],hijos[1],tabla,lst_Atributos->getToken(0));
        return ope->opResta(elemento);

    }else if(nivel==7){
        modulo *ope=new modulo(hijos[0],hijos[1],tabla,lst_Atributos->getToken(0));
        return ope->opModulo(elemento);

    }else if(nivel==8){
        IgualQue *ope=new IgualQue(hijos[0],hijos[1],tabla,lst_Atributos->getToken(0));
        return ope->opIgualacion(elemento, "==");

    }else if(nivel==9){
        IgualQue *ope=new IgualQue(hijos[0],hijos[1],tabla,lst_Atributos->getToken(0));
        return ope->opIgualacion(elemento, "!=");

    }else if(nivel==10){
        MayorQue *ope=new MayorQue(hijos[0],hijos[1],tabla,lst_Atributos->getToken(0));
        return ope->opMayorQue(elemento, "<");

    }else if(nivel==11){
        MayorQue *ope=new MayorQue(hijos[0],hijos[1],tabla,lst_Atributos->getToken(0));
        return ope->opMayorQue(elemento, "<=");

    }else if(nivel==12){
        MayorQue *ope=new MayorQue(hijos[0],hijos[1],tabla,lst_Atributos->getToken(0));
        return ope->opMayorQue(elemento, ">");
    }else if(nivel==13){
        MayorQue *ope=new MayorQue(hijos[0],hijos[1],tabla,lst_Atributos->getToken(0));
        return ope->opMayorQue(elemento, ">=");

    }else if(nivel==14){
        And *ope=new And(hijos[0],hijos[1],tabla,lst_Atributos->getToken(0));
        return ope->opAnd(elemento, "&&");

    }else if(nivel==15){
        Or *ope=new Or(hijos[0],hijos[1],tabla,lst_Atributos->getToken(0));
        return ope->opOr(elemento, "||");

    }else if(nivel==16){
        Not *ope=new Not(hijos[0],tabla,lst_Atributos->getToken(0));
        return ope->opNot(elemento, "!");

    }else if(nivel==17){
        itemValor *val1=((_E*)hijos[0])->getValor(elemento);
        return val1;
    }else if(nivel==18){
        //ID_VAR_FUNC
        _ID_VAR_FUNC *nodoId=(_ID_VAR_FUNC*)hijos[0];
        return nodoId->getValor(elemento);
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

    }else if(nivel==21)
    //valCaracter
    {
        QString cad22=lst_Atributos->getToken(0)->valLower;
        if(cad22.count()<3){
            tabla->tablaError->insertErrorSemantic("El caracter está vacio",lst_Atributos->getToken(0));
            return new itemValor;
        }
        cad22=cad22.replace("'","");
        QByteArray inBytes=cad22.toUtf8();
        const char *cStrData=inBytes.constData();

        /*
         * C3d
        */

        QString tempP=tabla->getEtiqueta();
        //buscando la ultima posición libre
        QString cadP=tempP+" = "+"Pool[0]";
        QString tempP2=tabla->getEtiqueta();
        QString cadP2=tempP2+" = "+tempP+" + 1";


        //actualizo el puntero
        tabla->linea(cadP,elemento->nivel);
        tabla->linea("Pool["+tempP+"] = "+QString::number((int)cStrData[0]), elemento->nivel);
        tabla->linea(cadP2,elemento->nivel);
        tabla->linea("Pool[0] = "+tempP2,elemento->nivel);



        itemValor *val22=new itemValor(cStrData[0],tempP);
        return val22;


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


itemValor * _E::getValorT(elementoEntorno *entor){
    itemValor *valor= getValor(entor);
    if(valor->c3dV!=""){
        QString temp=tabla->getEtiqueta();


        tabla->linea2(valor->c3dF+":",entor->nivel);
        tabla->linea(temp+" = 0",entor->nivel);
        tabla->linea("goto "+valor->c3dS, entor->nivel);
        tabla->linea2(valor->c3dV+":",entor->nivel);
        tabla->linea(temp+" = 1",entor->nivel);
        tabla->linea2(valor->c3dS+":",entor->nivel);

        valor->c3d=temp;
        valor->c3dF="";
        valor->c3dS="";
        valor->c3dV="";
        return valor;
    }else{
        return valor;
    }
}
