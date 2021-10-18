void	s_numbers_rows_1(char	n[6][6])
{
	int	i;
	int	c;

	c = 1;
	i = 0;
	while (++i < 5)
	{
		if (n[i][0] == 52)
		{
			c = 1;
			while (c < 5)
			{
				n[i][c] = c + 48;
				c++;
			}
		}
		if (n[i][5] == 52)
		{
			c = 0;
			while (c-- > -5)
			{
				n[i][5 + c] = -c + 48;
			}
		}
	}
}

void	s_numbers_rows_2(char	n[6][6])
{
	int	i;
	int	c;

	c = 1;
	i = 1;
	while (i < 5)
	{
		if (n[i][0] == 49)
			n[i][0 + 1] = 52;
		if (n[i][5] == 49)
			n[i][5 - 1] = 52;
		if (n[i][0] == 50 && n[i][5] == 51)
			n[i][2] = 52;
		if (n[i][0] == 51 && n[i][5] == 50)
			n[i][3] = 52;
		if ((n[i][0] == 49 && n[i][5] == 50)
			|| (n[i][0] == 50 && n[i][5] == 49))
		{
			n[i][1] = 52;
			n[i][4] = 51;
		}
		i++;
	}
}

void	s_numbers_cols_1(char	n[6][6])
{
	int	j;
	int	c;

	c = 1;
	j = 0;
	while (++j < 5)
	{
		if (n[0][j] == 52)
		{
			c = 1;
			while (c < 5)
			{
				n[c][j] = c + 48;
				c++;
			}
		}
		if (n[5][j] == 52)
		{
			c = 0;
			while (--c > -5)
			{
				n[5 + c][j] = -c + 48;
			}
		}
	}
}

void	s_numbers_cols_2(char	n[6][6])
{
	int	j;

	j = 0;
	while (++j < 5)
	{
		if (n[0][j] == 49)
			n[0 + 1][j] = 52;
		if (n[5][j] == 49)
			n[5 - 1][j] = 52;
		if (n[0][j] == 50 && n[5][j] == 51)
			n[2][j] = 52;
		if (n[0][j] == 51 && n[5][j] == 50)
			n[3][j] = 52;
		if (n[0][j] == 49 && n[5][j] == 50)
		{
			n[1][j] = 52;
			n[4][j] = 51;
		}
		if (n[0][j] == 50 && n[5][j] == 49)
		{
			n[1][j] = 51;
			n[4][j] = 52;
		}
	}
}
