#include "hash_tables.h"
/**
 * hash_table_get - get value associated with a key
 * @ht: hash table
 * @key: key, string
 * Return: value associated, or NULL if key couldn't be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *hn = NULL;
	unsigned long int index;

	if (ht == NULL && key == NULL)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);
	hn = ht->array[index];
	if (hn == NULL)
		return (NULL);

	while (strcmp(hn->key, key) != 0)
		hn = hn->next;

	return (hn->value);
}
