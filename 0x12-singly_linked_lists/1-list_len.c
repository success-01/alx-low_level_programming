#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * list_len -  produces the number of elements in a linked list_t list
 * @h: the linked lis
 *
 * Return: number of elements to a list
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}

	return (count);
}
