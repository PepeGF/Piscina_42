#include <unistd.h>
void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	i;

	i = 0;
	while (i < n && src != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int main()
{
	char cadena_origen[] = "Nunca dejes de creer.";
	char cadena_destino[] = "jsjdbgl hasbdlhflahsbdfl. bslaldjhffluys df ya";
	unsigned int longitud = 3;
	char *wololo;

	wololo = ft_strncpy(cadena_destino, cadena_origen, longitud);
	ft_putstr(wololo);
	
	return 0;
}