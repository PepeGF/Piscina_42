/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josgarci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 13:29:22 by josgarci          #+#    #+#             */
/*   Updated: 2021/08/13 13:59:44 by josgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;

	i = 0;
	if (to_find[0] == '\0')
		return(str);

	while (str[i])
	{	
		j = 0;
		while (str[i + j] == to_find [j])
		{
			if (to_find[j + 1] == '\0')
				return (str + i);
			j++;
			}
		{
		i++;
		}
	}
	return (0);
}

int main (void)
{
	char *cadena_s1;
	char *cadena_s2;
	char *salida;
//	char aux;

	cadena_s2 = "TtT";
	cadena_s1 = "JHJHAbhasfhbas a";

	salida = ft_strstr(cadena_s1, cadena_s2);
	write (1, &salida, 1);
	printf("%s\n", salida);
}
