/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josgarci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 09:43:10 by josgarci          #+#    #+#             */
/*   Updated: 2021/08/13 09:46:35 by josgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>


int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	int aux;

	i = 0;
	while ((s1[i] || s2[i]) && i + 1 <= n)
	{
		if (s1[i] != s2[i])
		{
			aux = (unsigned char)s1[i]-(unsigned char)s2[i];
			return (aux);
		}
		i++;
	}
	return (0);
}

int	main(void)
{	
	unsigned int	n;
	int 			retorno;
	char 			cadena_s1[] = "ab\xfe A";
	char 			cadena_s2[] = "abc";
	
	n = 3;
	retorno = ft_strncmp(cadena_s1, cadena_s2, n);
	printf("%i\n", retorno);
	printf("%i", strncmp(cadena_s1, cadena_s2, n));
}
