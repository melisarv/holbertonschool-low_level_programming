#include "search_algos.h"

/**
 * _print - prints the current index in the array
 * @array: Pointer to the first element of the array
 * @lower: Initial lower bound index
 * @upper: Upper bound index
 */
void _print(int *array, size_t lower, size_t upper)
{
	size_t i = 0;

	printf("Searching in array: ");
	for (i = lower; i < upper; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[upper]);
}

/**
* binary_search - Binary search algorithm
* @array: pointer to the first element of the array
* @size: size of the array
* @value: value to search
* Return: -1 if not found or array is NULL OR index if found
*/

int binary_search(int *array, size_t size, int value)
{
	size_t low = 0, upp = size - 1, mid = 0;

	if (array)
	{
		while (low < upp)
		{
			mid = (upp + low) / 2;

			_print(array, low, upp);
			if (array[mid] < value)
				low = mid + 1;
			else if (array[mid] > value)
				upp = mid - 1;
			else
				return (mid);
		}
	}
	return (-1);
}
