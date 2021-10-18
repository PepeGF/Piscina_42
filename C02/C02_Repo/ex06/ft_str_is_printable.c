/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josgarci <josgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 17:45:35 by josgarci          #+#    #+#             */
/*   Updated: 2021/08/12 14:20:22 by josgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int	ft_str_is_printable(char *str)
{
	int		counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		if (str[counter] < 32 || str[counter] > 126)
			return (0);
		counter++;
	}
	return (1);
}

int main()
{
	char cadena_comprobar [] = "3874 3478\n85 wwd ryewe6 YY YG";
	char *puntero;
	int checker;

	puntero = cadena_comprobar;
	checker = ft_str_is_printable(cadena_comprobar);

	printf("%i\n", checker);
	return 0;
}