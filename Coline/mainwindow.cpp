#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->txtEntrada->setLineWrapMode(QTextEdit::NoWrap);
    ui->txtSalida->setLineWrapMode(QTextEdit::NoWrap);


    //creando una tabla de simbolo
    tabla=new tablaSimbolos();
    lstTabs=new lstTabClase(ui->tabColine,tabla);
    //colocando una tab por defecto
    lstTabs->insertarTab("Inicio");



    //Creando el editor para la salida del codigo 3D
    QWidget *tbPestnia=new QWidget(ui->tab3d);

    CodeEditor* txtEditor=new CodeEditor();
    Highlighter *highlighter;
    highlighter = new Highlighter(txtEditor->document());

    QHBoxLayout *layout = new QHBoxLayout;
    layout->addWidget(txtEditor);
    tbPestnia->setLayout(layout);
    //se agrega al elemento gráfico
    ui->tab3d->addTab(tbPestnia, "Salida 3D");
    tabla->editorSalida=txtEditor;

    dlgColine=new DebugColine();
    dlgColine->tabla=tabla;
    tabla->dlgColine=dlgColine;


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btnAceptar_clicked()
{
    lstTabs->traducir();
}

void MainWindow::on_btnAnalizar_clicked()
{
    arbol_coline *anlz=new arbol_coline(tabla);
    anlz->iniciarAnalisis(ui->txtEntrada->toPlainText(),"principal");
    ui->txtSalida->setText(anlz->getSalida());

}


/*
|-------------------------------------------------------------------------------------------------------------------
| ACCIONES MENU
|-------------------------------------------------------------------------------------------------------------------
|
*/



void MainWindow::on_menuNuevo_triggered()
{
    bool ok;
    // Ask for birth date as a string.
    QString text = QInputDialog::getText(0, "Coline",
                                         "Nombre de la nuea pestaña:", QLineEdit::Normal,
                                         "", &ok);
    if(ok){
        lstTabs->insertarTab(text);
    }

}

void MainWindow::on_btnAux1_clicked()
{
    std::terminate();
}
