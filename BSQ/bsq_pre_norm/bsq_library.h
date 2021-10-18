/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq_library.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josgarci <josgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 14:07:33 by josgarci          #+#    #+#             */
/*   Updated: 2021/08/26 14:16:06 by josgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_LIBRARY_H
# define BSQ_LIBRARY_H

struct s_point
{
	int	point_row;
	int	point_col;
};
void	file_to_buffer(char *path);
char	get_prop_char(char *first_line, int choice);
void	populate_map(char *buffer, char *first_line, char **map);
void	print_map(char **map, struct s_point dims);
void	process_first_line(char **map, struct s_point dims, char *first_line);
int		get_map_size(char *path);
void	process_buffer(char *buffer, int map_rows, int map_cols);
int		get_map_rows(char *buffer);
int		get_map_cols(char *buffer);
int		check_square(char **map, struct s_point dims, int quare_size, char *first_line);
void	write_full(char **map, struct s_point dims, int quare_size, char *first_line);
int		place_square(char **map, struct s_point dimensions, int square_size, char *first_line);
void	ft_putchar(char c);
void	ft_putstr(char *str);
int		check_first_line(char *buffer);
int		valid_map(char *buffer);
#endif