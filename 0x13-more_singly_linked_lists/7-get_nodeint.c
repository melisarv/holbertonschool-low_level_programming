#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: pointer to the listint_t
 * @index: index of the node
 * Return: pointer to the node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
		unsigned int i = 0;

		listint_t *firstnode = head;

		if (head == NULL)
		{
			return (NULL);
		}

		while (firstnode)
		{
			if (i == index)
			{
				return (firstnode);
			}
			i++;
			firstnode = firstnode->next;
		}
		return (NULL);
}
