#include "lists.h"

/**
 * print_list - prints all elemnts of a list
 * @h: pointer to list
 * Return: if str NULL print (nil)
 */

size_t print_list(const list_t *h)
{
	int count = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u} %s\n", h->len, h->str);

		h = h->next;
		count++;
	}
	return (count);
}
