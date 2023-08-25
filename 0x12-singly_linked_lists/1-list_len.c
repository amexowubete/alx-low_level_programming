#include "lists.h"
/**
 * list_len - the number of elemnets in list_t list
 * @h: pointer to the head of list
 * Return: the number of elements in list_t list
 */
size_t list_len(const list_t *h)
{
	size_t len = 0;
		while (h)
	{
		h = h->next;
		len++;
	}
	return (len);
}

