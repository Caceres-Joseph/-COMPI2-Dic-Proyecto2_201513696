#ifndef DEBUGCOLINE_H
#define DEBUGCOLINE_H

#include <QDialog>
#include "Coline/Elementos/Tablas/tablasimbolos.h"
namespace Ui {
class DebugColine;
}

class DebugColine : public QDialog
{
    Q_OBJECT

public:
    explicit DebugColine(QWidget *parent = 0);
    ~DebugColine();
    tablaSimbolos *tabla;

    Ui::DebugColine *ui;
private slots:
    void on_btnCancelar_clicked();
    void on_btnSiguiente_clicked();
};

#endif // DEBUGCOLINE_H
