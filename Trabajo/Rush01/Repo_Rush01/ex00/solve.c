void	solve(char	n[6][6], char l[4])
{
	int		i;
	char	*ch;
	int		s;
	int		c;
	char	comb[4];

	s = -1;
	i = 1;
	while (i > 0 && i < 5)
	{
		if (n[i][0] == n[i][5])
		{
			c = false_atoi(&l[i - 1]);
			while (c <= n_comb(n[i][0], n[i][5]))
			{
				ch = comb_equal(c);
				while (++s < 4)
				{
					comb[s] = ch[s];
				}
				s = -1;
				if (comb[0] == 48)
				{
					l[i - 2]++;
					l[i - 1] = 49;
					l[i - 2] = c + 1 + 48;
					i = i - 2;
					break ;
				}
				if (check_comb(comb, i, n) == 1)
				{
					insert_comb(n, comb, i);
					l[i - 1] = c + 49;
					break ;
				}
				c++;
			}
		}
		else if (n[i][0] < n[i][5])
		{
			c = false_atoi(&l[i - 1]);
			while (c <= n_comb(n[i][0], n[i][5]))
			{
				ch = comb_minus(false_atoi(&n[i][0]), false_atoi(&n[i][5]), c);
				while (++s < 4)
				{
					comb[s] = ch[s];
				}
				s = -1;
				if (comb[0] == 48)
				{
					l[i - 2]++;
					l[i - 1] = 49;
					l[i - 2] = c + 1 + 48;
					i = i - 2;
					break ;
				}
				if (check_comb(comb, i, n) == 1)
				{
					insert_comb(n, comb, i);
					l[i - 1] = c + 49;
					break ;
				}
				c++;
			}
		}
		else if (n[i][0] > n[i][5])
		{
			c = false_atoi(&l[i - 1]);
			while (c <= n_comb(n[i][0], n[i][5]))
			{
				ch = comb_max(false_atoi(&n[i][0]), false_atoi(&n[i][5]), c);
				while (++s < 4)
				{
					comb[s] = ch[s];
				}
				comb[s] = '\0';
				s = -1;
				if (comb[0] == 48)
				{
					l[i - 2]++;
					l[i - 1] = 49;
					l[i - 2] = c + 1 + 48;
					i = i - 2;
					break ;
				}
				if (check_comb(comb, i, n) == 1)
				{
					insert_comb(n, comb, i);
					l[i - 1] = c + 49;
					break ;
				}
				c++;
			}
		}
		i++;
		if (i == 5)
		{
			if (verificar(n) != 1)
			{
				printf("\nverificar(n): %i\n", verificar(n));
				printf("\nl: %s\n", l);
				l[i - 5] = l[i - 5] + 1;
				printf("\nl: %s\n", l);
				printf("\ni: %i\n", i);
				i = 1;
				printf("\ni: %i\n", i);
			}
		}
		print_table(n);
		write(1, "\n", 1);
	}
}
