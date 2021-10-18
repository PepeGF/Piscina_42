/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josgarci <josgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 21:35:24 by josgarci          #+#    #+#             */
/*   Updated: 2021/08/23 17:45:12 by josgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int	total_len_calculation(char **strs, int size)
{	
	int		total_len;
	int		i;
	int		j;

	total_len = 0;
	i = 0;
	while (i < size)
	{
		j = 0 ;
		while (strs[i][j])
		{
			total_len++;
			j++;
		}		
		i++;
	}
	return (total_len);
}

int	separator_len_calculator(char *sep)
{
	int	i;

	i = 0;
	while (sep[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i])
		i++;
	j = 0;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*super_string;
	int		i;
	int		total_len;
	int		len_sep;

	total_len = total_len_calculation(strs, size);
	len_sep = separator_len_calculator(sep);
	super_string = (char *)malloc(sizeof(char)
			* (total_len + len_sep * (size - 1) + 1));
	if (super_string == '\0')
		return (0);
	i = 0;
	while (i < size)
	{
		ft_strcat(super_string, strs[i]);
		if (i != size - 1)
			ft_strcat(super_string, sep);
		i++;
	}
	ft_strcat(super_string, "\0");
	return (super_string);
}
