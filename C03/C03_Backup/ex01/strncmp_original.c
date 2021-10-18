#include <stdio.h>
#include <string.h>

int main(void)
{
	unsigned int  n;
      int retorno;
      char cadena_s1[] = "ab";
      char cadena_s2[] = "abc";

	  n = 3;
      retorno = strncmp (cadena_s1, cadena_s2, n);
      printf("%i\n", retorno);
}
