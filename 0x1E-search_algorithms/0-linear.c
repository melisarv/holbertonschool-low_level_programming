#include "search_algos.h"
/**
* linear_search - linear search algorithm
* @array: set of integers in an array
* @size: size of the array
* @value: value to search
* Return: -1 if not found or array is NULL OR index if found
*/

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array)
	{
		while (i < size)
		{
			printf("Value checked array[%li] = [%d]\n", i, array[i]);
			if (array[i] == value)
				return (i);
			i++;
		}
	}
	return (-1);
}
