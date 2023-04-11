#include <stdio.h>
#include <stdlib.h>
/**
 * main - counts the number of commsnd line arguments
 * @argc: command count
 * @argv: a list of arguments
 * Return: alway 0 for success
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
