#include "main.h"

/**
 * positive_or_negative - prints if positive or negative
 * @i: parameters of a function
 * Return: always 0
 */

void positive_or_negative(int i)
{
	if (i < 0)
		printf("%d is negative\n", i);
	else
		printf("%d is positive\n", i);
}
