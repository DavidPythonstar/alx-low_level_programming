#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - asigns a value to a variable n
 * it ptints out whether the value is positive or negative
 * Return: always 0 for suceess and nonzero for failure
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("0 is zero\n");
	return (0);
}
