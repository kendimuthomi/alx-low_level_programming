#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at a given index
 * @head: pointer to the head of the list
 * @index: the given index
 * Return: 1 if successful, -1 if it fails
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int retval;
	listint_t *current = *head;
	listint_t *temp_node = NULL;

	if (current == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}
	for (retval = 0; retval < (index - 1); retval++)
	{
		if (current->next == NULL)
			return (-1);
		current = current->next;
	}
	temp_node = current->next;
	current->next = temp_node->next;
	free(temp_node);
	return (1);
}
