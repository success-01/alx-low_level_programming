#include <stdlib.h>
#include "lists.h"
/**
 * free_listint2 - func that fees a listint_t list
 * @head: pointer to the address of the entry point of the list
 * Description: sets the head to NULL
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}

	head = NULL;
}
