#ifndef LSTATRIBUTOS_H
#define LSTATRIBUTOS_H


/*
|--------------------------------------------------------------------------
| IMPORTACIONES
|--------------------------------------------------------------------------
*/
#include "Coline/Elementos/Global/importar.h"
#import "Coline/Elementos/Tablas/tablasimbolos.h"
#import "Coline/Elementos/Items/itematributo.h"
#import "Coline/Elementos/Global/token.h"

/*
|--------------------------------------------------------------------------
| CLASE
|--------------------------------------------------------------------------
*/

class lstAtributos
{
public:
    QList<itemAtributo*> listaAtributos;
    tablaSimbolos *tabla;

    lstAtributos(tablaSimbolos *tabla){
        this->tabla=tabla;

    }


    void insertar(QString nombre,token *tok){
        itemAtributo *elem=new itemAtributo(tok,nombre);
        this->listaAtributos.append(elem);
    }

    QString getValItem(int indice){
        QString retorno="";

        if(listaAtributos.count()<indice){
            std::cout<<"[lstAtributos]"<<"hay un error 2"<<std::endl;
        }else{
            retorno=listaAtributos[indice]->tok->val;
        }
        return retorno;
    }

    token *getToken(int indice){
        token *retorno=new token();
        if(listaAtributos.count()<indice){

            std::cout<<"[lstAtributos]"<<"hay un error "<<std::endl;
        }else{
            retorno=listaAtributos[indice]->tok;
            return retorno;
        }
        return retorno;
    }

    void imprimir(){
        for (int i = 0; i < listaAtributos.count(); ++i) {
            token *temp=listaAtributos[i]->tok;
            std::cout<<"\t["<<i<<"] val:"<<temp->val.toStdString()<<"\tlinea:"<<temp->linea<< "\ttcol:" << temp->columna<<"\tamb:"<<temp->archivo.toStdString()<<std::endl;
        }


    }

};

#endif // LSTATRIBUTOS_H
