#include <stdio.h>
/**
 * main - prints all the numbers of base 16 in lowercase,
 * followed by a new line
 *
 * Return: 0
 */

int main(void)
{
	char al;

	for (al = '0'; al <= '9'; al++)
	{
		putchar(al);
	}
	for (al = 'a'; al <= 'f'; al++)
	{
		putchar(al);
	}
	putchar('\n');

	return (0);
}
