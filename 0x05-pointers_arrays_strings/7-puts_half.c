#include "main.h"
#include <string.h>

/**
 * puts_half - put half
 * @str: string parameter
 */

void puts_half(char *str)
{
	int j, k, i;

	j = strlen(str);
	if (j % 2 == 1)
		k = j / 2 + 1;
	else
		y = x / 2;
	for (i = y; i < x; i++)
		_putchar(str[i]);
	_putchar('\n');
}
