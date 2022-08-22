#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves a value associated with a key
 *
 * @ht: hash table
 * @key: key we're looking for
 *
 * Return: value associated with element
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned int index = 0;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);

	while (ht->array[index])
	{
		if (strcmp((char *)(ht->array[index]->key), (char *)key) == 0)
			return (ht->array[index]->value);

		ht->array[index] = ht->array[index]->next;
	}
	return (NULL);
}
