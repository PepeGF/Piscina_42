/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   square_algorithm.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorodrig <lorodrig@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 14:12:40 by lorodrig          #+#    #+#             */
/*   Updated: 2021/08/26 14:15:35 by lorodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_square(char **map, struct s_point dims, int quare_size, char *first_line)
{
	int	result;
	int	i;
	int	j;

	i = dims.point_row;
	j = dims.point_col;
	result = 0;
	while (i < dims.point_row + quare_size)
	{
		j = dims.point_col;
		while (j < dims.point_col + quare_size)
		{
			if (map[i][j] == get_prop_char(first_line, 1))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	write_full(char **map, struct s_point dims, int quare_size, char *first_line)
{
	int	i;
	int	j;

	i = dims.point_row;
	j = dims.point_col;
	while (i < dims.point_row + quare_size)
	{
		j = dims.point_col;
		while (j < dims.point_col + quare_size)
		{
			map[i][j] = get_prop_char(first_line, 0);
			j++;
		}
		i++;
	}
}

int	place_square(char **map, struct s_point dimensions, int square_size, char *first_line)
{
	int				point_row;
	int				point_col;
	struct s_point	dim_check;

	point_row = 0;
	while (point_row <= dimensions.point_row - square_size)
	{	
		point_col = 0;
		while (point_col <= dimensions.point_col - square_size)
		{
			dim_check.point_row = point_row;
			dim_check.point_col = point_col;
			if (check_square(map, dim_check, square_size, first_line) == 1)
			{
				write_full(map, dim_check, square_size, first_line);
				return (1);
			}
			point_col++;
		}
		point_row++;
	}
	return (0);
}
