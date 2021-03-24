#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginnig of a list
 * @head: pointer to the list_t
 * @n: integer
 * Return: pointer of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
		listint_t *new;

		new = malloc(sizeof(listint_t));
		if (new == NULL)
		{
			free(new);
			return (NULL);
		}

		new->n = n;
		new->next = *head;
		*head = new;

		return (new);
}
/**
 * insert_nodeint_at_index - insert a new node at a given position
 * @head: pointer to the listint_t
 * @idx: index of the node be added
 * @n: value of node
 * Return: pointer of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;

	listint_t *firstnode = *head;
	listint_t *newnode;

	if (idx == 0)
		return (add_nodeint(head, n));

	while (i < idx - 1)
	{
		if (firstnode->next == NULL)
		{
			return (NULL);
		}
		i++;
		firstnode = firstnode->next;
	}
	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
	{
		free(newnode);
		return (NULL);
	}
	newnode->n = n;
	newnode->next = firstnode->next;
	firstnode->next = newnode;

	return (newnode);
}
