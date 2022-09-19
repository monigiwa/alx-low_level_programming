#include "main.h"
#include <stdio.h>

/**
 * puts2 - a function that prints every other character of a string
 * @str: input string.
 * Return: nothing
 */
void puts2(char *str)
{
	int r = 0;

	while (r >= 0)
	{
		if (str[r] == '\0')
		{
			_putchar('\n');
			break;
		}
		if (r % 2 == 0)
			_putchar(str[r]);
		r++;
	}
}
