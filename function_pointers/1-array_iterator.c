#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - executes a function given as a parameter on
 * each element of an array
 *
 * @action: function pointer
 * @array: array
 * @size: size
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int length;

	if ((array == NULL) || (size == 0) || (action == NULL))
		return;
	for (length = 0; length < size; length++)
		action(array[length]);
}
