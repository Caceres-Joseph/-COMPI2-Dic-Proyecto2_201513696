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

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_btnAceptar_clicked();

    void on_btnAnalizar_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
