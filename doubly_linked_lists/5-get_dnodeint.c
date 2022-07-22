#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 *
 * @head: head of list
 * @index: node to return
 *
 * Return: wanted node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int ittr = 0;

	if (head == NULL)
		return (NULL);

	while (ittr < index)
	{
		if (head == NULL)
			return (NULL);
		ittr++;
		head = head->next;
	}
	return (head);
}
