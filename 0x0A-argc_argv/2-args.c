#include <stdio.h>

/**
 * main - prints all the commandline args
 * @argc: counts
 * @argv: array pointer
 * Return: 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
