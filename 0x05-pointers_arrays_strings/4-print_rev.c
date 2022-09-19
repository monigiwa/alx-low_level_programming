#include "main.h"

/**
 * print_rev - function that prints a string in reverse
 * @s: pointer to the string to print in reverse
 * Return: void
 */

void print_rev(char *s)
{
	int j = 0;

	while (j >= 0)
	{
		if (s[j] == '\0')
			break;
		j++;
	}

	for (j--; j >= 0; j--)
		_putchar(s[j]);
	_putchar('\n');
}
