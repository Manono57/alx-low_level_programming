#include <stdio.h>
#include "main.h"

/**
 * main - main function
 * _atoi -converts astring to an integer
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: the int converted from the string
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n")
			return (1);
	}
	int num1 = _atoi(argv[1]);

	int num2 = _atoi(argv[2]);

	int result = num1 * num2;

	printf("%d\n", result);

	return (0);
}
