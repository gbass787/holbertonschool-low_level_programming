#include "main.h"
/**
 * *_memset - fills memeory with a constant byte
 *
 * @s: pointer
 * @b: character
 * @n: unsigned int
 *
 * Return: void
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int count;

	for (count = 0; count < n; count++)
		s[count] = b;
	return (s);
}
