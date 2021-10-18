/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorodrig <lorodrig@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 14:14:14 by lorodrig          #+#    #+#             */
/*   Updated: 2021/08/26 14:34:50 by lorodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include "bsq_library.h"

void	file_to_buffer(char *path)
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
	buffer = (char *)malloc(bytes * sizeof(char) + 1);
	read(fd, buffer, bytes);
	buffer[bytes] = '\0';
	if (valid_map(buffer))
		process_buffer(buffer, get_map_rows(buffer), get_map_cols(buffer));
	else
		write(2, "map error\n", 10);
	close(fd);
	free(buffer);
}

int	main(int argc, char *argv[])
{
	int	i;

	i = 0;
	if (argc > 1)
	{
		while (++i < argc)
		{
			file_to_buffer(argv[i]);
			if (argc != 2 && i != argc - 1)
				ft_putchar('\n');
		}
	}
	return (0);
}
