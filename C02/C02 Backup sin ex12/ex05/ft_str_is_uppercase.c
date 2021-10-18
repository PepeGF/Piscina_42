#include <stdio.h>

int ft_str_is_uppercase(char *str)
{
	int		counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		if (str[counter] < 'A' || str[counter] > 'Z')
			return (0);
		counter++;
	}
	return (1);



}

int main()
{
	char cadena_comprobar [] = "";
	char *puntero;
	int checker;

	puntero = cadena_comprobar;
	checker = ft_str_is_uppercase(cadena_comprobar);

	printf("%i\n", checker);
	return 0;
}