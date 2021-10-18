/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josgarci <josgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 17:02:15 by josgarci          #+#    #+#             */
/*   Updated: 2021/08/19 18:45:02 by josgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char **str)
{	
	int	i;

	i = 0;
	while (str[0][i] != '\0')
	{	
		write(1, &str[0][i], 1);
		i++;
	}
}

int	main(int argc, char *argv[])
{
	(void) argc;
	ft_putstr(argv);
	return (0);
}
