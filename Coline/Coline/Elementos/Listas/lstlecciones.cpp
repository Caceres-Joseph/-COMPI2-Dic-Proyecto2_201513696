#include "lstlecciones.h"
#include "Coline/Elementos/Tablas/tablasimbolos.h"
lstLecciones::lstLecciones(tablaSimbolos *tabla)
{
    this->tabla=tabla;
}


void lstLecciones::insertar(elementoLeccion *nuevaLec){

    tabla->tblLecciones->setRowCount(index+1);

    QTableWidgetItem *tab1=new QTableWidgetItem(nuevaLec->titulo);
    this->tabla->tblLecciones->setItem(index,0,tab1);

    QTableWidgetItem *tab2=new QTableWidgetItem(QString::number(nuevaLec->esAcoach));
    this->tabla->tblLecciones->setItem(index,1,tab2);

    listaLecciones.append(nuevaLec);
    index++;
}
