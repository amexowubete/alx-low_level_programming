#include "lists.h"
#include "stdio.h"

/**
 * print_list - prints all element of lists_t list
 * @h: pointer to the head of the list
 * Return: the number of nodes
 */
list_t print_list(const list_t *h)
{
	size_t nodes = 0;
		while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n, h->len, h->str);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
