/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josgarci <josgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 10:48:51 by josgarci          #+#    #+#             */
/*   Updated: 2021/08/23 17:50:05 by josgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

char	*ft_strjoin(int size, char **strs, char *sep);

int main(void)
{
	char *text[7];

	text[0] = "Forza"; //5
	text[1] = "Atleti"; //6
	text[2] = "Campeon"; //7
	text[3] = "42 se acaba...ooohhh!"; //21
	text[4] = "Victor es un colgao"; //19 o 20?
	text[5] = "Viva la madre que pario a Richard!!!\0";
	text[6] = "A ver si deja de joder la marrana";

	printf("%s\n", ft_strjoin(7, text, "-:_"));
	free(ft_strjoin(7, text, "-:_"));
	return 0;
}
