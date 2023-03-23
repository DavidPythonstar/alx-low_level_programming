#include "main.h"

/**
 * _isdigit - print out wgether a value us a digit or not
 * @c: value to be checked
 * Return: 1 for digit and 0 for none digit
 */

int _isdigit(int c)
{
	if (c >= '0' && c  <= '9')
		return (1);
	else
		return (0);
}
