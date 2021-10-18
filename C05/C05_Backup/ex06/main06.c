#include <stdio.h>

int	ft_is_prime(int nb);

int main()
{
	int	num;

	num = 7;
	printf ("%i->%i\n", num, ft_is_prime(num));
	num = -7;
	printf ("%i->%i\n", num, ft_is_prime(num));
	num = 999983;
	printf ("%i->%i\n", num, ft_is_prime(num));
	num = 999989;
	printf ("%i->%i\n", num, ft_is_prime(num));
	num = 34758734;
	printf ("%i->%i\n", num, ft_is_prime(num));
	num = 101;
	printf ("%i->%i\n", num, ft_is_prime(num));
	num = 345345;
	printf ("%i->%i\n", num, ft_is_prime(num));
	num = 97912;
	printf ("%i->%i\n", num, ft_is_prime(num));
	num = 2147483647;
	printf ("%i->%i\n", num, ft_is_prime(num));
	num = 99999971;
	printf ("%i->%i\n", num, ft_is_prime(num));

	return 0;
}
