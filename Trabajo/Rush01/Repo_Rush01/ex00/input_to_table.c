void	input_to_table_1(char n[6][6])
{
	int	i;
	int	c;
	int	j;

	i = 0;
	c = 0;
	while (i < 6)
	{
		j = 0;
		while (j < 6)
		{
			n[i][j] = 42;
			j++;
		}
		i++;
	}
}

void	input_to_table_2(char *str, char n[6][6])
{
	int	i;
	int	c;

	i = 0;
	while (str[i])
	{
		if (c > 3)
			c = 0;
		if (str[i] != 32 && i < 8)
			n[0][c] = false_atoi(&str[i]) + 48;
		else if (str[i] != 32 && i > 7 && i < 16)
			n[5][c] = false_atoi(&str[i]) + 48;
		else if (str[i] != 32 && i > 15 && i < 24)
			n[c][0] = false_atoi(&str[i]) + 48;
		else if (str[i] != 32 && i > 23 && i < 32)
			n[c][5] = false_atoi(&str[i]) + 48;
		c++;
		i++;
	}
}

void	input_to_table_3(char n[6][6])
{
	n[0][0] = 32;
	n[0][5] = 32;
	n[5][0] = 32;
	n[5][5] = 32;
}
