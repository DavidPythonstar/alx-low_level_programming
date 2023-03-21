#include "main.h"

/**
 * print_sign - print + or - of a number
 * @n: input of the function
 * Return: - or +
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{

		_putchar('-');
		return (-1);
	}
	else
	{

		_putchar('0');
		return (0);
	}
}
