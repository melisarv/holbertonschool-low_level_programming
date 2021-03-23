#include "lists.h"

/**
 * free_listint - function that free a list
 * @head: the list
 * Return: void
 */
void free_listint(listint_t *head)
{
	if (head != NULL)
	{
		free_listint(head->next);
		free(head);
	}
}
