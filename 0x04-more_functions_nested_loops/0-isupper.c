#include "main.h"

/**
 * _isupper - print one if the value is upper
 * @c: parameter for the function
 * Return: 1 for upper
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
