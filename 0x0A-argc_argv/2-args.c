#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all the command line arguments
 * @argc: vounts the number arguments
 * @argv: array of arguments
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
