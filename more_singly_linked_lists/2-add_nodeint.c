#include "lists.h"
/**
 * *add_nodeint - adds a node at the beginning of a listint_t list
 *
 * @head: head
 * @n: value added to node
 *
 * Return: new address
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (head == NULL)
		return (NULL);

		new = malloc(sizeof(listint_t));
		if (new == NULL)
			return (NULL);

		new->n = n;
		new->next = *head;
		*head = new;

		return (new);
}
