#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints numbers with the separator
 * @separator: separator
 * @n: number of aurgments
 * Return: None
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	char *str;

	va_start(list, n);
	if (separator == NULL)
		separator = "";

	for (i = 0; i < n; i++)
	{
		str = va_arg(list, char*);
		if (str == NULL)
			str = "(nil)";
		else
			printf("%s", str);
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}
