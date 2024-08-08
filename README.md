# 42_PRINTF

Este proyecto tiene como objetivo programar una programa que simule la función de printf de la librera de <stdio.h>. A partir de eso, lo podremos usar en futuros proyectos. Este proyecto trata principalmente de los argumentos de tamaño variable, es decir, funciones variadicas.

Las funciones variadicas son funciones que aceptan un número variable de parámetros, y en el caso de printf tiene esta estructura:

PD: Los 3 puntos suspensivos, son para indicar que es una función variádica, que se pueden pasar múltiples argumentos.

```c
int ft_prinf(const char *formato, ...);
```
