#include "lists.h"
/**
 * delete_nodeint_at_index - delete the node of  a list at index
 * @index:index of node to be freed
 * @head:pointer to the beginning of list
 * Return: 1 if Successful, -1 if unsuccessful
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int m;
	listint_t *tmp;
	listint_t *node;

	tmp = *head;
	if (head == NULL || *head == NULL)
		return (-1);
	for (m = 0; m < index - 1 && tmp != NULL && index != 0; m++)
		tmp = tmp->next;
	if (tmp == NULL)
		return (-1);
	if (index == 0)
	{
		node = tmp->next;
		free(tmp);
		*head = node;
	}
	else
	{
		if (tmp->next == NULL)
			node = tmp->next;
		else
			node = tmp->next->next;
		free(tmp->next);
		tmp->next = node;
	}
	return (1);
}
