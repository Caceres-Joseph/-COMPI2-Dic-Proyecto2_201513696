#include "crearleccion.h"
#include "ui_crearleccion.h"
CrearLeccion::CrearLeccion(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CrearLeccion)
{
    ui->setupUi(this);
     Leccion=new participarLeccion();

}

CrearLeccion::~CrearLeccion()
{
    delete ui;
}

void CrearLeccion::on_btnACoach_clicked()
{
    nuevaLeccion *nueva=new nuevaLeccion();
    nueva->exec();
}

void CrearLeccion::on_btnGCoach_clicked()
{

    nuevaLeccion *nueva=new nuevaLeccion();
    nueva->exec();
}

void CrearLeccion::on_btnLibre_clicked()
{

    MainWindow *nueva=new MainWindow();
    nueva->show();
   // nueva->exec();
}

void CrearLeccion::on_btnParticipar_clicked()
{
    Leccion->show();
}
