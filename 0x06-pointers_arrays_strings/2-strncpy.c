#include "main.h"

/**
 * _strncpy - copies from one string to another
 * @dest: where to copy to
 * @src: where to copy from
 * @n: number of values to be copied
 * Return: copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
