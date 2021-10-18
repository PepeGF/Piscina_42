#include <fcntl.h> //para funcion open
#include <stdio.h>
#include <unistd.h> //write y read
long	ft_atoi(char *str);
int	validate_number(char *number_str);
int	*open_dict(char *dict);
int *num_lin_dict (int *fd_dict);
void create_dict(int *fd_dict, int *p_num_lin, char *dict);

//incluir funciones en el .h definitivo
typedef struct s_lin_dict
{
	int num_int;
	char *num_char;
}	t_lin_dict;


int main(int argc, char *argv[])
{
	long	num;
	int fd;
	int *fd_dict;

	num = 0;
	if (argc > 3)
		return (0); 
	if (argc == 2 && validate_number(argv[1]) == 0)
		return (0);
	if (argc == 3 && validate_number(argv[2]) == 0)
		return (0);
	num = ft_atoi(argv[argc-1]);
	if (num > 4294967295)
	{
		write (1, "Numero introducido demasiado grande.", 36);
		return (0);
	}
	
	fd_dict = &fd;
	if (argc == 2)
	{
		fd = open_dict("numbers.dict");
		if (fd == 0)
			return (0);
	}
	if (argc == 3)
	{
	fd = open_dict(argv[1]);
		if (fd == 0)
			return (0);
	}
	
return (0);
}

