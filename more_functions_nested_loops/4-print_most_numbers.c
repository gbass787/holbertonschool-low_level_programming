#include "main.h"
/**
 * print_most_numbers - prints the numbers, from 0 to 9,
 * followed by a new line.
 * DOESNT PRINT 2 AND 4
 *
 * Return: void
 */

void print_most_numbers(void)
{
	int x;

	x = 0;

	{
		for (x = x; x <= 9; x++)
			if ((x != 2) && (x != 4))
			{
				_putchar(x + '0');
			}
	}
	_putchar('\n');
}
