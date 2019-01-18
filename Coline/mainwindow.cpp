#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "ui_debug3d.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //ui->txtEntrada->setLineWrapMode(QTextEdit::NoWrap);
    //ui->txtSalida->setLineWrapMode(QTextEdit::NoWrap);


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
    tabla->txtSalidaConsola=ui->txtConsolaSalida2;


    //debuger 3D
    dlg3D =new debug3d();
    tabla->dlg3D=dlg3D;
    dlg3D->tabla=tabla;


    //scroles horizontales
    txtEditor->setLineWrapMode(QPlainTextEdit::NoWrap);
    dlg3D->ui->txtConsolaSalida2->setLineWrapMode(QPlainTextEdit::NoWrap);


    //tabla->editorEntrada->setLineWrapMode(QPlainTextEdit::NoWrap);
    //tabla->editorSalida->setLineWrapMode(QPlainTextEdit::NoWrap);

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
    tabla->txtSalidaConsola->clear();
    arbol_3d *c3d=new arbol_3d(tabla);
    c3d->ejecutar();


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

void MainWindow::on_btnDepurar_clicked()
{

    tabla->dbg_pasoPaso();


}

void MainWindow::on_btnResetDbg_clicked()
{
    tabla->dbg_reset();
}

void MainWindow::on_btnContinuar_clicked()
{
    tabla->dbg_automatico();
}

void MainWindow::on_btnSiguiente_clicked()
{
    tabla->dbg_instruccion();
}

void MainWindow::on_btnSaltar_clicked()
{


}


void MainWindow::prueba(char val1[15]){

    std::cout<<"imprmir"<<val1[0]<<std::endl;
}

void MainWindow::on_btnAux2_clicked()
{

    int val1=1;
    val1-=10;
    std::cout<<"vale:"<<val1<<std::endl;

}
