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
}

void MainWindow::on_btnAnalizar_clicked()
{
    arbol_coline *anlz=new arbol_coline();
    anlz->iniciarAnalisis(ui->txtEntrada->toPlainText(),"principal");

}
