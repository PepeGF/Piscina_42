#include <unistd.h>
#include <stdio.h>

char	*preparar_entrada(char *cadena_entrada);

int	main(int argc, char **argv)
{
	char *cadena_preparada;

	printf ("%i\n", argc);

	cadena_preparada = preparar_entrada(argv[1]);
	return (0);

}