/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   processing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorodrig <lorodrig@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 14:08:27 by lorodrig          #+#    #+#             */
/*   Updated: 2021/08/26 14:15:34 by lorodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	process_first_line(char **map, struct s_point dims, char *first_line)
{
	int		i;
	int		square_size;

	i = 0;
	while (first_line[i])
		i++;
	square_size = dims.point_row;
	if (dims.point_col < dims.point_row)
		square_size = dims.point_col;
	while (square_size > 0 && (place_square(map, dims,
				square_size, first_line) == 0))
		square_size--;
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
	int				first_line_size;
	char			*first_line;
	char			**map;
	struct s_point	dims;

	dims.point_row = map_rows;
	dims.point_col = map_cols;
	map = (char **)malloc(map_rows * sizeof(char *));
	i = -1;
	while (++i < map_rows)
		map[i] = (char *)malloc(map_cols * sizeof(char));
	first_line_size = 0;
	i = -1;
	while (buffer[++i] != '\n')
		first_line_size++;
	first_line = malloc(sizeof(char) * first_line_size);
	populate_map(buffer, first_line, map);
	process_first_line(map, dims, first_line);
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
