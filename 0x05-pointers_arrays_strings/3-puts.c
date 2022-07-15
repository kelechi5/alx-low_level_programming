#include "main.h"

/**
 * _puts - fuction that put
 *
 * @str: a parameter to _puts function
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
