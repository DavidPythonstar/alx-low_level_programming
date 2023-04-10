#include <stdio.h>

/**
 * main - prints the name of the file
 * @argc: counts counts number of commandline argument
 * @argv: an array of command line arguments
 * Return: 0 for success
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
