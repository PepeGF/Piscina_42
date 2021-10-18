/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josgarci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 11:40:27 by josgarci          #+#    #+#             */
/*   Updated: 2021/08/18 11:40:30 by josgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	if (i <= 1)
		return (0);
	return (1);
}

int	ft_strlen(char *str)
{
	int	counter;

	counter = 0;
	while (*str != '\0')
	{
		counter++;
		str++;
	}
	return (counter);
}

void	ft_putnbr(long int num, int len_base, char *base)
{
	if (num < 0)
	{
		write (1, "-", 1);
		num = num * -1;
	}
	if (num > (len_base - 1))
	{	
		ft_putnbr(num / len_base, len_base, base);
	}
	num = base[num % len_base];
	write (1, &num, 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	len_base;

	if (check_base(base) == 0)
		return ;
	len_base = ft_strlen(base);
	ft_putnbr(nbr, len_base, base);
}

int	main(void)
{
	int		number;
	char	*base;

	number = -2147483648;
	base = "012";
	//base = "013456788";
	ft_putnbr_base(number, base);
	return (0);
}
