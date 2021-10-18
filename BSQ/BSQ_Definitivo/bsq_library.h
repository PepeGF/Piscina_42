/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq_library.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorodrig <lorodrig@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 14:07:33 by josgarci          #+#    #+#             */
/*   Updated: 2021/08/26 14:33:50 by lorodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_LIBRARY_H
# define BSQ_LIBRARY_H

struct s_p
{
	int	point_row;
	int	point_col;
};
void	file_to_buffer(char *path);
char	get_prop_char(char *f_line, int choice);
void	populate_map(char *buffer, char *f_line, char **map);
void	print_map(char **map, struct s_p dims);
void	process_f_line(char **map, struct s_p dims, char *f_line);
int		get_map_size(char *path);
void	process_buffer(char *buffer, int map_rows, int map_cols);
int		get_map_rows(char *buffer);
int		get_map_cols(char *buffer);
int		check_square(char **map, struct s_p dims, int q_siz, char *f_line);
void	write_full(char **map, struct s_p dims, int q_siz, char *f_line);
int		place_square(char **map, struct s_p dims, int q_siz, char *f_line);
void	ft_putchar(char c);
void	ft_putstr(char *str);
int		check_f_line(char *buffer);
int		valid_map(char *buffer);
#endif