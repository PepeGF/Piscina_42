/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josgarci <josgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 12:38:38 by josgarci          #+#    #+#             */
/*   Updated: 2021/08/12 12:46:54 by josgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	
	i = 0;
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n && dest[i] != '\0')
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}


int main()
{
	char cadena_origen[] = "Aupa Atleti!"; // 12+1 caracteres
	char cadena_destino[] = "Tu eres la alegria de mi corazon"; // 32+1 caract.
	int longitud = ;
	char *wololo;

	wololo = ft_strncpy(cadena_destino, cadena_origen, longitud);
	
	printf("%s\n", cadena_destino);
//	printf("%i\n", ft_strlen(cadena_origen));
	return 0;
}