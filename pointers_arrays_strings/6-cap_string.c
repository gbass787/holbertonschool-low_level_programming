#include "main.h"
/**
 * *cap_string - capitalizesall words of a string
 *
 * @a: string
 *
 * Return: void
 */

char *cap_string(char *a)
{
	int x;

	for (x = 0; a[x] != '\0'; x++)
	{
		if (a[x] >= 'a' && a[x] <= 'z')
		{
			if ((a[x - 1] >= 0 && a[x - 1] <= 47) || (a[x - 1] >= 58 && a[x - 1] <= 63))
			{
				if (!(a[x - 1] == 45))
				{
					a[x] = a[x] - 32;
				}
			}
			else if (a[x - 1] == 123 || a[x - 1] == 125)
			{
				a[x] = a[x] - 32;
			}
		}
	}
	return (a);
}
