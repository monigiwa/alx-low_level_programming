#include "main.h"

/**
 * rev_string - a function that reverses a string
 * @s: string to be reversed
 * Return: 0
 */

void rev_string(char *s)
{
	int r = 0, m, n;
	char *str, temp;

	while (r >= 0)
	{
		if (s[r] == '\0')
			break;
		r++;
	}
	str = s;

	for (m = 0; m < (r - 1); m++)
	{
		for (n = m + 1; n > 0; n--)
		{
			temp = *(str + n);
			*(str + n) = *(str + (n - 1));
			*(str + (j - 1)) = temp;
		}
	}
}
