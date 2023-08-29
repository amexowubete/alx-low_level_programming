#include "lists.h"
/**
 * free_listint2 - frees a listint_t list
 * @head: pointer to pointer to the head of list
 */
void free_listint2(listint_t **head)
{
	listint_t *tempo;
		if (head == NULL)
		return;
	while (*head != NULL)
	{
		tempo = *head;
		*head = (*head)->next;
		free(tempo);
	}
	head = NULL;
}
