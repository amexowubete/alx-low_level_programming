#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - a function that frees listint_t list
 * @head: pointer to the head of list
 */
void free_listint(listint_t *head)
{
	listint *tmp;
		while (tmp)
		{
			tmp = head->next;
			free(head);
			head = tmp;
		}
}
