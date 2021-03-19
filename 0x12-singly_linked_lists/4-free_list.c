#include "lists.h"

/**
 * free_list - function that free a list
 * @head: the list
 * Return: void
 */
void free_list(list_t *head)
{
	if (head != NULL)
	{
		free_list(head->next);
		free(head->str);
		free(head);
	}
}
