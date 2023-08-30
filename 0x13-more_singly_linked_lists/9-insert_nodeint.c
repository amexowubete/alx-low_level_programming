#include "lists.h"
/**
 * insert_nodeint_at_index - function that insert a new node at agiven position
 * @head: pointer to the head of first node
 * @n: a data to be inserted in the new node
 * @idx: index of the list
 * Return: the address of the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new = NULL;
	listint_t *prev = NULL;
	listint_t *now = *head;
	unsigned int i = 0;
		new = malloc(sizeof(listint_t);
		if (new == NULL)
		return (NULL);
		if (idx == 0)
		{
			new->next = *head;
			*head = new;
			return (new);
		}
		while (now != NULL && i < idx)
		{
		prev = now;
		now = now->next;
		i++;
		}
		if (i != idx)
		return (NULL);
		new->next = now;
		prev->next = new;
		return (new);
}
