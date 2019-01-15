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

    }else if(nivel==20)
    //val Cadena
    {
        QString cadena=lst_Atributos->getToken(0)->val.replace("\"","");

        QString etqInicioCad=tabla->getEtiqueta();
        itemValor* retorno=new itemValor('a',etqInicioCad);

        tabla->linea(etqInicioCad + " = S", elemento->nivel, "Inicio de la cadena");

        QByteArray inBytes=cadena.toUtf8();
        const char *cStrData=inBytes.constData();

        int indice =0;
        while(cStrData[indice] != '\0'){
            char elem=cStrData[indice];
            int ascci=(int)elem;
            if(ascci==92)
            //es una diagonal invertida
            {
                QString val1=QChar(cStrData[indice+1]);
                if(val1=="n")
                //salto de linea
                {
                    ascci=10;
                    indice++;
                }else if(val1=="0")
                //caracter nulo
                {
                    ascci=0;
                    indice++;
                }else if(val1=="t")
                //caracter nulo
                {
                    ascci=9;
                    indice++;
                }else if(val1=="\"")
                //comilla
                {
                    ascci=34;
                    indice++;
                }
            }

            if(ascci<0){
                ascci=126;
            }

            QString charInt=QString::number(ascci);

            itemValor *itemTemp=new itemValor(elem,charInt);
            retorno->dimensiones.append(itemTemp);

            tabla->linea("Pool[S] = "+charInt, elemento->nivel);
            tabla->incrementarPool(elemento);
            indice++;
        }


        //caracter nulo
        tabla->linea("Pool[S] = 0", elemento->nivel, "Caracter nulo");
        tabla->incrementarPool(elemento);

        return retorno;

    }else if(nivel==21)
    //valCaracter
    {
        QString cad22=lst_Atributos->getToken(0)->val;
        if(cad22.count()<3){
            tabla->tablaError->insertErrorSemantic("El caracter está vacio",lst_Atributos->getToken(0));
            return new itemValor;
        }
        cad22=cad22.replace("'","");
        QByteArray inBytes=cad22.toUtf8();
        const char *cStrData=inBytes.constData();

        int ascci=(int)cStrData[0];

        if(ascci==92)
        //es una diagonal invertida
        {
            QString val1=QChar(cStrData[1]);
            if(val1=="n")
            //salto de linea
            {
                ascci=10;
            }else if(val1=="0")
            //caracter nulo
            {
                ascci=0;
            }else if(val1=="t")
            //caracter nulo
            {
                ascci=9;
            }else if(val1=="\"")
            //comilla
            {
                ascci=34;
            }
        }

        if(ascci<0){
            ascci=126;
        }
        /*
         * C3d
        */

        //buscando la ultima posición libre
        QString retorno=tabla->getEtiqueta();


        //actualizo el puntero
        tabla->linea("Pool[S] = "+QString::number(ascci), elemento->nivel);
        tabla->linea(retorno+" = S",elemento->nivel);
        tabla->incrementarPool(elemento);

        itemValor *val22=new itemValor(cStrData[0],retorno);
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

        //retornando nulo
        return new itemValor();
    }else if(nivel==25){
        //retornando un nulo
        return new itemValor();

    }else if(nivel==26){


        _CONVERTIR_CADENA *nodoConver=(_CONVERTIR_CADENA*)hijos[0];
        itemValor *itemVal=nodoConver->getValor(elemento);
        return itemVal;
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
