#include "mainwindow.h"
#include <QApplication>
#include "crearleccion.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);



    MainWindow w;
    w.show();


    //CrearLeccion lec;
    //lec.show();

    return a.exec();
}
