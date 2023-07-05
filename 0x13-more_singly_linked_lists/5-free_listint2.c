#include "lists.h"

/**
 * free_listint2 - free listint_t and sets the head to NULl
 * @head: head of the elemnent
 */
void free_listint2(listint_t **head)
{
	listint_t *tempo;
		if (head == NULL)
		return;
	while (*head)
	{
		tempo = *(head)->next;
		free(*head);
		*head = tempo;
	}
	*head = NULL;
}
