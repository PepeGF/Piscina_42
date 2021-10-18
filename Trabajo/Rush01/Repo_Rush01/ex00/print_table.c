void	print_table(char n[6][6])
{
	int	i;
	int	j;

	i = 0;
	while (i < 6)
	{
		j = 0;
		while (j < 6)
		{
			write(1, &n[i][j], 1);
			j++;
		}
		i++;
		write(1, "\n", 1);
	}
}
