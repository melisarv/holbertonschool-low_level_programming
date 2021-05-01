#include "lists.h"
/**
 * free_dlistint - function that free a list
 * @head: the list
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	if (head != NULL)
	{
		free_dlistint(head->next);
		free(head);
	}
}
