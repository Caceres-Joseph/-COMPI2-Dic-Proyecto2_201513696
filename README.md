# -COMPI2-Dic-Proyecto2_201513696



2.compilar el analizador lexico en FLEX
flex --header-file=scanner.h -o scanner.cpp lexico.l
----------------------------------------------------
3.compilar el analizador sintactio en BISON
bison -o parser.cpp --defines=parser.h sintactico.y
