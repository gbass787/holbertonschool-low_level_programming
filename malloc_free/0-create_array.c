#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char
 *
 * @c: char
 * @size: size
 *
 * Return: void
 */

char *create_array(unsigned int size, char c)
{
	unsigned int x;
	char *y;

	if (size <= 0)
		return (NULL);
	y = malloc(size * sizeof(c));
	if (y == NULL)
		return (NULL);
	for (x = 0; x < size; x++)
		y[x] = c;
	return (y);
}
