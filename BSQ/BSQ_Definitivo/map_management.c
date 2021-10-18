/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_management.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorodrig <lorodrig@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 14:02:14 by lorodrig          #+#    #+#             */
/*   Updated: 2021/08/26 14:32:08 by lorodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include "bsq_library.h"

char	get_prop_char(char *f_line, int choice)
{
	char	sol_c;
	char	obst_c;
	int		i;

	i = 0;
	while (f_line[i])
		i++;
	sol_c = f_line[--i];
	obst_c = f_line[--i];
	if (choice == 0)
		return (sol_c);
	else
		return (obst_c);
}

void	populate_map(char *buffer, char *f_line, char **map)
{
	int	line;
	int	row;
	int	i;
	int	is_f_line;

	line = 0;
	row = 0;
	i = -1;
	is_f_line = 1;
	while (buffer[++i] != '\0')
	{
		row = 0;
		while (buffer[i] != '\n')
		{
			if (is_f_line)
				f_line[i] = buffer[i];
			else
				map[line - 1][row] = buffer[i];
			i++;
			row++;
		}
		line++;
		is_f_line = 0;
	}
}

void	print_map(char **map, struct s_p dims)
{
	int	i_row;
	int	i_col;

	i_row = 0;
	while (i_row < dims.point_row)
	{
		i_col = 0;
		while (i_col < dims.point_col)
		{
			ft_putchar(map[i_row][i_col]);
			i_col++;
		}
		ft_putchar('\n');
		i_row++;
	}
}
