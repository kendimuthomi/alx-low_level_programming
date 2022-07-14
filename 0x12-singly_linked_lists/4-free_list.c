#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_list - frees a linked list
 * @head: pointer to the beginning of the list
 */
void free_list(list_t *head)
{
	list_t *next_node;

	while (head)
	{
		next_node = head->next;
		free(head->str);
		free(head);
		head = next_node;
	}
}
