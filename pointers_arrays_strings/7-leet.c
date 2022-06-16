#include "main.h"
/**
 * *leet - encodes a string into 1337
 *
 * @a: string
 *
 * Return: void
 */

char *leet(char *a)
{
	int x = 0, y = 0, n[5] = {4, 3, 0, 7, 1};
	char letters[10] = "AaEeOoTtLl";

	for (; a[x]; x++)
	{
		for (y = 0; (a[x] != letters[y] && y < 10); y++)
			;
		if (a[x] == letters[y])
		{
			y /= 2;
			a[x] = (n[y] + '0');
		}
	}
	return (a);
}
