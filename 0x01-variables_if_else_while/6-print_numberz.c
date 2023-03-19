x#include <stdio.h>

/**
 * main - prints all single digits of base 0
 * Return: 0 for success
 */

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar((i) + '0');
		i++;
	}
	putchar('\n');

	return (0);
}
