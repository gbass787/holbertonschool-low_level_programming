#include "lists.h"
/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list
 *
 * @head: node
 *
 * Return: return the sum
 */

int sum_listint(listint_t *head)
{
	int num = 0, sum = 0;

	while (head)
	{
		if (head == NULL)
			return (0);

		num = head->n;
		head = head->next;
		sum += num;
	}
	return (sum);
}
