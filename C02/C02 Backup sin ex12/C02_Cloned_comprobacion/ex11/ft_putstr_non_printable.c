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
			write (1, &hexa[aux], 1);
			aux = str[counter] % 16;
			write (1, &hexa[aux], 1);
		}
		counter++;
	}
}
