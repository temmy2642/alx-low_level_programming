#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - For the last digit
 *
 * Return: it returns 0
 */
int main(void)
{
	int n;
	int o;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	o = n % 10;
	if (o > 5)
		printf("Last digit of %d is %d and is greater than 5", n, o);
	else if (o == 0)
		printf("Last digit of %d is %d and is 0", n, o);
	else if (o < 6 && o != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0", n, o);
	printf("\n");
	return (0);
}
