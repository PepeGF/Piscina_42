void	display_str(char *str);

int main(int argc, char const *argv[])
{
	display_str("Hello World!\n");
	return (0);
}


/* 
Para crear la biblioteca se necesitan archivos .o
gcc -c nombrearchivo.c -> crea el nombrearchivo.o

ar rc libnombrebiblioteca.a nombrearchivo1.o nombrearchivo2.o

se crea un archivo libnombrebilioteca.a

gcc -Wall -Werror -Wextra main.c -L. lnombrebiblioteca

ranlib libnombrebiblioteca.a (crea un index en la biblioteca para que gcc busque
 la función más rápidamente)*/
