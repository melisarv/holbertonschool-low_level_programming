#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a linked list
 * @head: pointer to the list
 * @index: index of the node
 * Return: pointer to the node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *node = head;

	if (head == NULL)
		return (NULL);

	while (node)
	{
		if (i == index)
			return (node);
		i++;
		node = node->next;
	}
	return (NULL);
}
