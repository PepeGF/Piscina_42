void	verificar(void)
{
	char	cadena_verificacion[16];
	char	matrix[4][4];
	int		i;
	int		j;
	int		k;

	i = 1;
	j = 1;
	k = 0;
	while (i <= 4)
	{
		if (matrix[i][j] == '4')
			cadena_verificacion[k] = 1;
		if (matrix[i][j] == 1 && matrix[i + 1][j] == 2
		&& matrix[i + 2][j] == 3 && matrix[i + 3][j] == 4)
			cadena_verificacion[k] = 4;
		if (((matrix[i][j] < matrix[i + 1][j])
		&& (matrix[i + 1][j] < matrix[i + 2][j])
		&& (matrix[i + 3][j] < matrix[i + 2][j]))
		|| ((matrix[i][j] > matrix[i + 1][j])
		&& (matrix[i][j] < matrix[i + 3][j])
		&& (matrix[i + 2][j] < matrix[i + 3][j]))
		|| ((matrix[i][j] < matrix[i + 1][j])
		&& (matrix[i + 1][j] > matrix[i + 2][j])
		&& (matrix[i + 1][j] < matrix[i + 3][j])))
			cadena_verificacion[k] = 3;
		if (((matrix[i][j] < matrix[i + 1][j])
		&& (matrix[i + 1][j] > matrix[i + 2][j])
		&& (matrix[i + 1][j] > matrix[i + 3][j]))
		|| ((matrix[i][j] > matrix[i + 1][j])
		&& (matrix[i][j] < matrix[i + 2][j])
		&& (matrix[i + 2][j] > matrix[i + 3][j]))
		|| ((matrix[i][j] > matrix[i + 1][j])
		&& (matrix[i][j] > matrix[i + 2][j])
		&& (matrix[i][j] < matrix[i + 3][j])))
			cadena_verificacion[k] = 2;
	}
}
