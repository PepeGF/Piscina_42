#include <unistd.h>
#include <stdio.h>

void	ft_print_min (void)
{
	write (1, "-", 1);
	write (1, "2", 1);
	write (1, "1", 1);
	write (1, "4", 1);
	write (1, "7", 1);
	write (1, "4", 1);
	write (1, "8", 1);
	write (1, "3", 1);
	write (1, "6", 1);
	write (1, "4", 1);
	write (1, "8", 1);
}

void	ft_putnbr (int num)
{
	if (num == -2147483648)
	{	num ++;
	
	}
	if (num < 0)
	{
		write (1, "-", 1);
		num = num * -1;
	}
	if (num > 9)
	{	
		ft_putnbr (num / 10);		
	}
	//printf("%i\n", num);
	num = num % 10 + '0';
	write (1, &num, 1);
}

int main()
{
	ft_putnbr(-2147483648);
	return 0;
}
