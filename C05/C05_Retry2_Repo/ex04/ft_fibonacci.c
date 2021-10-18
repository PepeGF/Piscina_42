/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josgarci <josgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 19:55:08 by josgarci          #+#    #+#             */
/*   Updated: 2021/08/22 16:41:48 by josgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int nb)
{
	if (nb < 0)
		return (-1);
	if (nb == 0)
		return (0);
	if (nb == 1)
		return (1);
	return (ft_fibonacci(nb - 1) + ft_fibonacci(nb - 2));
}
