#include "lists.h"
/**
 * sum_listint - sums up all the data of a linked listint_t and returns it
 * @head: entry node in linked list
 * Return: result of sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
