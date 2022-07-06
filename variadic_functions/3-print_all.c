#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_all -function that  prints anything
 *
 * @format: list of types of arguments passed to the function
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list ptr;
	char *string;
	unsigned int x = 0;
	unsigned int flag;

	while (format)
	{
		va_start(ptr, format);
		while (format[x])
		{
			flag = 1;
			switch (format[x])
			{
			case 'c':
				printf("%c", va_arg(ptr, int));
				break;
			case 'i':
				printf("%d", va_arg(ptr, int));
				break;
			case 'f':
				printf("%f", va_arg(ptr, double));
				break;
			case 's':
				string = va_arg(ptr, char *);
				if (!string)
					string = "(nil)";
				printf("%s", string);
				break;
			default:
				flag = 0;
				break;
			}
		if (format[x + 1] && flag)
			printf(", ");
		x++;
		}
		va_end(ptr);
		break;
	}
	printf("\n");
}
