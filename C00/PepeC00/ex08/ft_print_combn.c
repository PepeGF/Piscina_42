#include <unistd.h>

void	ft_print_combn (int n)
{
	char i[10];

	i[10-n] = 'y';
	i[10-(n+1)] = 177;

	write (1, &i, 10);






}

int main (void)
{
	ft_print_combn(7);
	return 0;
}