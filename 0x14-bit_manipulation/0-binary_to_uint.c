#include <stdio.h>

/**
 * binary_to_uint - converts binary to an unsigned int.
 * @b: char string
 * Return: a decimal number or 0 if not decimal number.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int total = 0;

	if (b == NULL)
		return (0);
	while (*b)

	{
	if (*b != '0' && *b != '1')
		return (0);

	total = total * 2 + (*b - '0');
	b++;
	}
	return (total);
}
