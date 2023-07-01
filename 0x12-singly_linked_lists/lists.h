#ifndef LISTS_H
#define LISTS_H

/**
 * struct lists_s - singly linked lists
 * @str: string - (maloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct lists_s
{
	char *str;
	unsigned int len;
	struct lists_s *next;
} lists_t;

size_t print_list(const list.t * h);
size_t list_len(const list.t * h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif
