#include "main.h"
#include <stdio.h>

/**
 * main - a program that prints the no of arguments you passed into it
 * @argc: an argument counter
 * @argv: an argument values
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	if (argv[0])
		printf("%d\n", argc -1);
	return (0);
}
