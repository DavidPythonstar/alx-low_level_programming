#include <unistd.h>

/**
 * _putchar - prints character to stardard out put
 * Return: 1 for success
 */

int _putchar(char c)
{
	return(write(1, &c, 1));
	
}
