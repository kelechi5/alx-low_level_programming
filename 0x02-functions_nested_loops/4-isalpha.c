#include "main.h"
/**
 * _isalpha - is either upper or lower
 *
 * @c: is the variable for main.c
 *
 * Return: 1 if an alphabet and 0 if not
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
