#include <unistd.h>

void	ft_is_negative(int num)
{
	char	value;

	if (num >= 0)
	{
		value = 'P';
	}
	else
	{
		value = 'N';
	}
	write (1, &value, 1);
}
