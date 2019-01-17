#include "instr.h"
#include <QInputDialog>
#include <QString>
#include "Gramatica/Arbol/Nodos/Expresiones/expexecutor.h"
InStr::InStr(int linea, int columna, std::string archivo, NodoAST *puntero):NodoAST (linea, columna, archivo)
{
    this->type = "INSTR";
    this->puntero = puntero;
}

double InStr::getValor(Entorno3D *entorno, TablaTemporales *temporales, TablaEtiquetas *etiquetas)
{
    try {
        /*------------------------------------------------------------------------*/
         double indice = getVal(this->puntero, entorno, etiquetas, temporales); //OBTENGO EL INDICE
         std::string mensaje = "";
         while(entorno->Pool->getValueAt(indice)!=0)
         {
             mensaje += (char)entorno->Pool->getValueAt(indice);
             indice++;
         }
         /*-----------------------------------------------------------------------*/
        double inicio = entorno->S;
        QString s = QInputDialog::getText(NULL, QString::fromStdString(mensaje), "");
        std::string entrada = s.toStdString();
        const char *arreglo = entrada.c_str();
        for(int x = 0; x < entrada.size(); x++)
        {
            entorno->Pool->insertar(entorno->S, (double)((int)arreglo[x]));
            entorno->S++;
        }
        entorno->Pool->insertar(entorno->S, 0);
        entorno->S++;
        return inicio;
    } catch (int error) {
        printf("Error al intentar tomar una Cadena: Linea: %i \n", this->linea);
    }
}
