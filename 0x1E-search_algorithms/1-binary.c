#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array of integers using
 * the Binary search algorithm.
 * @array: A pointer to the first element in the array to search in.
 * @size: The number of element in the array.
 * @value: The value to be searched.
 *
 * Return: The first index where value is located, otherwise return -1.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t first_index = 0;
	size_t last_index = size - 1;
	size_t mid_index;

	if (array == NULL)
		return (-1);

	while (first_index <= last_index)
	{
		print_array(array + first_index, last_index - first_index + 1);

		mid_index = first_index + (last_index - first_index) / 2;

		if (value == array[mid_index])
			return (mid_index);
		else if (value > array[mid_index])
			first_index = mid_index + 1;
		else
			last_index = mid_index - 1;
	}

	return (-1);
}

/**
 * print_array - Prints an array of integers.
 * @array: A pointer to the array to be printed.
 * @size: The number of elements in @array.
 *
 * Return: Nothing.
 */
void print_array(int *array, size_t size)
{
	size_t i;

	printf("Searching in array: ");
	for (i = 0; i < size; i++)
	{
		printf("%d", array[i]);
		if (i < size - 1)
			printf(", ");
	}
	printf("\n");
}
