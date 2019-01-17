#include "getnum.h"
#include <QInputDialog>
#include "Gramatica/Arbol/Nodos/Expresiones/expexecutor.h"
GetNum::GetNum(int linea, int columna, std::string archivo, tablaSimbolos *tabla, NodoAST *puntero):NodoAST (linea, columna, archivo, tabla)
{
    // NO NECESITO NADA EN EL CONSTRUCTOR
    this->type = "GETNUM";
    this->puntero = puntero;
}

double GetNum::getValor(Entorno3D *entorno, TablaTemporales *temporales, TablaEtiquetas *etiquetas)
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
        double d = QInputDialog::getDouble(NULL, QString::fromStdString(mensaje), "", 0, -10000, 10000, 2, &ok);
        return  d;
    } catch (int error) {
        printf("Error al intentar tomar un valor Numerico: Linea: %i \n", this->linea);
    }
}
