/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josgarci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 14:52:56 by josgarci          #+#    #+#             */
/*   Updated: 2021/08/17 14:53:26 by josgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

 char	*ft_strcat(char *dest, char *src)
{	
	int		i;
	int		j;
	
	i = 0;
	while (dest[i])
		i++;
	j = 0;
	while (src[j])
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
	char *cadena_s2;
	char cadena_s1[100] = "123";
	char *cadena_salida;

	cadena_s2 = "abc";

	cadena_salida = strcat(cadena_s1, cadena_s2);

	printf("%s\n", cadena_salida);


}
