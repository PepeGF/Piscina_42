char	*preparar_entrada(char *cadena_entrada)
{
	int		i;
	int		j;
	char	cadena_preparada[16];
	
	i = 0;
	j = 0;
	while (cadena_entrada[i] != '\0')
	{
		if (cadena_entrada[i] != ' ')
			{
			cadena_preparada[j] = cadena_entrada[i];
			j++;
			}
		i++;
	}
	cadena_preparada[j] = '\0';

	cadena_entrada = cadena_preparada;
	return (cadena_entrada);
}