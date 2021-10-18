char	*comb_equal(int izq, int dcha, int num_combo)
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
