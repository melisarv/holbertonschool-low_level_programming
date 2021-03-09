#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - returns the length of the string
 * @s: the string
 * Return: size of the string
 */

int _strlen(char *s)
{
	int cont = 0;

	while (s[cont] != '\0')
		cont++;

	return (cont);
}

/**
 * new_dog - create a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: owner of the dog
 * Return: pointer to the allocated
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int size1, size2, i;
	dog_t *nw_dog;

	if (name == NULL || owner == NULL)
		return (NULL);

	nw_dog = malloc(sizeof(dog_t));

	if (nw_dog == NULL)
	{
		free(nw_dog);
		return (NULL);
	}
	size1 = _strlen(name);
	nw_dog->name = malloc(sizeof(char) * (size1 + 1));

	if (nw_dog->name == NULL)
	{
		free(nw_dog);
		return (NULL);
	}
	size2 = _strlen(owner);
	nw_dog->owner = malloc(sizeof(char) * (size2 + 1));

	if (nw_dog->owner == NULL)
	{
		free(nw_dog->name);
		free(nw_dog);
		return (NULL);
	}
	nw_dog->age = age;

	for (i = 0; i <= size1; i++)
		nw_dog->name[i] = name[i];
	for (i = 0; i <= size2; i++)
		nw_dog->owner[i] = owner[i];

	return (nw_dog);
}
