/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josgarci <josgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 17:35:15 by josgarci          #+#    #+#             */
/*   Updated: 2021/08/12 14:25:39 by josgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int	ft_str_is_uppercase(char *str)
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
	char cadena_comprobar [] = "HDHJJBDJ!!!!HVHJ";
	char *puntero;
	int checker;

	puntero = cadena_comprobar;
	checker = ft_str_is_uppercase(cadena_comprobar);

	printf("%i\n", checker);
	return 0;
}
