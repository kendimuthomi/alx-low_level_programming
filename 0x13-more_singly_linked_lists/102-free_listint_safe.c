#include "lists.h"
/**
 * listint_count - counts the number of unique nodes
 * in a linked list
 * @head: head to the list
 * Return: the number of unique nodes in the list
 */
size_t listint_count(const listint_t *head)
{
	const listint_t *node1, *node2;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);
	node1 = head->next;
	node2 = (head->next)->next;

	while (node2)
	{
		if (node1 == node2)
		{
			node1 = head;
			while (node1 != node2)
			{
				nodes++;
				node1 = node1->next;
				node2 = node2->next;
			}
			node1 = node1->next;
			while (node1 != node2)
			{
				nodes++;
				node1 = node1->next;
			}
			return (nodes);
		}
		node1 = node1->next;
		node2 = (node2->next)->next;
	}
	return (0);
}
/**
 * free_listint_safe - frees a listint_t list
 * @h: list head
 * Return: the size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *temp_node;
	size_t nodes, i;

	nodes = listint_count(*h);

	if (nodes == 0)
	{
		for (; h != NULL && *h != NULL; nodes++)
		{
			temp_node = (*h)->next;
			free(*h);
			*h = temp_node;
		}
	}
	else
	{
		for (i = 0; i < nodes; i++)
		{
			temp_node = (*h)->next;
			free(*h);
			*h = temp_node;
		}
		*h = NULL;
	}
	h = NULL;
	return (nodes);
}
