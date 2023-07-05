#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: double pointer to the head of the list
 * Return: head node's data (n)
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *tempo;
		if (*head == NULl)
		return (0);
	tempo = *head;
	data = tempo->n;
	*head = (*head)->next;
	free(tempo);
	return (data);
}
