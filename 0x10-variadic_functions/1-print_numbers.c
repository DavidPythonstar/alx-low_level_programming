#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers with the separator
 * @separator: separator
 * @n: number of aurgments
 * Return: None
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	va_start(list, n);
	if (separator == NULL)
		separator = "";

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(list, int));
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}
