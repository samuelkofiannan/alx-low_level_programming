#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments
 * @ac: Number of arguments.
 * @av: Array of argument strings.
 * Return: 0
 */

char *argstostr(int ac, char **av)
{
	int i, j, k, len = 0, total = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			len++;

		total += len + 1;
		len = 0;
	}
	str = malloc(sizeof(char) * (total + 1));

	if (str == NULL)
		return (NULL);

	for (i = 0, k = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			str[k++] = av[i][j];
		str[k++] = '\n';
	}
	str[k] = '\0';
	return (str);
}
