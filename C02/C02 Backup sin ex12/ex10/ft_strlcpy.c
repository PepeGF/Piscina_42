#include <stdio.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{

	unsigned int	i;

	i = 0;
	while (i < size && src != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (i);



}

int main()
{
	char cadena_origen[] = "&G*7@[@Xqfs72dvnfd/Ex]*9dc;Q`)";
	char cadena_destino[] = "aksjdbgkljbddgjghbdajgbbajbg";
	unsigned int longitud = 10;
	char *wololo;

	wololo = cadena_destino;
	longitud = ft_strlcpy(cadena_destino, cadena_origen, longitud);
	printf("%i\n", longitud);
	
	return 0;
}