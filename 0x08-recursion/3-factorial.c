#include "main.h"

/**
 * factorial - calculates the factorial of a given number
 * @n : given number
 * Return: number of
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (1);
	return (n * (factorial(n - 1)));
}
