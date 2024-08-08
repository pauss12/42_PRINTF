
#include <stdio.h>
#include "ft_printf.h"

/*
int main()
{
	int i;
	int pprueba = 1;
	printf("CASO CARACTERES: ---------------------------\n");
	printf("%c\n", 'a');
	i = ft_printf("%c", 'a');
	printf("\nCaracteres: %i\n\n", i);

	printf("CASO ENTEROS: ---------------------------\n");
	printf("%i\n", 1945);
	i = ft_printf("%i\n", 1945);
	printf("\nCaracteres: %i\n\n", i);

	printf("CASO STRINGS: ---------------------------\n");
	i = ft_printf("%s", "hola mundo");
	printf("\n%d\n", i);

	printf("CASO HEXADECIMAL: ---------------------------\n");
	i = ft_printf("El hexadecimal es: %x \n%X\n\n", 100, 100);
	printf("\nEl numero de caracteres leidos es: %d\n", i);

	printf("CASO PORCENTAJE: ---------------------------\n");
	printf("%%\n");
	i = ft_printf("%%\n");
	printf("\nCaracteres: %i\n\n", i);

	printf("CASO PUNTERO: ---------------------------\n");
	printf("El puntero utilizado es %p es I\n", &pprueba);
	printf("El puntero utilizado es %p es I\n", &pprueba);
	i = ft_printf("El puntero utilizado es %p es I\n", &pprueba);
	printf("\nCaracteres: %i\n\n", i);

	printf("CASO UNSIGNED: ---------------------------\n");
	printf("%u\n\n", -42);

	printf("OTROS CASOS --------------------------------\n");
	i = ft_printf("Hola mundo %c");
	printf("Hola mundo %c");


	printf("\n\n");
	i = ft_printf("%s", NULL);
	printf("\nCaracteres: %i\n\n", i);

}


int main()
{
	int		i;
	
	ft_printf("\n");
	
	printf("%%c: %c\n", 'a');
	i = ft_printf("%%c: %c\n", 'a');
	ft_printf("Caracteres: %i\n\n", i);

	printf("%%s: NULL %s NULL\n", NULL);
	i = ft_printf("%%s: NULL %s NULL\n", NULL);
	ft_printf("Caracteres: %i\n\n", i);

	printf("%%p: %p\n", &i);
	i = ft_printf("%%p: %p\n", &i);
	ft_printf("Caracteres: %i\n\n", i);

	printf("%%d: %d\n", 1234567890);
	i = ft_printf("%%d: %d\n", 1234567890);
	ft_printf("Caracteres: %i\n\n", i);

	printf("%%i: %i\n", 1234567890);
	i = ft_printf("%%i: %i\n", 1234567890);
	ft_printf("Caracteres: %i\n\n", i);

	printf("%%u: %u\n", -1234567890);
	i = ft_printf("%%u: %u\n", -1234567890);
	ft_printf("Caracteres: %i\n\n", i);

	printf("%%x: %x\n", 255);
	i = ft_printf("%%x: %x\n", 255);
	ft_printf("Caracteres: %i\n\n", i);

	printf("%%X: %X\n", 255);
	i = ft_printf("%%X: %X\n", 255);
	ft_printf("Caracteres: %i\n\n", i);

	printf("%%%%: %%\n");
	i = ft_printf("%%%%: %%\n");
	ft_printf("Caracteres: %i\n\n", i);

	return (0);
}


int main()
{
	int i;
	int num;

	i = 0;
	num = 0;
	num = printf(" %x \n", -1);
	i = ft_printf(" %x \n", -1);
	printf("Caracteres de la funcion normal: %i\n", num);
	printf("Caracteres de la funcion hecha: %i\n\n", i);

	num = printf(" %x \n", 9);
	i = ft_printf(" %x \n", 9);
	printf("Caracteres de la funcion normal: %i\n", num);
	printf("Caracteres de la funcion hecha: %i\n\n", i);

	num = printf(" %x \n", 10);
	i = ft_printf(" %x \n", 10);
	printf("Caracteres de la funcion normal: %i\n", num);
	printf("Caracteres de la funcion hecha: %i\n\n", i);

	num = printf(" %x \n", 11);
	i = ft_printf(" %x \n", 11);
	printf("Caracteres de la funcion normal: %i\n", num);
	printf("Caracteres de la funcion hecha: %i\n\n", i);

	num = printf(" %x \n", 15);
	i = ft_printf(" %x \n", 15);
	printf("Caracteres de la funcion normal: %i\n", num);
	printf("Caracteres de la funcion hecha: %i\n\n", i);

	num = printf(" %x \n", 16);
	i = ft_printf(" %x \n", 16);
	printf("Caracteres de la funcion normal: %i\n", num);
	printf("Caracteres de la funcion hecha: %i\n\n", i);

	num = printf(" %x \n", 17);
	i = ft_printf(" %x \n", 17);
	printf("Caracteres de la funcion normal: %i\n", num);
	printf("Caracteres de la funcion hecha: %i\n\n", i);

	num = printf("%%c: %c\n", -1);
	//i = ft_printf("%%c: %c\n", -1);
	printf("Caracteres de la funcion normal: %i\n", num);
	//ft_printf("Caracteres: %i\n\n", i);
}
*/

int	main(void)
{
	ft_printf("%s", "");
	printf("\n-------------\n");
	ft_printf("%s", (char *)NULL);
	printf("\n-------------\n");
	ft_printf("%s", "some string with %s hehe");
	printf("\n-------------\n");
	ft_printf(" %s", "can it handle \t and \n?");
	printf("\n-------------\n");
	printf(" %s", "can it handle \t and \n?");
	printf("\n-------------\n");
	ft_printf("%sx", "{} al$#@@@^&$$^#^@@^$*((&");
	printf("\n-------------\n");
	ft_printf("%s%s%s", "And ", "some", "joined");
	printf("\n-------------\n");
	ft_printf("%ss%ss%ss", "And ", "some other", "joined");
	printf("\n-------------\n");
	printf("%p", "");
	printf("\n-------------\n");
	ft_printf("%p", "");

	printf("\n-------------\n");
	printf("%d", -10);
	printf("\n-------------\n");
	ft_printf("%d", -10);
}