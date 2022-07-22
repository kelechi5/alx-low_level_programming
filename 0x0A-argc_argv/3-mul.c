#include <stdlib.h>
#include <stdio.h>

/**
 * main - a program that multiplies two numbers
 * @argc: argument counter
 * @argv: arguement values
 * return: always 0
 */

int main(int argc, char **argv)
{
	int i, j, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		i = atoi(argv[1]);
		j = atoi(argv[2]);
		result = i * j;
		printf("%d\n", result);
		return (0);
	}
}
