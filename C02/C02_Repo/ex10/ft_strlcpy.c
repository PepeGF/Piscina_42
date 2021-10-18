/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josgarci <josgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 21:14:03 by josgarci          #+#    #+#             */
/*   Updated: 2021/08/22 19:42:56 by josgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i < (size - 1) && src != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	printf("%s\n", dest);
	return (i);
}
int main()
{
	char cadena_origen[] = "&G*7@[@Xqfs72dvnfd/Ex]*9dc;Q`)";
	char cadena_destino[] = "aksj";
	unsigned int longitud = 10;
	char *wololo;

	wololo = cadena_destino;
	longitud = ft_strlcpy(cadena_destino, cadena_origen, longitud);
	printf("%i\n", longitud);
	
	return 0;
}