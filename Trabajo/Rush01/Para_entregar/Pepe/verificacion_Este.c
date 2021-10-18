void	verificar(void)
{
	char	cadena_verificacion[16];
	char	matrix[4][4];
	int		i;
	int		j;
	int		k;

	i = 1;
	j = 1;
	k = 12;
	while (i <= 4)
	{
		if (matrix[i][j + 3] == '4')
			cadena_verificacion[k] = 1;
		else if (matrix[i][j + 3] == 1 && matrix[i][j + 2] == 2
		&& matrix[i][j + 1] == 3 && matrix[i][j] == 4)
			cadena_verificacion[k] = 4;
		else if (((matrix[i][j + 3] < matrix[i][j + 2])
		&& (matrix[i][j + 2] < matrix[i][j + 1])
		&& (matrix[i][j] < matrix[i][j + 1]))
		|| ((matrix[i][j + 3] > matrix[i][j + 2])
		&& (matrix[i][j + 3] < matrix[i][j + 4])
		&& (matrix[i][j + 1] < matrix[i][j]))
		|| ((matrix[i][j + 3] < matrix[i][j + 2])
		&& (matrix[i][j + 2] > matrix[i][j + 1])
		&& (matrix[i][j + 2] < matrix[i][j])))
			cadena_verificacion[k] = 3;
		else
			cadena_verificacion[k] = 2;
		k++;
		i++;
	}
}
