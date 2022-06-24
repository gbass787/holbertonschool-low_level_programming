#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds two positive numbers
 *
 * @argc: number of arguments
 * @argv: contains command line arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int sum = 0, x, y, z;

	for (x = 1; x < argc; x++)
	{
		for (y = 0; argv[x][y] != '\0'; y++)
		{
			if (argv[x][y] < '0' || argv[x][y] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		z = atoi(argv[x]);
		sum += z;
	}
	printf("%d\n", sum);
	return (0);
}
