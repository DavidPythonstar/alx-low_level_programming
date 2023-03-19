#include <stdio.h>

/**
 * main - prints all alphatical letters in reverse
 * Return: 0 for success
 */

int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
