#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array of integers using the
 * Linear search algorithm.
 * @array: A pointer to the first element in the array to search in.
 * @size: The number of element in the array.
 * @value: The value to be searched.
 *
 * Return: The first index where value is located, otherwise return -1.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t index;

	if (array == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		printf("Value checked array[%lu] = [%d]\n", index, array[index]);

		if (array[index] == value)
			return (index);
	}

	return (-1);
}
