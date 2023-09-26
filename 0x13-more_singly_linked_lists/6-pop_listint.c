#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - deletes head node of linked list
 * @head: pointer to first element of a list that is linked
 * Return:0 if linked list is empty otherwise the data inside
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int numb;

	if (!head || !*head)
		return (0);

	numb = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (numb);
}
