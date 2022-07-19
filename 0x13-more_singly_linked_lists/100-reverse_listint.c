#include "lists.h"
/**
 * reverse_listint - reverses a listint_t linked list
 * @head: pointer to the linked list's head
 * Return: pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *current, *previous;

	if (head == NULL || *head == NULL)
		return (NULL);
	previous = NULL;
	while ((*head)->next != NULL)
	{
		current = (*head)->next;
		(*head)->next = previous;
		previous = *head;
		*head = current;
	}
	(*head)->next = previous;
	return (*head);
}
