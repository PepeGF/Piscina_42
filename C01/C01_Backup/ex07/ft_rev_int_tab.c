#include <stdio.h>

void	ft_rev_int_tab (int *tab, int size)
{
	int temp;
	int index;

	index = 0;
	while (index < size/2)
	{
		temp = tab[index];
		tab[index] = tab[size - (index + 1)];
		tab[size - (index + 1)] = temp;
		index++;
	}

}

int main()
{	

	int n;
	n=8;
	int list[] = {213,234,4636,234,745,345,346,235};
	int i;
	int *puntero;


	puntero = list;
	i = 0;
	while (i<n)
	{
		
		printf("%i ", list[i]);
		i++;
	}
	printf("\n--------\n");
	ft_rev_int_tab(puntero, n);
	i = 0;
	while (i<n)
	{
		printf("%i ", list[i]);
		i++;
	}
	return 0;
}