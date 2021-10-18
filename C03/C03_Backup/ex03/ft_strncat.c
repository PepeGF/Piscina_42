/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josgarci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 11:57:13 by josgarci          #+#    #+#             */
/*   Updated: 2021/08/13 12:27:38 by josgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> 

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
	int		i;
	unsigned int		j;

	i = 0;
	while (dest[i])
		i++;
	j = 0;
	while (src[j] && j + 1 <= nb)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return(dest);
}

int	main(void)
{	
	int len;
	char *cadena_s2;
	char cadena_s1[100] = "Yo me voy al Manzanares";
	char *cadena_salida;

	cadena_s2 = "Aupa Atleti -> ";
	len = 6;
	cadena_salida = ft_strncat(cadena_s1, cadena_s2, len);

	printf("%s\n", cadena_salida);


}







