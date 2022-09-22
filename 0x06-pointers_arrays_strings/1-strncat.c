#include "main.h"

/**
 * _strncat - a function that concatenates two strings
 * @dest: parameter pointer to a char
 * @src: parameter pointer to a char
 * @n: amount of bytes used from src
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int count = 0;
	int count2 = 0;

	while (*(dest + count) != '\0')
	{
		count++;
	}

	while (count2 < 0)
	{
		*(dest + count) = *(src + count2);
		if (*(src + count2) == '\0')
			break;
		count++;
		count2++;
	}
	return (dest);
}
