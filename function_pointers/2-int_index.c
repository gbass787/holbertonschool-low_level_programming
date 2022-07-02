#include "function_pointers.h"
/**
 * int_index - searches for an integer
 *
 * @array: array
 * @size: size
 * @cmp: pointer to function that compares values
 *
 * Return: void
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) != 0)
			return (index);
	}

	return (-1);
}
