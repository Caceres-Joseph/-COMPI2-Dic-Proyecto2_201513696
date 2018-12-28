#ifndef ARBOL_COLINE_H
#define ARBOL_COLINE_H

#include "Coline/Elementos/Global/importar.h"
#import "Coline/Elementos/Tablas/tablasimbolos.h"
#include "Coline/Gramatica/Gramatica/Sintactico/parser.h"


extern int yyrestart( FILE* archivo);//METODO QUE PASA EL ARCHIVO A FLEX
extern int yyparse(); //METODO QUE INICIA EL ANALISIS SINTACTICO
extern void setSalida(tablaSimbolos *tablaDeSimbolos); //METODO CREADO EN EL ANALIZADOR SINTACTICO PARA COMUNICAR PRINCIPAL CON EL PARSER



class arbol_coline
{
public:

    tablaSimbolos *tabla;


    arbol_coline(){
        this->tabla=new tablaSimbolos();

    }


    void iniciarAnalisis(QString cadena, QString nombreArchivo){

        QFile file("temp.txt"); //SE CREA UN ARCHIVO TEMPORAL PARA COMPILARLO
        if ( file.open( file.WriteOnly ) ) { //BUFFER PARA EL TEXTO QUE SE DESEA COMPILAR
            QTextStream stream1( &file );
            stream1 << cadena;
        }
        const char* x = "temp.txt";
        FILE* input = fopen(x, "r" );
        yyrestart(input);//SE PASA LA CADENA DE ENTRADA A FLEX


        setSalida(this->tabla);//SE ASIGNA EL PUNTERO DE LA SALIDA PARA SER USADA POR BISON
        yyparse();//SE INICIA LA COMPILACION


        std::cout<<"Salida:"<<this->tabla->salida.toStdString()<<std::endl;



         QMessageBox msgBox;
         msgBox.setText("FIN DEL ANALISIS");
         msgBox.exec();

    }
};

#endif // ARBOL_COLINE_H
