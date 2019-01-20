#include "participarleccion.h"
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

}
void participarLeccion::on_btnEvaluar_clicked()
{

}

void participarLeccion::on_pushButton_clicked()
{
    int iSecret;
    iSecret = rand() % 10 + 1;

    if(iSecret<5){

        QMessageBox msgBox;
        msgBox.setText("Resultado  \nCorrecto!");
        msgBox.exec();

    }else{

        QMessageBox msgBox;
        msgBox.setText("Lo sentimos   \nIncorrecto!");
        msgBox.exec();
    }

}

