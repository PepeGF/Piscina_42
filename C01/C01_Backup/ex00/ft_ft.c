#include <stdio.h>

void	ft_ft (int *nbr)
{
	*nbr = 42;
}

int main()
{
	int a;
	int *puntero;

	puntero = &a;
	ft_ft(puntero);

	printf("%i\n", a);
	return 0;
}