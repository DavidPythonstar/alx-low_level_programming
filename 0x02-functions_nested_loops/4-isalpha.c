 #include "main.h"

/**
 * _isalpha - tells if the insert character is lower case or upper case
 * @c: input for a function
 * Return: 1 if true and 0 if false
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
		return (1);
	else
		return (0);
}
