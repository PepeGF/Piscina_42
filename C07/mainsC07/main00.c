#include <stdio.h>
#include <unistd.h>

char	*ft_strdup(char *src);

void	ft_putstr(char *str)
{	
	int		i;
	char	aux;

	i = 0;
	while (str[i] != '\0')
	{	
		aux = str[i];
		write(1, &aux, 1);
		i++;
	}
	write (1, "\n", 1);
}

int	main(void)
{
	char	*cadena;
	char	*salida;

	cadena = "Aupa Atleti!";
	salida = ft_strdup(cadena);
	ft_putstr(cadena);
	ft_putstr(salida);
	return (0);
}
