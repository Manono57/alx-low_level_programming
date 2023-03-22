#include "main.h"

/**
 * _isalpha - prints lower or upper case
 *
 * @c: parameter to be printed
 *
 * Return: prints 1 if its upper or lower case otherwise is 0
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
