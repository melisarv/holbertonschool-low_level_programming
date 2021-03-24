#include "lists.h"

/**
 * free_listint2 - function that free a list
 * @head: the list
 * Return: void
 */
void free_listint2(listint_t **head)
{
	if (head == NULL)
		return;

	while (*head != NULL)
	{
		listint_t *temp = (*head)->next;

		free(*head);
		*head = temp;
	}
}
