#include <stdio.h>

char	*combinaciones_menor_mayor(int izq, int dcha, int num_combo)
{
	char	*comb;

	comb = "0000";
	if (izq == 4 && dcha == 1)
		comb = "1234";
	else if (izq == 3 && dcha == 1 && num_combo == 1)
		comb = "2134";
	else if (izq == 3 && dcha == 1 && num_combo == 2)
		comb = "1324";
	else if (izq == 3 && dcha == 1 && num_combo == 3)
		comb = "3214";
	else if (izq == 2 && dcha == 1 && num_combo == 1)
		comb = "3214";
	else if (izq == 2 && dcha == 1 && num_combo == 2)
		comb = "3124";
	else if (izq == 3 && dcha == 2 && num_combo == 1)
		comb = "2341";
	else if (izq == 3 && dcha == 2 && num_combo == 2)
		comb = "1243";
	else if (izq == 3 && dcha == 2 && num_combo == 3)
		comb = "1342";
	return (comb);
}

int main()
{
	char *combinacion;

	combinacion = combinaciones_menor_mayor ( 3, 1, 3);
	
	printf ("%s\n", combinacion);
	return 0;
}
