#include "lists.h"

/**
 * print_listint_safe - function to print all integer elements
 * @head: pointer to integer list
 *
 * Return: number of nodes
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t nodes = 0;
	long int diff;

	while (head)
	{
		diff = head - head->next;
		nodes++;
		printf("[%p] %d\n", (void *)head, head->n);
		if (diff > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}
	return (nodes);
}
