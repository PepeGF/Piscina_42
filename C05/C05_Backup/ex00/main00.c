#include <stdio.h>
int	ft_iterative_factorial(int nb);

int main()
{
	int wololo;

	wololo = ft_iterative_factorial(0);
	printf("0! = %i\n", wololo);
	wololo = ft_iterative_factorial(1);
	printf("1! = %i\n", wololo);
	wololo = ft_iterative_factorial(-2);
	printf("-2! = %i\n", wololo);
	wololo = ft_iterative_factorial(4);
	printf("4! = %i\n", wololo);
	wololo = ft_iterative_factorial(10);
	printf("10! = %i\n", wololo);
	return 0;
}