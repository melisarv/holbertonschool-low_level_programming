#include "lists.h"
/**
 * dlistint_len - returns the number of elements of a list
 * @h: pointer to the list
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{	size_t cont = 0;

	while (h != NULL)
	{
		h = h->next;
		cont++;
	}
	return (cont);
}
