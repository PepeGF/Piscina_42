#include <stdio.h>

typedef struct s_point
{
	int x;
	int y;

}	t_point;

int main(void)
{
	t_point tab[3];
	// struct s_point tab[3];

	tab[0].x = 1;
	// (*tab).x = 1;
	// tab->x = 1;
	// tres formas de escribir lo mismo
	tab[0].y = 2;
	tab[1].x = 3;
	tab[1].y = 4;

	tab[2] = tab [0];
	printf("%d %d\n", tab[2].x,tab[2].y);
	return 0;
}

// int main(void)
// {
// 	int tab[3][2];

// 	tab[0][0] = 1;
// 	tab[0][1] = 2;
// 	tab[1][0] = 3;
// 	tab[1][1] = 4;

// 	tab[2] = tab [0];
// 	printf("%d %d\n", tab[0][0],tab[0][1]);
// 	return 0;
// }
