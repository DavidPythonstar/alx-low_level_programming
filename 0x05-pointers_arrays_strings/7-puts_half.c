#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string
 * Return: void
 */

void puts_half(char *str)
{
	int counter = 0;
	int i = 0;
	int j;
	int n;

	while (str[i] != '\0')
	{
		i++;
		counter++;
	}
	if (counter % 2 == 0)
		n = counter / 2;
	else
		n = (counter - 1) / 2;
	for (j = n; j < counter - 1; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
