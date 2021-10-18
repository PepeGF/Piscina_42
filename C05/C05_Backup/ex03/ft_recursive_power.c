/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josgarci <josgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 19:54:50 by josgarci          #+#    #+#             */
/*   Updated: 2021/09/13 13:26:28 by josgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{	
	int num = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (num * ft_recursive_power(num, power - 1));
}
