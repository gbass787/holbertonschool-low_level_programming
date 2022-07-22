#include "lists.h"
/**
 * sum_dlistint - returns the sum of all the data (n) of
 * a dlistint_t linked list
 *
 * @head: head of list
 *
 * Return: sum of all data, 0 if empty
 */

int sum_dlistint(dlistint_t *head)
{
	int total = 0;

	if (head == NULL)
	{
		return (0);
	}
	while (head)
	{
		total += head->n;
		head = head->next;
	}
	return (total);
}
