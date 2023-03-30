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

	for (i = 0; i <= n; i++)
	{
		dest[i] = src[i];
		if (src[i] == '\0')
			break;
	}
	return (dest);
}
