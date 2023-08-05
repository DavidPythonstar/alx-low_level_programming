#include <stdio.h>

/**
 * main - prints the file name
 * @argc:  number of command line args
 * @argv: array of args
 * Return: 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);

}
