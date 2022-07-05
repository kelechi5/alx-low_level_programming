#include "main.h"
/**
 * print_sign - print sign of n number
 * @n: variable of a int
 *
 * Return: 1 to positive, 0 to zero, -1 to negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
