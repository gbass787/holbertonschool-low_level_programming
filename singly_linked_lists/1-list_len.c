#include "lists.h"
/**
 * list_len - returns number of elements in a linked list_t list
 *
 * @h: linked list
 *
 * Return: number of nodes
 */

size_t list_len(const list_t *h)
{
	int nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		nodes++;
	}

	return (nodes);
}
