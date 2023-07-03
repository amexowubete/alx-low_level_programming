#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - add a new node at the end of list_t list
 * @head: a double pointer to the list_t
 * @str: string
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode;
	list_t *t;
	unsigned int len = 0;
		while (str[len])
		len++;
	newnode = malloc(sizeof(list_t));
	if (!newnode)
		return (NULL);
	newnode->str = strdup(str);
	newnode->len = len;
	newnode->next = NULL;
	if (*head == NULL)
		*head = newnode;
	else
	{
		t = *head;
		while (t->next != NULL)
			t = t->next;
		t->next = newnode;
	}
	return (newnode);
}
