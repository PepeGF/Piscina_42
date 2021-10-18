#include <unistd.h>
#include <stdio.h>

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}

char	*ft_strcpy(char *dest, char *src)
{
	int	c;

	c = 0;
	while (src[c])
	{
		dest[c] = src[c];
		c++;
	}
	dest[c] = '\0';
	return (dest);
}

int main()
{	
	char	cadena_entrada[] = "bay\\f87t. º s78d\tf ç+*|@#¢∞¬÷“!#¢∞¬÷“”≠·$%&/()8yb*^ÇÇ_:;–…„}{‚´“÷hsd";

	char	cadena_salida[] = "bay\\f87t. º sadjgbjalsbda sgdhhfbsalydgfluasdifasul gjasbdglig ashlbglghdb lgbdaj fjbg ljbdhfjhb lsdfhfg jhdfflhghb djfbgjh hdb fgjbdadjfjbg ijdf gkjddfgjsd.kjf bgljhafdgkjbdbflj gb s78d\tf ç+*Ñ*Ñ^*)\n=II8ybhsd";
	char 	*destino;
//	char	*origen;

	destino = cadena_salida;
//	origen = cadena_entrada;

	destino = ft_strcpy (cadena_salida, cadena_entrada);


	ft_putstr(cadena_salida);
	

	return 0;
}