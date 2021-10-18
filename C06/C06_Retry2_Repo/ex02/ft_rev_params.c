/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josgarci <josgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 18:26:22 by josgarci          #+#    #+#             */
/*   Updated: 2021/08/22 17:46:51 by josgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(int *argc, char **str)
{	
	int		i;
	int		j;

	i = *argc - 1;
	while (i > 0)
	{	
		j = 0;
		while (str[i][j])
		{
			write(1, &str[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i--;
	}
}

int	main(int argc, char *argv[])
{
	int	*punter;

	punter = &argc;
	ft_putstr(punter, argv);
	return (0);
}
