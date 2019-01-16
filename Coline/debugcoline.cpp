#include "debugcoline.h"
#include "ui_debugcoline.h"

DebugColine::DebugColine(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DebugColine)
{
    ui->setupUi(this);

}

DebugColine::~DebugColine()
{
    delete ui;
}
