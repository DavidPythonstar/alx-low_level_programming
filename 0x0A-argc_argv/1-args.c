#include <stdio.h>

/**
 * main - pronts thhe number of command line args
 * @argc : counts the args
 * @argv: list args
 * Return: 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", (argc - 1));
	return (0);
}
