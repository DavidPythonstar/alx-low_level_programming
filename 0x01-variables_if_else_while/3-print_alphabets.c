#include <stdio.h>

/**
 * main - prints all alphatical letters
 * Return: 0 for success
 */

int main(void)
{
	char letter, letter2;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}

	for (letter2 = 'A'; letter2 <= 'Z'; letter2++)
	{
		putchar(letter2);
	}
	putchar('\n');
	return (0);
}
