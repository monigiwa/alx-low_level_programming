#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers.
 * @a: input array.
 * @n: input n elements
 * Return: no return.
 */
void print_array(int *a, int n)
{
	int f = 0;

	for (; f < n; f++)
	{
		printf("%d", *(a + f));
		if (f != (n - 1))
			printf(", ");
	}
	printf("\n");
}
