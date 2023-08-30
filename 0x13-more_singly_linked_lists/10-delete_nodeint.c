#include "lists.h"
/**
 * delete_nodeint_at_index - a function that deletes the node in a linked list
 * @head: pointer to pointer of the head of listint_t
 * @index:index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tempo = *head;
	listint_t *now = NULL;
	unsigned int i = 0;
		if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(tempo);
		return (1);
	}
	while (i < index - 1)
	{
		if (!tempo || !(tempo->next))
			return (-1);
		tempo = tempo->next;
		i++;
	}
	now = tempo->next;
	tempo->next = now->next;
	free(now);
	return (1);
}
