#include <stdio.h>
#include <unistd.h>


int	*ft_range(int min, int max);

int main(void)
{	
	int num1;
	int *punt;

	num1 = 0;
	punt = &num1;
	punt = ft_range(-14, 32);
	
	while (num1 < 32-(-14))
	{
		printf("%i,",punt[num1]);
		num1++;
	}
	return (0);
}
