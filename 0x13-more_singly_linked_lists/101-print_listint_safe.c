#include "lists.h"
/**
 * listint_len - counts the number of nodes in a
 * looped listint_t linked list
 * @head: head of the linked list
 * Return: number of unique nodes in the list
 */
size_t listint_len(const listint_t *head)
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
 * print_listint_safe - prints a listint_t linked list
 * @head: the linked list head
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, i = 0;

	nodes = listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (i = 0; i < nodes; i++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (nodes);
}
