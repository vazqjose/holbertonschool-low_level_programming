#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int lastdigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	lastdigit = n % 10;

	printf("The last digit of %d is %d", n, lastdigit);

	if (lastdigit > 5)
	{
		printf(" and is greater than 5\n");
	}
	else if (lastdigit != 0 && lastdigit < 6)
	{
		printf(" and is less than 6 and not 0\n");
	}
	else /* it must be 0	*/
	{
		printf(" is 0\n");
	}

	return (0);
}
