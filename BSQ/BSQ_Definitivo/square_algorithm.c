/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   square_algorithm.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorodrig <lorodrig@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 14:12:40 by lorodrig          #+#    #+#             */
/*   Updated: 2021/08/26 14:30:46 by lorodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include "bsq_library.h"

int	check_square(char **map, struct s_p dims, int q_siz, char *f_line)
{
	int	result;
	int	i;
	int	j;

	i = dims.point_row;
	j = dims.point_col;
	result = 0;
	while (i < dims.point_row + q_siz)
	{
		j = dims.point_col;
		while (j < dims.point_col + q_siz)
		{
			if (map[i][j] == get_prop_char(f_line, 1))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	write_full(char **map, struct s_p dims, int q_siz, char *f_line)
{
	int	i;
	int	j;

	i = dims.point_row;
	j = dims.point_col;
	while (i < dims.point_row + q_siz)
	{
		j = dims.point_col;
		while (j < dims.point_col + q_siz)
		{
			map[i][j] = get_prop_char(f_line, 0);
			j++;
		}
		i++;
	}
}

int	place_square(char **map, struct s_p dims, int q_siz, char *f_line)
{
	int				point_row;
	int				point_col;
	struct s_p		dim_check;

	point_row = 0;
	while (point_row <= dims.point_row - q_siz)
	{	
		point_col = 0;
		while (point_col <= dims.point_col - q_siz)
		{
			dim_check.point_row = point_row;
			dim_check.point_col = point_col;
			if (check_square(map, dim_check, q_siz, f_line) == 1)
			{
				write_full(map, dim_check, q_siz, f_line);
				return (1);
			}
			point_col++;
		}
		point_row++;
	}
	return (0);
}
