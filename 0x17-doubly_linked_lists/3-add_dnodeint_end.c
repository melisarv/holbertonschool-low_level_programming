#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of a list
 * @head: pointer to the list
 * @n: integer
 * Return: pointer of the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *temp;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	new->n = n;
	new->prev = *head;
	new->next = NULL;
	temp = *head;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (temp->next != NULL)
		temp = temp->next;

	temp->next = new;

	return (new);
}
