#include <stdio.h>
#include <string.h>
 
int array_to_int (int to_convert[])
{ //codigo que funciona por algun motivo lool
	int i, k = 0;
	for (i = 0; i < 4; i++)
		k = 10 * k + to_convert[i];
	return k;
}
 
int main()
{
	int bruteforce[4] = {0,0,0,0}; // esto no sirve pa na lol
	int counter_total = 0;
 
	int down_limit = 1;
	int upper_limit = 4;
 
	bruteforce[0] = down_limit;
	while (bruteforce[0]<=upper_limit){
		//printf("%c ", bruteforce[0]);
		bruteforce[1] = down_limit;
		while (bruteforce[1]<=upper_limit){
			bruteforce[2] = down_limit;
			while (bruteforce[2]<=upper_limit){
				bruteforce[3] = down_limit;
				while (bruteforce[3]<=upper_limit){
//					int cntr = 0;
					int a,b,c,d;
					a = bruteforce[0];
					b = bruteforce[1];
					c = bruteforce[2];
					d = bruteforce[3];
 
					if (a != b && a != c && a != d &&  b != c && b != d && c != d)
					{
						printf("%i ", array_to_int(bruteforce));
						counter_total++;
						}
					bruteforce[3]++;
				}
				bruteforce[2]++;
			}
			bruteforce[1]++;
		}
		bruteforce[0]++;
	}
 
	printf("\n --- Total combinations: %i --- \n", counter_total);
 
	return(0);
}