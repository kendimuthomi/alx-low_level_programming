#include "list.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_node - adds a new node at the beginning
 * of a linked list_t list
 * @head: pointer to the head of the linked list
 * @str: string
 * Return: address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	int str_len;

	new_node = (list_t *) malloc(sizeof(list_t));

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
	for (str_len = 0; str[str_len] != '\0'; str_len++)
	;
	new_node->len = str_len;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
