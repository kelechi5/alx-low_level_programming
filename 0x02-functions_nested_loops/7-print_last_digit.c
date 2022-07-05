#include "main.h"
/**
 * print_last_digit - print last digit of n number
 *
 * @n: int number
 * Return: last digit
 */

int print_last_digit(int n)
{
	int ln;

	if (n >= 0)
	{
		ln = (n % 10);
	}
	else
	{
		ln = (n % 10 * (-1));
	}
	_putchar(ln + '0');

	return (ln);
}
