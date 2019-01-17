#ifndef FLOTANTE_H
#define FLOTANTE_H
#include "Gramatica/Arbol/Abstraccion/nodoast.h"
#include "Gramatica/Entorno/entorno3d.h"
#include "Gramatica/Estructuras/TablaSimbolos/tablatemporales.h"
#include "Gramatica/Estructuras/Etiquetas/tablaetiquetas.h"
class flotante : public NodoAST
{
public:
    double valor;
    flotante(int linea, int columna, std::string archivo, double valor);
    double getValor(Entorno3D *entorno, TablaTemporales *temporales, TablaEtiquetas *etiquetas);
};

#endif // FLOTANTE_H
