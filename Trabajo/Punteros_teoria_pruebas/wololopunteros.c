#include <stdio.h>

int main()
{
	/*int a;
	int *ptr;
	int b;
	void *punt;

	a = 56;
	ptr = &a;
	printf("%d\n", *ptr);
	printf("%p\n", ptr);

	b = sizeof (punt);
	printf("%i\n", b);*/

	int x;
	int *p;
	int y;

	x = 7;
	*p = x;

	printf("%i\n", *p);
	printf("%i\n", x);

	x = 8;
	(*p)++;
	printf("%i\n", *p);

	return 0;
}