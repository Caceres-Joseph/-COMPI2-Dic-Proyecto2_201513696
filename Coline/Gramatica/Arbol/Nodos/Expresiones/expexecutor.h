#ifndef EXPEXECUTOR_H
#define EXPEXECUTOR_H
#include "Gramatica/Entorno/entorno3d.h"
#include "Gramatica/Estructuras/TablaSimbolos/tablatemporales.h"
#include "Gramatica/Estructuras/Etiquetas/tablaetiquetas.h"
double getVal(NodoAST *i, Entorno3D *e, TablaEtiquetas *t, TablaTemporales *t2);
#endif // EXPEXECUTOR_H
