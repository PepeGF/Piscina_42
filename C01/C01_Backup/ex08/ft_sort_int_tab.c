#include <stdlib.h>
#include <stdio.h>
#include <time.h>
void	ft_sort_int_tab (int *tab, int size)
{
	int index;
	int counter;
	int temp;

	counter = 0;
	while (counter < size)
	{
	index = 0;
		while (index < size -1)
		{
			if (tab[index] > tab[index+1])
			{
				temp = tab[index];
				tab[index] = tab[index + 1];
				tab[index + 1] = temp;	

			}
			index++;
		}
		counter++;
	}
}



int main()
{
	int	lista[7];
	int	*tab;
//	int	temp;
//	int	counter;
	int size = 7;
	int index = 0;

	tab = lista;	

	srand(time(NULL));
	lista[0] = rand()%100;
	lista[1] = rand()%100;
	lista[2] = rand()%100;
	lista[3] = rand()%100;
	lista[4] = rand()%100;
	lista[5] = rand()%100;
	lista[6] = rand()%100;

	while (index < size)
	{
		printf("%i ", tab[index]);
		index++;
	}

printf("\n--------------\n");

ft_sort_int_tab(tab, size);

/*
while (counter < size)
{
index = 0;
	while (index < size -1)
	{
		if (tab[index] > tab[index+1])
		{
			temp = tab[index];
			tab[index] = tab[index + 1];
			tab[index + 1] = temp;	

		}
		index++;
	}
	counter++;
}	
*/
index = 0;


	while (index < size)
	{
		printf("%i ", lista[index]);
		index++;
	}


	return 0;
}