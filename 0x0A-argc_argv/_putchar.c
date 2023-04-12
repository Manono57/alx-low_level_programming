#include <stdio.h>
#include "main.h"

/**
 * _putchar - prints the character c to stdout
 * @c: character to be printed
 *
 * Return: returns 1 upon success and -1 on an error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
