#include "main.h"
/**
 * _islower - check if a character is lowercase
 * @c: in number from main.c
 * Return: 1 if it is lowercase and 0 if it is not
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
