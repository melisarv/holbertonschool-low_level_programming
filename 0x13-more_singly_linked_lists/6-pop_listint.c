#include "lists.h"

/**
 * pop_listint - function that delete the head node of a list
 * @head: the list
 * Return: integer
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;

	if (*head == NULL)
		return (0);

	temp = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = temp;

	return (n);
}
