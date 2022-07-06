#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - returns sum of all its parameters
 *
 * @n: number of parameters that pass
 *
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	unsigned int index, sum = 0;

	va_start(nums, n);

	for (index = 0; index < n; index++)
		sum += va_arg(nums, int);

	va_end(nums);

	return (sum);
}
