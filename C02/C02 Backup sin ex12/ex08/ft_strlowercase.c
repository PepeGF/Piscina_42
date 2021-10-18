#include <stdio.h>

char		*ft_strlowercase(char *str)
{
	int		counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		if (str[counter]  >= 'A' && str[counter] <= 'Z')
			str[counter] = str[counter] + 32;
		counter++;
	}
	return (str);



}

int main()
{
	char cadena_comprobar [] = "Forza Atleti campeón";
	char *puntero;

	puntero = cadena_comprobar;
	puntero = ft_strlowercase(cadena_comprobar);

	printf("%s\n", puntero);
	return 0;
}