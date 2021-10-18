#include <string.h>
#include <stdio.h>

int	main(void)
{
	char cadena_s2[] = "Aupa Atleti";
	char cadena_s1[100] = "Yo me voy al Manzanares ->";
	char *cadena_salida;

//	cadena_s1 = "Aupa Atleti";
//	cadena_s2 = "Yo me voy al Manzanares";

	cadena_salida = strcat(cadena_s1, cadena_s2);

	printf("%s\n", cadena_salida);


}
