int	numero_combinaciones_de_linea(int izq, int dcha)
{
	if ((izq == 1 && dcha == 4) || (izq == 4 && dcha == 1))
		return (1);
	if ((izq == 1 && dcha == 2) || (izq == 4 && dcha == 1))
		return (2);
	if ((izq == 1 && dcha == 3) || (izq == 3 && dcha == 1))
		return (3);
	if (izq == 2 && dcha == 2)
		return (6);
	if ((izq == 2 && dcha == 3) || (izq == 3 && dcha == 2))
		return (3);
}
