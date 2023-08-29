#include "lists.h"
/**
 * get_nodeint_at_index - a function that returns the nth node of listint_t
 * @head: first node in the linked list
 * @index: index of node
 * Return: the nth node, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *now = head;
	unsigned int i = 0;
		while (now != NULL && i < index)
	{
		now = now->next;
		i++;
	}
	return (now);
}
