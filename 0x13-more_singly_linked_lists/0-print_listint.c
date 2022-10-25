#include "lists.h"

/**
* print_listint - a function that prints all elements of a singly-linked list
* @h: a pointer to a listint_t list
* Return: returns the number of nodes
*/
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		printf("%d\n", h->n);
		i++;
		h = h->nex;
	}
	return (i);
}
