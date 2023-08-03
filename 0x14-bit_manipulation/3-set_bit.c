#include "main.h"

/**
 * set_bit - sets bits value to 1 at give index.
 * @n: set number
 * @index: set bit
 *
 * Return: 1 if its working or -1 for an error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	*n |=  (1UL << index);

	return (1);
}
