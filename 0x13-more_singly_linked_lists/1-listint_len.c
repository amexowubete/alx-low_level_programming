#include <stdio.h>
#include "lists.h"

/**
 * print_listint - print all the elemnets of listint list
 * @h: pointer to the head of the list
 * Return: the number of the nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t number = 0;
		while (h)
	{
		h = h->next;
		number++;
	}
	return (number);
}
