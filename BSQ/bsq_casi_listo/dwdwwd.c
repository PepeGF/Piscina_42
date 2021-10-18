#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

//char g_map_buffer;

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
	int		is_first_line;
	char	*first_line;
	char	map_arr[map_rows ][map_cols];

	first_line = malloc(sizeof(char) * 55);

	int line = 0;
	int row = 0;
	//int charpos = 0;
	i = 0;
	is_first_line = 1;
	while (buffer[i] != '\0')
	{
		row = 0;
		while (buffer[i] != '\n')
		{
			if (is_first_line)
			{
				first_line[i] = buffer[i];	
			} else {
				map_arr[line - 1][row] = buffer[i];
			}
			printf("%c", buffer[i]);

			
			i++;
			row++;
		}
		line++;

		is_first_line = 0;
		printf("\n");
		i++;
	}
	int j = 0;
	char sol_c = 'a';
	char empty_c;
	char obst_c;
	//int square_len;

	while (first_line[j])
		j++;
	
	sol_c = first_line[--j];
	obst_c = first_line[--j];
	empty_c = first_line[--j];

	// Temporal, para hacer pruebas
	int jj = 0;
	int ll = 1;
	while (jj < j)
	{
		ll += (first_line[jj] - 0);
		jj++;
	}
	printf("Total: %i, sol: %c, empty: %c, obst: %c\n", ll, sol_c, empty_c, obst_c);



	printf("Printing array...\n");
	int hhh = 0;
	int jjj = 0;
	while (hhh < map_rows)
	{
		jjj = 0;
		while (jjj < map_cols)
		{
			printf("%c", map_arr[hhh][jjj]);
			jjj++;
		}
		printf("\n");
		hhh++;
	}

	// Algoritmo aqui !

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

	process_buffer(buffer, get_map_rows(buffer), get_map_cols(buffer));

	close(fd);
	free(buffer);
}

int main()
{
	file_to_buffer("tablero");
	return 0;
}