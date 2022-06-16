#include "main.h"
/**
 * *string_toupper - changes all lowercase letters of
 * a string to uppercase
 *
 * @a: string
 *
 * Return: void
 */

char *string_toupper(char *a)
{
	int x;

	for (x = 0; a[x] != '\0'; x++)
	{
		if (a[x] >= 'a' && a[x] <= 'z')
			a[x] = a[x] - 32;
	}
	return (a);
}
