#include "lists.h"
/**
 * get_nodeint_at_index - retrieve a node at the index
 * @head:pointer to the first element of the list
 * @index:node to desired posistion to retrieve
 * Return: pointer to thr retrieve node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int m;

	for (m = 0; m < index; m++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
