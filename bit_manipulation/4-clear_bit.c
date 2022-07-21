#include "main.h"
/**
 * clear_bit - set value of a bit to 0
 *
 * @n: number
 * @index: number
 *
 * Return: 1, -1 otherwise
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int set;

	if (index > sizeof(unsigned long int) * 8)
		return (-1);

	set = ~(1 << index);
	*n = *n & set;
	return (1);
}
