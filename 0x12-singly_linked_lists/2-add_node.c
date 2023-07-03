#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - add new node athe beginning of lists_t list
 * @head: double pointer to the list_t
 * @str: string
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;
	unsigned int len = 0;
		while (str[len])
		len++;
	newnode = malloc(sizeof(list_t));
	if (!newnode)
		return (NULL);
	newnode->str = strdup(str);
	newnode->len = len;
	newnode->next = *head;
	*head = newnode;
	return (newnode);
}
