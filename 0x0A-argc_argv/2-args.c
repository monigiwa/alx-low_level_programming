#include <stdlib.h>
#include <stdio.h>

/**
 * main - a program that prints all arguments it receives
 * @argc: the number of command-line arguments
 * @argv: an array of strings containing the command-line arguments
 * Return: return 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
