#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers
 *
 * @a: array
 * @n: content
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int x = 0, y, z = n - 1;

	while (x < z)
	{
		y = a[x];
		a[x] = a[z];
		a[z] = y;
		x++;
		z--;
	}
}
