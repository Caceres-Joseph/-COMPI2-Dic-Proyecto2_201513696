#include "outstr.h"
#include "Gramatica/Arbol/Nodos/Expresiones/expexecutor.h"
#include <qstring.h>
#include <iostream>
OutStr::OutStr(int linea, int columna, std::string archivo,tablaSimbolos *tabla, NodoAST *puntero):NodoAST (linea, columna, archivo, tabla)
{
    this->puntero = puntero;
    this->type = "OUTSTR";
}

void OutStr::Ejecutar(Entorno3D *entorno, TablaTemporales *temporales, TablaEtiquetas *etiquetas)
{
    try {
        tabla->debuger3D(entorno,temporales,linea);
        double pointer = getVal(this->puntero, entorno, etiquetas, temporales);
        int aux = (int)pointer;
        //std::string cadena = "";
        QString cadena="";
        while(entorno->Pool->getValueAt(aux)!=0)
        {
            cadena +=QChar((char)entorno->Pool->getValueAt(aux));
            aux++;
        }
        //const char *salida = cadena.c_str();
        //printf("%s", cadena.toStdString());
        //std::cout<<cadena.toStdString();
        tabla->setTextConsola(cadena);
    } catch (int error) {
        printf("Error al realizar un OutSTR en Linea: %i | error: %i\n", this->linea, error);
    }
}
