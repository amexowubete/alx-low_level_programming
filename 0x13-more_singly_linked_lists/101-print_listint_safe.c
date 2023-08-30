#include "lists.h"
#include <stdio.h>
/**
 * print_listint_safe - a function that prints a linked list
 * @head: list of types that to be printed
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t number = 0;
	long int diff;
		while (head)
	{
		diff = head - head->next;
		number++;
		printf("[%p] %d\n", (void *)head, head->n);
		if (diff > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}
	return (number);
}
