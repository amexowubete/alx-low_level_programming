#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all elements of a list_t list
 * @h: pointer to list_t list to print
 * Return: the number of nodes
 */
size_t print_list(const print_list_t *h)
{
	size_t a = 0;
		while (h)
		{
			if (!h->str)
				printf("[0] (nil)\n");
			else
				printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		a++;
		}
		return (a);
}
