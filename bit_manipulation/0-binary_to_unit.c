#include "main.h"
/**
 * binary_to_uint - converts binary to unsigned int
 *
 * @b: binary number
 *
 * Return: converted number
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int total = 0, bit = 0, exponent = 0;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	for (i = i - 1; i >= 0; i--)
	{
		if (b[i] == '1')
			bit = 1;
		else if (b[i] == '0')
			bit = 0;

		total += bit << exponent;
		exponent++;
	}
	return (total);
}
