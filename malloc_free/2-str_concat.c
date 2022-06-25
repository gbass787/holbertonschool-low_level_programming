#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 *
 * @s1: string 1
 * @s2: string 2
 *
 * Return: void
 */

char *str_concat(char *s1, char *s2)
{
	int x, y, size;
	char *c;

	for (x = 0; s1[x] != '\0'; x++)
		;
	for (y = 0; s2[y] != '\0'; y++)
		;
	size = x + y + 1;
	c = malloc(sizeof(char) * size);
	if (c == 0)
		return (NULL);
	for (x = 0; s1[x] != '\0'; x++)
	{
		*(c + x) = *(s1 + x);
	}
	for (y = 0; s2[y] != '\0'; y++)
	{
		*(c + x + y) = *(s2 + y);
	}
	return (c);
}
