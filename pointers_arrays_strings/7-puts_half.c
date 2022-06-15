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
	int x, y, z;

	for (x = 0; str[x] != '\0'; x++)
		;
	if ((x % 2) == 0)
	{
		for (y = x / 2; str[y] != '\0'; y++)
			_putchar(str[y]);
	}
	else
	{
		for (z = (x - 1) / 2; str[z] != '\0'; z++)
			_putchar(str[z + 1]);
	}
	_putchar('\n');
}
