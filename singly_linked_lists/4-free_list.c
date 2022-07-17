#include "lists.h"
/**
 * free_list - frees a list_t list
 *
 * @head: node
 */

void free_list(list_t *head)
{
	list_t *hold;

	while (head != NULL)
	{
		hold = head;
		hold->str = head->str;
		head = head->next;
		free(hold->str);
		free(hold);
	}
}
