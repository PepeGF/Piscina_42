#include <stdio.h>

void	ft_swap (int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int main()
{
	int f;
	int g;
	int *ptr1;
	int *ptr2;

	f = 3;
	g = 5;
	printf("%i\n", f);
	printf("%i\n", g);

	ptr1 = &f;
	ptr2 = &g;

	ft_swap (ptr1, ptr2);

	printf("%i\n", f);
	printf("%i\n", g);

	return 0;
}