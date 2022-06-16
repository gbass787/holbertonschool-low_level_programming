#include "main.h"
/**
 * *_strncat - concatenates two strings. similar to _strcat function,
 * except that it will use at most n bytes from src; and
 * src does not need to be null-terminated if it contains n or more bytes
 *
 * @dest: destination
 * @src: source
 * @n: bytes
 *
 * Return: void
 */

char *_strncat(char *dest, char *src, int n)
{
	int x, y;

	for (x = 0; dest[x] != '\0'; x++)
		;
	for (y = 0; y < n && src[y] != '\0'; y++)
	{
		dest[y + x] = src[y];
	}
	return (dest);
}
