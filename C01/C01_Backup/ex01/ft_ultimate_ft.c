#include <stdio.h>

void	ft_ultimate_ft (int *********nbr)
{
	*********nbr = 42;
}

int main(int argc, char const *argv[])
{
	int a;
	int *********punt;

	********punt = &a;
	ft_ultimate_ft (********punt);

	printf("%i\n", a);

	return 0;
}