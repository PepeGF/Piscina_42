#include <stdio.h>

void	ft_div_mod (int a, int b, int *div, int *mod)
{	
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}


int main(void)
{	
	
	int 	c = 2334;
	int 	d = 5344653;
	int		*div;
	int		*mod;

	div = &c;
	mod = &d;

	printf("%i\n", c);
	printf("%i\n", d);

	ft_div_mod(23, 5, div, mod);

	printf("-------\n");
	printf("%i\n", c);
	printf("%i\n", d);
	return (0);
}
