#include "search_algos.h"
#include <math.h>

/**
* jump_search - Function that searches for a value in a sorted array of
* integers using the Jump search algorithm
* @array: A pointer  to the first element of the array to search in
* @size: The number of elements in @array
* @value: The value to search for
*
* Return: The first index where value is located, otherwise returns -1
*/
int jump_search(int *array, size_t size, int value)
{
	size_t step = sqrt(size);
	size_t prev = 0;
	size_t index = 0;

	if (array == NULL)
		return (-1);

	while (prev < size && array[prev] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
		index = prev;
		prev += step;
		if (index >= size)
			return (-1);
	}

	printf("Value found between indexes [%lu] and [%lu]\n", index, prev);

	prev = prev < size ? prev : size - 1;
	for (; index <= prev && index < size; index++)
	{
		printf("Value checked array[%lu] = [%d]\n", index, array[index]);
		if (array[index] == value)
		return (index);
	}

	return (-1);
}
