#include <stdlib.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - func that deletes the node in a linked list
 * @head:pointer to the entry element in the list
 * @index: index of the node to delete
 * Return: 1 if successful otherwise-1 if fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *current = NULL;
	unsigned int m = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while  (m < index - 1)
	{
		if (!temp || !(temp->next))
			return (-1);
		temp = temp->next;
		m++;
	}

	current = temp->next;
	temp->next = current->next;
	free(current);

	return (1);
}
