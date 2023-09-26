#include "lists.h"
#include <stdlib.h>
/**
 * *add_nodeint - adds a new node at the start of a listint_t list.
 * @head:pointer to the adress of the head of the listint_t list
 * @n: an integer for the new node
 * Return: Adress of the new element otherwise NULL,if it fails.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
