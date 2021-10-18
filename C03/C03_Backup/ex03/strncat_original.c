#include <string.h>
#include <stdio.h>

int	main(void)
{
	unsigned char	len;
	char cadena_s2[] = "Aupa Atleti";
	char cadena_s1[100] = "Yo me voy al Manzanares ->";
	char *cadena_salida;
	
	len = 6;
//	cadena_s1 = "Aupa Atleti";
//	cadena_s2 = "Yo me voy al Manzanares";

	cadena_salida = strncat(cadena_s1, cadena_s2, len);

	printf("%s\n", cadena_salida);


}
