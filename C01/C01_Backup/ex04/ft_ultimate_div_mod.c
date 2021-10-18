#include <stdio.h>

void	ft_ultimate_div_mod (int *a, int *b)
{
	int aux;

	aux = *a;
	*a = aux / *b;
	*b = aux % *b;

}

int main()
{	
int prim;
int sec;
int *a;
int *b;



a = &prim;
b = &sec;


prim = 6724;
sec = 234;

printf("%i\n", *a);
printf("%i\n", *b);

printf("-----------\n");

ft_ultimate_div_mod (a, b);

printf("%i\n", prim);
printf("%i\n", sec);

printf("-----------\n");

printf("%i\n", *a);
printf("%i\n", *b);
	return 0;
}