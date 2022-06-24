#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers
 *
 * @argc: number of arguments
 * @argv: contains command line arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int x1, x2, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	x1 = atoi(argv[1]);
	x2 = atoi(argv[2]);
	result = x1 * x2;
	printf("%d\n", result);
	return (0);
}
