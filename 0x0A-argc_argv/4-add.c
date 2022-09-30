#include <stdlib.h>
#include <stdio.h>

/**
 * main - a program that adds positive number
 * @argc: the number of command line arguments
 * @argv: an array of strings containing the program command line arguments
 * Return: returns 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i;
	int sum = 0;
	char *ptr = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		sum += strtol(argv[i], &ptr, 10);
		if (*ptr != 0)
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
