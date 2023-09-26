#include <stdlib.h>
#include "lists.h"
/**
 * *add_nodeint_end - function adds new node at the end of a listint_t list.
 * @head:pointer to address of the head of the list
 * @n:integer of the new node
 * Return: Address of new element otherwise NULL ,if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *last;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		*head = new;

	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}
	return (*head);
}
