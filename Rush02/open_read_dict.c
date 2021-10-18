#include <fcntl.h> 
#include <unistd.h>
#include <stdio.h>

int *num_lin_dict (int *fd_dict);
void close_dict(int *fd_dict);

int	*open_dict(char *dict)
{	
	int fd;    //file descriptor
	int *fd_dict;

	fd = open(dict, O_RDONLY);
	fd_dict = &fd;
	if (fd == -1)
	{
		write(1, "Dict error", 10);
		return (0);
	}
	return (fd_dict);
}


int *num_lin_dict (int *fd_dict)
{
	char buffer;
	int num_lin;
	int *p_num_lin;

	p_num_lin = &num_lin;
	num_lin = 1;
	while (read(*fd_dict, &buffer, 1) == 1)
	{
		if (buffer == 10)
			num_lin++;
	}
	close_dict(fd_dict);
	return(p_num_lin);
}

void close_dict(int *fd_dict)
{
	close (*fd_dict);
}