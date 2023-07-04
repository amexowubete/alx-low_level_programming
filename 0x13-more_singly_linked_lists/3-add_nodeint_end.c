#include "lists.h"

/**
 * add_nodeint_end - add a new node at the end of listint_t list
 * @head: double pointer to the listint_t
 * @n: the value of new node
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode;
	listint_t *tempo;
		newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;
	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}
	tempo = *head;
	while (tempo->next != NULL)
		tempo = tempo->next;
	tempo->next = newnode;
	return (newnode);
}
