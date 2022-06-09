#include <stdio.h>
/**
 * main - prints the alphabet in lowercase, and then
 * in uppercase, followed by a new line
 *
 * Return: 0
 */
int main(void)
{
	char al;

	for (al = 'a'; al <= 'z'; al++)
	{
		putchar(al);
	}

	for (al = 'A'; al <= 'Z'; al++)
	{
		putchar(al);
	}
	putchar('\n');

	return (0);
}
