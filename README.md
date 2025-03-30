#  ft_printf - 42 Madrid 

## Descripción 

Este proyecto tiene como objetivo recrear la función `printf` de la biblioteca estándar de C. El programa debe implementar la funcionalidad básica de `printf` de la libreria `<stdio.h>`, incluyendo la gestión de varios especificadores de formato.

### ¿Qué es ft_printf? 

`ft_printf` es una función personalizada que emula el comportamiento de la función `printf` estándar de C. El objetivo es comprender y aplicar los conceptos de formateo de cadenas, manejo de diferentes tipos de datos, argumentos de tamaño variable, es decir, funciones variádicas.

Las funciones variadicas son funciones que aceptan un número variable de parámetros, y en el caso de printf tiene esta estructura:

PD: Los 3 puntos suspensivos, son para indicar que es una función variádica, que se pueden pasar múltiples argumentos.

```bash
int ft_prinf(const char *formato, ...);
```

## Especificadores de formato implementados 

* **%c:** Carácter individual .
* **%s:** Cadena de caracteres .
* **%p:** Puntero (dirección de memoria) .
* **%d:** Entero decimal con signo .
* **%i:** Entero decimal con signo (equivalente a %d) .
* **%u:** Entero decimal sin signo .
* **%x:** Entero hexadecimal en minúsculas .
* **%X:** Entero hexadecimal en mayúsculas .
* **%%:** Símbolo de porcentaje .

## Cómo usar ️

1.  **Clonar el repositorio:**

    ```bash
    git clone git@github.com:pauss12/42_PRINTF.git ft_printf
    cd ft_printf 
    ```

2.  **Compilar la biblioteca:** ⚙️

    ```bash
    make 
    ```

## Ejemplos 

	```c
	#include "ft_printf.h" 

	int main() {
		ft_printf("Hola, %s! Tienes %d años.\n", "Mundo", 25); 
		ft_printf("El carácter es: %c\n", 'A'); 
		ft_printf("Un puntero: %p\n", (void *)0x12345678); 
		ft_printf("Un número hexadecimal: %x\n", 42); 
		return 0;
	}
	```

## Control de Errores ⚠️

El programa maneja los siguientes errores:

* Especificadores de formato no válidos ❌.
* Argumentos incorrectos ❗.

## Créditos 

Este proyecto fue desarrollado como parte del plan de estudios de 42 Madrid .