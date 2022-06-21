#include "main.h"
/**
 * sqrroot - finds square root of a number
 *
 * @n: number to find square root of
 * @sqr: square roof of n
 *
 * Return: 0
 */

int sqrroot(int n, int sqr)
{
	if (sqr * sqr == n)
		return (sqr);
	if (sqr * sqr > n)
		return (-1);
	else
		return (sqrroot(n, sqr + 1));
}

/**
 * _sqrt_recursion - returns natural square root of a number
 *
 * @n: number
 *
 * Return: 0
 */

int _sqrt_recursion(int n)
{
	return (sqrroot(n, 1));
}
