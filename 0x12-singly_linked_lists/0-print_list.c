#include "lists.h"
#include <stdio.h>
/**
 * print_list - prints all the elements of a list_t list
 * @h: head of the linked list
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t nodes = 0;
	list_t *current = h;

	while (current)
	{
		if (current == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", current->len, current->str);
		nodes++;
		current = current->next;
	}
	return (nodes);
}
