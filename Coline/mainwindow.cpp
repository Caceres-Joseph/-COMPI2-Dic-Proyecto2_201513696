#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btnAceptar_clicked()
{
    QString data= ui->txtEntrada->toPlainText();

    token *tok=new token(data,0,1,"jejee");
    token *tok2=new token("prueba",11,12,"archivo");

    itemAtributo *atri =new itemAtributo(tok,"valores");
    //std::cout<<atri->tok->valLower.toStdString()<<std::endl;

    //p_entero *valor =new p_entero(3);
    //std::cout<<valor->tipo.toStdString()<<std::endl;

    //itemValor *val=new itemValor(33);
    //std::cout<<val->valor->tipo.toStdString()<<std::endl;

    //itemRetorno *ret=new itemRetorno(1);
    //std::cout<<ret->isNormal()<<std::endl;


    tablaSimbolos *tabla=new tablaSimbolos();
    lstAtributos *atribs=new lstAtributos(tabla);


    atribs->insertar("vale",tok);
    atribs->insertar("vale2",tok2);
    atribs->imprimir();


    double val= -3-32*11-12/-4%98;

          double  t9 = 0 - 3;
           double t10 = 32 * 11;
           double t11 = t9-t10;
          double  t12 = 4 % 98;
          double  t13 = 0 - t12;
          double  t14 = 12 / t13;
         double   t15 = t11-t14;

         std::cout<<"val:: -> "<<val<<" -> "<<t15<<std::endl;

}

void MainWindow::on_btnAnalizar_clicked()
{
    arbol_coline *anlz=new arbol_coline();
    anlz->iniciarAnalisis(ui->txtEntrada->toPlainText(),"principal");
    ui->txtSalida->setText(anlz->getSalida());

}
