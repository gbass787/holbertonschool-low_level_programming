#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_set - function adds an element to the hash table
 *
 * @ht: hash table you want to add or update the key/value to
 * @key: the key, cannot be an empty string
 * @value: value associated with key, value must be duplicated,
 * value can be an empty string
 *
 * Return: 1 on sucess, 0 on fail
 *
 * In case of collision, add new node at the beginning of the list
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *newNode = NULL;
	char *key_copy, *value_copy;
	unsigned long int index = 0;

	if ((strcmp(key, "") == 0) || key == NULL || value == NULL || ht == NULL)
		return (0);

	key_copy = strdup(key);
	value_copy = strdup(value);

	newNode = malloc(sizeof(hash_node_t));
		if (newNode == NULL)
			return (0);
	newNode->key = key_copy;
	newNode->value = value_copy;

	index = key_index((const unsigned char *)key, ht->size);

	if (ht->array[index] == NULL)
		newNode->next = NULL;
	else
		newNode->next = ht->array[index];

	ht->array[index] = newNode;

	return (1);
}
