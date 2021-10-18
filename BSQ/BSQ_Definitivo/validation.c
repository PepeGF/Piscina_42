/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorodrig <lorodrig@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 14:14:51 by lorodrig          #+#    #+#             */
/*   Updated: 2021/08/26 14:42:27 by lorodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include "bsq_library.h"

int	check_f_line(char *buffer)
{
	int	i;
	int	len;

	i = -1;
	while (buffer[i] != '\n')
		i++;
	len = i;
	if (buffer[len - 1] == buffer[len - 2]
		|| buffer[len - 1] == buffer[len - 3]
		|| buffer[len - 2] == buffer[len - 3])
		return (0);
	while (buffer[i])
	{
		if (buffer[i] == '\n' || buffer[i] == buffer[len - 2]
			|| buffer[i] == buffer[len - 3])
			i++;
		else
			return (0);
	}
	return (1);
}

int	valid_map(char *buffer)
{
	int	line;
	int	row;
	int	i;
	int	is_f_line;
	int	aux;

	aux = 0;
	if (check_f_line(buffer) == 0)
		return (0);
	line = 0;
	row = 0;
	i = -1;
	is_f_line = 1;
	while (buffer[++i] != '\0')
	{
		row = 0;
		while (buffer[i] != '\n' && buffer[i] != '\0')
		{
			i++;
			row++;
		}
		if (is_f_line == 0)
		{
			if (aux == 0)
				aux = row;
			else
				if (aux != row)
					return (0);
		}
		line++;
		is_f_line = 0;
	}
	if (line < 2)
		return (0);
	return (1);
}
