#include "main.h"
#include <stdlib.h>

/**
 * count_words - Counts the number of words in a string
 * @str: String to count words in
 *
 * Return: Number of words
 */
int count_words(char *str)
{
	int i, count = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			count++;
	}

	return (count);
}

/**
 * strtow - Splits a string into words
 * @str: String to split
 *
 * Return: Pointer to an array of strings (words)
 */
char **strtow(char *str)
{
	char **words;

	int i, j, k, len, num_words;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	num_words = count_words(str);
	words = malloc((num_words + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);

	for (i = 0, j = 0; j < num_words; j++)
	{
		while (str[i] == ' ')
			i++;

		len = 0;
		while (str[i + len] != ' ' && str[i + len] != '\0')
			len++;

		words[j] = malloc((len + 1) * sizeof(char));
		if (words[j] == NULL)
		{
			for (k = 0; k < j; k++)
				free(words[k]);
			free(words);
			return (NULL);
		}

		for (k = 0; k < len; k++)
			words[j][k] = str[i + k];
		words[j][k] = '\0';
		i += len;
	}

	words[num_words] = NULL;
	return (words);
}
