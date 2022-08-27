#include "search_algos.h"
/**
 * linear_search - searches for a value in an array of integers
 * @array: array to parse
 * @size: size of array
 * @value: value to search for
 * Return: -1 if array is NULL, value not present,
 * or the index position
 */
int linear_search(int *array, size_t size, int value)
{
	size_t idx = 0;

	if (array == NULL)
		return (-1);


	for (idx = 0; idx < size; idx++)
	{
		printf("Value checked array[%lu] = [%i]\n", idx, array[idx]);

		if (value == array[idx])
			return (idx);
	}

	return (-1);
}
