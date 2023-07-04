#include "lists.h"

/**
 * free_listint - frees listint_t list
 * @head: pointer to the head of the list
 */
void free_listint(listint_t *head)
{
	listint_t *tempo;
		while (head != NULL)
	{
		tempo = head;
		head = head->next;
		free(tempo);
	}
}
