#include <stdio.h>
int	ft_iterative_power(int nb, int power);

int main()
{
	int num;
	int exp;
	int	resultado;

	num = -347;
	exp = 3;

	resultado = ft_iterative_power(num, exp);

	printf ("%i\n", resultado);


	return 0;
}
