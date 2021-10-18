#include <unistd.h>
#include <stdio.h>

void	ft_putstr (char *str)
{	
	int i;
	char aux;

	i = 0;
	while (str[i] != '\0')
	{	
		aux = str[i];
		write(1, &aux, 1);
		i++;
	}
}

int main()
{
	char *str;
	char cadena[] = "Marta tiene un marcapasos";
	

	str = cadena;
	ft_putstr(str);

	return 0;
}
