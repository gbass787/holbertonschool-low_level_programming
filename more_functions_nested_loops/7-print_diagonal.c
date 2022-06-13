#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal
 *
 * @n: number of times the character '\' should be printed
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int x, y;

	for (y = 1; y <= n; y++)
	{
		for (x = 1; x < y; x++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
	if (n < 1)
		_putchar('\n');
}
