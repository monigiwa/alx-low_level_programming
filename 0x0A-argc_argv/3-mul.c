#include <stdlib.h>
#include <stdio.h>

/**
 * main - a program that multiplies two numbers
 * @argc: the number of command-line arguments
 * @argv: an array of strings containing the command-line arguments
 * Return: returns 0 (Success)
 */

int main(int argc, char *argv[])
{	
	int result = 1, i;

	for (i = 1; i < argc; i++)
	{
		int x = strtol(argv[i], NULL, 10);
		result = result * x;
	}
	printf("%d\n", result);
	return (0);
}
