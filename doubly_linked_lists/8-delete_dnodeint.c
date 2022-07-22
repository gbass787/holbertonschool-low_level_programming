#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index index of
 * a dlistint_t linked list
 *
 * @head: linked list
 * @index: index to delete node
 *
 * Return: 1 if succeded or -1 if failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *hold, *new;
	unsigned int count = 0;

	if (*head == NULL || head == NULL)
	{
		return (-1);
	}

	hold = *head;
	if (index == 0)
	{
		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}
		*head = (*head)->next;
		free(hold);
		return (1);
	}
	while (hold)
	{
		if (count == index - 1)
		{
			new = hold->next;
			hold->next = new->next;
			free(new);
			return (1);
		}
		hold = hold->next;
		count++;
	}
	if (index > count)
		return (-1);

	return (-1);
}
