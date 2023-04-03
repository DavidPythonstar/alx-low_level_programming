#include "main.h"

/**
 *_memset - fill a certain number of memory with constant character
 * @b: character to fill the memory with
 * @s: the block of memery
 * @n: number of memery
 * Return: Char
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
