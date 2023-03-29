#include "main.h"

/**
 * _strncat - add two strings
 * @dest: first string
 * @src: second string
 * @n: number of charaters
 * Return: concatenated stringt
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}


	j = 0;


	while (src[j] <= n && j != '\0')

	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
