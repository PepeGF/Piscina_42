/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 16:01:34 by potero-d          #+#    #+#             */
/*   Updated: 2021/08/15 14:24:43 by albgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//int	lft_up(int a*, int v);
//int	rgt_dwn(int a*, int v);

int	lft_up(int a[4], int v)
{
	int	c;
	int	i;
	int	j;

	c = 1;
	i = 0;
	j = 0;
	if ((a[0] * a[1] * a[2] * a[3] != 24) || (a[0] + a[1] + a[2] + a[3] != 10))
		return (0);
	while (i < 4)
	{
		if (a[j] < a[i + 1])
		{
			c++;
			j++;
		}
		i++;
	}	
	if (c == v)
		return (1);
	else
		return (0);
}

int	rgt_dwn(int a[4], int v)
{
	int	c;
	int	i;
	int	j;

	c = 1;
	i = 3;
	j = 3;
	if ((a[0] * a[1] * a[2] * a[3] != 24) || (a[0] + a[1] + a[2] + a[3] != 10))
		return (0);
	while (i > 0)
	{
		if (a[j] < a[i - 1])
		{
			c++;
			j--;
		}
		i--;
	}
	if (c == v)
		return (1);
	else
	{
		return (0);
	}
}
