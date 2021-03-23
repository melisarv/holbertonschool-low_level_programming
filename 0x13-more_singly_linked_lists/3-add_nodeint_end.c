#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a list
 * @head: pointer to the list_t
 * @n: integer
 * Return: pointer of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
		listint_t *newnode, *lastnode;

		newnode = malloc(sizeof(listint_t));

		if (newnode == NULL)
		{
			free(newnode);
			return (NULL);
		}

		lastnode = *head;
		newnode->n = n;
		newnode->next = NULL;

		if (*head == NULL)
		{
			*head = newnode;
			return (newnode);
		}
		while (lastnode->next != NULL)
			lastnode = lastnode->next;

		lastnode->next = newnode;

		return (newnode);
}
