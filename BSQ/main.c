
#include <fcntl.h>
#include <unistd.h>

#include <stdio.h>

int	read_len_board(char *path)
{
	int fd_board;
	char buffer;
	int len_board;

	len_board = 0;
	fd_board = open(path, O_RDONLY);
	while (read(fd_board, &buffer, 1))
		len_board++;
	close(fd_board);
	return (len_board);
}

char	*import_board(char *path, int len_board)
{
	int		fd_board;
	int		line_counter;
	char	*buffer;
	char	*board;

	line_counter = 0;
	len_board = read_len_board(path);
	if (len_board == -1)
		return /*(NULL)*/ ;
	fd_board = open(path, O_RDONLY);
	if (fd_board == -1)
		return /*(NULL)*/ ;
	buffer = (char *)malloc(len_board * sizeof(char));
	read(fd_board, buffer, len_board);
	//ft_process_board();
	//extract_data();
	close(fd_board);
	free(buffer);
	return (board);

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

int main()
{
	int longitud_tablero;

	longitud_tablero = read_len_board("tablero");
	printf("Lineas board: %i\n",read_rows_board("tablero"));

	return 0;
}