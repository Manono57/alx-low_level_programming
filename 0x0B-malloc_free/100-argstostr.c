#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concentenates all arguments into string
 * @ac: the number of arguments
 * @av: an array of string arguments
 *
 * Return: a pointer to a concantenated string
 */
char *argstostr(int ac, char **av)
{
	int i, j, k, len = 0;

	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			len++;

		len++;
	}
	len++;

	str = malloc(len * sizeof(char));

	if (str == NULL)
		return (NULL);

	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			str[k] = av[i][j];
			k++;
		}
		str[k] = '\n';
		k++;
	}
	str[k] = '\0';

	return (str);
}
