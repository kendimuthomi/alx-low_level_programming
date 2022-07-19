#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth
 * node of listint_t linked list
 * @head: pointer to the head
 * @index: index of the node starting at 0
 * Return: the ocated node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	for (node = 0; node < index; node++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
