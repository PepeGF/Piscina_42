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
	while (j <= 4)
	{
		if (matrix[i][j] == '4')
			cadena_verificacion[k] = 1;
		else if (matrix[i][j] == 1 && matrix[i + 1][j] == 2
		&& matrix[i + 2][j] == 3 && matrix[i + 3][j] == 4)
			cadena_verificacion[k] = 4;
		else if (((matrix[i][j] < matrix[i + 1][j])
		&& (matrix[i + 1][j] < matrix[i + 2][j])
		&& (matrix[i + 3][j] < matrix[i + 2][j]))
		|| ((matrix[i][j] > matrix[i + 1][j])
		&& (matrix[i][j] < matrix[i + 2][j])
		&& (matrix[i + 2][j] < matrix[i + 3][j]))
		|| ((matrix[i][j] < matrix[i + 1][j])
		&& (matrix[i + 1][j] > matrix[i + 2][j])
		&& (matrix[i + 1][j] < matrix[i + 3][j])))
			cadena_verificacion[k] = 3;
		else 
			cadena_verificacion[k] = 2;
		k++;
		j++;
	}
}

/*
		(((matrix[i][j] < matrix[i + 1][j])
		&& (matrix[i + 1][j] > matrix[i + 2][j])
		&& (matrix[i + 1][j] > matrix[i + 3][j]))
		|| ((matrix[i][j] > matrix[i + 1][j])
		&& (matrix[i][j] < matrix[i + 2][j])
		&& (matrix[i + 2][j] > matrix[i + 3][j]))
		|| ((matrix[i][j] > matrix[i + 1][j])
		&& (matrix[i][j] > matrix[i + 2][j])
		&& (matrix[i][j] < matrix[i + 3][j])))
*/
