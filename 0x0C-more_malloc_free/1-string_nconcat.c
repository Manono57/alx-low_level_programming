#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenates n bytes of a string to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_str;
	unsigned int s1_len = 0, s2_len = 0, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (*(s1 + s1_len))
		s1_len++;
	while (*(s2 + s2_len))
		s2_len++;

	if (n < s2_len)
		n = s2_len;

	new_str = malloc(sizeof(char) * (s1_len + n + 1));

	if (new_str == NULL)
	return (NULL);

	for (i = 0; i < s1_len; i++)
	*(new_str + i) = *(s1 + i);

	for (j = 0; j < n; j++)
	*(new_str + s1_len + j) = *(s2 + j);

	*(new_str + s1_len + n) = '\0';

	return (new_str);
}
