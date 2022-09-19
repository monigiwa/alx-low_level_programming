#include "main.h"

/**
 * _puts - a function that prints a string
 * @str: pointer to the string to print
 * Return: void
 */

void _puts(char *str)
{
	int j;

	for (j = 0; 1 ; j++)
	{
		if (*(str + j) == 0)
		{
			_putchar('\n')
		}
	}
}
