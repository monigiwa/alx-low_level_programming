#include <stdio.h>
#include <stdlib.h>
#include "calc.h"

/**
 * main - a program that performs simple arithmetic operations by calling
 * helper functions
 * @argc: the number of commandline arguments
 * @argv: an array of string containing commandline arguments per string
 * Return: returns 0
 */

int main(int argc, char *argv[])
{
	int num1, num2, result;
	int (*ptr)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	op = get_op_func(argv[2]);
	if (op == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	result = op(a, b);

	printf("%d\n", result);

	return (0);
}
