#include <stdio.h>

int	n_comb(int izq, int dcha)
{
	if ((izq == 1 && dcha == 4) || (izq == 4 && dcha == 1))
		return (2);
	else if ((izq == 1 && dcha == 2) || (izq == 2 && dcha == 1))
		return (3);
	else if ((izq == 1 && dcha == 3) || (izq == 3 && dcha == 1) || (izq == 3 && dcha == 2) || (izq == 2 && dcha == 3))
		return (4);
	else if (izq == 2 && dcha == 2)
		return (7);
	else
		return (4);
}

int main()
{
	int		numero_comb;
	numero_comb = n_comb (3, 1);

	printf("Numero: %i\n", numero_comb);
	return 0;
}
