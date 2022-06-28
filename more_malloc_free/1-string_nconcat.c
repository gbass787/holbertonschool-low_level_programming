#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 *
 * @s1: string 1
 * @s2: string 2
 * @n: max number of bytes
 *
 * Return: void
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int count, count2, x, y, sum = 0;
	char *s;

	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";

	for (count = 0; s1[count] != '\0'; count++)
		;
	for (count2 = 0; s2[count2] != '\0'; count2++)
		;

	if (n >= count2)
		sum = count + count2;
	else
		sum = count + n;
	s = malloc(sizeof(char) * (sum + 1));

	if (s == 0)
		return (NULL);

	for (x = 0; s1[x] != '\0'; x++)
	{
		s[x] = s1[x];
	}
	if (n < count2)
		for (y = 0; y < n; y++)
		{
			s[x] = s2[y];
			x++;
		}
	else
		for (y = 0; s2[y] != '\0'; y++)
		{
			s[x] = s2[y];
			x++;
		}
	s[x] = '\0';
	return (s);
}
