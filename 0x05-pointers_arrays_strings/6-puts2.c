#include "main.h"

/**
 * puts2 - prints one string at 2
 * @str: string
 * Return: void
 */

void puts2(char *str)
{
	int counter = 0;
	int i = 0;
	int j;

	while (str[i] != '\0')
	{
		i++;
		counter++;
	}
	for (j = 0; j <= counter-1; j++)
	{
		if (j % 2 == 0)
			_putchar(str[j]);
	}
	_putchar('\n');
}
