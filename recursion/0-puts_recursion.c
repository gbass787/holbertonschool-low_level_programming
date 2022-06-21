#include "main.h"
/**
 * _puts_recursion - prints a string, followed by a new line
 *
 * @s: string
 *
 * Return: void
 */

void _puts_recursion(char *s)
{
	int x = 0;

	if (s[x] != '\0')
	{
		_putchar(s[x]);
		_puts_recursion(&s[x + 1]);
	}
	else
		_putchar('\n');
}
