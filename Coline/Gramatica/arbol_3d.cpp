#include "arbol_3d.h"

arbol_3d::arbol_3d(tablaSimbolos *tabla)
{
    this->tabla=tabla;
}


void arbol_3d::ejecutar()
{



    //enviando la tabla
    setSalida3(tabla);
    //tabla3=tabla;

    QFile file("temp1.txt"); //SE CREA UN ARCHIVO TEMPORAL PARA COMPILARLO
    if ( file.open( file.WriteOnly ) ) { //BUFFER PARA EL TEXTO QUE SE DESEA COMPILAR
        QTextStream stream1( &file );
        stream1 << tabla->editorSalida->toPlainText();
    }
    const char* x = "temp1.txt";
    FILE* input = fopen(x, "r" );
    zzrestart(input);//SE PASA LA CADENA DE ENTRADA A FLEX
    zzparse();


    /*
    //NOMBRE DEL ARCHIVO DE ENTRADA
    std::string archivo = QFileDialog::getOpenFileName(this,"Abrir Archivo 3D","/home/richard/Documents/3D_Interprete/").toStdString();
    if(!archivo.compare("")==0)
    {
        const char* x = archivo.c_str();
        FILE* input = fopen(x, "r");
        zzrestart(input);
        zzparse();
    }
    */

    QMessageBox msgbox;
    msgbox.setText("Fin de analisis");
    msgbox.exec();

}
