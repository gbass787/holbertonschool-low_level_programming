#include "main.h"
/**
 * *_strcpy - copies the string pointed to by src, including
 * the terminating null byte (\0), to the buffer pointed
 * to by dest.
 *
 * @src: source
 * @dest: destination
 *
 * Return: void
 */

char *_strcpy(char *dest, char *src)
{
	int x;

	for (x = 0; x >= '\0'; x++)
	{
		dest[x] = src[x];
		if (src[x] == '\0')
			return (dest);
	}
	return (dest);
}
