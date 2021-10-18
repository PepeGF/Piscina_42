/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   processing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorodrig <lorodrig@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 14:08:27 by lorodrig          #+#    #+#             */
/*   Updated: 2021/08/26 14:31:55 by lorodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include "bsq_library.h"

void	process_f_line(char **map, struct s_p dims, char *f_line)
{
	int		i;
	int		q_siz;

	i = 0;
	while (f_line[i])
		i++;
	q_siz = dims.point_row;
	if (dims.point_col < dims.point_row)
		q_siz = dims.point_col;
	while (q_siz > 0 && (place_square(map, dims,
				q_siz, f_line) == 0))
		q_siz--;
}

int	get_map_size(char *path)
{
	int		fd;
	int		size;
	char	buffer;

	fd = open(path, O_RDONLY);
	if (fd == -1)
		return (-1);
	size = 0;
	while (read(fd, &buffer, 1))
		size++;
	return (size);
}

void	process_buffer(char *buffer, int map_rows, int map_cols)
{
	int				i;
	int				f_line_size;
	char			*f_line;
	char			**map;
	struct s_p		dims;

	dims.point_row = map_rows;
	dims.point_col = map_cols;
	map = (char **)malloc(map_rows * sizeof(char *));
	i = -1;
	while (++i < map_rows)
		map[i] = (char *)malloc(map_cols * sizeof(char));
	f_line_size = 0;
	i = -1;
	while (buffer[++i] != '\n')
		f_line_size++;
	f_line = malloc(sizeof(char) * f_line_size);
	populate_map(buffer, f_line, map);
	process_f_line(map, dims, f_line);
	print_map(map, dims);
}

int	get_map_rows(char *buffer)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (buffer[i])
	{
		if (buffer[i] == '\n')
			j++;
		i++;
	}
	return (j - 1);
}

int	get_map_cols(char *buffer)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (buffer[i])
	{
		if (buffer[i] == '\n')
		{
			i++;
			while (buffer[i + j] != '\n')
				j++;
			return (j);
		}
		i++;
	}
	return (i);
}
