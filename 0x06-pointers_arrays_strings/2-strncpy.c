#include "main.h"

/**
 * *_strncpy - function that copies strings
 * @dest: destination string
 * @src: sorce string
 * @n: number of string
 * Return: destinstion string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
		dest[i] = src[i];
	return (dest);
}
