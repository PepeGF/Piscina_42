/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josgarci <josgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 19:54:35 by josgarci          #+#    #+#             */
/*   Updated: 2021/08/19 13:09:31 by josgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	result;

	if (power == 0)
		return (1);
	i = 1;
	result = nb;
	if (power < 0)
		return (0);
	while (i < power)
	{
		result = nb * result;
		i++;
	}
	return (result);
}
