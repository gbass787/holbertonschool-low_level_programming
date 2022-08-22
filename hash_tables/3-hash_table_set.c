#include "hash_tables.h"

/**
 * hash_table_set - adds an element tot the hash table
 *
 * @ht: hash table
 * @key: key
 * @value: value associated with key
 *
 * Return: 1 if it succeeds, 0 if otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	char *dup_value;
	unsigned long int index = 0;
	hash_node_t *new;

	if (strcmp(key, "") == 0)
		return (0);

	dup_value = strdup(value);
	if (dup_value == NULL)
		return (0);

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);

	index = key_index((unsigned char *)key, ht->size);

	new->key = (char *)key;
	new->value = dup_value;

	if (ht->array[index] == NULL)
		new->next = NULL;
	else
		new->next = ht->array[index];

	ht->array[index] = new;

	return (1);
}
