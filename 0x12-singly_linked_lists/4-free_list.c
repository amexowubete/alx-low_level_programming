#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees list_t list
 * @head: a pointer to the list_t
 */
void free_list(list_t *head)
{
	list_t *t;
		while (head != NULL)
	{
		t = head;
		head = head->next;
		free(t->str);
		free(t);
	}
}
