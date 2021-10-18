#include <stdio.h>

int	ft_strlen (char *str)
{
	int	counter;

	counter = 0;
	while (*str != '\0')
	{
		counter++;
		str++;
	}
	return (counter);
}

int main()
{
	char cadena[] = "Nunca dejes de creer";
	char *str;
	int imp;

	str = cadena;
	imp = ft_strlen(str);

	printf("%i\n", imp);
	return 0;
}