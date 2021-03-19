#include "lists.h"

/**
 * _strlen - calculate the length of a string
 * @s: the string
 * Return: size of the string
 */
int _strlen(const char *s)
{
		int cont = 0;

		while (s[cont])
			cont++;

		return (cont);
}

/**
 * add_node_end - adds a new node at the end of a list
 * @head: pointer to the list_t
 * @str: string
 * Return: pointer of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
		list_t *newnode, *lastnode;

		newnode = malloc(sizeof(list_t));

		if (newnode == NULL)
		{
			free(newnode);
			return (NULL);
		}

		lastnode = *head;
		if (str != NULL)
		{
			newnode->str = strdup(str);
			newnode->len = _strlen(str);
		}
		else
		{
			newnode->str = NULL;
			newnode->len = 0;
		}
		newnode->next = NULL;

		if (*head == NULL)
		{
			*head = newnode;
			return (newnode);
		}
		while (lastnode->next != NULL)
			lastnode = lastnode->next;

		lastnode->next = newnode;

		return (newnode);
}
