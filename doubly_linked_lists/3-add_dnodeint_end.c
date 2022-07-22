#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 *
 * @head: head of the linked list
 * @n: number to place in the new node
 *
 * Return: new head
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *current = NULL, *new = NULL;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (*head);
	}
	current = *head;
	while (current->next != NULL)
	{
		current = current->next;
	}
	current->next = new;
	new->prev = current;
	return (new);
}
