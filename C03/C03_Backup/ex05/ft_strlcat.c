/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josgarci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 14:54:55 by josgarci          #+#    #+#             */
/*   Updated: 2021/08/17 14:54:58 by josgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
 {
	 int			i;
	 unsigned int	len_dest;

	i = 0;
	len_dest = 0;
	while (dest[len_dest])
		len_dest++;
	while (src[i] && (len_dest < (size - 1)))
	{
		dest[len_dest] = src[i];
		len_dest++;
		i++;
	}
	dest[len_dest] = '\0';
	return (len_dest);
 }
 