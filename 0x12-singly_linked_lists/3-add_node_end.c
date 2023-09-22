#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * *add_node_end - adds a new node to the end of a list
 * @head: head of linked list.
 * @str:string to store in the list
 *
 * Return: the address of the head
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *current_node;
	size_t m;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	for (m = 0; str[m]; m++)
		;

	new_node->len = m;
	new_node->next = NULL;
	current_node = *head;

	if (current_node == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (current_node->next != NULL)
			current_node = current_node->next;
		current_node->next = new_node;
	}

	return (*head);
}
