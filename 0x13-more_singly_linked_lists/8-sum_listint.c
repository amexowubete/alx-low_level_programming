#include "lists.h"
/**
 * sum_listint - calculates the sum of all data in listint_t linked list
 * @head: pointer to head of first node
 * Return: the result of sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *now = head;
		while (now)
	{
		sum += now->n;
		now = now->next;
	}
	return (sum);
}
