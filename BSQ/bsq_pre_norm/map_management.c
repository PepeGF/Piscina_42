/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_management.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorodrig <lorodrig@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 14:02:14 by lorodrig          #+#    #+#             */
/*   Updated: 2021/08/26 14:15:35 by lorodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	get_prop_char(char *first_line, int choice)
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

void	print_map(char **map, struct s_point dims)
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
