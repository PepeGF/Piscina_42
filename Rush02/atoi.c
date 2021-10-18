#include <unistd.h>
#include <stdio.h>

long	ft_atoi(char *str)
{
	int	i;
	long	num;

	i = 0;
	num = 0;
	while (str[i] == ' ' || str[i] == '\f' || str[i] == '\n' || str[i] == '\r'
		|| str[i] == '\t' || str[i] == '\v')
		i++;

	while (str[i] && (str[i] >= 48 && str[i] <= 57))
	{
		num = (num * 10) + (str[i] - '0');
		i++;
	}
	return (num);
}


// #include <unistd.h>
// #include <stdio.h>

// long	ft_atoi(char *str)
// {
// 	int	i;
// //	int	counterneg;
// 	long	num;

// 	i = 0;
// //	counterneg = 1;
// 	num = 0;
// 	while (str[i] == ' ' || str[i] == '\f' || str[i] == '\n' || str[i] == '\r'
// 		|| str[i] == '\t' || str[i] == '\v')
// 		i++;
	
// 	// while (str[i] == '-' || str[i] == '+')
// 	// {	
// 	// 	if (str[i] == '-')
// 	// 		counterneg *= -1;
// 	// 	i++;
// 	// }

// 	while (str[i] && (str[i] >= 48 && str[i] <= 57))
// 	{
// 		num = (num * 10) + (str[i] - '0');
// 		i++;
// 	}
// 	// write(1, "\n", 1);
// 	// write(1, "Sigo en el atoi!\n", 17);
// 	// printf("%ld\n", num);
// 	return (num);
// 	//añadir * counterneg en el return
// }