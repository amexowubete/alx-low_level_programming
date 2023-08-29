#include "lists.h"

/**
 * add_nodeint - adds new node at the beginning of listint_t list
 * @head: pointer to pointer to the head of listint_t
 * @n: data to be stored in the new node
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;
		new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = new;
	new->next = *head;
	*head = new;
	return (new);
}
