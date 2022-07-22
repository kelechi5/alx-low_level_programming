#include "main.h"
#include <stdio.h>

/**
 * main - a program that prints all arguments it receives
 * @argc: argument counter
 * @argv: argument value
 * Return: always 0
 */

int main(int argc, char **argv)
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}
