#include "main.h"
/**
 * *_strstr - locates a substring
 *
 * @haystack: og string
 * @needle: sub string
 *
 * Return: void
 */

char *_strstr(char *haystack, char *needle)
{
	int x, y, z = 0;

	for (x = 0; haystack[x]; x++)
	{
		if (haystack[x] == needle[0])
		{
			for (y = 0; needle[y]; y++)
			{
				if (haystack[x + y] == needle[y])
					z = 1;
				else
					z = 0;
			}
		}
		if (z == 1)
			return (haystack + x);
	}
	if (*needle == '\0')
		return (haystack);
	else
		return (0);
}
