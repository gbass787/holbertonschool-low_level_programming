#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 *
 * @x: number that last digit is being printed
 *
 * Return: value of the last digit
 */

int print_last_digit(int x)
{
	x = x % 10;

	if (x < 0)
		x = -x;
	_putchar(x + '0');

	return (x);
}
