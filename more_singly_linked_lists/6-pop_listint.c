#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list, and returns
 * the head node's data (n).
 *
 * @head: pointer to head node
 *
 * Return: returns head node data
 */

int pop_listint(listint_t **head)
{
	listint_t *hold;
	int data;

	if (*head == NULL)
		return (0);

	while (*head != NULL)
	{
		data = (*head)->n;
		hold = *head;
		*head = (*head)->next;
		free(hold);
		break;
	}
	return (data);
}
