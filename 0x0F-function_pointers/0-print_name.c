#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - print the name
 * @name: memory where name shud be printed
 * @f: functiion pinter
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL || f != NULL)
	{
		f(name);
	}
	else
		return;
}
