#include <stdio.h>
void	*ft_print_memory(void *addr, unsigned int size);


int main(int argc, char const *argv[])
{
	int *puntero;
	int wololo;


	wololo = 2873;
	puntero = &wololo;

	printf("%p\n", puntero);
	return 0;
}