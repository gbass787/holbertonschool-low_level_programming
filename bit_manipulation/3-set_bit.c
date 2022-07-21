#include "main.h"
/**
 * set_bit - set value to 1 on index
 *
 * @n: number
 * @index: index of number
 *
 * Return: 1 if it works, -1 if otherwise
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int set;

	if (index > sizeof(unsigned long int) * 8)
		return (-1);

	set = 1 << index;
	*n = *n | set;
	return (1);
}
