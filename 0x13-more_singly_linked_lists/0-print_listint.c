#include <stdio.h>
#include "lists.h"
/**
 * print_listint - prints all components of the listint_t list
 * @h: pointer  to head of the listint_t list
 * Return: number of nodes in the list.
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (nodes);
}
