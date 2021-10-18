/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josgarci <josgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 19:16:50 by josgarci          #+#    #+#             */
/*   Updated: 2021/08/19 13:00:43 by josgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	factorial;
	int	i;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	factorial = nb;
	i = 1;
	while (i < nb)
	{
		factorial *= (nb - i);
		i++;
	}
	return (factorial);
}
