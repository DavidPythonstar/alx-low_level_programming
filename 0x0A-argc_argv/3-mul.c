#include <stdio.h>
#include <stdlib.h>

/**
 * main - multipies arguments
 * @argc: argument count
 * @argv: argument array
 * Return: always  0
 */

int main(int argc, char *argv[])
{
	int answer;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		answer = (atoi(argv[1]) * atoi(argv[2]));
		printf("%d\n", answer);
	}
	return (0);
}
