#include "main.h"

/**
 * clear_bit - value is set to 0 at a given index.
 * @n: sets number
 * @index: set bit
 *
 * Return: 1 if its working, -1 if its an error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int set;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	set = ~(1 << index);
	*n = *n & set;
	return (1);
}
