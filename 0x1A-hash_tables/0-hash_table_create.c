#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 * Return: pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_node_t **hn = NULL;
	hash_table_t *ht = malloc(sizeof(hash_table_t));

	if (ht == NULL)
		return (NULL);

	hn = malloc(sizeof(hash_node_t *) * size);
	if (hn == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		hn[i] = NULL;

	ht->array = hn;
	ht->size = size;

	return (ht);
}
