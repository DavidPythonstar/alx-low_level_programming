#include "main.h"

/**
 * print_rev - counts letter in a strings
 * @str: string to be reversed
 * Return: void
 */

void print_rev(char *str)
{
	int counter = 0;
	int i = 0;
	int j;

	while (str[i] != '\0')
	{
		i++;
		counter++;
	}
	for (j = counter ; j >= 0; j--)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
