
#include <stdlib.h>
#include <stdio.h>

int ft_strlen (char *str)
{
	int i;
	i = 0;
	while (str[i])
		i++;
	return(i);
}

int ft_lentotal (int size, char **str, char *sep)
{
	int total;
	int i; 
	i = 0;
	while (i < size)
	{
		total += ft_strlen(str[i]);
		i++;
	}
	total += (ft_strlen(sep) * (size - 1));
	total++;
	return(total);
}


char *ft_strjoin(int size, char **str, char *sep)
{
	char *dst;
	int i, j, k;
	i = 0;
	j = 0;
	k = 0;
	dst = malloc(sizeof(char) * ft_lentotal(size, str, sep));

	while (i < size)
	{
		j = 0;
		while(str[i][j])
		{
			dst[k] = str[i][j];
			k++;
			j++;

		}
		j = 0;
		while (sep[j] && i < size -1)
		{
			dst[k] = sep[j];
			k++;
			j++;
		}
		i++;
	}
	dst[k] = 0;
	return(dst);
}

int main (int argc, char *argv[])
{
	char *tmp;
	tmp =  ft_strjoin(argc, argv, " ");
	printf("%s", tmp);
	free(tmp);
	return(0);
}