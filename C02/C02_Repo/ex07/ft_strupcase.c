/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josgarci <josgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 17:57:30 by josgarci          #+#    #+#             */
/*   Updated: 2021/08/12 14:25:44 by josgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int		counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		if (str[counter] >= 'a' && str[counter] <= 'z')
			str[counter] = str[counter] - 32;
		counter++;
	}
	return (str);
}
int main()
{
	char cadena_comprobar [] = "Forza Atleti campeon";
	char *puntero;

	puntero = cadena_comprobar;
	puntero = ft_strupcase(cadena_comprobar);

	printf("%s\n", puntero);
	return 0;
}