#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginnig of a list
 * @head: pointer to the list
 * @n: integer
 * Return: pointer of the new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new, *temp;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	new->n = n;
	new->next = *head;
	new->prev = NULL;
	temp = *head;

	if (*head != NULL)
		temp->prev = new;

	*head = new;

	return (new);
}
