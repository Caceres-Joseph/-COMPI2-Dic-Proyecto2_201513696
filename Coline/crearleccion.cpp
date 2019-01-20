#include "crearleccion.h"
#include "ui_crearleccion.h"
CrearLeccion::CrearLeccion(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CrearLeccion)
{
    ui->setupUi(this);
    ide=new MainWindow();
    tabla=ide->tabla;
    ide->tabla->tblLecciones=ui->tblLecciones;

    nuevaLec=new nuevaLeccion();
    nuevaLec->tabla=ide->tabla;
    participar=new participarLeccion();





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
MainWindow *ide=new MainWindow();
std::cout<<"hola"<<std::endl;
    ide->show();
   // nueva->exec();
}

void CrearLeccion::on_btnParticipar_clicked()
{
}

void CrearLeccion::on_pushButton_clicked()
{

        ide->show();
}

void CrearLeccion::on_pushButton_2_clicked()
{
    nuevaLec->exec();
}

void CrearLeccion::on_pushButton_3_clicked()
{

    nuevaLec->exec();
}

#include "ui_participarleccion.h"
void CrearLeccion::on_pushButton_4_clicked()
{
    QString val= ui->cbParticiipar->text();
    int valor= val.toInt();

    if(valor<tabla->lecciones->listaLecciones.count()){
        elementoLeccion *lec=tabla->lecciones->listaLecciones[valor];

        participar->ui->txtTituo->setText(lec->titulo);
        participar->ui->txtEnunciado->setText(lec->enunciado);
        participar->ui->txtExplicacion->setText(lec->explicacion);
        participar->ui->txtEjemplo->setText(lec->codigoEj);
        participar->ui->txtSolucion->clear();



        std::cout<<valor<<")"<<lec->titulo.toStdString()<<std::endl;

        participar->exec();

    }

}
