#include "lists.h"
/**
 * insert_nodeint_at_index - insert a node
 *
 * @head: linked list
 * @idx: index to insert node
 * @n: data to insert
 *
 * Return: new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *hold;
	unsigned int count = 0;

	if (head == NULL)
		return (0);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	hold = *head;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	while (hold)
	{
		if (count == idx - 1)
		{
			new->next = hold->next;
			hold->next = new;
			return (new);
		}
		hold = hold->next;
		count++;
	}
	if (idx > count)
		return (NULL);

	return (NULL);
}
