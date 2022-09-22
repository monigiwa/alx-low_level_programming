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
	int n dest_len = strlen(dest);
	int i;

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';

	return (dest);
}
