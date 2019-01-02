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
#import "Coline/Elementos/Elementos/elementoclase.h"
/*
|--------------------------------------------------------------------------
| CLASE
|--------------------------------------------------------------------------
*/

class elementoPolimorfo;
class nodoModelo
{
public:
    QString nombre;
    QList<nodoModelo*> hijos;
    lstAtributos *lst_Atributos;
    tablaSimbolos *tabla;
    int nivel=-1;

    explicit nodoModelo(QString nombre, tablaSimbolos *tabla){
        this->nombre=nombre;
        this->tabla=tabla;
        this->lst_Atributos=new lstAtributos(this->tabla);
    }


    void insertar(nodoModelo *hijo){
        hijos.append(hijo);
    }

    /*
    |--------------------------------------------------------------------------
    | Cargando el elemento polimorfo, el que tiene metdos/func/vari
    |--------------------------------------------------------------------------
    |
    */

    virtual void cargarPolimorfismo(elementoPolimorfo *elem){
        cargarPolimorfismoHijos(elem);
    }

    virtual void cargarPolimorfismoHijos(elementoPolimorfo *elemento){

        for (int i = 0; i < hijos.count(); ++i) {
            nodoModelo *temp=hijos[i];
            temp->cargarPolimorfismo(elemento);
        }
    }


    /*
    |--------------------------------------------------------------------------
    | Para cargas el cuerpo de la clase
    |--------------------------------------------------------------------------
    |
    */
    virtual void ejecutar(elementoClase *simbolo){
        ejecutarHijos2(simbolo);
    }

    virtual void ejecutarHijos2(elementoClase *simbolo){

        for (int i = 0; i < hijos.count(); ++i) {
            nodoModelo *temp=hijos[i];
            temp->ejecutarHijos2(simbolo);
        }
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
    virtual itemRetorno* ejecutar(elementoEntorno *entor);

    virtual itemRetorno* ejecutarHijos(elementoEntorno *entor);


    /*
    |--------------------------------------------------------------------------
    | Para construir el arbol
    |--------------------------------------------------------------------------
    |
    */

    virtual void ejecutar(){
        ejecutarHijos();
    }

    virtual void ejecutarHijos()
    {
        if(hayErrores())
            return;

        for (int i = 0; i < hijos.count(); ++i) {
            nodoModelo *temp=hijos[i];
            temp->ejecutar();
        }
    }



    bool hayErrores(){
        bool retorno=false;
        if(this->tabla->tablaError->listaErrores.count()==0){
            return false;
        }else{
            std::cout<<"No se puede ejecutar el nodo "<<nombre.toStdString()<<" porque hay errores en la tabla"<<std::endl;
        }
        return retorno;
    }

    void imprimirNodos(){

        std::cout<<"Padre: "<<nombre.toStdString()<<std::endl;
        for (int i = 0; i < hijos.count(); ++i) {
            nodoModelo *temp=hijos[i];
            std::cout<<"\t["<<i<<"] val:"<<temp->nombre.toStdString()<<std::endl;
            temp->imprimirNodos();
        }
    }

    void println(QString mensaje);


};

#endif // NODOMODELO_H
