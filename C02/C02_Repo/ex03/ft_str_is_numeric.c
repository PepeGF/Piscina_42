/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josgarci <josgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 17:31:23 by josgarci          #+#    #+#             */
/*   Updated: 2021/08/12 14:25:27 by josgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
 #include <stdio.h>
 
int	ft_str_is_numeric(char *str)
{
	int		counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		if (str[counter] < '0' || (str[counter] > '9'))
			return (0);
		counter++;
	}
	return (1);
}

int main()
{
	char cadena_comprobar [] = "234523463";
	char *puntero;
	int checker;

	puntero = cadena_comprobar;
	checker = ft_str_is_numeric(cadena_comprobar);

	printf("%i\n", checker);
	return (0);

}