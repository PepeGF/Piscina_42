#include <unistd.h>
#include <stdio.h>

int ft_strlen (char* str)
{
	int i;
	i = 0;
	while (str[i])
		i++;
	return (i);
}
void ft_putstr (char *str)
{
	write(1, str, ft_strlen(str));
}
void	ft_putstr_non_printable(char *str)
{
	char *hexa;
	char aux;
	int counter;

	hexa = "0123456789abcdef";
	counter = 0;
	while (str[counter] != '\0')
		{
			if (str[counter] >= 32 && str[counter] <= 127)
				write (1, &str[counter], 1);
			else if (str[counter] >= 1 && str[counter] <= 32)
			{	
				write (1, "\\", 1);
				aux = str[counter] / 16;
				//aux = hexa[aux + 0];
				write (1, &hexa[aux + 0], 1);
				aux = str[counter] % 16;
				//aux = hexa[aux + 0];
				write (1, &hexa[aux + 0], 1);
			}

			counter++;

		}
}

int main()
{
		

	char cadena_comprobar[] = "Coucou\ntu vas bien ?";

	//printf("%s\n", cadena_comprobar);
	ft_putstr(cadena_comprobar);

	//printf("-----------------\n");

	ft_putstr_non_printable(cadena_comprobar);




	return 0;
}