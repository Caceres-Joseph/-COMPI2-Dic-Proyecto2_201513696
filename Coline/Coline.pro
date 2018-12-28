#-------------------------------------------------
#
# Project created by QtCreator 2018-12-26T23:45:59
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Coline
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
    Coline/Elementos/Global/importar.cpp \
    Coline/Elementos/Global/token.cpp \
    Coline/Elementos/Items/itematributo.cpp \
    Coline/Elementos/Items/itemretorno.cpp \
    Coline/Elementos/Items/itemvalor.cpp \
    Coline/Elementos/Primitivos/p_booleano.cpp \
    Coline/Elementos/Primitivos/p_caracter.cpp \
    Coline/Elementos/Primitivos/p_decimal.cpp \
    Coline/Elementos/Primitivos/p_entero.cpp \
    Coline/Elementos/Primitivos/p_modelo.cpp \
    Coline/Elementos/Primitivos/p_nulo.cpp \
    main.cpp \
    mainwindow.cpp \
    Coline/Gramatica/Gramatica/Sintactico/parser.cpp \
    Coline/Gramatica/Gramatica/Lexico/scanner.cpp \
    Coline/Gramatica/Arbol/arbol_coline.cpp \
    Coline/Elementos/Tablas/tablasimbolos.cpp \
    Coline/Elementos/Listas/lstatributos.cpp \
    Coline/Gramatica/Arbol/Nodos/nodomodelo.cpp \
    Coline/Elementos/Tablas/tablaerrores.cpp \
    Coline/Elementos/Elementos/elementoerror.cpp

HEADERS += \
    Coline/Elementos/Global/importar.h \
    Coline/Elementos/Global/token.h \
    Coline/Elementos/Items/itematributo.h \
    Coline/Elementos/Items/itemretorno.h \
    Coline/Elementos/Items/itemvalor.h \
    Coline/Elementos/Primitivos/p_booleano.h \
    Coline/Elementos/Primitivos/p_caracter.h \
    Coline/Elementos/Primitivos/p_decimal.h \
    Coline/Elementos/Primitivos/p_entero.h \
    Coline/Elementos/Primitivos/p_modelo.h \
    Coline/Elementos/Primitivos/p_nulo.h \
    mainwindow.h \
    Coline/Gramatica/Gramatica/Lexico/lexico.l \
    Coline/Gramatica/Gramatica/Sintactico/parser.h \
    Coline/Gramatica/Gramatica/Lexico/scanner.h \
    Coline/Gramatica/Arbol/arbol_coline.h \
    Coline/Elementos/Tablas/tablasimbolos.h \
    Coline/Elementos/Listas/lstatributos.h \
    Coline/Gramatica/Arbol/Nodos/nodomodelo.h \
    Coline/Elementos/Tablas/tablaerrores.h \
    Coline/Elementos/Elementos/elementoerror.h

FORMS += \
        mainwindow.ui
