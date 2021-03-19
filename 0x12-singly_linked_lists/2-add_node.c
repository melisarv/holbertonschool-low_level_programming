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
 * add_node - adds a new node at the beginnig of a list
 * @head: pointer to the list_t
 * @str: string
 * Return: pointer of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
		list_t *new;

		new = malloc(sizeof(list_t));
		if (new == NULL)
		{
			free(new);
			return (NULL);
		}

		if (str != NULL)
		{
			new->str = strdup(str);
			new->len = _strlen(str);
		}
		else
		{
			new->str = NULL;
			new->len = 0;
		}
		new->next = *head;
		*head = new;

		return (new);
}
