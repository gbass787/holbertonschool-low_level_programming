#include "main.h"
/**
 * rev_string - reverses a string
 *
 * @s: string
 *
 * Return: 0
 */

void rev_string(char *s)
{
	int x, y, a, b;

	x = 0;
	while (s[x] != '\0')
	{
		x++;
	}
	a = 0;
	b = x - 1;

	while (a < b)
	{
		y = s[a];
		s[a] = s[b];
		s[b] = y;
		a++;
		b--;
	}
}
