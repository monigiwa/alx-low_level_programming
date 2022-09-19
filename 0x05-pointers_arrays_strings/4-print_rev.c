#include "main.h"

/**
 * print_rev - function that prints a string in reverse
 * @s: pointer to the string to print in reverse
 * Return: void
 */

void print_rev(char *s)
{
	int j = 0;

	while (s[j])
	{
		_putchar(s[j]);
		j--;
	}
	_putchar('\n');
}
