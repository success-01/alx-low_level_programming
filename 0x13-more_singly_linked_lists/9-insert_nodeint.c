#include <stdlib.h>
#include "lists.h"
/**
 * *insert_nodeint_at_index - insert a new node at the given position
 * @head:pointer to the entry node in the list
 * @idx:index where new node is added
 * @n:data to add in new node
 * Return: NULL, pointer to new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int m;
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new || *head)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (m = 0; temp && m < idx; m++)
	{
		if (m == idx - 1)
		{
			new->next = temp->next;
			temp->next = new;
			return (new);
		}
		else
			temp = temp->next;
	}

	return (NULL);
}
