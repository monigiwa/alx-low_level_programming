#include "main.h"

/**
 * print_rev - function that prints a string in reverse
 * @str: pointer to the string to print in reverse
 * Return: void
 */

void print_rev(char *s)
{
	int j = 0;

	while (str[j])
	{
		_putchar(str[j]);
		j--;
	}
	_putchar('\n');
}
