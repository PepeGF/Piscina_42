#include <unistd.h>

int	validate_number(char *number_str)
{
	int i;

	i = 0;
	while (number_str[i])
	{
		if (!(number_str[i] >= '0' && number_str[i] <= '9'))
		{
			write(1, "Error\n", 6);
			return (0);
		}
		i++;
	}
	return (1);
}
