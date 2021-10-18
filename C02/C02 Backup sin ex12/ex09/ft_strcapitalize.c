#include <stdio.h>

char *ft_strcapitalize(char *str)
{
	int especial;
	int counter;

	especial = 1;
	counter = -1;
	while (str[++counter] != '\0')
	{
		if ((str[counter] >= 'a' && str[counter] <= 'z') && especial != 0)
		{
			str[counter] = str[counter] - 32;
			especial = 0;
		}
		else if ((str[counter] >= 'A' && str[counter] <= 'Z') && especial == 0)
		{
			str[counter] = str[counter] + 32;
			especial = 0;
		}
		if (!(str[counter] >= '0' && str[counter] <= '9') && 
				!(str[counter] >= 'a'	&& str[counter] <= 'z') &&
				!(str[counter] >= 'A' && str[counter] <= 'Z'))
			especial++;
		else
			especial = 0;	
	}
	return (str);
}

int main()
{
	char cadena_comprobar[] = "jk bsdCfbi !abaCsd !?(&($)()·$·(/(AosbDbdf  ansasf?asd9a3D8";
	char *puntero;

	puntero = cadena_comprobar;
	printf("%s\n", puntero);

	puntero = ft_strcapitalize(cadena_comprobar);

	printf("%s\n", puntero);

	return 0;
}
