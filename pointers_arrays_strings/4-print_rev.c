#include "main.h"
/**
 * print_rev - prints a string, in reverse, followed by a new line
 *
 * @s: string
 *
 * Return: 0
 */

void print_rev(char *s)
{
	int x, y = 0;

	for (x = 0; *(s + x) != '\0'; x++)
	{
		y++;
	}
	for (x = y - 1; x >= 0; x--)
	{
		_putchar(*(s + x));
	}
	_putchar('\n');
}
