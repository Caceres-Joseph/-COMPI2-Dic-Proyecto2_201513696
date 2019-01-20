#include "nuevaleccion.h"
#include "ui_nuevaleccion.h"

nuevaLeccion::nuevaLeccion(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::nuevaLeccion)
{
    ui->setupUi(this);
}

nuevaLeccion::~nuevaLeccion()
{
    delete ui;
}

void nuevaLeccion::on_pushButton_3_clicked()
{
    elementoLeccion *nuevaLec=new elementoLeccion(ui->txtTitulo->toPlainText(),
                                                  ui->txtDescripcion->toPlainText(),
                                                  ui->txtEjemplo->toPlainText(),
                                                  ui->txtEnunciado->toPlainText(),
                                                  ui->txtPruebas->toPlainText(),
                                                  true);

    tabla->lecciones->insertar(nuevaLec);


    ui->txtTitulo->setText("");
    ui->txtDescripcion->setText("");
    ui->txtEjemplo->setText("");
    ui->txtEnunciado->setText("");
    ui->txtPruebas->setText("");


    this->close();

}

void nuevaLeccion::on_pushButton_clicked()
{

    elementoLeccion *nuevaLec=new elementoLeccion(ui->txtTitulo->toPlainText(),
                                                  ui->txtDescripcion->toPlainText(),
                                                  ui->txtEjemplo->toPlainText(),
                                                  ui->txtEnunciado->toPlainText(),
                                                  ui->txtPruebas->toPlainText(),
                                                  false);

    tabla->lecciones->insertar(nuevaLec);


    ui->txtTitulo->setText("");
    ui->txtDescripcion->setText("");
    ui->txtEjemplo->setText("");
    ui->txtEnunciado->setText("");
    ui->txtPruebas->setText("");


    this->close();

}

void nuevaLeccion::on_pushButton_2_clicked()
{

    ui->txtTitulo->setText("");
    ui->txtDescripcion->setText("");
    ui->txtEjemplo->setText("");
    ui->txtEnunciado->setText("");
    ui->txtPruebas->setText("");


    this->close();
}
