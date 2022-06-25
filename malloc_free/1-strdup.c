#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 *
 * @str: string
 *
 * Return: void
 */

char *_strdup(char *str)
{
	int x, length;
	char *dup;

	if (str == NULL)
		return (NULL);
	for (length = 0; str[length] != '\0'; length++)
		;
	dup = malloc(sizeof(char) * length + 1);
	if (dup == NULL)
		return (NULL);
	for (x = 0; x < length; x++)
		dup[x] = str[x];
	return (dup);
}
