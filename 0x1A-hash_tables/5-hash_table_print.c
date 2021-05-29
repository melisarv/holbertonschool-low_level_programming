#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table
 * @ht: hash table
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *hn = NULL;
	unsigned long int idx = 0;
	int temp = 0;

	if (ht == NULL)
		return;

	printf("{");
	while (idx < ht->size)
	{
		hn = ht->array[idx];
		while (hn)
		{
			if (temp == 1)
				printf(", ");

			printf("'%s': '%s'", hn->key, hn->value);
			hn = hn->next;
			temp = 1;
		}
		idx++;
	}
	printf("}\n");
}
