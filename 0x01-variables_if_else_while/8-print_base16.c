
#include <stdio.h>

/**
 * main - prints the 16 digits of hex
 * Return: 0 for success
 */

int main(void)
{
	char hex[17] = "0123556789abcdef";
	int i;

	for (i = 0; i < 16; i++)
		putchar(hex[i]);
	putchar('\n');
	return (0);
}
