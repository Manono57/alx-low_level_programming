#include "main.h"

/**
 * reverse_array -reverves content of an array
 * @a: function parameter
 * @n: function parameter
 * Return: Always 0.
 */
void reverse_array(int *a, int n)
{
	int i;
	int j;

	for (i = 0 ; i < n / 2 ; i++)
	{
		j = a[i];
		a[i] = a[n - 1];
		a[n - 1 - i] = j;
	}
}
