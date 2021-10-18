/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josgarci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 20:40:33 by josgarci          #+#    #+#             */
/*   Updated: 2021/08/16 20:40:43 by josgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

// int	ft_atoi(char *str)
// {
// 	int	counterneg;
// 	int	num;

// 	counterneg = 1;
// 	num = 0;
// 	while (!(*str >= 48 && *str <= 57) && *str)
// 	{
// 		if (*str == ' ' || *str == '\f' || *str == '\n' || *str == '\r'
// 			|| *str == '\t' || *str == '\v' || *str == '+')
// 			str++;
// 		else if (*str == '-')
// 		{
// 			counterneg *= -1;
// 			str++;
// 		}
// 		else
// 			return (num);
// 	}
// 	while (*str && (*str >= 48 && *str <= 57))
// 	{	
// 		num = (num * 10) + (*str - '0');
// 		str++;
// 	}
// 	return (num * counterneg);
// }

int	ft_atoi(char *str)
{
	int	i;
	int	counterneg;
	int	num;

	i = 0;
	counterneg = 1;
	num = 0;
	while (!(str[i] >= 48 && str[i] <= 57) && str[i])
	{
		if (str[i] == ' ' || str[i] == '\f' || str[i] == '\n' || str[i] == '\r'
			|| str[i] == '\t' || str[i] == '\v' || str[i] == '+')
			i++;
		else if (str[i++] == '-')
			counterneg *= -1;
		else
			return (num);
	}
	while (str[i] && (str[i] >= 48 && str[i] <= 57))
	{	
		num = (num * 10) + (str[i] - '0');
		i++;
	}
	return (num * counterneg);
}

int	main(void)
{
	int		number;
	char	*cadena;

	cadena = "    ----++++ --- +++ 2147483648";
	number = ft_atoi(cadena);
	printf ("Número = %i\n", number);
	printf ("-----------------\n");
	printf ("Atoi original -> %d\n", atoi(cadena));
	printf("-----------------\n");
	printf("-----------------\n");
	cadena = "-1325632167";
	number = ft_atoi(cadena);
	printf ("Número = %i\n", number);
	printf("-----------------\n");
	printf("Atoi original -> %d\n", atoi(cadena));

	
	return (0);
}
