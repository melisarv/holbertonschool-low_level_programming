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

	temp = *head;
	if ((*head)->next != NULL)
		temp->next->prev = NULL;

	*head = temp->next;
	free(temp);
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

	if (head == NULL && *head == NULL)
		return (-1);

	if (index == 0)
		return (pop_dlistint(head));

	while (i < index)
	{
		if (current->next == NULL)
			return (-1);
		i++;
		current = current->next;
	}
	current->prev->next = current->next;
	if (current->next != NULL)
		current->next->prev = current->prev;

	free(current);
	return (1);
}
