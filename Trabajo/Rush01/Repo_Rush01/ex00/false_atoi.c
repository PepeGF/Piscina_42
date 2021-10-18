int	false_atoi(char *str)
{
	int	result;

	result = 0;
	result = result * 10 + str[0] - '0';
	return (result);
}
