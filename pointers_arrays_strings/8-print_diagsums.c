#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers
 *
 * @a: matrix
 * @size: matrix size
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int x, y = 0, z = 0;

	for (x = 0; x < size; x++)
	{
		y = y + a[x];
		a = a + size;
	}

	a = a - size;

	for (x = 0; x < size; x++)
	{
		z = z + a[x];
		a = a - size;
	}

	printf("%d, %d\n", y, z);
}
