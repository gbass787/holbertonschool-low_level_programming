#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 *
 * @head: linked list
 * @index: nth
 *
 * Return: nth of nodes
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}
	return (head);
}
