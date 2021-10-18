#include <stdio.h>

int	ft_recursive_factorial(int nb);

int main()
{
	int	valor;
	valor = ft_recursive_factorial(0);
	printf("0! = %i\n",valor);
	valor = ft_recursive_factorial(1);
	printf("1! = %i\n",valor);
	valor = ft_recursive_factorial(2);
	printf("2! = %i\n",valor);
	valor = ft_recursive_factorial(20);
	printf("20! = %i\n",valor);
	valor = ft_recursive_factorial(-10);
	printf("-10! = %i\n",valor);
	return 0;
}