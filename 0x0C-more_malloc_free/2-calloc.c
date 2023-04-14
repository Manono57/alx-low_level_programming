#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * _calloc - allocates memory
 * @nmemb: specify the number of elements
 * @size: size of elements
 * Return: Always null.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}

	/*set allocated memory to 0*/
	memset(ptr, 0, nmemb * size);

	return (ptr);
}
