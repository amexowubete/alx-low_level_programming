#include <stdio.h>
#include "lists.h"

/**
 * listint_len - print all the elemnets of listint list
 * @h: pointer to the head of the list
 * Return: the number of the nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t number = 0;
		while (h)
	{
		h = h->next;
		number++;
	}
	return (number);
}
