/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josgarci <josgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 17:33:25 by josgarci          #+#    #+#             */
/*   Updated: 2021/08/12 14:25:36 by josgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int	ft_str_is_lowercase(char *str)
{
	int		counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		if (str[counter] < 'a' || str[counter] > 'z')
			return (0);
		counter++;
	}
	return (1);
}
int main()
{
	char cadena_comprobar [] = "sdfsdJHADHJDAsdfa";
	char *puntero;
	int checker;

	puntero = cadena_comprobar;
	checker = ft_str_is_lowercase(cadena_comprobar);

	printf("%i\n", checker);
	return 0;
}