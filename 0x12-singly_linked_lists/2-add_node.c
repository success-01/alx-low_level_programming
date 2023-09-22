#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * *add_node - add brand new node to start of the list
 * @head:first linked list.
 * @str: string to add to node
 *
 * Return:address of new list or NULL if unsuccessful
 */
list_t *add_node(list_t **head, const char *str)
{
	int length = 0;
	list_t *temp;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);
	while (str[length])
		length++;

	temp->len = length;
	temp->str = strdup(str);
	temp->next = *head;
	*head = temp;
	return (temp);
}
