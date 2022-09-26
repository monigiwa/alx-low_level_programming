#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: initial segment
 * @accept: accepted bytes
 * Return: the number of the accepted bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, c;

	for (i = 0; s[i] != 0; i++)
	{
		if (s[i] == ' ')
			break;
		for (j = 0; accept[j] != 0; j++)
		{
			if (s[i] == accept[j])
				c++;
		}
	}
	return (c);
}
