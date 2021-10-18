#include <stdio.h>
#include <string.h>

int main (void)
{
	char *cadena_s1;
	char *cadena_s2;
	char *salida;

	cadena_s1 = "Aupa Atleti!";
	cadena_s2 = "'\0'";

	salida = strstr(cadena_s1, cadena_s2);

	printf("%s\n", salida);	






}
