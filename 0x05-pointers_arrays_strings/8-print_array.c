#include "main.h"
#include <stdio.h>

/**
 * print_array - print n elements of array int
 * @a: Array of ints
 * @n: no of elements of array printed
 *
 * Return: 0
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
