#include "main.h"

/**
 * _memcpy - copies mory
 * @dest: destination pointer
 * @src: source pointer
 * @n: number of memory
 * Return: char
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		src[i] = dest[i];
		i++;
	}
	return (dest);
}
