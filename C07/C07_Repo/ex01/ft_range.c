/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josgarci <josgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 13:20:02 by josgarci          #+#    #+#             */
/*   Updated: 2021/08/26 18:29:22 by josgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*array;
	int	range;
	int	i;

	if (min > max)
		array = (NULL);
	range = max - min;
	array = (int *)malloc(sizeof(int) * range);
	if (array == NULL)
		return (0);
	i = 0;
	while (i < range)
	{
		array[i] = min + i;
		i++;
	}
	return (array);
}
