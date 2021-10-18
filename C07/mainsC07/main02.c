#include <stdio.h>
#include <unistd.h>


int	ft_ultimate_range(int **range, int min, int max);

int main(void)
{	
	int num1;
	int *punt;
	int **doblepunt;
	int rangee;

	num1 = 0;
	punt = &num1;
	doblepunt = &punt;
	rangee = ft_ultimate_range(doblepunt, -214, 21);
	
	while (num1 < 21-(-214))
	{
		printf("%i,",punt[num1]);
		num1++;
	}
	return (0);
}
