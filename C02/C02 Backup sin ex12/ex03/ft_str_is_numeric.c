#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int		counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		if (str[counter] < '0' || (str[counter] > '9'))
			return (0);
		counter++;
	}
	return (1);
}





int main()
{
	char cadena_comprobar [] = "2345 23463";
	char *puntero;
	int checker;

	puntero = cadena_comprobar;
	checker = ft_str_is_numeric(cadena_comprobar);

	printf("%i\n", checker);
	return (0);

}