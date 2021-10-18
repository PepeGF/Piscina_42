#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	write_full(int row_del_punto, int col_del_punto, int lado_cuadrado, char **tablero);
int	check_square(int point_row, int point_col, int lado_cuadrado, char **tablero);

int	get_map_size(char *path)
{
	int		fd;
	int		size;
	char	buffer;

	fd = open(path, O_RDONLY);
	if (fd == -1)
		return (-1);
	size = 0;
	while (read(fd, & buffer, 1))
		size++;
	close(fd);
	return (size);
}

int	get_map_rows(char *path)
{
	int row_num;
	int fd_map;
	char buffer;

	row_num = 0;
	fd_map = open(path, O_RDONLY);
	
	while (read(fd_map, &buffer, 1))
		if (buffer == 10)
			row_num++;
	close(fd_map);
	return (row_num);
}

char	*get_map_raw(char *path, int size)
{
	int counter;
	int	fd_map;
	char buffer;
	char *map;

	counter = 0;
	map = (char *)malloc(sizeof(char)*size + 1);
	fd_map = open(path, O_RDONLY);
	if (fd_map == -1)
		return (NULL);
	while (read(fd_map, &buffer, 1))
	{
		map[counter] = buffer;
		counter++;
	}
	map[counter] = '\0';
	close(fd_map);
	return (map);
}

int	get_map_cols(char *map_raw)
{
	int		counter;
	int		col_num;

	col_num = 0;
	counter = 0;
	while (map_raw[counter] != 10)
		counter++;
	counter++;
	while (map_raw[counter] != 10)
	{
		counter++;
		col_num++;
	}
	return (col_num);
}

char *get_first_line(char *map_raw)
{
	char	*first_line;
	int		counter;

	counter = 0;
	while (map_raw[counter] != 10)
		counter++;
	first_line = malloc(sizeof(char)*counter);
	counter = 0;
	while (map_raw[counter] != 10)
	{
		first_line[counter] = map_raw[counter];
		counter++;
	}
	return (first_line);	
}

char **get_board(char *raw_map, int map_size)
{
	int	counter;
	int row;
	int	col;
	char **map;

	counter = 0;
	row = 0;
	col = 0;
	while (raw_map[counter] != 10)
		counter++;
	map = malloc(sizeof(char *)*map_size);  //aquii deberían ser filas(alto)
	while (row < map_size)
	{
		map[row] = malloc(sizeof(char)*map_size); //aquí columnas (ancho)
		row++;
	} 
	row = 0;
	
	while (raw_map[counter] != '\0')
	{
		while (row <= map_size)
		{
			col = 0;
			while (col <= map_size)  //-1 para no meter el \n
			{
				map[row][col] = raw_map[counter++];
				col++;
				write(1, &raw_map[counter], 1);
			}
			row++;
		}
		counter++;
	}
	//write(1, "\n", 1);
	return (map);
}

void	place_square(int widht, int height,int lado_cuadrado, char **tablero)
{
	int	point_row;		//son las coordenadas del vértice sup izq
	int	point_col;

	point_row = 0;
	while (point_row < widht - lado_cuadrado)
	{	
		point_col = 0;
		while (point_col < height - lado_cuadrado)
		{
			printf("%i", check_square(point_row, point_col, lado_cuadrado, tablero));
			// if(check_square(point_row, point_col, lado_cuadrado, tablero) == 1)
			// 	write_full(point_row, point_col,  lado_cuadrado, tablero);
			point_col++;
		}
		point_row++;
	}
	//si llega aquí es que no hay ningún sitio donde ubicar el cuadrado
}

// funcion/bucle para comprobar el cuadrado colocado
void	write_full(int row_del_punto, int col_del_punto, int lado_cuadrado, char **tablero)
{
	(void) tablero; // QUITSSR
	int	i;
	int	j;

	i = row_del_punto;
	j = col_del_punto;
	
	while (i < row_del_punto + lado_cuadrado)		
	{
		j = col_del_punto;
		while (j < col_del_punto + lado_cuadrado)
		{
			tablero[i][j] = 'x';
			printf("X");
			j++;
		}
		printf("\n");
		i++;
	}
}


int	check_square(int point_row, int point_col, int lado_cuadrado, char **tablero)
{
	int	result;
	int	i;
	int	j;

	i = point_row;
	j = point_col;
	result = 0;
	while (i < point_row + lado_cuadrado)	
	{	
		j = point_col;
		while (j < point_col + lado_cuadrado)
		{
			printf("%c\n", tablero[i][j]);
			if (tablero[i][j] == 'o')
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int main()
{
	int map_size;
	int size;
	char *raw_map;					//eliminable de main
	char *first_line;
	int columns;
	char **map;


	map_size = get_map_rows("tablero") - 1;
	size = get_map_size("tablero");
	raw_map = get_map_raw("tablero", size); //eliminable de main
	first_line = get_first_line(raw_map);
	columns = get_map_cols(raw_map);
	map = get_board(raw_map, map_size);


	// while (**map != '\0')
	// {
	// 	write(1, &**map, 1);
	// 	map++;
	// }

	printf("Mapa a pelo:\n%s",raw_map);
	printf("Tamaño del mapa -> %ix%i\n",map_size, columns);
	printf("Tamaño del archivo -> %i\n",size);
	printf("Primera fila: %s\n", first_line);


	return 0;
}



/*
void	ft_process_buffer(char *buffer)
{
	int		i;
	int		is_first_line;
	char	*first_line;

	first_line = malloc(sizeof(char) * 55); //cuidado con este 55

	i = 0;
	is_first_line = 1;
	while (buffer[i] != '\0')
	{

		while (buffer[i] != '\n')
		{
			if (is_first_line)
			{
				first_line[i] = buffer[i];	
			}
			printf("%c", buffer[i]);
			i++;
		}
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
	printf("Total: %i, sol: %c, empty: %c, obst: %c", ll, sol_c, empty_c, obst_c);

}
*/
/*
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

	// extraer primera linea y procesarla
	// extraer el mapa y guardarlo


	close(fd);
	free(buffer);
}
*/