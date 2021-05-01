#include "lists.h"
/**
 * insert_dnodeint_at_index - insert a new node at a given position
 * @h: pointer to the list
 * @idx: index of the node be added
 * @n: value of node
 * Return: pointer of the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int cont = 0;
	dlistint_t *new, *temp1;

	temp1 = *h;
	if (idx == 0)
		return (add_dnodeint(h, n));

	while (cont < idx - 1)
	{
		if (temp1->next == NULL)
			return (NULL);
		if (temp1->next->next == NULL)
			return (add_dnodeint_end(h, n));
		cont++;
		temp1 = temp1->next;
	}
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	new->n = n;
	new->next = temp1->next;
	new->prev = temp1;
	temp1->next->prev = new;
	temp1->next = new;

	return (new);
}
