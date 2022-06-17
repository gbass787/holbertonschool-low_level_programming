#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 *
 * @s: segment
 * @accept: origin of bytes
 *
 * Return: void
 */

unsigned int _strspn(char *s, char *accept)
{
	int x;
	unsigned int y = 0;

	while (*s)
	{
		for (x = 0; accept[x]; x++)
		{
			if (*s == accept[x])
			{
				y++;
				break;
			}
			else if (accept[x + 1] == '\0')
				return (y);
		}
		s++;
	}
	return (y);
}
