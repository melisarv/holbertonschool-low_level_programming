#include "lists.h"

/**
 * pop_dlistint - function that delete the head node of a list
 * @head: the list
 * Return: integer 1 if it succeeded, -1 if it failed
 */
int pop_dlistint(dlistint_t **head)
{
	dlistint_t *temp = NULL;

	if (*head == NULL)
		return (-1);

	temp = (*head)->next;

	free(*head);
	*head = temp;
	return (1);
}

/**
 * delete_dnodeint_at_index - deletes the node at index of a linked list
 * @head: pointer to the list
 * @index: index of the node
 * Return: integer 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *current = *head;
	dlistint_t *previous = NULL;

	if (*head == NULL)
		return (-1);
	if (index == 0)
		return (pop_dlistint(head));

	while (i < index - 1)
	{
		if (current->next == NULL)
			return (-1);
		i++;
		current = current->next;
	}
	previous = current->next;

	current->next->next->prev = current;
	current->next = previous->next;

	free(previous);
	return (1);
}
