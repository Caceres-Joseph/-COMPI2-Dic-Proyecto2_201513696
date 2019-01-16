#ifndef ARBOL_COLINE_H
#define ARBOL_COLINE_H

#include "Coline/Elementos/Global/importar.h"
#import "Coline/Elementos/Tablas/tablasimbolos.h"
#include "Coline/Gramatica/Gramatica/Sintactico/parser.h"
//#include "Coline/Gramatica/Gramatica/Lexico/scanner.h"
#include "Coline/Elementos/Objetos/objetoclase.h"
#include "Coline/Gramatica/Arbol/Nodos/nodomodelo.h"
extern int yyrestart( FILE* archivo);//METODO QUE PASA EL ARCHIVO A FLEX
extern int yyparse(); //METODO QUE INICIA EL ANALISIS SINTACTICO
extern void setSalida(tablaSimbolos *tablaDeSimbolos,nodoModelo *raizArbol); //METODO CREADO EN EL ANALIZADOR SINTACTICO PARA COMUNICAR PRINCIPAL CON EL PARSER
extern void iniciarLinea(); //METODO CREADO EN EL ANALIZADOR SINTACTICO PARA COMUNICAR PRINCIPAL CON EL PARSER


class arbol_coline
{
public:

    tablaSimbolos *tabla;
    nodoModelo *raizArbol;


    arbol_coline(tablaSimbolos *tabla){
        //this->tabla=new tablaSimbolos();
        tabla->resetearValores();

        this->tabla=tabla;
        this->tabla->comentarioLinea("Inicializando punteros",0);
        this->tabla->linea("P = 0",0);
        this->tabla->linea("H = 1",0);
        this->tabla->linea("S = 1",0);
        this->tabla->linea("Pool[0]  = 0",0, "Caracter nulo");
        this->tabla->linea("Heap[0]  = 0",0);
        this->tabla->linea("Heap[1]  = 0",0);
        this->tabla->linea("Stack[1] = 1",0,"This");

        this->raizArbol=new nodoModelo("raiz",this->tabla);

    }


    void iniciarAnalisis(QString cadena, QString nombreArchivo){


        setSalida(this->tabla, this->raizArbol);//SE ASIGNA EL PUNTERO DE LA SALIDA PARA SER USADA POR BISON
        iniciarLinea();

        QFile file("temp.txt"); //SE CREA UN ARCHIVO TEMPORAL PARA COMPILARLO
        if ( file.open( file.WriteOnly ) ) { //BUFFER PARA EL TEXTO QUE SE DESEA COMPILAR
            QTextStream stream1( &file );
            stream1 << cadena;
        }
        const char* x = "temp.txt";
        FILE* input = fopen(x, "r" );
        yyrestart(input);//SE PASA LA CADENA DE ENTRADA A FLEX



        yyparse();//SE INICIA LA COMPILACION


        //  yylineno=0;

        //raizArbol->imprimirNodos();
        raizArbol->ejecutar();

        //buscando el main y ejecutando
        ejecutarPrincipal();

        //escribiendo los metodos de las otras clases
        ejecutarDemasMetodos();


        //std::cout<<"\n3D:"<<std::endl;
        //std::cout<<tabla->salida.toStdString()<<std::endl;
        std::cout<<"----- Fin analisis  -----"<<std::endl;


        if(raizArbol->hayErrores()){
            QMessageBox msgBox;
            msgBox.setText("Se detectaron algunos errores :(");
            msgBox.exec();
        }

    }

    QString getSalida();


    void ejecutarPrincipal();

    void ejecutarDemasMetodos();
};

#endif // ARBOL_COLINE_H
