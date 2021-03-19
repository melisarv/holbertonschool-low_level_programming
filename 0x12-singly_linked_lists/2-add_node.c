#include "lists.h"

/**
 * _strlen - calculate the length of a string
 * @s: the string
 * Return: size of the string
 */
int _strlen(char *s)
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
		char *newstr;
		list_t *new;

		new = malloc(sizeof(list_t));
		if (new == NULL)
			return (NULL);

		newstr = strdup(str);
		new->str = newstr;
		new->len = _strlen(newstr);
		new->next = *head;
		*head = new;

		return (new);
}
