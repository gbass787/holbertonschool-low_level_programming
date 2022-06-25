#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen - returns str length
 *
 * @s: string
 *
 * Return: void
 */

int _strlen(char *s)
{
	int counter = 0;

	if (!*s)
		return (0);
	while (*s)
	{
		counter++;
		s++;
	}
	return (counter);
}

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
	char *new;
	unsigned int x;
	unsigned int y;
	int total = 0;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	total += _strlen(s1) + _strlen(s2);
	new = malloc((total + sizeof(char)) + 1);
	if (new == NULL)
	{
		return (NULL);
	}
	for (x = 0; s1[x]; x++)
	{
		new[x] = s1[x];
	}
	for (y = 0; s2[y]; y++, x++)
	{
		new[x] = s2[y];
	}
	new[x] = '\0';
	return (new);
}
