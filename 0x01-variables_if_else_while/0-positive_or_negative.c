#include <stdlib.h>
#include <stdlib.h>
#include <time.h>


/*
 * This program will assign a random number to the variable n
 * to print whether the number stored in the variable n
 * to check if it is positive or negative.
 * */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positve\n, n);
	else if (n == 0)
		printf("%d is zero\n, n);
	else 
		printf(%d is negative\n, n)
	return (0);
}
