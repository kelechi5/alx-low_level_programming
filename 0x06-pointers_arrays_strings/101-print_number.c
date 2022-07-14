#include "main.h"

/**
 * print_number - function that prints an integer.
 * @n: given number.
 */

void print_number(int n)
{
	int add = 0;

	if (n == -2147483648)
	{
		n = n + 1;
		add = 1;
	}

	else if (n < 0)
	{
		_putchar ('-');
		n = -n;
	}

	else if (n / 10)
		print_number(n / 10);

	else if (add == 1)
		_putchar ('8');
	else
		_putchar (n % 10 + '0');
}
