#include "lists.h"
/**
  * free_dlistint - frees a dlistint_t list
  *
  * @head: The head of linked list
  *
  */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
