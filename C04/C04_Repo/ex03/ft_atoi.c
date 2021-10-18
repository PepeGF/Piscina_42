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
