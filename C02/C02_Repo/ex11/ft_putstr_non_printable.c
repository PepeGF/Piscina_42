/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josgarci <josgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 09:38:18 by josgarci          #+#    #+#             */
/*   Updated: 2021/08/12 14:38:44 by josgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putstr(char *str)
{
	write(1, str, ft_strlen(str));
}

void	ft_putstr_non_printable(char *str)
{
	char	*hexa;
	int		aux;
	int		counter;

	hexa = "0123456789abcdef"; //para la conversion a hexadecimal
	counter = 0;
	while (str[counter] != '\0')
	{
		if (str[counter] >= 32 && str[counter] < 127) //si es normal, lo imprime directamente
			write (1, &str[counter], 1);
		else //si no es normal pone la barra
		{	
			write (1, "\\", 1); // la barra
			if (str[counter] < 0)
				{
				aux = str[counter] + 256; //imprime el primero
				aux = str[counter] / 16;  //lo divide enrte 16 para saber el primer caracter en base 16
					
				}
			else
			{
				aux = str[counter] / 16; 	
			}
			write (1, &hexa[aux + 0], 1); //hace el resto entre 16 para el segundo caracter de la base 16
			aux = str[counter] % 16;
			write (1, &hexa[aux + 0], 1); //imprime el segundo
		}
		counter++;
	}
}

int main()
{
		

	char cadena_comprobar[] = "Coucou\ttu vas bien ?";

	//printf("%s\n", cadena_comprobar);
	ft_putstr(cadena_comprobar);

	//printf("-----------------\n");

	ft_putstr_non_printable(cadena_comprobar);




	return 0;
}