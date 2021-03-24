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
		listint_t *getnode = NULL;

		while (i < index - 1)
		{
			if (firstnode->next == NULL)
			{
				return (NULL);
			}
			i++;
			firstnode = firstnode->next;
		}
		getnode = firstnode->next;
		return (getnode);
}
