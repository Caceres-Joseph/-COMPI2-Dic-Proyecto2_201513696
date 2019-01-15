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
CONFIG += precompile_header
PRECOMPILED_HEADER = pch.hpp
HEADERS += pch.hpp \
    Coline/Elementos/Elementos/elementopolimorfo.h \
    Coline/Elementos/Elementos/elementoparametro.h \
    Coline/Elementos/Listas/lstpolimorfismo.h \
    Coline/Elementos/Listas/lstclases.h \
    Coline/Elementos/Objetos/objetoclase.h \
    Coline/Elementos/Elementos/elementoentorno.h \
    Coline/Elementos/Items/itementorno.h \
    Coline/Elementos/Primitivos/p_cadena.h \
    Coline/Gramatica/Arbol/Nodos/FuncionesNativas/_funciones_nativas.h \
    Coline/Gramatica/Arbol/Nodos/FuncionesNativas/_concatenar.h \
    Coline/Gramatica/Arbol/Nodos/FuncionesNativas/_convertir_cadena.h \
    Coline/Elementos/Primitivos/p_objeto.h \
    Gui/nodotabclase.h \
    Gui/lsttabclase.h \
    Gui/codeeditor.h \
    Gui/highlighter.h

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
    Coline/Elementos/Elementos/elementoerror.cpp \
    Coline/Gramatica/Arbol/Nodos/Inicio/_clase.cpp \
    Coline/Gramatica/Arbol/Nodos/AsignarValor_UsarMetodo/_usar_meto_var.cpp \
    Coline/Gramatica/Arbol/Nodos/AsignarValor_UsarMetodo/_usar_metodo.cpp \
    Coline/Gramatica/Arbol/Nodos/AsignarValor_UsarMetodo/_usar_variable.cpp \
    Coline/Gramatica/Arbol/Nodos/AsignarValor_UsarMetodo/_usar_variablep.cpp \
    Coline/Gramatica/Arbol/Nodos/Asignar_Valor/_asig_valor.cpp \
    Coline/Gramatica/Arbol/Nodos/Cuerpo/_cuerpo.cpp \
    Coline/Gramatica/Arbol/Nodos/Cuerpo/_lst_cuerpo.cpp \
    Coline/Gramatica/Arbol/Nodos/Cuerpo/_lst_cuerpo2.cpp \
    Coline/Gramatica/Arbol/Nodos/Cuerpo_Clase/_cp_clase.cpp \
    Coline/Gramatica/Arbol/Nodos/Cuerpo_Clase/_cuerpo_clase.cpp \
    Coline/Gramatica/Arbol/Nodos/Declarar_Variable/_declarar_variable_global.cpp \
    Coline/Gramatica/Arbol/Nodos/Declarar_Variable/_declarar_variable_sinvisibi.cpp \
    Coline/Gramatica/Arbol/Nodos/Declarar_Variable/_val.cpp \
    Coline/Gramatica/Arbol/Nodos/Funciones_Metodos/_constructor.cpp \
    Coline/Gramatica/Arbol/Nodos/Funciones_Metodos/_main.cpp \
    Coline/Gramatica/Arbol/Nodos/Funciones_Metodos/_metodo.cpp \
    Coline/Gramatica/Arbol/Nodos/Funciones_Metodos/_sobrescritura.cpp \
    Coline/Gramatica/Arbol/Nodos/FuncionesNativas/_imprimir.cpp \
    Coline/Gramatica/Arbol/Nodos/IdVar_func/_id_var_func_padre.cpp \
    Coline/Gramatica/Arbol/Nodos/IdVar_func/_id_var_func.cpp \
    Coline/Gramatica/Arbol/Nodos/IdVar_func/_lst_puntosp_padre.cpp \
    Coline/Gramatica/Arbol/Nodos/IdVar_func/_lst_puntosp.cpp \
    Coline/Gramatica/Arbol/Nodos/Inicio/_extender.cpp \
    Coline/Gramatica/Arbol/Nodos/Inicio/_import.cpp \
    Coline/Gramatica/Arbol/Nodos/Inicio/_lst_clase.cpp \
    Coline/Gramatica/Arbol/Nodos/Inicio/_lst_import.cpp \
    Coline/Gramatica/Arbol/Nodos/Inicio/_s.cpp \
    Coline/Gramatica/Arbol/Nodos/Inicio/_super.cpp \
    Coline/Gramatica/Arbol/Nodos/Inicio/_tipo.cpp \
    Coline/Gramatica/Arbol/Nodos/Inicio/_visibilidad.cpp \
    Coline/Gramatica/Arbol/Nodos/Llaves_Arreglos/_llaves_val_p.cpp \
    Coline/Gramatica/Arbol/Nodos/Llaves_Arreglos/_lst_corchetes_val.cpp \
    Coline/Gramatica/Arbol/Nodos/Llaves_Arreglos/_lst_corchetes.cpp \
    Coline/Gramatica/Arbol/Nodos/Llaves_Arreglos/_lst_llaves_val.cpp \
    Coline/Gramatica/Arbol/Nodos/Llaves_Arreglos/_par_corchetes_vacios.cpp \
    Coline/Gramatica/Arbol/Nodos/Llaves_Arreglos/_par_corchetes_val.cpp \
    Coline/Gramatica/Arbol/Nodos/Llaves_Arreglos/_var_arreglo.cpp \
    Coline/Gramatica/Arbol/Nodos/Parametros/_lst_parametros.cpp \
    Coline/Gramatica/Arbol/Nodos/Parametros/_lst_val.cpp \
    Coline/Gramatica/Arbol/Nodos/Parametros/_parametro.cpp \
    Coline/Gramatica/Arbol/Nodos/Sentencia_Control/_continuar.cpp \
    Coline/Gramatica/Arbol/Nodos/Sentencia_Control/_retorno.cpp \
    Coline/Gramatica/Arbol/Nodos/Sentencia_Control/_romper.cpp \
    Coline/Gramatica/Arbol/Nodos/Sentencias/_sentencias.cpp \
    Coline/Gramatica/Arbol/Nodos/Sentencias/Caso/_caso.cpp \
    Coline/Gramatica/Arbol/Nodos/Sentencias/Caso/_cuerpo_case.cpp \
    Coline/Gramatica/Arbol/Nodos/Sentencias/DoWhile/_dowhile.cpp \
    Coline/Gramatica/Arbol/Nodos/Sentencias/For/_for.cpp \
    Coline/Gramatica/Arbol/Nodos/Sentencias/Repetir/_repetir.cpp \
    Coline/Gramatica/Arbol/Nodos/Sentencias/Si/_si.cpp \
    Coline/Gramatica/Arbol/Nodos/Sentencias/Si/_sino_si.cpp \
    Coline/Gramatica/Arbol/Nodos/Sentencias/Si/_sino.cpp \
    Coline/Gramatica/Arbol/Nodos/Sentencias/Si_simplificado/_si_simplificado.cpp \
    Coline/Gramatica/Arbol/Nodos/Sentencias/While/_while.cpp \
    Coline/Gramatica/Arbol/Nodos/Valor/_e.cpp \
    Coline/Gramatica/Arbol/Nodos/Valor/_valor.cpp \
    Coline/Gramatica/Arbol/Nodos/Valor/oparitmetica.cpp \
    Coline/Gramatica/Arbol/Nodos/Valor/oplogico.cpp \
    Coline/Gramatica/Arbol/Nodos/Valor/opmodelo.cpp \
    Coline/Gramatica/Arbol/Nodos/Valor/oprelacional.cpp \
    Coline/Gramatica/Arbol/Nodos/Valor/OpeAritmetica/division.cpp \
    Coline/Gramatica/Arbol/Nodos/Valor/OpeAritmetica/modulo.cpp \
    Coline/Gramatica/Arbol/Nodos/Valor/OpeAritmetica/multiplicacion.cpp \
    Coline/Gramatica/Arbol/Nodos/Valor/OpeAritmetica/negativo.cpp \
    Coline/Gramatica/Arbol/Nodos/Valor/OpeAritmetica/potencia.cpp \
    Coline/Gramatica/Arbol/Nodos/Valor/OpeAritmetica/resta.cpp \
    Coline/Gramatica/Arbol/Nodos/Valor/OpeAritmetica/suma.cpp \
    Coline/Gramatica/Arbol/Nodos/Valor/OpeLogico/and.cpp \
    Coline/Gramatica/Arbol/Nodos/Valor/OpeLogico/not.cpp \
    Coline/Gramatica/Arbol/Nodos/Valor/OpeLogico/or.cpp \
    Coline/Gramatica/Arbol/Nodos/Valor/OpeRelacional/diferenteque.cpp \
    Coline/Gramatica/Arbol/Nodos/Valor/OpeRelacional/igualque.cpp \
    Coline/Gramatica/Arbol/Nodos/Valor/OpeRelacional/mayorigualque.cpp \
    Coline/Gramatica/Arbol/Nodos/Valor/OpeRelacional/mayorque.cpp \
    Coline/Gramatica/Arbol/Nodos/Valor/OpeRelacional/menorigualque.cpp \
    Coline/Gramatica/Arbol/Nodos/Valor/OpeRelacional/menorque.cpp \
    Coline/Elementos/Elementos/elementoclase.cpp \
    Coline/Elementos/Elementos/elementopolimorfo.cpp \
    Coline/Elementos/Elementos/elementoparametro.cpp \
    Coline/Elementos/Listas/lstpolimorfismo.cpp \
    Coline/Elementos/Listas/lstclases.cpp \
    Coline/Elementos/Objetos/objetoclase.cpp \
    Coline/Elementos/Elementos/elementoentorno.cpp \
    Coline/Elementos/Items/itementorno.cpp \
    Coline/Elementos/Primitivos/p_cadena.cpp \
    Coline/Gramatica/Arbol/Nodos/FuncionesNativas/_funciones_nativas.cpp \
    Coline/Gramatica/Arbol/Nodos/FuncionesNativas/_concatenar.cpp \
    Coline/Gramatica/Arbol/Nodos/FuncionesNativas/_convertir_cadena.cpp \
    Coline/Elementos/Primitivos/p_objeto.cpp \
    Gui/nodotabclase.cpp \
    Gui/lsttabclase.cpp \
    Gui/codeeditor.cpp \
    Gui/highlighter.cpp

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
    Coline/Elementos/Elementos/elementoerror.h \
    Coline/Gramatica/Arbol/Nodos/Inicio/_clase.h \
    Coline/Elementos/Global/nodosimport.h \
    Coline/Gramatica/Arbol/Nodos/AsignarValor_UsarMetodo/_usar_meto_var.h \
    Coline/Gramatica/Arbol/Nodos/AsignarValor_UsarMetodo/_usar_metodo.h \
    Coline/Gramatica/Arbol/Nodos/AsignarValor_UsarMetodo/_usar_variable.h \
    Coline/Gramatica/Arbol/Nodos/AsignarValor_UsarMetodo/_usar_variablep.h \
    Coline/Gramatica/Arbol/Nodos/Asignar_Valor/_asig_valor.h \
    Coline/Gramatica/Arbol/Nodos/Cuerpo/_cuerpo.h \
    Coline/Gramatica/Arbol/Nodos/Cuerpo/_lst_cuerpo.h \
    Coline/Gramatica/Arbol/Nodos/Cuerpo/_lst_cuerpo2.h \
    Coline/Gramatica/Arbol/Nodos/Cuerpo_Clase/_cp_clase.h \
    Coline/Gramatica/Arbol/Nodos/Cuerpo_Clase/_cuerpo_clase.h \
    Coline/Gramatica/Arbol/Nodos/Declarar_Variable/_declarar_variable_global.h \
    Coline/Gramatica/Arbol/Nodos/Declarar_Variable/_declarar_variable_sinvisibi.h \
    Coline/Gramatica/Arbol/Nodos/Declarar_Variable/_val.h \
    Coline/Gramatica/Arbol/Nodos/Funciones_Metodos/_constructor.h \
    Coline/Gramatica/Arbol/Nodos/Funciones_Metodos/_main.h \
    Coline/Gramatica/Arbol/Nodos/Funciones_Metodos/_metodo.h \
    Coline/Gramatica/Arbol/Nodos/Funciones_Metodos/_sobrescritura.h \
    Coline/Gramatica/Arbol/Nodos/FuncionesNativas/_imprimir.h \
    Coline/Gramatica/Arbol/Nodos/IdVar_func/_id_var_func_padre.h \
    Coline/Gramatica/Arbol/Nodos/IdVar_func/_id_var_func.h \
    Coline/Gramatica/Arbol/Nodos/IdVar_func/_lst_puntosp_padre.h \
    Coline/Gramatica/Arbol/Nodos/IdVar_func/_lst_puntosp.h \
    Coline/Gramatica/Arbol/Nodos/Inicio/_extender.h \
    Coline/Gramatica/Arbol/Nodos/Inicio/_import.h \
    Coline/Gramatica/Arbol/Nodos/Inicio/_lst_clase.h \
    Coline/Gramatica/Arbol/Nodos/Inicio/_lst_import.h \
    Coline/Gramatica/Arbol/Nodos/Inicio/_s.h \
    Coline/Gramatica/Arbol/Nodos/Inicio/_super.h \
    Coline/Gramatica/Arbol/Nodos/Inicio/_tipo.h \
    Coline/Gramatica/Arbol/Nodos/Inicio/_visibilidad.h \
    Coline/Gramatica/Arbol/Nodos/Llaves_Arreglos/_llaves_val_p.h \
    Coline/Gramatica/Arbol/Nodos/Llaves_Arreglos/_lst_corchetes_val.h \
    Coline/Gramatica/Arbol/Nodos/Llaves_Arreglos/_lst_corchetes.h \
    Coline/Gramatica/Arbol/Nodos/Llaves_Arreglos/_lst_llaves_val.h \
    Coline/Gramatica/Arbol/Nodos/Llaves_Arreglos/_par_corchetes_vacios.h \
    Coline/Gramatica/Arbol/Nodos/Llaves_Arreglos/_par_corchetes_val.h \
    Coline/Gramatica/Arbol/Nodos/Llaves_Arreglos/_var_arreglo.h \
    Coline/Gramatica/Arbol/Nodos/Parametros/_lst_parametros.h \
    Coline/Gramatica/Arbol/Nodos/Parametros/_lst_val.h \
    Coline/Gramatica/Arbol/Nodos/Parametros/_parametro.h \
    Coline/Gramatica/Arbol/Nodos/Sentencia_Control/_continuar.h \
    Coline/Gramatica/Arbol/Nodos/Sentencia_Control/_retorno.h \
    Coline/Gramatica/Arbol/Nodos/Sentencia_Control/_romper.h \
    Coline/Gramatica/Arbol/Nodos/Sentencias/_sentencias.h \
    Coline/Gramatica/Arbol/Nodos/Sentencias/Caso/_caso.h \
    Coline/Gramatica/Arbol/Nodos/Sentencias/Caso/_cuerpo_case.h \
    Coline/Gramatica/Arbol/Nodos/Sentencias/DoWhile/_dowhile.h \
    Coline/Gramatica/Arbol/Nodos/Sentencias/For/_for.h \
    Coline/Gramatica/Arbol/Nodos/Sentencias/Repetir/_repetir.h \
    Coline/Gramatica/Arbol/Nodos/Sentencias/Si/_si.h \
    Coline/Gramatica/Arbol/Nodos/Sentencias/Si/_sino_si.h \
    Coline/Gramatica/Arbol/Nodos/Sentencias/Si/_sino.h \
    Coline/Gramatica/Arbol/Nodos/Sentencias/Si_simplificado/_si_simplificado.h \
    Coline/Gramatica/Arbol/Nodos/Sentencias/While/_while.h \
    Coline/Gramatica/Arbol/Nodos/Valor/_e.h \
    Coline/Gramatica/Arbol/Nodos/Valor/_valor.h \
    Coline/Gramatica/Arbol/Nodos/Valor/oparitmetica.h \
    Coline/Gramatica/Arbol/Nodos/Valor/oplogico.h \
    Coline/Gramatica/Arbol/Nodos/Valor/opmodelo.h \
    Coline/Gramatica/Arbol/Nodos/Valor/oprelacional.h \
    Coline/Gramatica/Arbol/Nodos/Valor/OpeAritmetica/division.h \
    Coline/Gramatica/Arbol/Nodos/Valor/OpeAritmetica/modulo.h \
    Coline/Gramatica/Arbol/Nodos/Valor/OpeAritmetica/multiplicacion.h \
    Coline/Gramatica/Arbol/Nodos/Valor/OpeAritmetica/negativo.h \
    Coline/Gramatica/Arbol/Nodos/Valor/OpeAritmetica/potencia.h \
    Coline/Gramatica/Arbol/Nodos/Valor/OpeAritmetica/resta.h \
    Coline/Gramatica/Arbol/Nodos/Valor/OpeAritmetica/suma.h \
    Coline/Gramatica/Arbol/Nodos/Valor/OpeLogico/and.h \
    Coline/Gramatica/Arbol/Nodos/Valor/OpeLogico/not.h \
    Coline/Gramatica/Arbol/Nodos/Valor/OpeLogico/or.h \
    Coline/Gramatica/Arbol/Nodos/Valor/OpeRelacional/diferenteque.h \
    Coline/Gramatica/Arbol/Nodos/Valor/OpeRelacional/igualque.h \
    Coline/Gramatica/Arbol/Nodos/Valor/OpeRelacional/mayorigualque.h \
    Coline/Gramatica/Arbol/Nodos/Valor/OpeRelacional/mayorque.h \
    Coline/Gramatica/Arbol/Nodos/Valor/OpeRelacional/menorigualque.h \
    Coline/Gramatica/Arbol/Nodos/Valor/OpeRelacional/menorque.h \
    Coline/Elementos/Elementos/elementoclase.h \
    pch.hpp

FORMS += \
        mainwindow.ui
