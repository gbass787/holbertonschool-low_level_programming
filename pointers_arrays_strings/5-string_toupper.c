#include "main.h"
/**
 * *string_toupper - changes all lowercase letters of
 * a string to uppercase
 *
 * @x: string
 *
 * Return: void
 */

char *string_toupper(char *x)
{
	int y;

	for (y = 0; x[y] != '\0'; y++)
	{
		if (x[y] >= 'x' && x[y] <= 'z')
			x[y] = x[y] - 32;
	}
	return (x);
}
