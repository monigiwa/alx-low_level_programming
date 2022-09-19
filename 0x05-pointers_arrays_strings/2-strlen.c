#include "main.h"

/**
 * _strlen - a function that returns the length of a string
 * @s: a pointer of a stringlen
 * Return: the length of a string
 */

int _strlen(char *s)
{
	int g  = 0;

	while (*(s + g) != '\0')
		g++;
	return (g);
}
