#include "lists.h"

/**
 * listint_len - caculate the number of elements in a linked list
 * @h: pointer to the list_t
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
		size_t cont = 0;

		while (h != NULL)
		{
			h = h->next;
			cont++;
		}
		return (cont);
}
