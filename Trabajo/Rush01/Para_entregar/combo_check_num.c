int	n_comb(int izq, int dcha)
{
	if ((izq == 1 + 48 && dcha == 4 + 48)
		|| (izq == 4 + 48 && dcha == 1 + 48))
		return (2);
	else if ((izq == 1 + 48 && dcha == 2 + 48)
		|| (izq == 2 + 48 && dcha == 1 + 48))
		return (3);
	else if ((izq == 1 + 48 && dcha == 3 + 48)
		|| (izq == 3 + 48 && dcha == 1 + 48)
		|| (izq == 2 + 48 && dcha == 3 + 48)
		|| (izq == 3 + 48 && dcha == 2 + 48))
		return (4);
	else
		return (7);
}

void	counter_for_comb(char	l[4])
{
	int	i;
	int	j;

	j = 0;
	i = 49;
	while (j < 4)
	{
		l[j] = i;
		j++;
	}
}

int	check_comb(char *str, int i, char n[6][6])
{
	int	j;
	int	i_;

	if (i == 1)
		return (1);
	i_ = 1;
	while (i_ < i)
	{
		j = 1;
		while (j < 5)
		{
			if (n[i_][j] == str[j - 1])
				return (0);
			j++;
		}
		i_++;
	}
	return (1);
}

void	insert_comb(char n[6][6], char comb[4], int i)
{
	int	j;

	j = 1;
	while (j < 5)
	{
		n[i][j] = comb[j - 1];
		j++;
	}
}
