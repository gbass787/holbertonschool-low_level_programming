#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints all natural numbers from n to 98,
 * followed by a new line
 *
 * @n: number which it starts from
 *
 * Return: void
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		for (n = n; n < 98; n++)
			printf("%d, ", n);
	}
	else
		for (n = n; n > 98; n--)
			printf("%d, ", n);
	printf("98\n");
}
