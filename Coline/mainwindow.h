#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "Coline/Elementos/Global/importar.h"
#include "Coline/Elementos/Global/token.h"
#include "Coline/Elementos/Items/itematributo.h"
#include "Coline/Elementos/Primitivos/p_entero.h"
#include "Coline/Elementos/Items/itemvalor.h"
#include "Coline/Elementos/Items/itemretorno.h"
#include <QMainWindow>


#include <QMainWindow>
#include <stdio.h>
#include <stdlib.h>
#include "Coline/Gramatica/Gramatica/Sintactico/parser.h"
#include "Coline/Gramatica/Arbol/arbol_coline.h"
#include "Coline/Elementos/Listas/lstatributos.h"
#include <QDirModel>
#include "Gui/lsttabclase.h"
#include <QInputDialog>

#include "debugcoline.h"
#include "debug3d.h"
#include "Gramatica/arbol_3d.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    tablaSimbolos *tabla;
    DebugColine *dlgColine;
    debug3d *dlg3D;
    lstTabClase *lstTabs;
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();



    //MENU
    void menuInicializar();
    void accNuevo();

    void prueba(char val1[15]);


private slots:
    void on_btnAceptar_clicked();

    void on_btnAnalizar_clicked();

    void on_menuNuevo_triggered();

    void on_btnAux1_clicked();

    void on_btnDepurar_clicked();

    void on_btnResetDbg_clicked();

    void on_btnContinuar_clicked();

    void on_btnSiguiente_clicked();

    void on_btnSaltar_clicked();

    void on_btnAux2_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
