#include "main.h"
/**
 * puts_half - prints half of a string, followed by a new line
 *
 * @str: string
 *
 * Return: void
 */

void puts_half(char *str)
{
	int x = 0;
	char *start = str;

	while (*str)
	{
		x++;
		str++;
	}
	x += 1;
	start += x / 2;
	while (*start)
	{
		_putchar(*(start));
		start++;
	}
	_putchar('\n');
}
