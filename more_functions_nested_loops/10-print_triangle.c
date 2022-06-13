#include "main.h"
/**
 * print_triangle - prints a triangle, followed by a new line
 *
 * @size: triangle size
 *
 * Return: void
 */

void print_triangle(int size)
{
	int x;
	int y;

	for (x = 1; x <= size; x++)
	{
		for (y = 1; y <= size; y++)
		{
			if (y <= size - x)
				_putchar(' ');
			else
				_putchar('#');
		}
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
