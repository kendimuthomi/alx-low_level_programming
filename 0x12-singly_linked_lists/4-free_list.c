#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_list - frees a linked list
 * @head: pointer to the beginning of the list
 */
void free_list(list_t *head)
{
	list_t *current;
	list_t next_node;

	current = head;
	while (current != NULL)
	{
		next_node = current->next;
		free(current->str);
		free(current);
		current = next_node;
	}
}
