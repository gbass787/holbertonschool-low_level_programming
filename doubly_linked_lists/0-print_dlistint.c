#include "lists.h"
/**
 * print_dlistint - prints all the elements of a dlistint_t list
 *
 * @h: double linked list to be printed
 *
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int length = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		++length;
		h = h->next;
	}

	return (length);
}
