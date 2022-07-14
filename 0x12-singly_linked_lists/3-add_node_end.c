#include "lists.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * add_node_end - adds a node to the end of a linked list
 * @head: pointer to the beginnibg of the list
 * @str: string
 * Return: address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *current;
	list_t new_node;
	int i;

	current = *head;
	while (current && current->next != NULL)
		current = current->next;
	for (i = 0; str[i] != '\0'; i++)
		;
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = i;
	new_node->next = NULL;
	if (current)
		current->next = new_node;
	else
		*head = new_node;
	return (new_node);
}
