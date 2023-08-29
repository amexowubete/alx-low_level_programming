#include "lists.h"
/**
 * pop_listint - deletes the head node of listint_t linked list
 * @head: pointer to pointer of the head node
 * Return: the head node data(n), or 0 if linked list is empty
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *tempo;
		if (*head == NULL)
		return (0);
	tempo = *head;
	n = tempo->n;
	*head = (*head)->next;
	free(tempo);
	return (n);
}
