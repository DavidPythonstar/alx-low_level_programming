#include "main.h"

/**
 * print_to_98 - prints natural number from n to 98
 * @n: inpit for the function
 * Return: mone
 */

void print_to_98(int n)
{
	int i, j;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i != 98)
				_putchar("%d, ", i);
			else if (i == 98)
				_putchar("%d\n", i);
		}
	} else if (n >= 98)
	{
		for (j = n; j >= 98; j--)
		{
			if (j != 98)
				_putchar("%d, ", j);
			else if (j == 98)
				_putchar("%d\n", j);
		}
	}
}
