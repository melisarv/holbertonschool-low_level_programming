#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table
 * @key: key, string
 * @value: value associated with the key
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *current_array = NULL, *hn = NULL;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	current_array = ht->array[index];

	while (current_array)
	{
		if (strcmp(current_array->key, key) == 0)
		{
			strcpy(current_array->value, value);
			return (1);
		}
		current_array = current_array->next;
	}

	hn = malloc(sizeof(hash_node_t));
	if (hn == NULL)
	{
		free(hn);
		return (0);
	}
	hn->key = malloc(strlen(key) + 1);
	hn->value = malloc(strlen(value) + 1);

	strcpy(hn->key, key);
	strcpy(hn->value, value);

	hn->next = ht->array[index];
	ht->array[index] = hn;
	return (1);
}
