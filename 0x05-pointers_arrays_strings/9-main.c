#include "main.h"
#include <stdio.h>

/**
 * main - check code
 *
 * Return: Always 0
 */
int main(void)
{
	char sl[98];
	char *ptr;

	ptr = _strcpy(sl, "First, solve the problem. Then, write the code\n");
	printf("%s", sl);
	printf("%s", ptr);
	return (0);
}
