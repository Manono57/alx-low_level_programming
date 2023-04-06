#include "main.h"

/**
 * _strlen_recursion - counts the length of a string
 * @s: string to be measured
 *
 * Return: the length of the string
 */
int _strlen_recursion(char *s)
{
	int len;

	if (*s == '\0')

		return (0);

	else
		len = _strlen_recursion(s + 1);

	return (1 + len);
}
