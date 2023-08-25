#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_node - add new node to the beginning of a list_t list
 * @head: pointer to the head of list_t list
 * @str: strings
 * Return: the address of the new elements, or NULL if it fail
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node;
		node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);
	node->str = strdup(str);
	if (node->str == NULL)
	{
		free(node);
		return (NULL);
	}
	node->next = *head;
	*head = node;
	return (node);
}
