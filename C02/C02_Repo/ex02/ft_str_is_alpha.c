/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josgarci <josgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 17:29:50 by josgarci          #+#    #+#             */
/*   Updated: 2021/08/12 14:25:31 by josgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int	ft_str_is_alpha(char *str)
{
	int		counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		if (str[counter] < 'A' || (str[counter] > 'Z' && str[counter] < 'a')
			|| str[counter] > 'z')
			return (0);
		counter++;
	}
	return (1);
}

int main()
{
	char cadena_comprobar [] = "kjbUYsdkIUBJDnkiusdiudaKJBgsafusda";
	char *puntero;
	int checker;

	puntero = cadena_comprobar;
	checker = ft_str_is_alpha(cadena_comprobar);

	printf("%i\n", checker);
	return 0;
}