# Calculadora

## Información:
En esta carpeta del repositorio, tenemos un proyecto de calculadora programada en C y dividida en diferentes archivos.
También tenemos un archivo makefile para poder compilar de forma rápida y sencilla.

## Archivos:

### calc.c:
Este archivo contiene las funciones que llamaremos en el archivo principal `calcula.c` que contiene el main.

### calc.h:
Este archivo contiene las cabeceras del archivo `calc.c` y sirve para definirlas y poder usarlas en otros programas, además, tiene especificadas las líneas de ``#ifndef`` y ``#define`` para definirlas y para que en caso de que ya estén definidas en otro archivo no causen problemas.

### calcula.c:
Este archivo es el principal del programa y contiene el main, también contienen las lineas de `#include` ya que son las que nos permiten importar funciones desde otros archivos, en este caso tenemos la librería estandar \<stdio.h> que nos permite usar las funciones de input y output, y la librería "calc.h" que es el archivo que contiene las cabeceras de nuestras funciones definidas en el archivo `calc.c`. 

### makefile:
Con el archivo makefile, podemos automatizar de forma sencilla procesos, en este caso, lo he usado para automatizar la compilación de un programa, de tal forma que ejecutando el comando `make` podemos generar los archivos necesarios (calc.o) para luego poder compilarlo en el archivo final lamado `calcula.exe`. 

También tenemos otras funcione como `limpiar`, que sirve para borrar los 2 archivos generados anteriormente, `dist` para dejarlo preparado para cuando tenga que instalarse, `targz` para comprimir los archivos e `install` para instalar la carpeta en /. 

Por último, tengo puestas 2 variables `COMPILADOR` que permite cambiar fácilmente el compilador entre gcc y cc y `ATRIBUTOS`.


## Compilación:
Hay dos formas de compilarlo, mediante make de forma automática o ejecutando los comandos para generar los archivos necesarios.

### Opción 1:
```
make calcula.exe
```

### Opción 2:
```
gcc -Wall -g -c calc.c -o calc.o

gcc -Wall -g calcula.c calc.o -o calcula.exe
```
