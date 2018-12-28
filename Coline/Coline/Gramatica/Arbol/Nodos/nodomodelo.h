#ifndef NODOMODELO_H
#define NODOMODELO_H

/*
|--------------------------------------------------------------------------
| IMPORTACIONES
|--------------------------------------------------------------------------
*/
#include "Coline/Elementos/Global/importar.h"
#import "Coline/Elementos/Tablas/tablasimbolos.h"
#import "Coline/Elementos/Listas/lstatributos.h"
#import "Coline/Elementos/Items/itemretorno.h"
/*
|--------------------------------------------------------------------------
| CLASE
|--------------------------------------------------------------------------
*/
class nodoModelo
{
public:
    QString nombre;
    QList<nodoModelo*> hijos;
    lstAtributos *lst_Atributos;
    tablaSimbolos *tabla;

    nodoModelo(QString nombre, tablaSimbolos *tabla){
        this->nombre=nombre;
        this->tabla=tabla;
        this->lst_Atributos=new lstAtributos(this->tabla);
    }


    void insertar(nodoModelo *hijo){
        hijos.append(hijo);
    }

    /*
    |--------------------------------------------------------------------------
    | La ejecución FINAL
    |--------------------------------------------------------------------------
    | 0= normal
    | 1 = return;
    | 2 = break
    | 3 = continue
    | 4 = errores
    */



    /*
    |--------------------------------------------------------------------------
    | Para construir el arbol
    |--------------------------------------------------------------------------
    |
    */

    void ejecutar(){
        ejecutarHijos();
    }

    void ejecutarHijos()
    {

    }



    bool hayErrores(){
        bool retorno=false;
        if(this->tabla->tablaError->listaErrores.count()==0){
            return false;
        }else{
            std::cout<<"No se puede ejecutar el nodo"<<nombre.toStdString()<<" porque hay errores en la tabla"<<std::endl;
        }
        return retorno;
    }


};

#endif // NODOMODELO_H
