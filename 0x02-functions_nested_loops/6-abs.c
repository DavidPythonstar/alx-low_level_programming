#include "main.h"

/**
 * _abs - print the absulte value of an integer
 * @n: input
 * Return: absolute value
 */

int _abs(int n)
{
	if (n < 0)
		return (n - (2 * n));
	else
		return (n);
}
