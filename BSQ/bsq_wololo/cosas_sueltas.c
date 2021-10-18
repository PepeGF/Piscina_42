// función/bucle para el cuadrado a probar
void	place_square(int lado_tablero, int lado_cuadrado, int **tablero)
{
	int	point_row;		//son las coordenadas del vértice sup izq
	int	point_col;

	point_row = 0;
	while (point_row < lado_tablero - lado_cuadrado)
	{	
		point_col = 0;
		while (point_col < lado_tablero - lado_cuadrado)
		{
			if(check_square(point_row, point_col, lado_cuadrado, tablero) == 0)
				break ;
			point_col++;
		}
		point_row++;
	}
	//si llega aquí es que no hay ningún sitio donde ubicar el cuadrado
}

// funcion/bucle para comprobar el cuadrado colocado

int	check_square(int point_row, int point_col, int lado_cuadrado, int **tablero)
{
	int	result;
	int	i;
	int	j;

	i = point_row;
	j = point_col;
	result = 0;
	while (i <= point_row + lado_cuadrado)		//no estoy seguro del =
	{
		while (j <= point_col + lado_cuadrado)	//no estoy seguro del =
		{
			if (tablero[i][j] == 0)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}










int	main(void)
{

}
