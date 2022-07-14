#include "lists.h"
/**
 * list_len - checks the number of elements in a linked list
 * @h: pointer to the head of the linked list
 * Return: ineteger
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;
	list_t *current = h;

	while (current != NULL)
	{
		count++;
		current = current->next;
	}
	return (count);
}
