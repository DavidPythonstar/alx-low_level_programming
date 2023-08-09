#include <mstdio.h>
#include "main.h"
#include <stdlib.h>

/**
* argstostr - adds all args
* @ac: argument count.
* @av: pointer to array of size ac.
* Return: char
*/

char *argstostr(int ac, char **av)
{
	int i, j, k, size = 0;
	char *arg;


	if (ac == 0 || av == NULL)
		return (NULL);
	while (i < ac)
	
		while (av[i][j])
		{
			size++;
			j++;
		}
		size++;
		i++;
	}
	arg = malloc((sizeof(char) * size) + 1);
	if (arg == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			arg[k] = av[i][j];
			j++;
			k++;
		}
		arg[k] = '\n';
		k++;
		i++;
	}
	arg[k] = '\0';
	return (arg);
}
