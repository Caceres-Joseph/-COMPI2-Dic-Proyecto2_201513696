#include "participarleccion.h"
#include "ui_participarleccion.h"
#include <QMessageBox>


participarLeccion::participarLeccion(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::participarLeccion)
{
    ui->setupUi(this);
}

participarLeccion::~participarLeccion()
{
    delete ui;
}

void participarLeccion::on_btnCalificar_clicked()
{

    QMessageBox msgBox;
    msgBox.setText("Resultado  \nCorrecto!");
    msgBox.exec();
}

void participarLeccion::on_btnEvaluar_clicked()
{

    QMessageBox msgBox;
    msgBox.setText("Lo sentimos   \nIncorrecto!");
    msgBox.exec();
}
