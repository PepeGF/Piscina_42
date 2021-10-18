char	*combinaciones_menor_mayor(int izq, int dcha, int num_combo)
{	
	char	*comb;

	comb = "0000";
	if (izq == 1 && dcha == 2 && num_combo == 1)
		comb = "1234";
	else if (izq == 1 && dcha == 2 && num_combo == 2)
		comb = "4213";
	else if (izq == 1 && dcha == 3 && num_combo == 1)
		comb = "4312";
	else if (izq == 1 && dcha == 3 && num_combo == 2)
		comb = "4231";
	else if (izq == 1 && dcha == 3 && num_combo == 3)
		comb = "4132";
	else if (izq == 1 && dcha == 4)
		comb = "4321";
	else if (izq == 2 && dcha == 3 && num_combo == 1)
		comb = "1432";
	else if (izq == 2 && dcha == 3 && num_combo == 2)
		comb = "3421";
	else if (izq == 2 && dcha == 3 && num_combo == 3)
		comb = "2431";
	return (comb);
}
