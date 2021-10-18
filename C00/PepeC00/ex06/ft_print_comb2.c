#include <unistd.h>
#include <stdio.h>

void	ft_print_comb2 (void)
{
	int		first;
	int		sec;
	char	temp;
	int		aux;

	aux = 0;
	first = 0;
	while (first <= 99)
	{
		sec = first + 1;
		while (sec <= 99)
		{	
			temp = first / 10 + '0';
			write (1, &temp, 1);
			temp = first % 10 + '0';
			write (1, &temp, 1);
			write (1, " ", 1);
			temp = sec / 10 + '0';
			write (1, &temp, 1);
			temp = sec % 10 + '0';
			write (1, &temp, 1);
			if (first != 98 || sec != 99)
				write (1, ", ", 2);
			sec++;
		}
		first++;
		aux++;
	}
	 //printf ("H");
}

int main()
{
	ft_print_comb2();
	return 0;
}

