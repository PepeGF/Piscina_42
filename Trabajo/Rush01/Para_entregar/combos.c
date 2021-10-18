char	*comb_equal(int num_combo)
{
	char	*comb;

	comb = "0000";
	if (num_combo == 1)
		comb = "3412";
	else if (num_combo == 2)
		comb = "1423";
	else if (num_combo == 3)
		comb = "2413";
	else if (num_combo == 4)
		comb = "2143";
	else if (num_combo == 5)
		comb = "3142";
	else if (num_combo == 6)
		comb = "3241";
	return (comb);
}

char	*comb_minus(int izq, int dcha, int num_combo)
{
	char	*comb;

	comb = "0000";
	if (izq == 1 && dcha == 2 && num_combo == 1)
		comb = "4123";
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

char	*comb_max(int izq, int dcha, int num_combo)
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
