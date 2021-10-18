#include <unistd.h>

void	ft_print_comb(void)
{
	char	i[3];

	i[0] = '0';
	while (i[0] <= '9')
	{
		i[1] = '0';
		while (i[1] <= '9')
		{
			i[2] = '0';
			while (i[2] <= '9')
			{				
				if (i[0] < i[1] && i[1] < i[2])
				{
					if (i[0] != '0' || i[1] != '1' || i[2] != '2')
					{
						write (1, ", ", 2);
					}
					write (1, &i, 3);
				}
				i[2]++;
			}
			i[1]++;
		}
		i[0]++;
	}
}
