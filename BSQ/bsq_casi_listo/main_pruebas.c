
#include <stdio.h>
void	write_full(int row_del_punto, int col_del_punto, int lado_cuadrado, char **tablero);
int	check_square(int point_row, int point_col, int lado_cuadrado, char **tablero);


int	check_square(int point_row, int point_col, int lado_cuadrado, char **tablero)
{
	int	result;
	int	i;
	int	j;

	i = point_row;
	j = point_col;
	result = 0;
	while (i < point_row + lado_cuadrado)	
	{	
		j = point_col;
		while (j < point_col + lado_cuadrado)
		{
			printf("%c\n", tablero[i][j]);
			if (tablero[i][j] == 'o')
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	place_square(int widht, int height,int lado_cuadrado, char **tablero)
{
	int	point_row;		//son las coordenadas del vértice sup izq
	int	point_col;

	point_row = 0;
	while (point_row < widht - lado_cuadrado)
	{	
		point_col = 0;
		while (point_col < height - lado_cuadrado)
		{
			printf("%i", check_square(point_row, point_col, lado_cuadrado, tablero));
			// if(check_square(point_row, point_col, lado_cuadrado, tablero) == 1)
			// 	write_full(point_row, point_col,  lado_cuadrado, tablero);
			point_col++;
		}
		point_row++;
	}
	//si llega aquí es que no hay ningún sitio donde ubicar el cuadrado
}

// funcion/bucle para comprobar el cuadrado colocado
void	write_full(int row_del_punto, int col_del_punto, int lado_cuadrado, char **tablero)
{
	(void) tablero; // QUITSSR
	int	i;
	int	j;

	i = row_del_punto;
	j = col_del_punto;
	
	while (i < row_del_punto + lado_cuadrado)		
	{
		j = col_del_punto;
		while (j < col_del_punto + lado_cuadrado)
		{
			//tablero[i][j] = 'x';
			printf("X");
			j++;
		}
		printf("\n");
		i++;
	}
}





int main()
{
	char *tablero_mio[10];

	tablero_mio[0] = "..oo...o..";
	tablero_mio[1] = "....o.....";
	tablero_mio[2] = "..........";
	tablero_mio[3] = "...o......";
	tablero_mio[4] = "..........";
	tablero_mio[5] = "..........";
	tablero_mio[6] = "..........";
	tablero_mio[7] = "..........";
	tablero_mio[8] = "o....o....";
	tablero_mio[9] = "..........";

	//place_square(10, 10, 6, tablero_mio);

	//printf("%c\n", tablero_mio[1][4]);

	// int num = check_square(3, 4, 6, tablero_mio);
	// printf ("Es valido? ---> %i\n", num);


	//tablero_mio[1][1] = 'w';
	write_full(2,4,6, tablero_mio);

	printf("Printing array...\n");
	int hhh = 0;
	int jjj = 0;
	while (hhh < 10)
	{
		jjj = 0;
		while (jjj < 10)
		{
			printf("%c", tablero_mio[hhh][jjj]);
			jjj++;
		}
		printf("\n");
		hhh++;
	}
	//printf("%c OK", tablero_mio[4][8]);
	return 0;
}
