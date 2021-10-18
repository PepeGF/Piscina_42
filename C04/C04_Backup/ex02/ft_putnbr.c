/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josgarci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 11:39:35 by josgarci          #+#    #+#             */
/*   Updated: 2021/08/18 11:39:38 by josgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int num)
{
	if (num == -2147483648)
	{	
		write (1, "-2147483648", 11);
	}
	if (num < 0)
	{
		write (1, "-", 1);
		num = num * -1;
	}
	if (num > 9)
	{	
		ft_putnbr (num / 10);
	}
	num = num % 10 + '0';
	write (1, &num, 1);
}

int	main(void)
{	
	int	num;

	num = -2147483648;
	ft_putnbr (num);
	return (0);
}
