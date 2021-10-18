#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int		counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		if (str[counter] < 32 || str[counter] > 126) 
			return (0);
		counter++;
	}
	return (1);



}

int main()
{
	char cadena_comprobar [] = "3874 347885 wwd ryewe6 YY YG";
	char *puntero;
	int checker;

	puntero = cadena_comprobar;
	checker = ft_str_is_printable(cadena_comprobar);

	printf("%i\n", checker);
	return 0;
}