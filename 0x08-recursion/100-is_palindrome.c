#include "main.h"



/**
 * _strlen_recursion - size
 * @s: pointer to string params
 * Return: recursion
 */


int _strlen_recursion(char *s)

{
	if (!*s)
	{
		return (0);
	}
	return (_strlen_recursion(s + 1) + 1);
}

/**
 * p1 - palindrome
 * @s: pointer to string
 * @l: position
 * Return: boolen
 */

int p1(char *s, int l)
{
	if (l <= 1)
	{
		return (1);
	}
	if (*s == *(s + l - 1))
	{
		return (p1(s + 1, l - 2));
	}
	return (0);
}


/**
 * is_palindrome - palindrome
 * @s: pointer to string
 * Return: recursion
 */

int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);
	if (len <= 1)
		return (p1(s, len));
}
