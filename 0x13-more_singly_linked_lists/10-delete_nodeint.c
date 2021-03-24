#include "lists.h"

/**
 * pop_listint - function that delete the head node of a list
 * @head: the list
 * Return: integer
 */
int pop_listint(listint_t **head)
{
	listint_t *temp = NULL;

	if (*head == NULL)
		return (-1);

	temp = (*head)->next;
	free(*head);
	*head = temp;
	return (1);
}

/**
 * delete_nodeint_at_index - deletes the node at index of a linked list
 * @head: pointer to the listint_t
 * @index: index of the node
 * Return: integer
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *firstnode = *head;
	listint_t *temp = NULL;

	if (index == 0)
		return (pop_listint(head));

	while (i < index - 1)
	{
		if (firstnode->next == NULL)
		{
			return (-1);
		}
		i++;
		firstnode = firstnode->next;
	}

	temp = firstnode->next;
	firstnode->next = temp->next;
	free(temp);
	return (1);
}
