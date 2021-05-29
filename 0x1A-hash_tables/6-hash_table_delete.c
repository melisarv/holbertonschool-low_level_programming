#include "hash_tables.h"
/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned int i;
	hash_node_t *hn, *next;

	for (i = 0; i < ht->size; i++)
	{
		hn = ht->array[i];
		while (hn)
		{
			next = hn->next;
			free(hn->value);
			free(hn->key);
			free(hn);
			hn = next;
		}
	}
	free(ht->array);
	free(ht);
}
