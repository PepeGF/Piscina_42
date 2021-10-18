#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h> // REMOVE!
int	check_first_line(char *buffer);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char get_prop_char(char *first_line, int choice)
{
	char	sol_c;
	char	obst_c;
	int		i;

	i = 0;
	while (first_line[i])
		i++;

	sol_c = first_line[--i];
	obst_c = first_line[--i];

	if (choice == 0)
		return (sol_c);
	else
		return (obst_c);
}



void	populate_map(char *buffer, char *first_line, char **map)
{
	int	line;
	int	row;
	int	i;
	int	is_first_line;

	line = 0;
	row = 0;
	i = -1;
	is_first_line = 1;
	while (buffer[++i] != '\0')
	{
		row = 0;
		while (buffer[i] != '\n')
		{
			if (is_first_line)
				first_line[i] = buffer[i];
			else
				map[line - 1][row] = buffer[i];
			i++;
			row++;
		}
		line++;
		is_first_line = 0;
	}
}

void	print_map(char **map, int map_rows, int map_cols)
{
	int i_row = 0;
	int i_col = 0;
	while (i_row < map_rows)
	{
		i_col = 0;
		while (i_col < map_cols)
		{
			ft_putchar(map[i_row][i_col]);
			i_col++;
		}
		ft_putchar('\n');
		i_row++;
	}
}

int	check_square(char **map, int point_row, int point_col, int quare_size, char *first_line)
{
	int	result;
	int	i;
	int	j;

	i = point_row;
	j = point_col;
	result = 0;
	while (i < point_row + quare_size)	
	{	
		j = point_col;
		while (j < point_col + quare_size)
		{
			if (map[i][j] == get_prop_char(first_line, 1))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	write_full(char **map, int point_row, int point_col, int quare_size, char *first_line)
{
	int	i;
	int	j;

	i = point_row;
	j = point_col;
	
	while (i < point_row + quare_size)		
	{
		j = point_col;
		while (j < point_col + quare_size)
		{
			map[i][j] = get_prop_char(first_line, 0);
			j++;
		}
		i++;
	}
}

int	place_square(char **map, int hei, int wid, int square_size, char *first_line)
{
	int	point_row;
	int	point_col;
	
	point_row = 0;
	while (point_row <= hei - square_size)
	{	
		point_col = 0;
		while (point_col <= wid - square_size)
		{
			if(check_square(map, point_row, point_col, square_size, first_line) == 1){
				write_full(map, point_row, point_col, square_size, first_line);
				return (1);
			}
			point_col++;
		}
		point_row++;
	}
	return (0);
}

void	process_first_line(char **map, int map_rows, int map_cols, char *first_line)
{
	int		i;
	int		square_size;

	i = 0;
	while (first_line[i])
		i++;

	// sol_c = first_line[--i];
	// obst_c = first_line[--i];
	// empty_c = first_line[--i];

	square_size = map_rows;

	if (map_cols < map_rows)
		square_size = map_cols;


	while (square_size > 0 && (place_square(map, map_rows, map_cols, square_size, first_line) == 0))
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
	int		i;
	int first_line_size;
	char	*first_line;
	char** map;

	map = (char**)malloc(map_rows * sizeof(char*));
	i = -1;

	while (++i < map_rows)
		map[i] = (char*)malloc(map_cols * sizeof(char));
	first_line_size = 0;
	i = -1;

	while (buffer[++i] != '\n')
		first_line_size++;

	first_line = malloc(sizeof(char) * first_line_size);
	populate_map(buffer, first_line, map);
	process_first_line(map, map_rows, map_cols, first_line);

	print_map(map, map_rows, map_cols);
}

int	get_map_rows(char *buffer)
{
	int i;
	int j;
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
	int i;
	int j;

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

void file_to_buffer(char *path)
{
	int		fd;
	int		bytes;
	char	*buffer;

	bytes = get_map_size(path);
	if (bytes == -1)
		return ;
	fd = open(path, O_RDONLY);
	if (fd == -1)
		return ;

	buffer = (char *)malloc(bytes * sizeof(char));
	read(fd, buffer, bytes);

	check_first_line(buffer);
	process_buffer(buffer, get_map_rows(buffer), get_map_cols(buffer));

	close(fd);
	free(buffer);
}

int	main()
{
	file_to_buffer("tablero4");
	return 0;
}

int	check_first_line(char *buffer)
{
	int i;
	int len_fl;

	i = 0 ;
	while (buffer[i] != 10)
		i++;
	len_fl = i;
	if (buffer[len_fl - 1] == buffer[len_fl - 2]
		|| buffer[len_fl - 1] == buffer[len_fl - 3]
		|| buffer[len_fl - 2] == buffer[len_fl - 3])
		{
			write(1, "map error", 9);
			return (1);
		}
	while (buffer[i])
	{
		if (buffer[i] == 10 || buffer[i] == buffer[len_fl - 2]
			|| buffer[i] == buffer[len_fl - 3])
			i++;
		else
		{
			write(1, "map error", 9);
			return (1);
		}
	}
	return (0);
}