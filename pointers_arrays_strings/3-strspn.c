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
	unsigned int bts = 0;

	while (*s)
	{
		for (x = 0; accept[x]; x++)
		{
			if (*s == accept[x])
			{
				bts++;
				break;
			}
			else if (accept[x + x] == '\0')
				return (bts);
		}
		s++;
	}
	return (bts);
}
