#ifndef METODO_H
#define METODO_H
#include "Gramatica/Arbol/Abstraccion/nodoast.h"
#include <vector>
#include "Gramatica/Arbol/Nodos/Instrucciones/Etiqueta/etiqueta.h"
#include "Gramatica/Entorno/entorno3d.h"
#include "Gramatica/Estructuras/TablaSimbolos/tablatemporales.h"
#include "Gramatica/Estructuras/Etiquetas/tablaetiquetas.h"
class metodo : public NodoAST
{
public:
    TablaEtiquetas *etiquetas;
    TablaTemporales *temporales;
    int ejecutar;
    std::string id;
    std::vector<NodoAST*> instrucciones;
    metodo(int linea, int columna, std::string archivo, std::string id, std::vector<NodoAST*>instrucciones);
    metodo(int linea, int columna, std::string archivo, std::string id);
    void Ejecutar(Entorno3D *entorno, TablaTemporales *temporales, TablaEtiquetas *etiquetas);

    int esEtiqueta(NodoAST *n);
private:

};

#endif // METODO_H
