#ifndef TABLASIMBOLOS_H
#define TABLASIMBOLOS_H


/*
|--------------------------------------------------------------------------
| IMPORTACIONES
|--------------------------------------------------------------------------
*/
#include "Coline/Elementos/Global/importar.h"
#include "Coline/Elementos/Tablas/tablaerrores.h"
//#include "Coline/Elementos/Elementos/elementoclase.h"
#include "Gui/codeeditor.h"
//#include "debugcoline.h"
class DebugColine;
#include "debug3d.h";
class Entorno3D;
class TablaTemporales;
class elementoClase;
class elementoEntorno;
/*
|--------------------------------------------------------------------------
| CLASE
|--------------------------------------------------------------------------
*/

class tablaSimbolos
{
public:

    DebugColine *dlgColine;
    debug3d *dlg3D;

    CodeEditor* editorSalida;
    CodeEditor* editorEntrada;
    QPlainTextEdit *txtSalidaConsola;
    //QString salida="";
    int numEtiqueta=0;
    int numSalto=0;
    tablaErrores *tablaError=new tablaErrores();

    QList<elementoClase*> lstClases;

    tablaSimbolos(){
    }


    void incrementarHeap(elementoEntorno *entor);
    void incrementarPool(elementoEntorno *entor);

    void func_colocarParam(QString valor,int numParam, elementoEntorno *entor);
    QString func_llamarFuncRetorno(QString nombre,elementoEntorno *entor);
    void func_llamarFunc(QString nombre, elementoEntorno *entor);

    QString getEtiqueta();
    QString getSalto();

    void linea(QString txt, int nivel);
    void linea(QString txt, int nivel, QString comentario);

    void comentarioLinea(QString txt, int nivel);

    void linea2(QString txt, int nivel);
    void linea2(QString txt, int nivel, QString comentario);


    QString getLinea(QString txt, int nivel);
    QString getLinea(QString txt, int nivel, QString comentario);

    QString getLinea2(QString txt, int nivel);
    QString getLinea2(QString txt, int nivel, QString comentario);

    void limpiarAmbito(elementoEntorno *entor);
    void sgb(QString inicio,QString tam, int nivel);


    elementoClase *getClase(token *nombre);

    /*
     * Chapuses :(
    */

    QString Salida3d="";

    void nuevaLinea(QString txt);

    /*
     * Debuger
    */

    void debugerColine(elementoEntorno *entor);
    void debuger3D(Entorno3D *entorno, TablaTemporales *temporales, int linea);
    bool modoDebuger=false;
    int lineaDebuger=0;

    //0 paso  a paso
    //1 automatico
    //2 punto a punto
    int numModo=0;

    void resetearValores();

    void dbg_pasoPaso();
    void dbg_automatico();
    void dbg_instruccion();
    void dbg_reset();

    void setTextConsola(QString texto);

};

#endif // TABLASIMBOLOS_H
