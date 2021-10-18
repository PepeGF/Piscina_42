
#include <stdio.h>
int	verificar(char n[6][6])
{
	char 	cadena_verificacion[4];
	int		i;
	int		j;
	int		k;

	i = 1;
	j = 1;

	while (j <= 4)
	{
		if (n[i][j] == '4')
			cadena_verificacion[k] = '1';
		else if (n[i][j] == '1' && n[i + 1][j] == '2'
		&& n[i + 2][j] == '3' && n[i + 3][j] == '4')
			cadena_verificacion[k] = '4';
		else if (((n[i][j] < n[i + 1][j])
		&& (n[i + 1][j] < n[i + 2][j])
		&& (n[i + 3][j] < n[i + 2][j]))
		|| ((n[i][j] > n[i + 1][j])
		&& (n[i][j] < n[i + 2][j])
		&& (n[i + 2][j] < n[i + 3][j]))
		|| ((n[i][j] < n[i + 1][j])
		&& (n[i + 1][j] > n[i + 2][j])
		&& (n[i + 1][j] < n[i + 3][j])))
			cadena_verificacion[k] = '3';
		else 
			cadena_verificacion[k] = '2';
		k++;
		j++;
	}
	printf ( "%s\n", cadena_verificacion);
}

