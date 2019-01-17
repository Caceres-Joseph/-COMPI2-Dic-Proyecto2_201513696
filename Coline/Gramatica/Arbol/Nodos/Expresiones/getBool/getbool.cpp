#include "getbool.h"
#include <QInputDialog>
#include "Gramatica/Arbol/Nodos/Expresiones/expexecutor.h"
GetBool::GetBool(int linea, int columna, std::string archivo, NodoAST *puntero):NodoAST (linea, columna, archivo)
{
    this->type = "GETBOOL";
    this->puntero = puntero;
}

double GetBool::getValor(Entorno3D *entorno, TablaTemporales *temporales, TablaEtiquetas *etiquetas)
{
    try {
        bool ok;
       /*------------------------------------------------------------------------*/
        double indice = getVal(this->puntero, entorno, etiquetas, temporales); //OBTENGO EL INDICE
        std::string mensaje = "";
        while(entorno->Pool->getValueAt(indice)!=0)
        {
            mensaje += (char)entorno->Pool->getValueAt(indice);
            indice++;
        }
        /*-----------------------------------------------------------------------*/
       int i = QInputDialog::getInt(NULL, QString::fromStdString(mensaje), "", 0, 0, 1, 1, &ok);
        return  (double)i;
    } catch (int error) {
        printf("Error al intentar tomar un valor Bool: Linea: %i \n", this->linea);
    }
}
