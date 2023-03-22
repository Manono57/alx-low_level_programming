#include "main.h"
/**
 * print_sign - function to print sign
 *
 * @n: parameters to be printed
 *
 * Return: 1 if it is greater than 0, -1 if is less than 0 and otherwise
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{ _putchar('0');
		return (0);
	}
}
