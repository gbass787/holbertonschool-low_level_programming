#include "main.h"
/**
 * print_square - prints a square, followed by a new line
 *
 * @size: square size
 *
 * Return: void
 */

void print_square(int size)
{
	int x, y;

	for (y = 0; y < size; y++)
	{
		for (x = 0; x < size; x++)
			_putchar('#');
		_putchar('\n');
	}
	if (size < 1)
		_putchar('\n');
}
