#include "hash_tables.h"

/**
 * free_link_list - free linked list in hash table
 *
 * @head: beginning of linked list
 *
 * Return: void
 */

void free_link_list(hash_node_t *head)
{
	hash_node_t *pop_candidate;
	hash_node_t *change_node;

	pop_candidate = head;
	while (pop_candidate)
	{
		change_node = pop_candidate->next;
		free(pop_candidate->value);
		free(pop_candidate->key);
		free(pop_candidate);
		pop_candidate = change_node;
	}
}

/**
 * hash_table_delete - free hash table
 *
 * @ht: hash table
 *
 * Return: void
 */

void hash_table_delete(hash_table_t *ht)
{
	size_t idx = 0;

	while (idx < ht->size)
	{
		free_link_list(ht->array[idx]);
		idx++;
	}
	free(ht->array);
	free(ht);
}
