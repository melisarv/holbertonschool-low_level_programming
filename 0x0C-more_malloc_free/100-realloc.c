#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block
 * @ptr: the pointer to the memory
 * @old_size: the size of the allocated space for ptr, in bytes
 * @new_size: the new size of the new memory block, in bytes
 * Return: the pointer to the new memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	char *aux_ptr, *copy_ptr;
	int i, lim;

	lim = new_size;

	if (new_size > old_size)
	{
		lim = old_size;
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
		{
			free(new_ptr);
			return (NULL);
		}
	}
	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
		{
			free(new_ptr);
			return (NULL);
		}
		return (new_ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	aux_ptr = (char *)new_ptr;
	copy_ptr = (char *)ptr;

	for (i = 0; i < lim; i++)
		aux_ptr[i] = copy_ptr[i];

	return (new_ptr);
}
